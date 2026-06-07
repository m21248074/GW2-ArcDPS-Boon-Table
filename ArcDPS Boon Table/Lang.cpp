#include "Lang.h"

constexpr auto BOONTABLE_TRANSLATION_ENGLISH = std::to_array({
	"History", // BT_SettingsHistory,
	"current", // BT_SettingsHistoryCurrent,
	"Show self on top", // BT_SettingsSelfOnTop
	"Players", // BT_SettingsPlayers
	"Subgroups", // BT_SettingsSubgroups
	"Total", // BT_SettingsTotal
	"Boons", // BT_BoonTypeBoon
	"Warrior", // BT_BoonTypeWarrior
	"Revenant", // BT_BoonTypeRevenant
	"Guardian", // BT_BoonTypeGuardian
	"Engineer", // BT_BoonTypeEngineer
	"Ranger", // BT_BoonTypeRanger
	"Elementalist", // BT_BoonTypeElementalist
	"Mesmer", // BT_BoonTypeMesmer
	"Necromancer", // BT_BoonTypeNecromancer
	"Auras", // BT_BoonTypeAura
	"Relics", // BT_BoonTypeRelic
	"Other", // BT_BoonTypeOther
	"Reset table columns", // BT_SettingsResetTableColumns
	"Display", // BT_SettingsDisplay
	"Show header with text instead of images", // BT_SettingsShowLabel
	"The amount of rows, that are displayed.\nTotals and Subgroups also count as row.\nIf you want the squad plus totals, you have to set this to '11'", // BT_SettingsMaxDisplayedPopup
	"Max player length", // BT_SettingsMaxPlayerLength
	"Coloring Mode", // BT_SettingsColoringMode
	"Show values as progress bar", // BT_SettingsShowProgressBar
	"Show only your Subgroup", // BT_SettingsShowOnlySubgroup
	"Add outer padding to table (x-axis)", // BT_SettingsTablePaddingX
	"Alignment", // BT_SettingsAlignment
	"Boon column width", // BT_SettingsBoonColumnWidth
	"Press CTRL+Leftclick to manually input the number.", // BT_SettingsWidthSlideTooltip
	"(not set)", // BT_SettingsKeyNotSetText
	"WvW", // BT_Wvw
	"Boon Table", // BT_WindowHeader
	"Name", // BT_NameColumnHeader
	"Group", // BT_SubgroupColumnHeader
	"Subgroup", // BT_SubgroupNameColumnValue
	"Total", // BT_TotalNameColumnValue
	"All", // BT_TotalSubgroupColumnValue
	"Default", // BT_ColoringModeDefault
	"By Profession", // BT_ColoringModeByProfession
	"By Percentage", // BT_ColoringModeByPercentage
	"Boon Table", // BT_ShowChart
	"Fights to keep", // BT_SettingsFightsToKeep
	"100% color", // BT_Settings100Color
	"0% color", // BT_Settings0Color
	"Self Color", // BT_SettingsSelfColor
	"Shortcut", // BT_SettingsShortcut
	"Might", // BT_BuffMight,
	"Fury", // BT_BuffFury,
	"Regeneration", // BT_BuffRegeneration,
	"Protection", // BT_BuffProtection,
	"Quickness", // BT_BuffQuickness,
	"Alacrity", // BT_BuffAlacrity,
	"Resolution", // BT_BuffResolution,
	"Vigor", // BT_BuffVigor,
	"Stability", // BT_BuffStability,
	"Aegis", // BT_BuffAegis,
	"Swiftness", // BT_BuffSwiftness,
	"Resistance", // BT_BuffResistance,
	"Soothing Mist", // BT_BuffSoothingMist,
	"Vampiric Aura", // BT_BuffVampiricAura,
	"Signet of Inspiration", // BT_BuffSignetInspiration,
	"Stealth", // BT_BuffStealth,
	"Superspeed", // BT_BuffSuperspeed,
	"above 90% HP", // BT_Above90Hp,
	"Signet of Resolve", // BT_BuffSignetResolve,
	"Bane Signet", // BT_BuffSignetBane,
	"Signet of Judgment", // BT_BuffSignetJudgment,
	"Signet of Mercy", // BT_BuffSignetMercy,
	"Signet of Wrath", // BT_BuffSignetWrath,
	"Signet of Courage", // BT_BuffSignetCourage,
	"Dolyak Stance", // BT_BuffDolyakStance,
	"Griffon Stance", // BT_BuffGriffonStance,
	"Moa Stance", // BT_BuffMoaStance,
	"Vulture Stance", // BT_BuffVultureStance,
	"Bear Stance", // BT_BuffBearStance,
	"One Wolf Pack", // BT_BuffOneWolfPack,
	"Soulcleave's Summit", // BT_BuffSoulcleavesSummit,
	"Razorclaw's Rage", // BT_BuffRazorclawsRage,
	"Breakrazor's Bastion", // BT_BuffBreakrazorsBastion,
	"Chaos Aura", // BT_BuffChaosAura,
	"Dark Aura", // BT_BuffDarkAura,
	"Fire Aura", // BT_BuffFireAura,
	"Frost Aura", // BT_BuffFrostAura,
	"Light Aura", // BT_BuffLightAura,
	"Magnetic Aura", // BT_BuffMagneticAura,
	"Shocking Aura", // BT_BuffShockingAura,
	"Soul Barbs", // BT_BuffSoulBarbs,
	"Spectral Armor", // BT_BuffSpectralArmor,
	"Inspiring Virtue", // BT_BuffInspiringVirtue,
	"Eternal Oasis", // BT_BuffEternalOasis,
	"Unbroken Lines", // BT_BuffUnbrokenLines,
	"Rite of the Great Dwarf", // BT_BuffRiteOfTheGreatDwarf,
	"Symbolic Avenger", // BT_BuffSymbolicAvenger,
	"Invigorated Bulwark", // BT_BuffInvigoratedBulwark,
	"Sticking Together", // BT_BuffStickingTogether,
	"Rigorous Certainty", // BT_BuffRigorousCertainty,
	"Relic of the Aristocracy", // BT_BuffRelicAristocracy,
	"Relic of the Monk", // BT_BuffRelicMonk,
	"Relic of the Brawler", // BT_BuffRelicBrawler,
	"Relic of the Thief", // BT_BuffRelicThief,
	"Relic of Fireworks", // BT_BuffRelicFireworks,
	"Relic of the Daredevil", // BT_BuffRelicDaredevil,
	"Relic of the Deadeye", // BT_BuffRelicDeadeye,
	"Relic of the Firebrand", // BT_BuffRelicFirebrand,
	"Relic of the Herald", // BT_BuffRelicHerald,
	"Relic of the Scourge", // BT_BuffRelicScourge,
	"Relic of the Weaver", // BT_BuffRelicWeaver,
	"Relic of the Zephyrite", // BT_BuffRelicZephyrite,
	"Relic of Lyhr", // BT_BuffRelicLyhr,
	"Relic of Mabon", // BT_BuffRelicMabon,
	"Relic of Vass", // BT_BuffRelicVass,
	"Relic of Nourys", // BT_BuffRelicNourys,
	"Relic of the Stormsinger", // BT_BuffRelicStormsinger,
	"Relic of Sorrow", // BT_BuffRelicSorrow,
	"Relic of the Blightbringer", // BT_BuffRelicBlightbringer,
	"Relic of the Claw", // BT_BuffRelicClaw,
	"Relic of Mount Balrior", // BT_BuffRelicMountBalrior,
	"Relic of Thorns", // BT_BuffRelicThorns,
	"Relic of the Living City", // BT_BuffRelicTitanicPotential,
	"Soul of the Titan", // BT_BuffRelicSoulOfTheTitan,
	"Relic of Bloodstone - Volatility", // BT_BuffRelicBloodstoneVolatility,
	"Relic of Bloodstone - Fervor", // BT_BuffRelicBloodstoneFervor,
	"Will fall back to english if unofficial extras is not loaded.", // BT_LikeInGameUEOnlyTooltip
	"General", // BT_SettingsGeneral
	"Shortcuts", // BT_SettingsGlobalShortcuts
});
constexpr auto BOONTABLE_TRANSLATION_GERMAN = std::to_array({
	u8"Historie", // BT_SettingsHistory,
	u8"Live", // BT_SettingsHistoryCurrent
	u8"Selbst oben anzeigen", // BT_SettingsSelfOnTop
	u8"Spieler", // BT_SettingsPlayers
	u8"Untergruppen", // BT_SettingsSubgroups
	u8"Gesamt", // BT_SettingsTotal
	u8"Segen", // BT_BoonTypeBoon
	u8"Krieger", // BT_BoonTypeWarrior
	u8"Wiedergänger", // BT_BoonTypeRevenant
	u8"Wächter", // BT_BoonTypeGuardian
	u8"Ingenieur", // BT_BoonTypeEngineer
	u8"Waldläufer", // BT_BoonTypeRanger
	u8"Elementarmagier", // BT_BoonTypeElementalist
	u8"Mesmer", // BT_BoonTypeMesmer
	u8"Nekromant", // BT_BoonTypeNecromancer
	u8"Auras", // BT_BoonTypeAura
	u8"Relikt", // BT_BoonTypeRelic
	u8"Sonstiges", // BT_BoonTypeOther
	u8"Tabellenspalten zurücksetzen", // BT_SettingsResetTableColumns
	u8"Anzeige", // BT_SettingsDisplay
	u8"Kopfzeile mit Text statt Bildern anzeigen", // BT_SettingsShowLabel
	u8"Die Anzahl der angezeigten Zeilen. \nSummen und Untergruppen zählen ebenfalls als Zeilen. \nWenn man den Squad plus Gesamt anzeigen möchten, muss der Wert auf „11” gesetzt werden.", // BT_SettingsMaxDisplayedPopup
	u8"Maximale Spielernamenlänge", // BT_SettingsMaxPlayerLength
	u8"Farbmodus", // BT_SettingsColoringMode
	u8"Werte mit Fortschrittsbalken anzeigen", // BT_SettingsShowProgressBar
	u8"Nur eigene Subgruppe anzeigen", // BT_SettingsShowOnlySubgroup
	u8"Äußeren Randabstand hinzufügen (X-Achse)", // BT_SettingsTablePaddingX
	u8"Ausrichtung", // BT_SettingsAlignment
	u8"Segensspaltenbreite", // BT_SettingsBoonColumnWidth
	u8"STRG + Linksklick drücken, um den Wert manuell einzugeben.", // BT_SettingsWidthSlideTooltip
	u8"(Nicht belegt)", // BT_SettingsKeyNotSetText
	u8"WvW", // BT_Wvw
	u8"Boon Table", // BT_WindowHeader
	u8"Name", // BT_NameColumnHeader
	u8"Gruppe", // BT_SubgroupColumnHeader
	u8"Untergruppe", // BT_SubgroupNameColumnValue
	u8"Gesamt", // BT_TotalNameColumnValue
	u8"Alle", // BT_TotalSubgroupColumnValue
	u8"Standard", // BT_ColoringModeDefault
	u8"Nach Klasse", // BT_ColoringModeByProfession
	u8"Nach Prozent", // BT_ColoringModeByPercentage
	u8"Boon Table", // BT_ShowChart
	u8"Anzahl gespeicherter Kämpfe", // BT_SettingsFightsToKeep
	u8"100% Farbe", // BT_Settings100Color
	u8"0% Farbe", // BT_Settings0Color
	u8"Eigene Farbe", // BT_SettingsSelfColor
	u8"Shortcut", // BT_SettingsShortcut
	u8"Macht", // BT_BuffMight,
	u8"Wut", // BT_BuffFury,
	u8"Regeneration", // BT_BuffRegeneration,
	u8"Schutz", // BT_BuffProtection,
	u8"Schnelligkeit", // BT_BuffQuickness,
	u8"Tatendrang", // BT_BuffAlacrity,
	u8"Entschlossenheit", // BT_BuffResolution,
	u8"Elan", // BT_BuffVigor,
	u8"Stabilität", // BT_BuffStability,
	u8"Aegis", // BT_BuffAegis,
	u8"Eile", // BT_BuffSwiftness,
	u8"Widerstand", // BT_BuffResistance,
	u8"Beruhigender Nebel", // BT_BuffSoothingMist,
	u8"Vampirische Aura", // BT_BuffVampiricAura,
	u8"Siegel der Inspiration", // BT_BuffSignetInspiration,
	u8"Tarnung", // BT_BuffStealth,
	u8"Supergeschwindigkeit", // BT_BuffSuperspeed,
	u8"Über 90% HP", // BT_Above90Hp,
	u8"Siegel der Entschlossenheit", // BT_BuffSignetResolve,
	u8"Siegel des Ruins", // BT_BuffSignetBane,
	u8"Siegel des Urteils", // BT_BuffSignetJudgment,
	u8"Siegel der Gnade", // BT_BuffSignetMercy,
	u8"Siegel des Zorns", // BT_BuffSignetWrath,
	u8"Siegel der Tapferkeit", // BT_BuffSignetCourage,
	u8"Dolyak-Haltung", // BT_BuffDolyakStance,
	u8"Greifenhaltung", // BT_BuffGriffonStance,
	u8"Moa-Haltung", // BT_BuffMoaStance,
	u8"Geierhaltung", // BT_BuffVultureStance,
	u8"Bärenhaltung", // BT_BuffBearStance,
	u8"Rudel aus einem Wolf", // BT_BuffOneWolfPack,
	u8"Seelenhiebs Gipfelpunkt", // BT_BuffSoulcleavesSummit,
	u8"Klingenklaues Rage", // BT_BuffRazorclawsRage,
	u8"Bastion Bruchklinges", // BT_BuffBreakrazorsBastion,
	u8"Chaosaura", // BT_BuffChaosAura,
	u8"Dunkelaura", // BT_BuffDarkAura,
	u8"Feueraura", // BT_BuffFireAura,
	u8"Frostaura", // BT_BuffFrostAura,
	u8"Lichtaura", // BT_BuffLightAura,
	u8"Magnetaura", // BT_BuffMagneticAura,
	u8"Schockaura", // BT_BuffShockingAura,
	u8"Seelenstacheln", // BT_BuffSoulBarbs,
	u8"Spektralrüstung", // BT_BuffSpectralArmor,
	u8"Inspirierende Tugend", // BT_BuffInspiringVirtue,
	u8"Ewige Oase", // BT_BuffEternalOasis,
	u8"Ungebrochene Reihen", // BT_BuffUnbrokenLines,
	u8"Ritus des Großen Zwergs", // BT_BuffRiteOfTheGreatDwarf,
	u8"Symbolischer Rächer", // BT_BuffSymbolicAvenger,
	u8"Verstärktes Bollwerk", // BT_BuffInvigoratedBulwark,
	u8"Zusammenbleiben", // BT_BuffStickingTogether,
	u8"Strikte Gewissheit", // BT_BuffRigorousCertainty,
	u8"Relikt der Aristokratie", // BT_BuffRelicAristocracy,
	u8"Relikt des Mönchs", // BT_BuffRelicMonk,
	u8"Relikt des Raufbolds", // BT_BuffRelicBrawler,
	u8"Relikt des Diebes", // BT_BuffRelicThief,
	u8"Relikt des Feuerwerks", // BT_BuffRelicFireworks,
	u8"Relikt des Draufgängers", // BT_BuffRelicDaredevil,
	u8"Relikt des Scharfschützen", // BT_BuffRelicDeadeye,
	u8"Relikt des Aufwieglers", // BT_BuffRelicFirebrand
	u8"Relikt des Herolds", // BT_BuffRelicHerald
	u8"Relikt des Pestbringers", // BT_BuffRelicScourge
	u8"Relikt des Webers", // BT_BuffRelicWeaver
	u8"Relikt der Zephyriten", // BT_BuffRelicZephyrite
	u8"Relikt von Lyhr", // BT_BuffRelicLyhr
	u8"Relikt von Mabon", // BT_BuffRelicMabon
	u8"Relikt von Vass", // BT_BuffRelicVass
	u8"Relikt von Nourys", // BT_BuffRelicNourys
	u8"Relikt der Sturmsängerin", // BT_BuffRelicStormsinger
	u8"Relikt von Kummer", // BT_BuffRelicSorrow
	u8"Relikt des Pestilenzbringers", // BT_BuffRelicBlightbringer
	u8"Relikt der Klaue", // BT_BuffRelicClaw
	u8"Relikt von Berg Balrior", // BT_BuffRelicMountBalrior
	u8"Relikt der Dornen", // BT_BuffRelicThorns
	u8"Relikt der Lebenden Stadt", // BT_BuffRelicTitanicPotential
	u8"Seele des Titanen", // BT_BuffRelicSoulOfTheTitan,
	u8"Relikt des Blutsteins - Flüchtigkeit", // BT_BuffRelicBloodstoneVolatility,
	u8"Relikt des Blutsteins - Inbrunst", // BT_BuffRelicBloodstoneFervor,
	u8"Wechselt zu Englisch, wenn Unofficial Extras nicht geladen ist.", // BT_LikeInGameUEOnlyTooltip
	u8"Allgemein", // BT_SettingsGeneral
	u8"Shortcuts", // BT_SettingsGlobalShortcuts
});
constexpr auto BOONTABLE_TRANSLATION_FRENCH = std::to_array({
	u8"Historique", // BT_SettingsHistory,
	u8"actuel", // BT_SettingsHistoryCurrent
	u8"Afficher en haut", // BT_SettingsSelfOnTop
	u8"Joueurs", // BT_SettingsPlayers
	u8"Sous-groupes", // BT_SettingsSubgroups
	u8"Total", // BT_SettingsTotal
	u8"Avantage", // BT_BoonTypeBoon
	u8"Guerrier", // BT_BoonTypeWarrior
	u8"Revenant", // BT_BoonTypeRevenant
	u8"Gardien", // BT_BoonTypeGuardian
	u8"Ingénieur", // BT_BoonTypeEngineer
	u8"Rôdeur", // BT_BoonTypeRanger
	u8"Élémentaliste", // BT_BoonTypeElementalist
	u8"Envoûteur", // BT_BoonTypeMesmer
	u8"Nécromant", // BT_BoonTypeNecromancer
	u8"Auras", // BT_BoonTypeAura
	u8"Relique", // BT_BoonTypeRelic
	u8"Autres", // BT_BoonTypeOther
	u8"Réinitialiser les colonnes du tableau", // BT_SettingsResetTableColumns
	u8"Affichage", // BT_SettingsDisplay
	u8"Afficher l'en-tête avec du texte au lieu d'images", // BT_SettingsShowLabel
	u8"Le nombre de lignes affichées. \nLes totaux et les sous-groupes comptent également comme des lignes. \nSi vous souhaitez afficher l'équipe plus le total, la valeur doit être définie sur « 11 ».", // BT_SettingsMaxDisplayedPopup
	u8"Longueur maximale du nom du joueur", // BT_SettingsMaxPlayerLength
	u8"Mode de colorisation", // BT_SettingsColoringMode
	u8"Afficher les valeurs sous forme de barre de progression", // BT_SettingsShowProgressBar
	u8"Afficher uniquement son propre sous-groupe", // BT_SettingsShowOnlySubgroup
	u8"Ajouter une marge extérieure (axe X)", // BT_SettingsTablePaddingX
	u8"Alignement", // BT_SettingsAlignment
	u8"Largeur de la colonne des avantages", // BT_SettingsBoonColumnWidth
	u8"CTRL + clic gauche pour saisir la valeur manuellement", // BT_SettingsWidthSlideTooltip
	u8"(Non défini)", // BT_SettingsKeyNotSetText
	u8"WvW", // BT_Wvw
	u8"Boon Table", // BT_WindowHeader
	u8"Nom", // BT_NameColumnHeader
	u8"Groupe", // BT_SubgroupColumnHeader
	u8"Sous-groupe", // BT_SubgroupNameColumnValue
	u8"Total", // BT_TotalNameColumnValue
	u8"Tous", // BT_TotalSubgroupColumnValue
	u8"Par défaut", // BT_ColoringModeDefault
	u8"Par profession", // BT_ColoringModeByProfession
	u8"Par pourcentage", // BT_ColoringModeByPercentage
	u8"Boon Table", // BT_ShowChart
	u8"Combats à conserver", // BT_SettingsFightsToKeep
	u8"100% Couleur", // BT_Settings100Color
	u8"0% Couleur", // BT_Settings0Color
	u8"Couleur personnelle", // BT_SettingsSelfColor
	u8"Raccourci", // BT_SettingsShortcut
	u8"Pouvoir", // BT_BuffMight
	u8"Fureur", // BT_BuffFury
	u8"Régénération", // BT_BuffRegeneration
	u8"Protection", // BT_BuffProtection
	u8"Célérité", // BT_BuffQuickness
	u8"Euphorie", // BT_BuffAlacrity
	u8"Résolution", // BT_BuffResolution
	u8"Vigueur", // BT_BuffVigor
	u8"Stabilité", // BT_BuffStability
	u8"Égide", // BT_BuffAegis
	u8"Rapidité", // BT_BuffSwiftness
	u8"Résistance", // BT_BuffResistance
	u8"Brouillard apaisant", // BT_BuffSoothingMist
	u8"Aura vampirique", // BT_BuffVampiricAura
	u8"Signe d'inspiration", // BT_BuffSignetInspiration
	u8"Furtivité", // BT_BuffStealth
	u8"Super vitesse", // BT_BuffSuperspeed
	u8"Au-dessus de 90 % de PV", // BT_Above90Hp
	u8"Signe de résolution", // BT_BuffSignetResolve
	u8"Signe du fléau", // BT_BuffSignetBane
	u8"Signe du jugement", // BT_BuffSignetJudgment
	u8"Signe de miséricorde", // BT_BuffSignetMercy
	u8"Signe du courroux", // BT_BuffSignetWrath
	u8"Signe de courage", // BT_BuffSignetCourage
	u8"Posture de dolyak", // BT_BuffDolyakStance
	u8"Posture du griffon", // BT_BuffGriffonStance
	u8"Posture du moa", // BT_BuffMoaStance
	u8"Posture de vautour", // BT_BuffVultureStance
	u8"Posture de l'ours", // BT_BuffBearStance
	u8"Meute d'un seul loup", // BT_BuffOneWolfPack
	u8"Sommet de Tranchâme", // BT_BuffSoulcleavesSummit
	u8"Rage de Griffelame", // BT_BuffRazorclawsRage
	u8"Bastion de Brise-lame", // BT_BuffBreakrazorsBastion
	u8"Aura du chaos", // BT_BuffChaosAura
	u8"Aura noire", // BT_BuffDarkAura
	u8"Aura de feu", // BT_BuffFireAura
	u8"Aura de givre", // BT_BuffFrostAura
	u8"Aura de lumière", // BT_BuffLightAura
	u8"Aura magnétique", // BT_BuffMagneticAura
	u8"Aura de choc", // BT_BuffShockingAura
	u8"Barbelures d'âmes", // BT_BuffSoulBarbs
	u8"Armure spectrale", // BT_BuffSpectralArmor
	u8"Vertu motivante", // BT_BuffInspiringVirtue
	u8"Oasis éternelle", // BT_BuffEternalOasis
	u8"Lignes impénétrables", // BT_BuffUnbrokenLines
	u8"Rituel du Grand Nain", // BT_BuffRiteOfTheGreatDwarf
	u8"Vengeur symbolique", // BT_BuffSymbolicAvenger
	u8"Rempart revigoré", // BT_BuffInvigoratedBulwark
	u8"Rester groupés", // BT_BuffStickingTogether
	u8"Certitude rigoureuse", // BT_BuffRigorousCertainty
	u8"Relique d'aristocratie", // BT_BuffRelicAristocracy
	u8"Relique de moine", // BT_BuffRelicMonk
	u8"Relique de bagarreur", // BT_BuffRelicBrawler
	u8"Relique de voleur", // BT_BuffRelicThief
	u8"Relique de feux d'artifice", // BT_BuffRelicFireworks
	u8"Relique du fracasseur", // BT_BuffRelicDaredevil
	u8"Relique du Sniper", // BT_BuffRelicDeadeye
	u8"Relique de l'Incendiaire", // BT_BuffRelicFirebrand
	u8"Relique du héraut", // BT_BuffRelicHerald
	u8"Relique du Fléau", // BT_BuffRelicScourge
	u8"Relique du Tissesort", // BT_BuffRelicWeaver
	u8"Relique des Zéphyrites", // BT_BuffRelicZephyrite
	u8"Relique de Lyhr", // BT_BuffRelicLyhr
	u8"Relique de Mabon", // BT_BuffRelicMabon
	u8"Relique de Vass", // BT_BuffRelicVass
	u8"Relique de Nourys", // BT_BuffRelicNourys
	u8"Relique de l'antienne de la tempête", // BT_BuffRelicStormsinger
	u8"Relique des lamentations", // BT_BuffRelicSorrow
	u8"Relique du porte-fléau", // BT_BuffRelicBlightbringer
	u8"Relique de la Griffe", // BT_BuffRelicClaw
	u8"Relique du mont Balrior", // BT_BuffRelicMountBalrior
	u8"Relique des épines", // BT_BuffRelicThorns
	u8"Relique de la cité vivante", // BT_BuffRelicTitanicPotential
	u8"Potentiel titanesque", // BT_BuffRelicSoulOfTheTitan
	u8"Relique de la pierre de sang - Volatility", // BT_BuffRelicBloodstoneVolatility
	u8"Relique de la pierre de sang - Fervor", // BT_BuffRelicBloodstoneFervor
	u8"Revient à l’anglais si Unofficial Extras n’est pas chargé.", // BT_LikeInGameUEOnlyTooltip
	u8"Général", // BT_SettingsGeneral
	u8"Raccourcis", // BT_SettingsGlobalShortcuts
});
constexpr auto BOONTABLE_TRANSLATION_SPANISH = std::to_array({
	u8"Historial", // BT_SettingsHistory,
	u8"actual", // BT_SettingsHistoryCurrent
	u8"Mostrar yo en la parte superior", // BT_SettingsSelfOnTop
	u8"Jugadores", // BT_SettingsPlayers
	u8"Subgrupos", // BT_SettingsSubgroups
	u8"Total", // BT_SettingsTotal
	u8"Bendición", // BT_BoonTypeBoon
	u8"Guerrero", // BT_BoonTypeWarrior
	u8"Retornado", // BT_BoonTypeRevenant
	u8"Guardián", // BT_BoonTypeGuardian
	u8"Ingeniero", // BT_BoonTypeEngineer
	u8"Guardabosques", // BT_BoonTypeRanger
	u8"Elementalista", // BT_BoonTypeElementalist
	u8"Hipnotizador", // BT_BoonTypeMesmer
	u8"Nigromante", // BT_BoonTypeNecromancer
	u8"Auras", // BT_BoonTypeAura
	u8"Reliquia", // BT_BoonTypeRelic
	u8"Otros", // BT_BoonTypeOther
	u8"Restablecer columnas de la tabla", // BT_SettingsResetTableColumns
	u8"Pantalla", // BT_SettingsDisplay
	u8"Mostrar encabezado con texto en lugar de imágenes", // BT_SettingsShowLabel
	u8"El número de filas mostradas. \nLos totales y los subgrupos también cuentan como filas. \nSi se desea mostrar el equipo más el total, el valor debe establecerse en «11».", // BT_SettingsMaxDisplayedPopup
	u8"Longitud máxima del nombre del jugador", // BT_SettingsMaxPlayerLength
	u8"Modo de colorear", // BT_SettingsColoringMode
	u8"Mostrar valores como barra de progreso", // BT_SettingsShowProgressBar
	u8"Mostrar solo el subgrupo propio", // BT_SettingsShowOnlySubgroup
	u8"Añadir margen exterior (eje X)", // BT_SettingsTablePaddingX
	u8"Alineación", // BT_SettingsAlignment
	u8"Ancho de la columna de bendiciones", // BT_SettingsBoonColumnWidth
	u8"CTRL + clic izquierdo para introducir el valor manualmente", // BT_SettingsWidthSlideTooltip
	u8"(No configurado)", // BT_SettingsKeyNotSetText
	u8"WvW", // BT_Wvw
	u8"Boon Table", // BT_WindowHeader
	u8"Nombre", // BT_NameColumnHeader
	u8"Grupo", // BT_SubgroupColumnHeader
	u8"Subgrupo", // BT_SubgroupNameColumnValue
	u8"Total", // BT_TotalNameColumnValue
	u8"Todos", // BT_TotalSubgroupColumnValue
	u8"Predeterminado", // BT_ColoringModeDefault
	u8"Por profesión", // BT_ColoringModeByProfession
	u8"Por porcentaje", // BT_ColoringModeByPercentage
	u8"Boon Table", // BT_ShowChart
	u8"Combates a conservar", // BT_SettingsFightsToKeep
	u8"100% Color", // BT_Settings100Color
	u8"0% Color", // BT_Settings0Color
	u8"Color propio", // BT_SettingsSelfColor
	u8"Atajo", // BT_SettingsShortcut
	u8"Poder", // BT_BuffMight
	u8"Furia", // BT_BuffFury
	u8"Regeneración", // BT_BuffRegeneration
	u8"Protección", // BT_BuffProtection
	u8"Rapidez", // BT_BuffQuickness
	u8"Alacridad", // BT_BuffAlacrity
	u8"Resolución", // BT_BuffResolution
	u8"Vigor", // BT_BuffVigor
	u8"Estabilidad", // BT_BuffStability
	u8"Égida", // BT_BuffAegis
	u8"Celeridad", // BT_BuffSwiftness
	u8"Resistencia", // BT_BuffResistance
	u8"Niebla calmante", // BT_BuffSoothingMist
	u8"Aura vampírica", // BT_BuffVampiricAura
	u8"Sello de inspiración", // BT_BuffSignetInspiration
	u8"Sigilo", // BT_BuffStealth
	u8"Supervelocidad", // BT_BuffSuperspeed
	u8"Por encima del 90 % de salud", // BT_Above90Hp
	u8"Sello de determinación", // BT_BuffSignetResolve
	u8"Sello de azote", // BT_BuffSignetBane
	u8"Sello de juicio", // BT_BuffSignetJudgment
	u8"Sello de compasión", // BT_BuffSignetMercy
	u8"Sello de ira", // BT_BuffSignetWrath
	u8"Sello de coraje", // BT_BuffSignetCourage
	u8"Postura del dolyak", // BT_BuffDolyakStance
	u8"Postura del grifo", // BT_BuffGriffonStance
	u8"Postura de moa", // BT_BuffMoaStance
	u8"Postura del buitre", // BT_BuffVultureStance
	u8"Postura del oso", // BT_BuffBearStance
	u8"Manada de un solo lobo", // BT_BuffOneWolfPack
	u8"Cumbre de Partealmas", // BT_BuffSoulcleavesSummit
	u8"Rabia de Garracuchilla", // BT_BuffRazorclawsRage
	u8"Bastión de Filofractura", // BT_BuffBreakrazorsBastion
	u8"Aura del caos", // BT_BuffChaosAura
	u8"Aura oscura", // BT_BuffDarkAura
	u8"Aura de fuego", // BT_BuffFireAura
	u8"Aura de escarcha", // BT_BuffFrostAura
	u8"Aura de luz", // BT_BuffLightAura
	u8"Aura magnética", // BT_BuffMagneticAura
	u8"Aura de electrodescarga", // BT_BuffShockingAura
	u8"Púas de almas", // BT_BuffSoulBarbs
	u8"Armadura espectral", // BT_BuffSpectralArmor
	u8"Consuelo virtuoso", // BT_BuffInspiringVirtue
	u8"Oasis eterno", // BT_BuffEternalOasis
	u8"Líneas intactas", // BT_BuffUnbrokenLines
	u8"Rito del Gran Enano", // BT_BuffRiteOfTheGreatDwarf
	u8"Vengador simbólico", // BT_BuffSymbolicAvenger
	u8"Baluarte vigorizante", // BT_BuffInvigoratedBulwark
	u8"Vamos juntos", // BT_BuffStickingTogether
	u8"Certeza rigurosa", // BT_BuffRigorousCertainty
	u8"Reliquia de la aristocracia", // BT_BuffRelicAristocracy
	u8"Reliquia del monje", // BT_BuffRelicMonk
	u8"Reliquia del pendenciero", // BT_BuffRelicBrawler
	u8"Reliquia del ladrón", // BT_BuffRelicThief
	u8"Reliquia de fuegos artificiales", // BT_BuffRelicFireworks
	u8"Reliquia del temerario", // BT_BuffRelicDaredevil
	u8"Reliquia de certero", // BT_BuffRelicDeadeye
	u8"Reliquia de abrasador", // BT_BuffRelicFirebrand
	u8"Reliquia del heraldo", // BT_BuffRelicHerald
	u8"Reliquia de azotador", // BT_BuffRelicScourge
	u8"Reliquia de tejedor", // BT_BuffRelicWeaver
	u8"Reliquia del cefirita", // BT_BuffRelicZephyrite
	u8"Reliquia de Lyhr", // BT_BuffRelicLyhr
	u8"Reliquia de Mabon", // BT_BuffRelicMabon
	u8"Reliquia de Vass", // BT_BuffRelicVass
	u8"Reliquia de Nourys", // BT_BuffRelicNourys
	u8"Reliquia de la Invocatormentas", // BT_BuffRelicStormsinger
	u8"Reliquia del pesar", // BT_BuffRelicSorrow
	u8"Reliquia del Portarruina", // BT_BuffRelicBlightbringer
	u8"Reliquia de la garra", // BT_BuffRelicClaw
	u8"Reliquia del Monte Balrior", // BT_BuffRelicMountBalrior
	u8"Reliquia de espinas", // BT_BuffRelicThorns
	u8"Reliquia de la ciudad viva", // BT_BuffRelicTitanicPotential
	u8"Potencial titánico", // BT_BuffRelicSoulOfTheTitan
	u8"Reliquia de hematites - Volatilidad", // BT_BuffRelicBloodstoneVolatility
	u8"Reliquia de hematites - Fervor", // BT_BuffRelicBloodstoneFervor
	u8"Volverá al inglés si Unofficial Extras no está cargado.", // BT_LikeInGameUEOnlyTooltip
	u8"General", // BT_SettingsGeneral
	u8"Atajos", // BT_SettingsGlobalShortcuts
});
constexpr auto BOONTABLE_TRANSLATION_CHINESE = std::to_array({
	u8"历史数据", // BT_SettingsHistory,
	u8"当前", // BT_SettingsHistoryCurrent
	u8"把自己置顶显示", // BT_SettingsSelfOnTop
	u8"玩家名", // BT_SettingsPlayers
	u8"小队", // BT_SettingsSubgroups
	u8"团队", // BT_SettingsTotal
	u8"Buff", // BT_BoonTypeBoon
	u8"战士", // BT_BoonTypeWarrior
	u8"魂武", // BT_BoonTypeRevenant
	u8"守护", // BT_BoonTypeGuardian
	u8"工程", // BT_BoonTypeEngineer
	u8"游侠", // BT_BoonTypeRanger
	u8"元素", // BT_BoonTypeElementalist
	u8"幻术", // BT_BoonTypeMesmer
	u8"死灵", // BT_BoonTypeNecromancer
	u8"光环", // BT_BoonTypeAura
	u8"古物", // BT_BoonTypeRelic
	u8"其他", // BT_BoonTypeOther
	u8"重置列设置", // BT_SettingsResetTableColumns
	u8"显示", // BT_SettingsDisplay
	u8"文字显示替代图标显示", // BT_SettingsShowLabel
	u8"显示的行数\n团队数据和小队数据也计入行数\n比如你想看团队里10人总数据和10人各自数据的话,则设置为'11'", // BT_SettingsMaxDisplayedPopup
	u8"最大玩家昵称长度", // BT_SettingsMaxPlayerLength
	u8"颜色模式", // BT_SettingsColoringMode
	u8"将数值显示为进度条", // BT_SettingsShowProgressBar
	u8"只显示自己小队", // BT_SettingsShowOnlySubgroup
	u8"将外部填充进表格(x轴)", // BT_SettingsTablePaddingX
	u8"对齐方式", // BT_SettingsAlignment
	u8"buff列宽", // BT_SettingsBoonColumnWidth
	u8"左Ctrl+鼠标左键输入自定义数值", // BT_SettingsWidthSlideTooltip
	u8"(未设置)", // BT_SettingsKeyNotSetText
	u8"WvW", // BT_Wvw
	u8"Buff监控", // BT_WindowHeader
	u8"角色名", // BT_NameColumnHeader
	u8"小队", // BT_SubgroupColumnHeader
	u8"小队", // BT_SubgroupNameColumnValue
	u8"团队", // BT_TotalNameColumnValue
	u8"总", // BT_TotalSubgroupColumnValue
	u8"无颜色", // BT_ColoringModeDefault
	u8"按职业变化颜色", // BT_ColoringModeByProfession
	u8"按百分比变化颜色", // BT_ColoringModeByPercentage
	u8"Buff监控", // BT_ShowChart
	u8"保留战斗数据的数量", // BT_SettingsFightsToKeep
	u8"100% 颜色", // BT_Settings100Color
	u8"0% 颜色", // BT_Settings0Color
	u8"自己角色颜色", // BT_SettingsSelfColor
	u8"快捷键", // BT_SettingsShortcut
	u8"威能", // BT_BuffMight
	u8"激怒", // BT_BuffFury
	u8"再生", // BT_BuffRegeneration
	u8"保护", // BT_BuffProtection
	u8"急速", // BT_BuffQuickness
	u8"敏捷", // BT_BuffAlacrity
	u8"决心", // BT_BuffResolution
	u8"活力", // BT_BuffVigor
	u8"稳固", // BT_BuffStability
	u8"圣盾", // BT_BuffAegis
	u8"迅捷", // BT_BuffSwiftness
	u8"抗性", // BT_BuffResistance
	u8"抚慰迷雾", // BT_BuffSoothingMist
	u8"吸血光环", // BT_BuffVampiricAura
	u8"灵感纹章", // BT_BuffSignetInspiration
	u8"隐身", // BT_BuffStealth
	u8"奔驰疾速", // BT_BuffSuperspeed
	u8"血量90%以上", // BT_Above90Hp
	u8"决心纹章", // BT_BuffSignetResolve
	u8"怨毒纹章", // BT_BuffSignetBane
	u8"裁决纹章", // BT_BuffSignetJudgment
	u8"仁慈纹章", // BT_BuffSignetMercy
	u8"愤怒纹章", // BT_BuffSignetWrath
	u8"勇气纹章", // BT_BuffSignetCourage
	u8"石牦牛姿态", // BT_BuffDolyakStance
	u8"狮鹫姿态", // BT_BuffGriffonStance
	u8"陆行鸟姿态", // BT_BuffMoaStance
	u8"秃鹰姿态", // BT_BuffVultureStance
	u8"熊灵姿态", // BT_BuffBearStance
	u8"独狼之力", // BT_BuffOneWolfPack
	u8"断魂之峰", // BT_BuffSoulcleavesSummit
	u8"刃爪之怒", // BT_BuffRazorclawsRage
	u8"断刃壁垒", // BT_BuffBreakrazorsBastion
	u8"混沌光环", // BT_BuffChaosAura
	u8"黑暗光环", // BT_BuffDarkAura
	u8"火焰光环", // BT_BuffFireAura
	u8"冰霜光环", // BT_BuffFrostAura
	u8"明亮光环", // BT_BuffLightAura
	u8"磁力光环", // BT_BuffMagneticAura
	u8"电击光环", // BT_BuffShockingAura
	u8"灵魂倒钩", // BT_BuffSoulBarbs
	u8"鬼灵铠甲", // BT_BuffSpectralArmor
	u8"美德激励", // BT_BuffInspiringVirtue
	u8"永恒绿洲", // BT_BuffEternalOasis
	u8"牢固连结", // BT_BuffUnbrokenLines
	u8"崇高矮人", // BT_BuffRiteOfTheGreatDwarf
	u8"复仇符印", // BT_BuffSymbolicAvenger
	u8"活力壁垒", // BT_BuffInvigoratedBulwark
	u8"团结一心", // BT_BuffStickingTogether
	u8"严格定式", // BT_BuffRigorousCertainty
	u8"望族", // BT_BuffRelicAristocracy
	u8"僧侣", // BT_BuffRelicMonk
	u8"争斗者", // BT_BuffRelicBrawler
	u8"潜行者", // BT_BuffRelicThief
	u8"烟花", // BT_BuffRelicFireworks
	u8"独行侠", // BT_BuffRelicDaredevil
	u8"神枪手", // BT_BuffRelicDeadeye
	u8"燃火者", // BT_BuffRelicFirebrand
	u8"预告者", // BT_BuffRelicHerald
	u8"灾厄师", // BT_BuffRelicScourge
	u8"编织者", // BT_BuffRelicWeaver
	u8"风裔", // BT_BuffRelicZephyrite
	u8"莱尔", // BT_BuffRelicLyhr
	u8"玛邦", // BT_BuffRelicMabon
	u8"瓦思", // BT_BuffRelicVass
	u8"努里斯", // BT_BuffRelicNourys
	u8"风暴咏者", // BT_BuffRelicStormsinger
	u8"悲伤", // BT_BuffRelicSorrow
	u8"瘟疫使者", // BT_BuffRelicBlightbringer
	u8"克达", // BT_BuffRelicClaw
	u8"巴里尔山", // BT_BuffRelicMountBalrior
	u8"荆棘", // BT_BuffRelicThorns
	u8"活体城市", // BT_BuffRelicTitanicPotential
	u8"泰坦之魂", // BT_BuffRelicSoulOfTheTitan
	u8"血石波动", // BT_BuffRelicBloodstoneVolatility
	u8"血石狂热", // BT_BuffRelicBloodstoneFervor
	u8"如果没安装unofficial extras插件的话,将回退到英语版本", // BT_LikeInGameUEOnlyTooltip
	u8"常规设置", // BT_SettingsGeneral
	u8"快捷键", // BT_SettingsGlobalShortcuts
});

