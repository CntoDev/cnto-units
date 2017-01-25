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
#define FACTION_META ch
/* human-readable name, keep it short */
#define FACTION_HUMAN Swiss Army
/* one of: WEST, EAST, GUER, CIV */
#define FACTION_SIDE_WEST

/*
 * Loadouts
 */

/*
 * Tank and APC crews have the same uniform as riflemen, with only
 * a different helmet (though the helmets actually belong to the vehicle,
 * not the soldier).
 */
#define UNIFORM_DEFAULT       CamoU_alpenflage
#define UNIFORM_CREW_VEHICLE  CamoU_alpenflage
#define UNIFORM_CREW_PILOT    U_I_pilotCoveralls

#define VEST_SL     AAFVest01_l_m81
#define VEST_MEDIC  AAFVest01_l_m81
#define VEST_FTL    AAFVest01_l_m81
#define VEST_AR     AAFVest01_l_m81
#define VEST_AAR    AAFVest01_l_m81
#define VEST_OTHER  AAFVest01_l_m81

#define BACKPACK_MAIN  B_AssaultPack_rgr
#define BACKPACK_ALT   B_Kitbag_rgr
#define BACKPACK_BIG   B_Carryall_oli

#define HELMET_COMMANDER      CamoH_alpenflage
#define HELMET_LEADER         CamoH_alpenflage
#define HELMET_AR             CamoH_alpenflage
#define HELMET_OTHER          CamoH_alpenflage

#define BINOCULARS       Binocular
#define BINOCULARS_CREW  Binocular

//railed variant hlc_rifle_stgw57_RIS exists in arsenal
//if we really need those fancy scopes
#define WEAPON_PRIMARY_LEADER  hlc_rifle_stgw57
#define WEAPON_PRIMARY_OTHER   hlc_rifle_stgw57
/*
 * not sure if we still have crew served MMGs, but the MG 51 (7.5mm)
 * (based on the MG 42, as is the MG 3) was in service,
 * actually as SAW (AR weapon), but the standard SAW is now the M249
 * SF have crew served .50 cal though...
 * since the Riflemen get 7.5mm rifles, we could as well fit the ARs
 * with 7.5mm machineguns and not have MMG...
 */
#define WEAPON_PRIMARY_MMG     hlc_lmg_MG3_optic
//Stgw 57 has an integrated bipod
#define WEAPON_PRIMARY_DMT     cnto_ch_stgw57_optic
//IRL: Air crews don't have rifles, APC crews have standard infantry weapons
#define WEAPON_PRIMARY_CREW    hlc_rifle_stgw57_commando
//IRL: either SIG P220 (9mm Para, 9+1 Rnd) or SIG P226 (9mm Para, 15+1 Rnd, SF)
//#define WEAPON_SECONDARY           rhsusf_weap_m9
#define WEAPON_SECONDARY_LEADER    rhs_weap_M320
//not much to chose from in arsenal, so let's stick with this one;
//IRL: Panzerfaust 3
//#define WEAPON_LAUNCHER            rhs_weap_M136
//IRL: I don't think we have man portable MAT weapons.
//#define WEAPON_LAUNCHER_MAT        cnto_us_m3maaws_optic

#define MAGAZINE_PRIMARY             hlc_24Rnd_75x55_B_stgw
#define MAGAZINE_PRIMARY_TRACER      hlc_24Rnd_75x55_T_stgw
#define MAGAZINE_PRIMARY_MMG         hlc_100Rnd_762x51_B_MG3
//white tracers
#define MAGAZINE_PRIMARY_MMG_TRACER  hlc_100Rnd_762x51_T_MG3
#define MAGAZINE_PRIMARY_DMT         hlc_24Rnd_75x55_B_stgw

#define RESUPPLY_BOX_SMALL   Box_NATO_Ammo_F
#define RESUPPLY_BOX_MEDIUM  B_supplyCrate_F

/*
 * Per-role gear assignment
 *
 * IRL, infantry doesn't get hanguns. Officers and air crew would have
 * a pistol, but no rifle. Let's just say this is a special forces group
 * and give everyone a pistol.
 */

#define WEAPONS_LEADER               WEAPON_PRIMARY_LEADER, WEAPON_SECONDARY_LEADER

#define MAGAZINES_LOADED_LEADER      MAGAZINE_PRIMARY,      MAGAZINE_GL_HE
#define MAGAZINES_LOADED_LEADER_PLT  MAGAZINE_PRIMARY,      MAGAZINE_GL_SMOKE_RED

//remove pistol mag, cause they've got GL as secondary
#define MAGAZINES_VEST_LEADER        x6(MAGAZINE_PRIMARY),  x4(MAGAZINE_PRIMARY_TRACER)

/* inherit from US, might have to adapt numbers though
#define MAGAZINES_VEST_OTHER         x8(MAGAZINE_PRIMARY),     x2(MAGAZINE_PRIMARY_TRACER), MAGAZINE_SECONDARY
#define MAGAZINES_VEST_AR            x2(MAGAZINE_PRIMARY_AR),  MAGAZINE_SECONDARY
#define MAGAZINES_VEST_MMG           x6(MAGAZINE_SECONDARY),   x6(MiniGrenade)
#define MAGAZINES_VEST_MAT           MAGAZINES_VEST_OTHER
#define MAGAZINES_VEST_DMT           x8(MAGAZINE_PRIMARY_DMT), MAGAZINE_SECONDARY
#define MAGAZINES_VEST_ENG           x4(MAGAZINE_PRIMARY)
#define MAGAZINES_VEST_CREW          x4(MAGAZINE_PRIMARY_CREW)
*/

/* inherit from US, might have to adapt numbers though
#define MAGAZINES_PACK_AAR           xmags(4, MAGAZINE_PRIMARY_AR); \
                                     xmags(8, MAGAZINE_PRIMARY);
#define MAGAZINES_PACK_MMG           xmags(4, MAGAZINE_PRIMARY_MMG); \
                                     xmags(1, MAGAZINE_PRIMARY_MMG_TRACER);
#define MAGAZINES_PACK_MAT           xmags(2, MAGAZINE_LAUNCHER_MAT_PRI); \
                                     xmags(1, MAGAZINE_LAUNCHER_MAT_SEC);
#define MAGAZINES_PACK_CREW          xmags(4, MAGAZINE_PRIMARY);
*/

/*
 * Groups
 */

/*
 * Ambos, Bivio, Canale, Dimitri are actually the designations of the four platoons in a company,
 * but I'll put them as squad names here.
 * IRL, the squads are numbered uno, due, tre, quattro. And the Fireteams are Alpha und Bravo.
 */
#define GROUP_SQ1_NAME Ambos
#define GROUP_SQ2_NAME Bivio
#define GROUP_SQ3_NAME Canale

/*
 * Swiss Air Force doesn't have CAS...
 */
