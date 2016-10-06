/*
 * Basic faction info
 */

/* metadata identifier, for internal use */
#define FACTION_META us
/* human-readable name, keep it short */
#define FACTION_HUMAN US
/* one of: WEST, EAST, GUER, CIV */
#define FACTION_SIDE_WEST

/*
 * Loadouts
 */

#define UNIFORM_DEFAULT       rhs_uniform_cu_ocp
#define UNIFORM_CREW_VEHICLE  U_BG_Guerrilla_6_1
#define UNIFORM_CREW_PILOT    U_B_PilotCoveralls

#define VEST_SL     rhsusf_iotv_ocp_Squadleader
#define VEST_MEDIC  rhsusf_iotv_ocp_Medic
#define VEST_FTL    rhsusf_iotv_ocp_Grenadier
#define VEST_AR     rhsusf_iotv_ocp_SAW
#define VEST_AAR    rhsusf_iotv_ocp_Teamleader
#define VEST_OTHER  rhsusf_iotv_ocp_Rifleman
#define VEST_CREW   TacVest_black

#define BACKPACK_MAIN  B_AssaultPack_rgr
#define BACKPACK_ALT   B_Kitbag_rgr
#define BACKPACK_BIG   B_Carryall_cbr

#define HELMET_COMMANDER      rhsusf_patrolcap_ocp
#define HELMET_LEADER         rhsusf_ach_helmet_headset_ocp
#define HELMET_AR             rhsusf_ach_helmet_ESS_ocp
#define HELMET_OTHER          rhsusf_ach_helmet_ocp
#define HELMET_CREW_VEHICLE   H_HelmetCrew_I
#define HELMET_CREW_PILOT     H_PilotHelmetHeli_B
#define HELMET_CREW_JETPILOT  H_PilotHelmetFighter_B

#define BINOCULARS       ACE_VectorDay
#define BINOCULARS_CREW  ACE_Vector


#define WEAPON_PRIMARY_LEADER  rhs_weap_m4a1_carryhandle_m203S
#define WEAPON_PRIMARY_OTHER   rhs_weap_m4a1_carryhandle_pmag
#define WEAPON_PRIMARY_AR      rhs_weap_m249_pip_L
#define WEAPON_PRIMARY_MMG     hlc_lmg_m60
#define WEAPON_PRIMARY_CREW    rhs_weap_m4_carryhandle_mstock
#define WEAPON_SECONDARY       rhsusf_weap_m9
#define WEAPON_LAUNCHER        rhs_weap_M136
#define WEAPON_LAUNCHER_MAT    cnto_us_m3maaws_optic

#define MAGAZINE_PRIMARY             rhs_mag_30Rnd_556x45_M855A1_Stanag
#define MAGAZINE_PRIMARY_TRACER      rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
#define MAGAZINE_PRIMARY_AR          rhsusf_100Rnd_556x45_soft_pouch
#define MAGAZINE_PRIMARY_MMG         hlc_100Rnd_762x51_M_M60E4
#define MAGAZINE_PRIMARY_MMG_TRACER  hlc_100Rnd_762x51_T_M60E4
#define MAGAZINE_SECONDARY           rhsusf_mag_15Rnd_9x19_JHP
#define MAGAZINE_LAUNCHER_MAT_PRI    tf47_m3maaws_HEAT
#define MAGAZINE_LAUNCHER_MAT_SEC    tf47_m3maaws_HEDP

#define MAGAZINE_GL_HE           1Rnd_HE_Grenade_shell
#define MAGAZINE_GL_SMOKE_WHITE  1Rnd_Smoke_Grenade_shell
#define MAGAZINE_GL_SMOKE_RED    1Rnd_SmokeRed_Grenade_shell
#define MAGAZINE_GL_SMOKE_GREEN  1Rnd_SmokeGreen_Grenade_shell

#define FLASHLIGHT  rhsusf_acc_M952V

#define RESUPPLY_BOX_SMALL   Box_NATO_Ammo_F
#define RESUPPLY_BOX_MEDIUM  B_supplyCrate_F

