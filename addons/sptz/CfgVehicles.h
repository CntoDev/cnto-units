#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class SoldierEB;
class O_Soldier_base_F : SoldierEB {
    class EventHandlers;
};
class B_TacticalPack_blk;
class B_Kitbag_rgr;

class cnto_sptz_soldier_base : O_Soldier_base_F {
    scope = 0;
    faction = CNTO_SPTZ;
    #define _weaps
    #define _mags \
                  x4(SmokeShell), x2(MiniGrenade)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343, cnto_flecktarn_h_beret
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
    uniformClass = CamoU_TigerJ;
};

/*
 * squad (lead)
 */
class cnto_sptz_sq_sl : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "SQ SL";
    #define _weaps cnto_sptz_ak74m_gl, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VOG25, 9Rnd_45ACP_Mag, \
                  x6(rhs_30Rnd_545x39_AK), x4(rhs_30Rnd_545x39_AK_green)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack = cnto_sptz_sq_sl_pack;
};
class cnto_sptz_sq_sl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, rhs_VOG25);
        xmags(4, rhs_VG40MD_White);
        xmags(4, rhs_VG40MD_Red);
        xmags(4, rhs_VG40MD_Green);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
        xmags(2, 9Rnd_45ACP_Mag);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_sptz_sq_medic : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "SQ Medic";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack = cnto_sptz_sq_medic_pack;
    attendant = 1;
};
class cnto_sptz_sq_medic_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(16, SmokeShell);
        xmags(4, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(40, ACE_fieldDressing);
        xitems(30, ACE_morphine);
        xitems(5, ACE_epinephrine);
        xitems(2, ACE_bloodIV);
    };
};

/*
 * fireteam
 */
class cnto_sptz_ft_tl : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "FT Lead";
    #define _weaps cnto_sptz_ak74m_gl, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VOG25, 9Rnd_45ACP_Mag, \
                  x6(rhs_30Rnd_545x39_AK), x4(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack = cnto_sptz_ft_tl_pack;
};
class cnto_sptz_ft_tl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(8, rhs_VOG25);
        xmags(5, rhs_VG40MD_White);
        xmags(5, rhs_VG40MD_Red);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_sptz_ft_ar : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "FT AR";
    #define _weaps rhs_weap_pkm, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_100Rnd_762x54mmR, 9Rnd_45ACP_Mag, \
                  rhs_100Rnd_762x54mmR, rhs_100Rnd_762x54mmR_green, x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack =;
};

class cnto_sptz_ft_aar : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "FT AAR";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack = cnto_sptz_ft_aar_pack;
};
class cnto_sptz_ft_aar_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(2, rhs_100Rnd_762x54mmR);
        xmags(1, rhs_100Rnd_762x54mmR_green);
        xmags(6, rhs_30Rnd_545x39_AK);
        xmags(2, rhs_30Rnd_545x39_AK_green);
        xmags(2, MiniGrenade);
        xmags(3, SmokeShell);
        xmags(2, SmokeShellGreen);
        xmags(1, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_sptz_ft_at : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "FT AT";
    #define _weaps cnto_sptz_ak74m_flash, tf47_at4_HEDP, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack =;
};

/*
 * platoon (lead)
 */
class cnto_sptz_coy_co : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "COY Commander";
    #define _weaps cnto_sptz_ak74m_gl, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VG40MD_Red, 9Rnd_45ACP_Mag, \
                  x6(rhs_30Rnd_545x39_AK), x3(rhs_30Rnd_545x39_AK_green), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack = cnto_sptz_coy_co_pack;
};
class cnto_sptz_coy_co_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(5, rhs_VG40MD_White);
        xmags(5, rhs_VG40MD_Red);
        xmags(5, rhs_VG40MD_Green);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_sptz_coy_sgt : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "COY Sergeant";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack =;
};

class cnto_sptz_coy_medic : cnto_sptz_sq_medic {
    displayName = "COY Medic";
};

class cnto_sptz_coy_rfl : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "COY Rifleman";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack =;
};

/*
 * MMG
 */
