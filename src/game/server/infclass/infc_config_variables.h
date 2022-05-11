// NO INCLUDE GUARDS!

MACRO_CONFIG_STR(AboutSourceUrl, about_source_url, 128, "https://github.com/InfectionDust/teeworlds-infclassR", CFGFLAG_SERVER, "The server source code URL")
MACRO_CONFIG_STR(AboutTranslationUrl, about_translation_url, 128, "https://crowdin.com/translate/infectiondust", CFGFLAG_SERVER, "The translation site URL")
MACRO_CONFIG_STR(AboutContactsDiscord, about_contacts_discord, 128, "https://infclass.github.io/discord", CFGFLAG_SERVER, "Discord server invite URL")
MACRO_CONFIG_STR(AboutContactsTelegram, about_contacts_telegram, 128, "", CFGFLAG_SERVER, "Telegram URL or ID")
MACRO_CONFIG_STR(AboutContactsMatrix, about_contacts_matrix, 128, "https://infclass.github.io/matrix", CFGFLAG_SERVER, "Matrix room URL")

MACRO_CONFIG_STR(InfConverterId, inf_converter_id, 16, "v2", CFGFLAG_SERVER, "Map converter version id")
MACRO_CONFIG_INT(InfConverterForceRegeneration, inf_converter_force_regeneration, 0, 0, 1, CFGFLAG_SERVER, "Always (re)generate client map (regardless of cache)")
MACRO_CONFIG_INT(SvTimelimitInSeconds, sv_timelimit_in_seconds, 0, 0, 10000, CFGFLAG_SERVER, "Time limit in seconds (0 means 'fallback to sv_timelimit')")
MACRO_CONFIG_INT(InfSmartMapRotation, inf_smart_maprotation, 0, 1, 1, CFGFLAG_SERVER, "Enable smart map rotation algorhythm")
MACRO_CONFIG_INT(InfInactiveHumansKickTime, inf_inactive_humans_kick_time, 180, 0, 10000, CFGFLAG_SERVER, "How many seconds to wait before taking care of inactive humans")
MACRO_CONFIG_INT(InfInactiveInfectedKickTime, inf_inactive_infected_kick_time, 30, 0, 10000, CFGFLAG_SERVER, "How many seconds to wait before taking care of inactive infected")
MACRO_CONFIG_INT(InfInitialInfectionDelay, inf_initial_infection_delay, 10, 0, 10000, CFGFLAG_SERVER, "The number of seconds until the game infect the first humans in the round")

MACRO_CONFIG_INT(InfTrainingMode, inf_training_mode, 0, 0, 1, CFGFLAG_SERVER, "Enable the training mode (with commands)")

MACRO_CONFIG_STR(InfEvent, inf_event, 64, "", CFGFLAG_SERVER, "Special event")