/*
 * Per-role gear assignment
 */

#define WEAPONS_LEADER               WEAPON_PRIMARY_LEADER, WEAPON_SECONDARY
#define WEAPONS_OTHER                WEAPON_PRIMARY_OTHER,  WEAPON_SECONDARY
#define WEAPONS_AR                   WEAPON_PRIMARY_AR,     WEAPON_SECONDARY
#define WEAPONS_AAR                  WEAPONS_OTHER
#define WEAPONS_AT                   WEAPON_PRIMARY_OTHER,  WEAPON_LAUNCHER,     WEAPON_SECONDARY
#define WEAPONS_MMG                  WEAPON_PRIMARY_MMG,    WEAPON_SECONDARY
#define WEAPONS_MAT                  WEAPON_PRIMARY_OTHER,  WEAPON_LAUNCHER_MAT, WEAPON_SECONDARY
#define WEAPONS_CREW                 WEAPON_PRIMARY_CREW,   WEAPON_SECONDARY

#define MAGAZINES_LOADED_LEADER      MAGAZINE_PRIMARY,     MAGAZINE_GL_HE,            MAGAZINE_SECONDARY
#define MAGAZINES_LOADED_LEADER_PLT  MAGAZINE_PRIMARY,     MAGAZINE_GL_SMOKE_RED,     MAGAZINE_SECONDARY
#define MAGAZINES_LOADED_OTHER       MAGAZINE_PRIMARY,     MAGAZINE_SECONDARY
#define MAGAZINES_LOADED_AR          MAGAZINE_PRIMARY_AR,  MAGAZINE_SECONDARY
#define MAGAZINES_LOADED_MMG         MAGAZINE_PRIMARY_MMG, MAGAZINE_SECONDARY
#define MAGAZINES_LOADED_MAT         MAGAZINE_PRIMARY,     MAGAZINE_LAUNCHER_MAT_PRI, MAGAZINE_SECONDARY
#define MAGAZINES_LOADED_CREW        MAGAZINE_PRIMARY,     MAGAZINE_SECONDARY

#define MAGAZINES_CARRY_LEADER       x6(MAGAZINE_PRIMARY),     x4(MAGAZINE_PRIMARY_TRACER), MAGAZINE_SECONDARY
#define MAGAZINES_CARRY_OTHER        x8(MAGAZINE_PRIMARY),     x2(MAGAZINE_PRIMARY_TRACER), MAGAZINE_SECONDARY
#define MAGAZINES_CARRY_AR           x3(MAGAZINE_PRIMARY_AR),  MAGAZINE_SECONDARY
#define MAGAZINES_CARRY_MMG          x3(MAGAZINE_PRIMARY_MMG), MAGAZINE_PRIMARY_MMG_TRACER, MAGAZINE_SECONDARY
#define MAGAZINES_CARRY_MAT          MAGAZINES_CARRY_OTHER
#define MAGAZINES_CARRY_CREW         x5(MAGAZINE_PRIMARY)

/*
 * Groups
 */

#define GROUP_SQ1_NAME Alpha
#define GROUP_SQ2_NAME Bravo
#define GROUP_SQ3_NAME Charlie
#define GROUP_SQ1_SIGN A
#define GROUP_SQ2_SIGN B
#define GROUP_SQ3_SIGN C

#define GROUP_PLT_NAME Platoon
#define GROUP_PLT_SIGN PLT

#define GROUP_VEHICLE_NAME Dagger
#define GROUP_VEHICLE_SIGN DGR
#define GROUP_TANK_NAME Thunder
#define GROUP_TANK_SIGN THD

#define GROUP_PILOT_NAME Nightbird
#define GROUP_PILOT_SIGN NB
#define GROUP_CASPILOT_NAME Reaper
#define GROUP_CASPILOT_SIGN RPR
#define GROUP_JETPILOT_NAME Wildcat
#define GROUP_JETPILOT_SIGN WILD
