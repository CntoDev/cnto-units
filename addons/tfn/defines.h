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
#define FACTION_META tfn
/* human-readable name, keep it short */
#define FACTION_HUMAN Task Force Noctem
/* one of: WEST, EAST, GUER, CIV */
#define FACTION_SIDE_GUER

/*
 * Loadouts
 */

#define UNIFORM_DEFAULT       cnto_flecktarn_u_mediterranean
#define UNIFORM_CREW_PILOT    U_I_pilotCoveralls

#define VEST_SL     cnto_flecktarn_v_s_mediterranean
#define VEST_MEDIC  cnto_flecktarn_v_l_mediterranean
#define VEST_FTL    cnto_flecktarn_v_s_mediterranean
#define VEST_AR     cnto_flecktarn_v_h_mediterranean
#define VEST_AAR    cnto_flecktarn_v_mediterranean
#define VEST_OTHER  cnto_flecktarn_v_l_mediterranean

#define BACKPACK_MAIN  cnto_flecktarn_b_ap_mediterranean
#define BACKPACK_ALT   cnto_flecktarn_b_kb_mediterranean
#define BACKPACK_BIG   B_Carryall_cbr

#define HELMET_COMMANDER      cnto_flecktarn_h_boo_mediterranean
#define HELMET_LEADER         cnto_flecktarn_h_6b27m_mediterranean
#define HELMET_AR             cnto_flecktarn_h_6b27me_mediterranean
#define HELMET_OTHER          cnto_flecktarn_h_6b27m_mediterranean
#define HELMET_CREW_JETPILOT  H_PilotHelmetFighter_I

#define WEAPON_PRIMARY_LEADER  rhs_weap_hk416d145_m320
#define WEAPON_PRIMARY_OTHER   rhs_weap_hk416d10_LMT
#define WEAPON_PRIMARY_AR      rhs_weap_m249_pip_S_vfg
#define WEAPON_PRIMARY_MMG     hlc_lmg_M60E4
#define WEAPON_SECONDARY       rhsusf_weap_glock17g4

#define MAGAZINE_SECONDARY  rhsusf_mag_17Rnd_9x19_JHP

/*
 * Per-role gear assignment
 */

/* use custom weapon for AAR, uses the same ammo as PRIMARY_OTHER */
#define WEAPONS_AAR  hlc_rifle_SAMR, WEAPON_SECONDARY

/*
 * Groups
 */

#define GROUP_SQ1_NAME Templar
#define GROUP_SQ2_NAME Lancer
#define GROUP_SQ3_NAME Dragoon
#define GROUP_SQ1_SIGN T
#define GROUP_SQ2_SIGN L
#define GROUP_SQ3_SIGN D

#define GROUP_VEHICLE_NAME Axe
#define GROUP_VEHICLE_SIGN AXE
#define GROUP_TANK_NAME Knight
#define GROUP_TANK_SIGN KNG

#define GROUP_PILOT_NAME Rapier
#define GROUP_PILOT_SIGN RPI
#define GROUP_CASPILOT_NAME Archer
#define GROUP_CASPILOT_SIGN ARC
#define GROUP_JETPILOT_NAME Falx
#define GROUP_JETPILOT_SIGN FX
