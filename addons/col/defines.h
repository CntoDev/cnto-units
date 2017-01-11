#include "\cnto\units\us\defines.h"
/* reset side setting */
#undef FACTION_SIDE_WEST
#undef FACTION_SIDE_EAST
#undef FACTION_SIDE_GUER
#undef FACTION_SIDE_CIV

/*
 * Basic faction info
 */

/* metadata identifier, for internal use */
#define FACTION_META col
/* human-readable name, keep it short */
#define FACTION_HUMAN Colombia
/* one of: WEST, EAST, GUER, CIV */
#define FACTION_SIDE_GUER

/*
 * Loadouts
 */

#define UNIFORM_DEFAULT       CamoU_CamoW
#define UNIFORM_CREW_VEHICLE  CamoU_Black

#define VEST_SL     AAFVest01_m_CamoW
#define VEST_MEDIC  AAFVest01_l_CamoW
#define VEST_FTL    AAFVest01_m_CamoW
#define VEST_AR     AAFVest01_h_CamoW
#define VEST_AAR    AAFVest01_m_CamoW
#define VEST_OTHER  AAFVest01_l_CamoW

#define BACKPACK_MAIN  B_AssaultPack_blk
#define BACKPACK_ALT   B_Kitbag_rgr
#define BACKPACK_BIG   B_Carryall_oli

#define HELMET_COMMANDER      BoonieH_CamoW
#define HELMET_LEADER         CamoH_CamoW
#define HELMET_AR             CamoH_CamoW
#define HELMET_OTHER          CamoH_CamoW
#define HELMET_CREW_VEHICLE   CamoH_CamoW
#define HELMET_CREW_JETPILOT  H_PilotHelmetFighter_I

#define WEAPON_PRIMARY_LEADER  HLC_Rifle_g3ka4_GL
#define WEAPON_PRIMARY_OTHER   hlc_rifle_g3ka4
#define WEAPON_PRIMARY_AR      rhs_weap_m249_pip_L
#define WEAPON_PRIMARY_CREW    hlc_smg_mp5a4
#define WEAPON_PRIMARY_MMG     hlc_lmg_m60
#define WEAPON_PRIMARY_DMT     cnto_col_psg_optic_bipod
#define WEAPON_SECONDARY       rhsusf_weap_m1911a1
#define WEAPON_LAUNCHER_MAT    cnto_col_rpg7_optic

#define MAGAZINE_PRIMARY             hlc_20rnd_762x51_Mk316_G3
#define MAGAZINE_PRIMARY_TRACER      hlc_20rnd_762x51_T_G3
#define MAGAZINE_PRIMARY_AR          rhsusf_200Rnd_556x45_soft_pouch
#define MAGAZINE_PRIMARY_MMG         hlc_100Rnd_762x51_Barrier_M60E4
#define MAGAZINE_PRIMARY_MMG_TRACER  hlc_100Rnd_762x51_T_M60E4
#define MAGAZINE_PRIMARY_DMT         hlc_20rnd_762x51_barrier_G3
#define MAGAZINE_PRIMARY_CREW        hlc_30Rnd_9x19_B_MP5
#define MAGAZINE_SECONDARY           rhsusf_mag_7x45acp_MHP
#define MAGAZINE_LAUNCHER_MAT_PRI    rhs_rpg7_PG7VL_mag
#define MAGAZINE_LAUNCHER_MAT_SEC    rhs_rpg7_OG7V_mag

/*
 * Per-role gear assignment
 */

/* vests cannot hold as much 7.62 ammo, lower the counts */
#define MAGAZINES_VEST_LEADER  x4(MAGAZINE_PRIMARY), x3(MAGAZINE_PRIMARY_TRACER), MAGAZINE_SECONDARY
#define MAGAZINES_VEST_OTHER   x5(MAGAZINE_PRIMARY), x2(MAGAZINE_PRIMARY_TRACER), MAGAZINE_SECONDARY
#define MAGAZINES_VEST_ENG     x2(MAGAZINE_PRIMARY)

/* 200rnd belts used, weight twice as much, reduce count to half */
#define MAGAZINES_VEST_AR      x1(MAGAZINE_PRIMARY_AR), MAGAZINE_SECONDARY
#define MAGAZINES_PACK_AAR     xmags(2, MAGAZINE_PRIMARY_AR); \
                               xmags(8, MAGAZINE_PRIMARY);

/* NIArsenal M60 has much lighter MG boxes, use smaller backpacks */
#define BACKPACK_MMG  BACKPACK_MAIN

/* RPGv7 is shorter-range and has lighter rockets, give MAT more
 * and use smaller backpacks, though make HEDP just HE (above) */
#define BACKPACK_MAT        BACKPACK_MAIN
#define MAGAZINES_PACK_MAT  xmags(3, MAGAZINE_LAUNCHER_MAT_PRI); \
                            xmags(2, MAGAZINE_LAUNCHER_MAT_SEC);

/*
 * Groups
 */

#define GROUP_SQ1_NAME Ranger
#define GROUP_SQ2_NAME Marine
#define GROUP_SQ3_NAME Beret
#define GROUP_SQ1_SIGN R
#define GROUP_SQ2_SIGN M
#define GROUP_SQ3_SIGN B

#define GROUP_PLT_NAME Company
#define GROUP_PLT_SIGN COY

#define GROUP_VEHICLE_NAME Sabre
#define GROUP_VEHICLE_SIGN SBR
#define GROUP_TANK_NAME Paladin
#define GROUP_TANK_SIGN PLD

#define GROUP_PILOT_NAME Falcon
#define GROUP_PILOT_SIGN FLC
#define GROUP_CASPILOT_NAME Tempest
#define GROUP_CASPILOT_SIGN TMP
#define GROUP_JETPILOT_NAME Ravager
#define GROUP_JETPILOT_SIGN RVG