class cnto_sptz_mmg_tl : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "MMG Lead";
    #define _weaps cnto_sptz_ak74m_gl, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VOG25, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack = cnto_sptz_mmg_tl_pack;
};
class cnto_sptz_mmg_tl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(8, rhs_VOG25);
        xmags(2, rhs_VG40MD_White);
        xmags(5, rhs_VG40MD_Red);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_sptz_mmg_gunner : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "MMG Gunner";
    #define _weaps rhs_weap_pkp, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_100Rnd_762x54mmR, 9Rnd_45ACP_Mag, \
                  rhs_100Rnd_762x54mmR, rhs_100Rnd_762x54mmR_green, x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack = cnto_sptz_mmg_gunner_pack;
};
class cnto_sptz_mmg_gunner_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_100Rnd_762x54mmR);
        xmags(1, rhs_100Rnd_762x54mmR_green);
    };
};

class cnto_sptz_mmg_bearer : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "MMG Bearer";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack = cnto_sptz_mmg_bearer_pack;
};
class cnto_sptz_mmg_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_100Rnd_762x54mmR);
        xmags(1, rhs_100Rnd_762x54mmR_green);
    };
};

/*
 * MAT
 */
class cnto_sptz_mat_tl : cnto_sptz_mmg_tl {
    displayName = "MAT Lead";
};

class cnto_sptz_mat_gunner : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "MAT Rocketman";
    #define _weaps cnto_sptz_ak74m_flash, cnto_sptz_rpg7_optic, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_rpg7_PG7VL_mag, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack = cnto_sptz_mat_gunner_pack;
};
class cnto_sptz_mat_gunner_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_rpg7_PG7VL_mag);
        xmags(2, rhs_rpg7_PG7VR_mag);
    };
};

class cnto_sptz_mat_bearer : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "MAT Carrier";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack = cnto_sptz_mat_bearer_pack;
};
class cnto_sptz_mat_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_rpg7_PG7VL_mag);
        xmags(2, rhs_rpg7_PG7VR_mag);
    };
};

/*
 * Mortar
 */
class cnto_sptz_mortar_assist : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "Mortar Ass. Gunner";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x2(SmokeShellGreen), SmokeShellBlue, x6(rhs_30Rnd_545x39_AK), x3(rhs_30Rnd_545x39_AK_green), x1(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm, ACRE_PRC152
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ, ItemGPS
    ADD_GEAR;
    backpack = I_Mortar_01_support_F;
};

class cnto_sptz_mortar_gunner : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "Mortar Gunner";
    #define _weaps cnto_sptz_ak74m_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 9Rnd_45ACP_Mag, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), x2(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm
    #define _linked Helmet_S_tiger, AAFVest01_l_TigerJ
    ADD_GEAR;
    backpack = I_Mortar_01_weapon_F;
};

/* ------------------------------------------------------------------------- */

class cnto_sptz_crew_base : O_Soldier_base_F {
    scope = 0;
    faction = CNTO_SPTZ;
    #define _weaps rhs_weap_aks74un_folded, hgun_P07_F, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, 16Rnd_9x21_Mag, \
                  x2(SmokeShell), x2(SmokeShellGreen), x2(SmokeShellBlue), x2(MiniGrenade), x5(rhs_30Rnd_545x39_AK)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343, cnto_flecktarn_h_beret
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ACE_NVG_Wide
    ASSIGN_GEAR;
};

/*
 * Vehicle Crew
 */
class cnto_sptz_veh_co : cnto_sptz_crew_base {
    scope = 2;
    displayName = "Vehicle Commander";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_TigerJ, CamoH_TigerJ, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = CamoU_khaki;
};

class cnto_sptz_veh_driver : cnto_sptz_crew_base {
    scope = 2;
    displayName = "Vehicle Driver";
    #define _weaps
    #define _mags
    #define _items
    #define _linked AAFVest01_l_TigerJ, CamoH_TigerJ
    ADD_GEAR;
    backpack = cnto_sptz_veh_driver_pack;
    uniformClass = CamoU_khaki;
    engineer = 1;
};
class cnto_sptz_veh_driver_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, rhs_30Rnd_545x39_AK);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class cnto_sptz_veh_gunner : cnto_sptz_crew_base {
    scope = 2;
    displayName = "Vehicle Gunner";
    #define _weaps
    #define _mags
    #define _items
    #define _linked AAFVest01_l_TigerJ, CamoH_TigerJ
    ADD_GEAR;
    backpack =;
    uniformClass = CamoU_khaki;
};

