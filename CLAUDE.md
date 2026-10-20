# CLAUDE.md

arcdps addon "Boon Table": shows boon / buff uptimes of the squad ingame as a table (plus a history view and charts).
Upstream is `knoxfighter/GW2-ArcDPS-Boon-Table`. This repo is a fork with Traditional Chinese (zh-TW) support.

> This file lives on the `develop` branch only (see "Branches"). It is not meant for `master` / upstream.

## Layout (`ArcDPS Boon Table/`)

| File | What |
|---|---|
| `main.cpp` | arcdps entry points (`get_init_addr`, `mod_init`, imgui / combat callbacks), update check, ImGui settings file `arcdps_table_imgui.ini` |
| `BuffIds.cpp` | list of tracked buffs: skill ids, name key (`BT_Buff*`), stacking type, boon type, icon id |
| `Boon.*`, `Entity*`, `Player*`, `Tracker*`, `History*` | data model: who has which buff and for how long, current and historical |
| `BigTable/`, `AppChart.*` | the table and chart drawing |
| `Settings.*`, `SettingsUI.*`, `SettingsUIGlobal.*` | settings, stored in `addons\arcdps\arcdps_table.ini` (modern-ini) |
| `Lang.h/.cpp` | translation keys (`LangKey`, `BT_*`) and one table per language, loaded into arcdps-extension `Localization` |
| `icons/*.png`, `icons.rc`, `resource.h` | icons are embedded as resources |

Output: `d3d9_arcdps_table.dll`. Libraries (vcpkg): arcdps-extension (Localization, UpdateChecker, widgets),
arcdps-unofficial-extras, imgui, magic-enum, modern-ini. The Zinn-o-Matics registry (`vcpkg-configuration.json`) provides
arcdps-extension, arcdps-unofficial-extras, imgui and modern-ini.

## Build

Windows, MSVC, CMake >= 4.2, vcpkg, x64-windows-static (see `CMakePresets.json`).

```bat
set VCPKG_ROOT=<path to vcpkg>
cmake --preset release-windows
cmake --build --preset release-windows
```

Output: `cmake-build/release-windows/d3d9_arcdps_table.dll`. The first build is slow (vcpkg builds imgui, ...).
A freshly linked dll can fail to load/start with "Access is denied" for a few seconds (antivirus scan), retry.

## Branches

- `master`: identical to upstream `master` at the time of the last sync. Upstream already contains zh-TW
  (`BOONTABLE_TRANSLATION_TCHINESE`), so the fork carries no code of its own. Sync by merging upstream (no rebase, no force
  push on published branches unless asked). After a merge check that `Lang.cpp` has only one table per language.
- `develop`: `master` + `/utf-8` in `CMakeLists.txt` (+ this file). No vcpkg overlay port is needed: the registry's
  arcdps-extension 2.5.0 already has zh-TW, and the addon doesn't use the unofficial-extras key binding translations
  (`UE_TRANSLATIONS_*`), so no fork of arcdps-extension is required (unlike the killproof.me plugin).
- Keep `develop` up to date by merging `master` into it.

## Translations

- Languages: en, de, fr, es, zh-cn, zh-tw. Each table in `Lang.cpp` must contain every `LangKey`: `static_assert`s compare
  the size of every table with `magic_enum::enum_count<LangKey>()`. A key added upstream breaks the build until every
  language, including zh-TW, has it.
- Settings store the language as a code string (`language2`, e.g. `zh-tw`) or `Lang::LikeGame`; `Settings.cpp` calls
  `Localization::ChangeLanguage` when it changes and when the game language changes.
- `Lang.cpp` is UTF-8 **with BOM**, CRLF in the working tree (`core.autocrlf=true`). Keep the BOM and use `u8"..."` literals.
- Chinese names follow the existing wording of the zh-TW table. Don't invent official game names, ask the owner.

## Adding a tracked buff (checklist, based on upstream "add Relic of the Scoundrel")

1. `BuffIds.cpp`: `tracked_buffs.emplace_back(...)` with the skill id(s), a new `BT_Buff*` key, stacking / boon type and icon id.
2. `Lang.h`: new `BT_Buff*` key in the `LangKey` enum.
3. `Lang.cpp`: the key in **all** language tables, including zh-TW.
4. Icon: `icons/<name>.png`, `icons.rc` (`ID_<name> PNG "icons\\<name>.png"`), `resource.h` (`#define ID_<name> <next number>`).

## `/utf-8` is required

The update checker uses a translated string (`ET_UpdateDesc`) as a `std::format` format string. Without `/utf-8` MSVC checks
it against the system code page, and on a double-byte one (cp950, Traditional Chinese) it throws `Invalid encoded character
in format string.` The addon then dies with `0xC0000409` when the update window is drawn in zh-TW (it appears whenever the
addon version is older than the latest upstream release).
`std::vformat` is inline: both the addon and arcdps-extension instantiate it and the linker keeps only one copy. vcpkg builds
every port with `/utf-8` by default (`scripts/toolchains/windows.cmake`), so arcdps-extension already has it; the addon
doesn't, so it must set it itself (`CMakeLists.txt`, `add_compile_options`). Without that the addon's copy is the one that
is kept and the crash happens.

## Version

The dll version comes from the nearest git tag (`git describe --tags --abbrev=0`): the text is split on `.` and every
non-digit is removed, so a tag like `v3.2.1-rc1-tc` would turn into 3.2.11. Use suffixes without digits (`v3.2.1-tc`). The
update checker compares this number with the latest **upstream** release (`knoxfighter/GW2-ArcDPS-Boon-Table`); if the
fork is older it shows "update available", and its auto-update button would replace the dll with the upstream one.

## Testing without the game

[`arcdps_mock`](https://github.com/m21248074/arcdps_mock) (fork with a CJK font and exception logging) loads an addon dll
as a fake arcdps host: `ArcdpsMockProgram.exe d3d9_arcdps_table.dll`. There is no combat data, so the table stays empty; the
settings and the language switch are testable.

- `ARCDPS_MOCK_FONT`: CJK font file (default `C:\Windows\Fonts\msjh.ttc`).
- `ARCDPS_MOCK_TRACE=1`: log every thrown exception with a stack trace to `arcdps_mock_exceptions.log`. Use it when the
  process dies with `0xC0000409` (uncaught exception).
