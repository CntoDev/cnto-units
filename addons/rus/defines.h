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
#define FACTION_META rus
/* human-readable name, keep it short */
#define FACTION_HUMAN Russia
/* one of: WEST, EAST, GUER, CIV */
#define FACTION_SIDE_EAST

/*
 * Loadouts
 */

#define UNIFORM_DEFAULT       rhsgref_uniform_ttsko_mountain
#define UNIFORM_CREW_VEHICLE  rhs_uniform_gorka_r_g
#define UNIFORM_CREW_PILOT    U_O_PilotCoveralls

#define VEST_SL     rhs_6b23_6sh116_vog_od
#define VEST_MEDIC  rhs_6b23_6sh116_od
#define VEST_FTL    rhs_6b23_6sh116_vog_od
#define VEST_AR     rhs_6b23_6sh116_od
#define VEST_AAR    rhs_6b23_6sh116_od
#define VEST_OTHER  rhs_6b23_6sh116_od
#define VEST_CREW   rhs_6b23_6sh116_od

#define BACKPACK_MAIN  B_AssaultPack_rgr
#define BACKPACK_ALT   B_Kitbag_rgr
#define BACKPACK_BIG   B_Carryall_oli

#define HELMET_COMMANDER      rhs_6b7_1m_olive
#define HELMET_LEADER         rhs_6b7_1m_olive
#define HELMET_AR             rhs_6b7_1m_olive
#define HELMET_OTHER          rhs_6b7_1m_olive
#define HELMET_CREW_VEHICLE   rhs_6b7_1m_olive
#define HELMET_CREW_PILOT     H_PilotHelmetHeli_O
#define HELMET_CREW_JETPILOT  H_PilotHelmetFighter_O

#define WEAPON_PRIMARY_LEADER  rhs_weap_ak74m_gp25_npz
#define WEAPON_PRIMARY_OTHER   rhs_weap_ak74m_camo_npz
#define WEAPON_PRIMARY_AR      rhs_weap_pkm
#define WEAPON_PRIMARY_MMG     rhs_weap_pkp
#define WEAPON_PRIMARY_CREW    rhs_weap_aks74un_folded
#define WEAPON_SECONDARY       rhs_weap_pya
#define WEAPON_LAUNCHER        rhs_weap_rpg26
#define WEAPON_LAUNCHER_MAT    cnto_rus_rpg7_optic

#define MAGAZINE_PRIMARY             rhs_30Rnd_545x39_AK
#define MAGAZINE_PRIMARY_TRACER      rhs_30Rnd_545x39_AK_green
#define MAGAZINE_PRIMARY_AR          rhs_100Rnd_762x54mmR
#define MAGAZINE_PRIMARY_MMG         rhs_100Rnd_762x54mmR
#define MAGAZINE_PRIMARY_MMG_TRACER  rhs_100Rnd_762x54mmR_green
#define MAGAZINE_SECONDARY           rhs_mag_9x19_17
#define MAGAZINE_LAUNCHER_MAT_PRI    rhs_rpg7_PG7VL_mag
#define MAGAZINE_LAUNCHER_MAT_SEC    rhs_rpg7_OG7V_mag

#define MAGAZINE_GL_HE           rhs_VOG25
#define MAGAZINE_GL_SMOKE_WHITE  rhs_GRD40_White
#define MAGAZINE_GL_SMOKE_RED    rhs_GRD40_Red
#define MAGAZINE_GL_SMOKE_GREEN  rhs_GRD40_Green

#define FLASHLIGHT  rhs_acc_2dpZenit

#define RESUPPLY_BOX_SMALL   Box_EAST_Ammo_F
#define RESUPPLY_BOX_MEDIUM  O_supplyCrate_F

/*
 * Per-role gear assignment
 */

/* PK ammo is heavy - give 1 box less to AAR and use a bigger
 * backpack for MMG */
#define MAGAZINES_PACK_AAR  xmags(3, MAGAZINE_PRIMARY_AR); \
                            xmags(8, MAGAZINE_PRIMARY);
#define BACKPACK_MMG        BACKPACK_ALT

/* RPGv7 is shorter-range and has lighter rockets, give MAT more
 * and use smaller backpacks, though make HEDP just HE (above) */
#define BACKPACK_MAT        BACKPACK_MAIN
#define MAGAZINES_PACK_MAT  xmags(3, MAGAZINE_LAUNCHER_MAT_PRI); \
                            xmags(2, MAGAZINE_LAUNCHER_MAT_SEC);

/*
 * Groups
 */

#define GROUP_SQ1_NAME Anton
#define GROUP_SQ2_NAME Boris
#define GROUP_SQ3_NAME Cheslav
#define GROUP_SQ1_SIGN A
#define GROUP_SQ2_SIGN B
#define GROUP_SQ3_SIGN C

#define GROUP_PLT_NAME Company
#define GROUP_PLT_SIGN COY

#define GROUP_VEHICLE_NAME Medved
#define GROUP_VEHICLE_SIGN MDVD
#define GROUP_TANK_NAME Kamchatka
#define GROUP_TANK_SIGN KMCH

#define GROUP_PILOT_NAME Yastreb
#define GROUP_PILOT_SIGN YSTB
#define GROUP_CASPILOT_NAME Sova
#define GROUP_CASPILOT_SIGN SV
#define GROUP_JETPILOT_NAME Kanyuk
#define GROUP_JETPILOT_SIGN KN