constexpr auto BOONTABLE_TRANSLATION_TCHINESE = std::to_array({
	u8"歷史紀錄", // BT_SettingsHistory,
	u8"當前", // BT_SettingsHistoryCurrent
	u8"在頂部顯示自己", // BT_SettingsSelfOnTop
	u8"玩家", // BT_SettingsPlayers
	u8"小隊", // BT_SettingsSubgroups
	u8"全團", // BT_SettingsTotal
	u8"恩賜(Boon)", // BT_BoonTypeBoon
	u8"戰士(Warrior)", // BT_BoonTypeWarrior
	u8"魂武者(Revenant)", // BT_BoonTypeRevenant
	u8"守護者(Guardian)", // BT_BoonTypeGuardian
	u8"工程師(Engineer)", // BT_BoonTypeEngineer
	u8"遊俠(Ranger)", // BT_BoonTypeRanger
	u8"元素使(Elementalist)", // BT_BoonTypeElementalist
	u8"幻術師(Mesmer)", // BT_BoonTypeMesmer
	u8"喚靈師(Necromancer)", // BT_BoonTypeNecromancer
	u8"光環(Aura)", // BT_BoonTypeAura
	u8"古物", // BT_BoonTypeRelic
	u8"其他", // BT_BoonTypeOther
	u8"重置欄位設定", // BT_SettingsResetTableColumns
	u8"顯示", // BT_SettingsDisplay
	u8"標題以文字替代圖標顯示", // BT_SettingsShowLabel
	u8"想要顯示的行數。\n全團和小隊也算一行。\n如果你想要十人團員外加全團, 則必須將其設為'11'", // BT_SettingsMaxDisplayedPopup
	u8"最大角色名長度", // BT_SettingsMaxPlayerLength
	u8"著色模式", // BT_SettingsColoringMode
	u8"將數值顯示為進度條", // BT_SettingsShowProgressBar
	u8"僅顯示你所在的小隊", // BT_SettingsShowOnlySubgroup
	u8"增加外部邊距(x軸)", // BT_SettingsTablePaddingX
	u8"對齊", // BT_SettingsAlignment
	u8"增益欄位寬度", // BT_SettingsBoonColumnWidth
	u8"Ctrl+左鍵以手動輸入數字。", // BT_SettingsWidthSlideTooltip
	u8"(沒有設定)", // BT_SettingsKeyNotSetText
	u8"世界之戰(WvW)", // BT_Wvw
	u8"增益表", // BT_WindowHeader
	u8"角色名", // BT_NameColumnHeader
	u8"小隊", // BT_SubgroupColumnHeader
	u8"小隊", // BT_SubgroupNameColumnValue
	u8"總計", // BT_TotalNameColumnValue
	u8"全團", // BT_TotalSubgroupColumnValue
	u8"預設(無顏色)", // BT_ColoringModeDefault
	u8"按職業區分", // BT_ColoringModeByProfession
	u8"按百分比變化", // BT_ColoringModeByPercentage
	u8"增益表", // BT_ShowChart
	u8"場戰鬥要保留", // BT_SettingsFightsToKeep
	u8"100% 顏色", // BT_Settings100Color
	u8"0% 顏色", // BT_Settings0Color
	u8"自身顏色", // BT_SettingsSelfColor
	u8"快捷鍵", // BT_SettingsShortcut
	u8"威能(Might)", // BT_BuffMight
	u8"激怒(Fury)", // BT_BuffFury
	u8"再生(Regeneration)", // BT_BuffRegeneration
	u8"保護(Protection)", // BT_BuffProtection
	u8"急速(Quickness)", // BT_BuffQuickness
	u8"敏捷(Alacrity)", // BT_BuffAlacrity
	u8"決心(Resolution)", // BT_BuffResolution
	u8"活力(Vigor)", // BT_BuffVigor
	u8"穩固(Stability)", // BT_BuffStability
	u8"聖盾(Aegis)", // BT_BuffAegis
	u8"迅捷(Swiftness)", // BT_BuffSwiftness
	u8"抗性(Resistance)", // BT_BuffResistance
	u8"撫傷迷霧(Soothing Mist)", // BT_BuffSoothingMist
	u8"吸血光環(Vampiric Aura)", // BT_BuffVampiricAura
	u8"靈感紋章(Signet of Inspiration)", // BT_BuffSignetInspiration
	u8"潛行(Stealth)", // BT_BuffStealth
	u8"奔馳急速(Superspeed)", // BT_BuffSuperspeed
	u8"生命值90%以上", // BT_Above90Hp
	u8"決心紋章(Signet of Resolve)", // BT_BuffSignetResolve
	u8"怨毒紋章(Bane Signet)", // BT_BuffSignetBane
	u8"裁決紋章(Signet of Judgment)", // BT_BuffSignetJudgment
	u8"仁慈紋章(Signet of Mercy)", // BT_BuffSignetMercy
	u8"憤怒紋章(Signet of Wrath)", // BT_BuffSignetWrath
	u8"勇氣紋章(Signet of Courage)", // BT_BuffSignetCourage
	u8"石犛牛姿態(Dolyak Stance)", // BT_BuffDolyakStance
	u8"獅鷲姿態(Griffon Stance)", // BT_BuffGriffonStance
	u8"陸行鳥姿態(Moa Stance)", // BT_BuffMoaStance
	u8"禿鷹姿態(Vulture Stance)", // BT_BuffVultureStance
	u8"熊靈姿態(Bear Stance)", // BT_BuffBearStance
	u8"獨狼之力(One Wolf Pack)", // BT_BuffOneWolfPack
	u8"斷魂之峰(Soulcleave's Summit)", // BT_BuffSoulcleavesSummit
	u8"刃爪之怒(Razorclaw's Rage)", // BT_BuffRazorclawsRage
	u8"斷刃壁壘(Breakrazor's Bastion)", // BT_BuffBreakrazorsBastion
	u8"混亂光環(Chaos Aura)", // BT_BuffChaosAura
	u8"黑暗光環(Dark Aura)", // BT_BuffDarkAura
	u8"火焰光環(Fire Aura)", // BT_BuffFireAura
	u8"冰霜光環(Frost Aura)", // BT_BuffFrostAura
	u8"明亮光環(Light Aura)", // BT_BuffLightAura
	u8"磁力光環(Magnetic Aura)", // BT_BuffMagneticAura
	u8"電擊光環(Shocking Aura)", // BT_BuffShockingAura
	u8"靈魂倒鉤(Soul Barbs)", // BT_BuffSoulBarbs
	u8"鬼靈鎧甲(Spectral Armor)", // BT_BuffSpectralArmor
	u8"美德激勵(Inspiring Virtue)", // BT_BuffInspiringVirtue
	u8"永恆綠洲(Eternal Oasis)", // BT_BuffEternalOasis
	u8"牢固連結(Unbroken Lines)", // BT_BuffUnbrokenLines
	u8"崇高矮人(Rite of the Great Dwarf)", // BT_BuffRiteOfTheGreatDwarf
	u8"復仇符印(Symbolic Avenger)", // BT_BuffSymbolicAvenger
	u8"活力壁壘(Invigorated Bulwark)", // BT_BuffInvigoratedBulwark
	u8"團結一心(Sticking Together)", // BT_BuffStickingTogether
	u8"嚴格定式(Rigorous Certainty)", // BT_BuffRigorousCertainty
	u8"望族", // BT_BuffRelicAristocracy
	u8"僧侶", // BT_BuffRelicMonk
	u8"爭鬥者", // BT_BuffRelicBrawler
	u8"潛行者", // BT_BuffRelicThief
	u8"煙花", // BT_BuffRelicFireworks
	u8"獨行俠", // BT_BuffRelicDaredevil
	u8"神槍手", // BT_BuffRelicDeadeye
	u8"燃火者", // BT_BuffRelicFirebrand
	u8"預告者", // BT_BuffRelicHerald
	u8"災厄師", // BT_BuffRelicScourge
	u8"編織者", // BT_BuffRelicWeaver
	u8"風裔", // BT_BuffRelicZephyrite
	u8"萊爾", // BT_BuffRelicLyhr
	u8"瑪邦", // BT_BuffRelicMabon
	u8"瓦思", // BT_BuffRelicVass
	u8"努里斯", // BT_BuffRelicNourys
	u8"風暴詠者", // BT_BuffRelicStormsinger
	u8"悲傷", // BT_BuffRelicSorrow
	u8"瘟疫使者", // BT_BuffRelicBlightbringer
	u8"克達", // BT_BuffRelicClaw
	u8"巴里爾山", // BT_BuffRelicMountBalrior
	u8"荊棘", // BT_BuffRelicThorns
	u8"活體城市", // BT_BuffRelicTitanicPotential
	u8"泰坦之魂", // BT_BuffRelicSoulOfTheTitan
	u8"血石波動", // BT_BuffRelicBloodstoneVolatility
	u8"血石狂熱", // BT_BuffRelicBloodstoneFervor
	u8"如果沒安裝 unofficial extras 插件，將回退到英文版本", // BT_LikeInGameUEOnlyTooltip
	u8"通用設置", // BT_SettingsGeneral
	u8"快捷鍵", // BT_SettingsGlobalShortcuts
	});

