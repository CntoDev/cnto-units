#include "\cnto\units\rus\defines.h"
/* reset side setting */
#undef FACTION_SIDE_WEST
#undef FACTION_SIDE_EAST
#undef FACTION_SIDE_GUER
#undef FACTION_SIDE_CIV

/*
 * Basic faction info
 */

/* metadata identifier, for internal use */
#define FACTION_META sptz
/* human-readable name, keep it short */
#define FACTION_HUMAN Spetsnaz
/* one of: WEST, EAST, GUER, CIV */
#define FACTION_SIDE_EAST

/*
 * Loadouts
 */

#define UNIFORM_DEFAULT       CamoU_TigerJ
#define UNIFORM_CREW_VEHICLE  CamoU_khaki

#define VEST_SL     AAFVest01_m_TigerJ
#define VEST_MEDIC  AAFVest01_l_TigerJ
#define VEST_FTL    AAFVest01_m_TigerJ
#define VEST_AR     AAFVest01_h_TigerJ
#define VEST_AAR    AAFVest01_m_TigerJ
#define VEST_OTHER  AAFVest01_l_TigerJ
#define VEST_CREW   AAFVest01_l_TigerJ

#define HELMET_COMMANDER     BoonieH_TigerJ
#define HELMET_LEADER        Helmet_S_tiger
#define HELMET_AR            CamoH_TigerJ
#define HELMET_OTHER         Helmet_S_tiger
#define HELMET_CREW_VEHICLE  Helmet_S_tiger

/*
 * Groups
 */

#define GROUP_SQ1_NAME Sokol
#define GROUP_SQ2_NAME Orel
#define GROUP_SQ3_NAME Merlin
#define GROUP_SQ1_SIGN S
#define GROUP_SQ2_SIGN O
#define GROUP_SQ3_SIGN M

#define GROUP_VEHICLE_NAME Grozney
#define GROUP_VEHICLE_SIGN GRZ
#define GROUP_TANK_NAME Armata
#define GROUP_TANK_SIGN ARM