MACRO_CONFIG_INT(InfMinPlayers, inf_min_players, 2, 0, 64, CFGFLAG_SERVER, "Minimum number of players to start the round")
MACRO_CONFIG_INT(InfChallenge, inf_challenge, 0, 0, 1, CFGFLAG_SERVER, "Enable challenges")
MACRO_CONFIG_INT(InfAccusationThreshold, inf_accusation_threshold, 4, 1, 8, CFGFLAG_SERVER, "Number of accusations needed to start a banvote")
MACRO_CONFIG_INT(InfLeaverBanTime, inf_leaver_ban_time, 5, 0, 180, CFGFLAG_SERVER, "How long an infected gets banned (in minutes), when leaving and leaving causes a human to get infected")
MACRO_CONFIG_INT(InfShowScoreTime, inf_show_score_time, 3, 0, 12, CFGFLAG_SERVER, "Number of seconds the score will be shown at the end of a round")
MACRO_CONFIG_INT(InfMaprotationRandom, inf_maprotation_random, 0, 0, 1, CFGFLAG_SERVER, "When enabled, next map in rotation will be chosen randomly")
MACRO_CONFIG_INT(InfFirstInfectedLimit, inf_first_infected_limit, 0, 0, 64, CFGFLAG_SERVER, "The number of initially infected players")
MACRO_CONFIG_INT(InfMinRoundsForMapVote, inf_min_rounds_map_vote, 0, 0, 100, CFGFLAG_SERVER, "Minimum number of rounds before a new map can be voted")
MACRO_CONFIG_INT(InfMinPlayerPercentForMapVote, inf_min_player_percent_map_vote, 30, 0, 200, CFGFLAG_SERVER, "Minimum percentage of players that are needed to start a map vote")
MACRO_CONFIG_INT(InfMinPlayerNumberForMapVote, inf_min_player_number_map_vote, 1, 1, 32, CFGFLAG_SERVER, "Minimum number of players that are needed to start a map vote")
MACRO_CONFIG_INT(InfConWaitingTime, inf_con_waiting_time, 1, 0, 60, CFGFLAG_SERVER, "Number of seconds to wait before enter the game")
MACRO_CONFIG_INT(InfCaptcha, inf_captcha, 0, 0, 1, CFGFLAG_SERVER, "Enable captcha")
MACRO_CONFIG_INT(InfShockwaveAffectHumans, inf_shock_wave_affect_humans, 1, 0, 1, CFGFLAG_SERVER, "Explosion shockwave affect humans")
MACRO_CONFIG_INT(InfSpawnProtectionTime, inf_spawn_protection_time, 2, 0, 60, CFGFLAG_SERVER, "Time zombies stay invincible while spawning")
MACRO_CONFIG_INT(InfAntiFireTime, inf_anti_fire_time, 700, 0, 10000, CFGFLAG_SERVER, "Time players can't attack after spawning (in ms)")
MACRO_CONFIG_INT(InfTaxi, inf_taxi, 1, 0, 2, CFGFLAG_SERVER, "Toggle taxi mode (disabled, enabled (without passengers ammo regen), enabled")
MACRO_CONFIG_INT(InfTaxiCollisions, inf_taxi_collisions, 0, 0, 3, CFGFLAG_SERVER, "Set taxi collision flags (1 for attach collisions, 2 for move collisions")