/*
 * Air crew
 */
class cnto_sptz_air_pilot : cnto_sptz_crew_base {
    scope = 2;
    displayName = "Air Pilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_TigerJ, H_PilotHelmetHeli_O, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = U_O_PilotCoveralls;
};

class cnto_sptz_air_copilot : cnto_sptz_crew_base {
    scope = 2;
    displayName = "Air Copilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_TigerJ, H_PilotHelmetHeli_O, ItemGPS
    ADD_GEAR;
    backpack = cnto_sptz_air_copilot_pack;
    uniformClass = U_O_PilotCoveralls;
    engineer = 1;
};
class cnto_sptz_air_copilot_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, rhs_30Rnd_545x39_AK);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

/* ------------------------------------------------------------------------- */

/*
 * Trainer
 */
class cnto_sptz_trainer : cnto_sptz_soldier_base {
    scope = 2;
    displayName = "Trainer";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x4(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), x10(ACE_epinephrine), x5(ACE_bloodIV), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_TigerJ, cnto_flecktarn_h_beret, ItemGPS
    ADD_GEAR;
    backpack =;
    class EventHandlers : EventHandlers {
        class godlike { init = "(_this select 0) call cnto_units_fnc_godlike"; };
    };
    attendant = 1;
    engineer = 1;
    uavHacker = 1;
};

/*
 * GM - completely csptztom soldier, not from base
 */
class cnto_sptz_gm : O_Soldier_base_F {
    scope = 2;
    faction = CNTO_SPTZ;
    displayName = "GM";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x10(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_Flashlight_MX991, ACRE_PRC343, ACRE_PRC152, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ItemGPS, AAFVest01_l_TigerJ, cnto_flecktarn_h_beret
    ASSIGN_GEAR;
    backpack =;
    uniformClass = CamoU_TigerJ;
    class EventHandlers : EventHandlers {
        class godlike { init = "(_this select 0) call cnto_units_fnc_godlike"; };
    };
    attendant = 1;
    engineer = 1;
    uavHacker = 1;
};

/* ------------------------------------------------------------------------- */

#include "groups\units.h"

/* ------------------------------------------------------------------------- */

/*
 * Crates
 */

class Box_EAST_Ammo_F;
class cnto_sptz_resupply_small : Box_EAST_Ammo_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_SPTZ_Supplies;
    displayName = "Infantry Resupply (Small)";
    class TransportWeapons {
        xweaps(1, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(24, rhs_30Rnd_545x39_AK);
        xmags(6, rhs_45Rnd_545X39_AK);
        xmags(4, rhs_100Rnd_762x54mmR);
        xmags(12, SmokeShell);
        xmags(10, MiniGrenade);
        xmags(5, rhs_VOG25);
    };
    class TransportItems {
        xitems(16, ACE_fieldDressing);
        xitems(6, ACE_morphine);
    };
    class TransportBackpacks {};
};

class O_supplyCrate_F;
class cnto_sptz_resupply_medium : O_supplyCrate_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_SPTZ_Supplies;
    displayName = "Infantry Resupply (Medium)";
    class TransportWeapons {
        xweaps(4, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(80, rhs_30Rnd_545x39_AK);
        xmags(20, rhs_30Rnd_545x39_AK_green);
        xmags(12, rhs_100Rnd_762x54mmR);
        xmags(30, SmokeShell);
        xmags(8, SmokeShellGreen);
        xmags(4, SmokeShellBlue);
        xmags(24, MiniGrenade);
        xmags(15, rhs_VOG25);
        xmags(4, 130Rnd_338_Mag);
        xmags(4, rhs_rpg7_PG7VL_mag);
        xmags(2, rhs_rpg7_PG7VR_mag);
    };
    class TransportItems {
        xitems(40, ACE_fieldDressing);
        xitems(20, ACE_morphine);
        xitems(10, ACE_epinephrine);
        xitems(4, ACE_bloodIV);
    };
    class TransportBackpacks {};
};