static_assert(magic_enum::enum_count<LangKey>() == BOONTABLE_TRANSLATION_ENGLISH.size());
static_assert(magic_enum::enum_count<LangKey>() == BOONTABLE_TRANSLATION_GERMAN.size());
static_assert(magic_enum::enum_count<LangKey>() == BOONTABLE_TRANSLATION_FRENCH.size());
static_assert(magic_enum::enum_count<LangKey>() == BOONTABLE_TRANSLATION_SPANISH.size());
static_assert(magic_enum::enum_count<LangKey>() == BOONTABLE_TRANSLATION_CHINESE.size());
static_assert(magic_enum::enum_count<LangKey>() == BOONTABLE_TRANSLATION_TCHINESE.size());

void LoadTranslations() {
	auto count = magic_enum::enum_count<LangKey>();
	assert(count == BOONTABLE_TRANSLATION_ENGLISH.size());

	ArcdpsExtension::Localization::instance().Load(GWL_ENG, BOONTABLE_TRANSLATION_ENGLISH);
	ArcdpsExtension::Localization::instance().Load(GWL_GEM, BOONTABLE_TRANSLATION_GERMAN);
	ArcdpsExtension::Localization::instance().Load(GWL_FRE, BOONTABLE_TRANSLATION_FRENCH);
	ArcdpsExtension::Localization::instance().Load(GWL_SPA, BOONTABLE_TRANSLATION_SPANISH);
	ArcdpsExtension::Localization::instance().Load(GWL_CN, BOONTABLE_TRANSLATION_CHINESE);
	ArcdpsExtension::Localization::instance().Load(GWL_TW, BOONTABLE_TRANSLATION_TCHINESE);
}