MACRO_CONFIG_INT(InfDefenderLimit, inf_defender_limit, 40, 0, 64, CFGFLAG_SERVER, "Maximum number of defenders in game")
MACRO_CONFIG_INT(InfMedicLimit, inf_medic_limit, 20, 0, 64, CFGFLAG_SERVER, "Maximum number of medics in game")
MACRO_CONFIG_INT(InfHeroLimit, inf_hero_limit, 10, 0, 64, CFGFLAG_SERVER, "Maximum number of heros in game")
MACRO_CONFIG_INT(InfSupportLimit, inf_support_limit, 40, 0, 64, CFGFLAG_SERVER, "Maximum number of supports in game")
MACRO_CONFIG_INT(InfWitchLimit, inf_witch_limit, 2, 0, 64, CFGFLAG_SERVER, "Maximum number of witches in game")
MACRO_CONFIG_INT(InfSoldierBombs, inf_soldier_bombs, 3, 1, 16, CFGFLAG_SERVER, "Number of bombs for the soldier")
MACRO_CONFIG_INT(InfMercBombs, inf_merc_bombs, 16, 1, 100, CFGFLAG_SERVER, "Number of the mercenary bomb upgrades")
MACRO_CONFIG_INT(InfMercBombMaxDamage, inf_merc_bomb_max_damage, 24, 0, 100, CFGFLAG_SERVER, "The max damage of a fully upgraded mercenary bomb")
MACRO_CONFIG_INT(InfMercLove, inf_merc_love, 1, 0, 1, CFGFLAG_SERVER, "Enables love bombs for the mercenary (hammer)")
MACRO_CONFIG_INT(InfBarrierLifeSpan, inf_barrier_lifespan, 30, 0, 100, CFGFLAG_SERVER, "Barrier lifespan")
MACRO_CONFIG_INT(InfVoodooAliveTime, inf_voodoo_alive_time, 550, 0, 10000, CFGFLAG_SERVER, "How long a voodoo keeps staying alive after being killed (in ms)")
MACRO_CONFIG_INT(InfBarrierTimeReduce, inf_barrier_timereduce, 150, 0, 10000, CFGFLAG_SERVER, "Time to remove from a barrier lifespan when an infected dies (centisec)")
MACRO_CONFIG_INT(InfLooperBarrierTimeReduce, inf_looper_barrier_timereduce, 350, 0, 10000, CFGFLAG_SERVER, "Time to remove from a barrier lifespan when an infected dies (centisec)")
MACRO_CONFIG_INT(InfMineRadius, inf_mine_radius, 46, 0, 1024, CFGFLAG_SERVER, "Radius of mines")
MACRO_CONFIG_INT(InfMineLimit, inf_mine_limit, 2, 0, 1024, CFGFLAG_SERVER, "Maximum number of mines per player")
MACRO_CONFIG_INT(InfNinjaJump, inf_ninja_jump, 2, 0, 1024, CFGFLAG_SERVER, "Maximum number of katana attacks")
MACRO_CONFIG_INT(InfNinjaMinInfected, inf_ninja_min_infected, 2, 1, 15, CFGFLAG_SERVER, "Minimum number of infected to activate the target system")
MACRO_CONFIG_INT(InfNinjaTargetAfkTime, inf_ninja_target_afk_time, 1, 1, 10000, CFGFLAG_SERVER, "How long in minutes before an afk zombie in the infection zone does not count as target anymore")
MACRO_CONFIG_INT(InfPoisonDamage, inf_poison_damage, 8, 0, 1024, CFGFLAG_SERVER, "Damage deals by the poison grenades")
MACRO_CONFIG_INT(InfPoisonDuration, inf_poison_duration, 4000, 0, 60000, CFGFLAG_SERVER, "The poison grenades effect duration (int ms)")
MACRO_CONFIG_INT(InfGhoulDigestion, inf_ghoul_digestion, 5, 0, 10000, CFGFLAG_SERVER, "Time for a ghoul to digest an infected (sec)")
MACRO_CONFIG_INT(InfGhoulStomachSize, inf_ghoul_stomach_size, 80, 0, 10000, CFGFLAG_SERVER, "Number of dead that the ghoul can eat")
MACRO_CONFIG_INT(InfGhoulThreshold, inf_ghoul_threshold, 3, 0, 10000, CFGFLAG_SERVER, "Ghouls will only be created when the number of infected has reached this threshold")
MACRO_CONFIG_INT(InfSlimeDuration, inf_slime_duration, 10, 0, 10000, CFGFLAG_SERVER, "How long Slug-Slime will stay in game (in seconds)")
MACRO_CONFIG_INT(InfSlimePoisonDamage, inf_slime_poison_damage, 5, 0, 10000, CFGFLAG_SERVER, "The total damage from Slug-Slime")
MACRO_CONFIG_INT(InfSlimeHealRate, inf_slime_heal_rate, 2, 0, 10000, CFGFLAG_SERVER, "Slug-Slime heals infected for X hearts every second")
MACRO_CONFIG_INT(InfSlimeMaxHeal, inf_slime_max_heal, 10, 0, 100, CFGFLAG_SERVER, "The maximum total HP that can be gained from Slug Slime (reasonable max value is 20)")
MACRO_CONFIG_INT(InfInfzoneHealRate, inf_infzone_heal_rate, 3, 0, 10000, CFGFLAG_SERVER, "Infection zone heals infected for X hearts every second")
MACRO_CONFIG_INT(InfScientistTpSelfharm, inf_scientist_tp_selfharm, 0, 0, 10000, CFGFLAG_SERVER, "Self damage on each teleportation")
MACRO_CONFIG_INT(InfBatAirjumpLimit, inf_bat_airjump_limit, 10000, 0, 10000, CFGFLAG_SERVER, "Max number of extra airjumps")
MACRO_CONFIG_INT(InfBatDamage, inf_bat_damage, 3, 0, 10000, CFGFLAG_SERVER, "Damage taken by bat")
MACRO_CONFIG_INT(InfBatHookTime, inf_bat_hook_time, 5, 1, 10000, CFGFLAG_SERVER, "For how long bat will be able to hook humans (in seconds)")
MACRO_CONFIG_INT(InfSpiderHookTime, inf_spider_hook_time, 3, 1, 10000, CFGFLAG_SERVER, "For how long spiders will be able to hook humans (in seconds)")
MACRO_CONFIG_INT(InfSpiderWebHookLength, inf_spider_web_hook_length, 600, 0, 10000, CFGFLAG_SERVER, "The maximum length of spider web hook")
MACRO_CONFIG_INT(InfSmokerHookDamage, inf_smoker_hook_damage, 3, 1, 10000, CFGFLAG_SERVER, "Damage taken by smoker (hook)")
MACRO_CONFIG_INT(InfSpiderCatchHumans, inf_spider_catch_humans, 1, 0, 1, CFGFLAG_SERVER, "Always catch humans with hook")
MACRO_CONFIG_INT(InfInfzoneFreezeDuration, inf_infzone_freeze_duration, 2, 0, 10000, CFGFLAG_SERVER, "For how long infection zone will freeze humans (in seconds) (0 = disable)")
MACRO_CONFIG_INT(InfLastEnforcerTimeMs, inf_last_enforcer_time_ms, 400, 0, 10000, CFGFLAG_SERVER, "For how long the last hooker will be forced as the char indirect killer (in ms)")

MACRO_CONFIG_INT(InfProbaSmoker, inf_proba_smoker, 20, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a smoker")
MACRO_CONFIG_INT(InfProbaHunter, inf_proba_hunter, 20, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a hunter")
MACRO_CONFIG_INT(InfProbaBat, inf_proba_bat, 4, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a bat")
MACRO_CONFIG_INT(InfProbaBoomer, inf_proba_boomer, 20, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a boomer")
MACRO_CONFIG_INT(InfProbaGhost, inf_proba_ghost, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a ghost")
MACRO_CONFIG_INT(InfProbaSpider, inf_proba_spider, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a spider")
MACRO_CONFIG_INT(InfProbaGhoul, inf_proba_ghoul, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a ghoul")
MACRO_CONFIG_INT(InfProbaSlug, inf_proba_slug, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a slug")
MACRO_CONFIG_INT(InfProbaVoodoo, inf_proba_voodoo, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a voodoo")
MACRO_CONFIG_INT(InfProbaWitch, inf_proba_witch, 5, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be a witch")
MACRO_CONFIG_INT(InfProbaUndead, inf_proba_undead, 4, 0, 100, CFGFLAG_SERVER, "Probability for an infected to be an undead")

MACRO_CONFIG_INT(InfEnableEngineer, inf_enable_engineer, 1, 0, 1, CFGFLAG_SERVER, "Makes the engineer class available")
MACRO_CONFIG_INT(InfEnableSoldier, inf_enable_soldier, 1, 0, 1, CFGFLAG_SERVER, "Makes the soldier class available")
MACRO_CONFIG_INT(InfEnableScientist, inf_enable_scientist, 1, 0, 1, CFGFLAG_SERVER, "Makes the scientist class available")
MACRO_CONFIG_INT(InfEnableBiologist, inf_enable_biologist, 1, 0, 1, CFGFLAG_SERVER, "Makes the biologist class available")
MACRO_CONFIG_INT(InfEnableLooper, inf_enable_looper, 1, 0, 1, CFGFLAG_SERVER, "Makes the looper class available")
MACRO_CONFIG_INT(InfEnableMercenary, inf_enable_mercenary, 1, 0, 1, CFGFLAG_SERVER, "Makes the mercenary class available")
MACRO_CONFIG_INT(InfEnableSniper, inf_enable_sniper, 1, 0, 1, CFGFLAG_SERVER, "Makes the sniper class available")
MACRO_CONFIG_INT(InfEnableNinja, inf_enable_ninja, 1, 0, 1, CFGFLAG_SERVER, "Makes the ninja class available")
MACRO_CONFIG_INT(InfEnableMedic, inf_enable_medic, 1, 0, 1, CFGFLAG_SERVER, "Makes the medic class available")
MACRO_CONFIG_INT(InfEnableHero, inf_enable_hero, 1, 0, 1, CFGFLAG_SERVER, "Makes the hero class available")

MACRO_CONFIG_INT(InfMinPlayersForEngineer, inf_min_players_for_engineer, 0, 0, 100, CFGFLAG_SERVER, "Minimum number of players that are needed to enable Engineer class")
MACRO_CONFIG_INT(InfProbaSpawnNearWitch, inf_proba_spawn_near_witch, 66, 0, 100, CFGFLAG_SERVER, "Probability for an infected to spawn near a witch")

MACRO_CONFIG_INT(InfRevivalDamage, inf_revival_damage, 17, 0, 100, CFGFLAG_SERVER, "The number of total HP taken from ")

MACRO_CONFIG_INT(InfHeroFlagIndicator, inf_hero_flag_indicator, 1, 0, 1, CFGFLAG_SERVER, "Shows the heros in which direction the next flag is")
MACRO_CONFIG_INT(InfHeroFlagIndicatorTime, inf_hero_flag_indicator_time, 3, 0, 1000, CFGFLAG_SERVER, "How many seconds the hero has to stand still until the indicator is shown")

MACRO_CONFIG_STR(FunRoundTitle, funround_title, 64, "Fun round", CFGFLAG_SERVER, "Fun round title")
MACRO_CONFIG_INT(FunRoundLimit, funround_limit, 1, 0, 100, CFGFLAG_SERVER, "Number of possible fun rounds per map")
MACRO_CONFIG_INT(FunRoundDuration, funround_duration, 3, 0, 100, CFGFLAG_SERVER, "Fun round duration (min)")
MACRO_CONFIG_INT(FunRoundGhoulStomachSize, funround_ghoul_stomach_size, 40, 0, 10000, CFGFLAG_SERVER, "Number of dead that the ghoul can eat")

//Looper class config
MACRO_CONFIG_INT(InfSlowMotionWallDuration, inf_slow_motion_wall_duration, 30, 0, 1024, CFGFLAG_SERVER, "How long looper wall slow motion effect will slow down zombies (in centiSec)")
MACRO_CONFIG_INT(InfSlowMotionGunDuration, inf_slow_motion_gun_duration, 6, 0, 1024, CFGFLAG_SERVER, "How long looper gun slow motion effect will slow down zombies (in centiSec)")
MACRO_CONFIG_INT(InfLooperBarrierLifeSpan, inf_looper_barrier_life_span, 59, 0, 1024, CFGFLAG_SERVER, "How long looper barrier will last (in seconds)")
MACRO_CONFIG_INT(InfSlowMotionPercent, inf_slow_motion_percent, 65, 0, 90, CFGFLAG_SERVER, "Factor that manipulates the slowmotion intensity")
MACRO_CONFIG_INT(InfSlowMotionHookSpeed, inf_slow_motion_hook_speed, 30, 0, 100, CFGFLAG_SERVER, "Factor that manipulates the slowmotion hook speed")
MACRO_CONFIG_INT(InfSlowMotionHookAccel, inf_slow_motion_hook_accel, 15, 0, 100, CFGFLAG_SERVER, "Factor that manipulates the slowmotion hook acceleration")
MACRO_CONFIG_INT(InfSlowMotionMaxSpeed, inf_slow_motion_max_speed, 50, 0, 500, CFGFLAG_SERVER, "Create a speed limit while in slowmotion, make it 0 to disable it")
MACRO_CONFIG_INT(InfSlowMotionGravity, inf_slow_motion_gravity, 5, -100, 100, CFGFLAG_SERVER, "Modify gravity while in slowmotion")

//Turret
MACRO_CONFIG_INT(InfMinPlayersForTurrets, inf_min_players_for_turrets, 3, 0, 100, CFGFLAG_SERVER, "Minimum number of players that are needed to enable turrets")
MACRO_CONFIG_INT(InfTurretEnable, inf_turret_enable, 1, 0, 1, CFGFLAG_SERVER, "If turrets are available")
MACRO_CONFIG_INT(InfTurretGive, inf_turret_give, 1, 0, 1000, CFGFLAG_SERVER, "Gives hero extra turrets")

MACRO_CONFIG_INT(InfTurretDuration, inf_turret_duration, 30, 0, 100, CFGFLAG_SERVER, "turret life span")
MACRO_CONFIG_INT(InfTurretSelfDestructDmg, inf_turret_self_destruct_dmg, 15, 0, 20, CFGFLAG_SERVER, "damage taken by zombie if turret is destroyed")
MACRO_CONFIG_INT(InfTurretRadarRange, inf_turret_radar_range, 800, 0, 1000, CFGFLAG_SERVER, "turret radar range")
MACRO_CONFIG_INT(InfTurretEnableLaser, inf_turret_enable_laser, 1, 0, 1, CFGFLAG_SERVER, "enable turret laser ammunition")
MACRO_CONFIG_INT(InfTurretEnablePlasma, inf_turret_enable_plasma, 0, 0, 1, CFGFLAG_SERVER, "enable turret plasma ammunition")
MACRO_CONFIG_INT(InfTurretPlasmaReloadDuration, inf_turret_plasma_reload_duration, 3, 0, 10, CFGFLAG_SERVER, "plasma ammo reload duration")
MACRO_CONFIG_INT(InfTurretLaserReloadDuration, inf_turret_laser_reload_duration, 1, 0, 10, CFGFLAG_SERVER, "laser ammo reload duration")
MACRO_CONFIG_INT(InfTurretPlasmaLifeSpan, inf_turret_plasma_life_span, 3, 0, 10, CFGFLAG_SERVER, "plasma life span")
MACRO_CONFIG_INT(InfTurretWarmUpDuration, inf_turret_warm_up_duration, 1, 0, 10, CFGFLAG_SERVER, "turret warm up duration")
MACRO_CONFIG_INT(InfTurretDmgFactor, inf_turret_dmg_factor, 9, 0, 10, CFGFLAG_SERVER, "how much damage a plasma turret does, 10 == grenade explosion")
MACRO_CONFIG_INT(InfTurretDmgHealthLaser, inf_turret_dmg_health_laser, 3, 0, 10, CFGFLAG_SERVER, "how much damage in life points a laser turret does")
MACRO_CONFIG_INT(InfTurretAmmunition, inf_turret_ammunition, 3, 0, 10, CFGFLAG_SERVER, "number of projectiles per multi-shot (not per zombie)")
MACRO_CONFIG_INT(InfTurretMaxPerPlayer, inf_turret_max_per_player, 3, 0, 10, CFGFLAG_SERVER, "maximal number of turrets per player")

MACRO_CONFIG_INT(InfBlindnessDuration, inf_blindness_duration, 2500, 0, 10000, CFGFLAG_SERVER, "The duration of blindness (in ms)")

//SuperWeapons
MACRO_CONFIG_INT(InfWhiteHoleMinimalKills, inf_white_hole_minimal_kills, 6, 0, 30, CFGFLAG_SERVER, "Minimal number of kills before white hole become available")
MACRO_CONFIG_INT(InfWhiteHoleProbability, inf_white_hole_probability, 20, 0, 100, CFGFLAG_SERVER, "Probability of super weapon being available after MinimalKill requirement")
MACRO_CONFIG_INT(InfWhiteHoleLifeSpan, inf_white_hole_life_span, 20, 0, 100, CFGFLAG_SERVER, "White hole life span")
MACRO_CONFIG_INT(InfWhiteHoleRadius, inf_white_hole_radius, 430, 0, 500, CFGFLAG_SERVER, "Radius of white holes")
MACRO_CONFIG_INT(InfWhiteHoleAffectsHumans, inf_white_hole_affects_humans, 1, 0, 1, CFGFLAG_SERVER, "Makes white holes suck in humans")
MACRO_CONFIG_INT(InfWhiteHoleNumParticles, inf_white_hole_num_particles, 100, 20, 500, CFGFLAG_SERVER, "Number of particles that will be used for a white hole animation")
MACRO_CONFIG_INT(InfWhiteHolePullStrength, inf_white_hole_pull_strength, 40, 0, 1000, CFGFLAG_SERVER, "How strong a white hole sucks players in")

// Deprecated variables
MACRO_CONFIG_INT(InfStunGrenadeMinimalKills, inf_stun_grenade_minimal_kills, 2, 0, 30, CFGFLAG_SERVER, "Deprecated (has no effect now)")
MACRO_CONFIG_INT(InfStunGrenadeProbability, inf_stun_grenade_probability, 30, 0, 100, CFGFLAG_SERVER, "Deprecated (has no effect now)")
MACRO_CONFIG_INT(InfSlimePoisonDuration, inf_slime_poison_duration, 5, 0, 10000, CFGFLAG_SERVER, "Deprecated (has no effect now, use inf_slime_poison_damage instead)")

MACRO_CONFIG_INT(InfFastDownload, inf_fast_download, 1, 0, 1, CFGFLAG_SERVER, "Deprecated (use sv_fast_download instead)")
MACRO_CONFIG_INT(InfMapWindow, inf_map_window, 15, 0, 100, CFGFLAG_SERVER, "Deprecated (use sv_map_window instead)")
