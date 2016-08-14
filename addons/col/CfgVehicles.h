#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class SoldierGB;
class I_Soldier_base_F : SoldierGB {
    class EventHandlers;
};
class B_TacticalPack_blk;
class B_Kitbag_rgr;

class cnto_col_soldier_base : I_Soldier_base_F {
    scope = 0;
    faction = CNTO_COL;
    #define _weaps
    #define _mags \
                  x4(SmokeShell), x2(MiniGrenade)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343, cnto_flecktarn_h_beret
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
    uniformClass = CamoU_CamoW;
};

/*
 * squad (lead)
 */
class cnto_col_sq_sl : cnto_col_soldier_base {
    scope = 2;
    displayName = "SQ SL";
    #define _weaps cnto_col_g3_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x4(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack = cnto_col_sq_sl_pack;
};
class cnto_col_sq_sl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, 1Rnd_HE_Grenade_shell);
        xmags(4, 1Rnd_Smoke_Grenade_shell);
        xmags(4, 1Rnd_SmokeRed_Grenade_shell);
        xmags(4, 1Rnd_SmokeGreen_Grenade_shell);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_col_sq_medic : cnto_col_soldier_base {
    scope = 2;
    displayName = "SQ Medic";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack = cnto_col_sq_medic_pack;
    attendant = 1;
};
class cnto_col_sq_medic_pack : B_Kitbag_rgr {
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
class cnto_col_ft_tl : cnto_col_soldier_base {
    scope = 2;
    displayName = "FT Lead";
    #define _weaps cnto_col_g3_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x4(hlc_20rnd_762x51_b_G3), x3(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack = cnto_col_ft_tl_pack;
};
class cnto_col_ft_tl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(8, 1Rnd_HE_Grenade_shell);
        xmags(5, 1Rnd_Smoke_Grenade_shell);
        xmags(5, 1Rnd_SmokeRed_Grenade_shell);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_col_ft_ar : cnto_col_soldier_base {
    scope = 2;
    displayName = "FT AR";
    #define _weaps cnto_col_m249, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_200rnd_556x45_M_SAW, 9Rnd_45ACP_Mag, \
                  hlc_200rnd_556x45_M_SAW, x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack =;
};

class cnto_col_ft_aar : cnto_col_soldier_base {
    scope = 2;
    displayName = "FT AAR";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack = cnto_col_ft_aar_pack;
};
class cnto_col_ft_aar_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(1, hlc_200rnd_556x45_T_SAW);
        xmags(6, hlc_20rnd_762x51_b_G3);
        xmags(2, hlc_20rnd_762x51_T_G3);
        xmags(2, MiniGrenade);
        xmags(3, SmokeShell);
        xmags(2, SmokeShellGreen);
        xmags(1, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_col_ft_at : cnto_col_soldier_base {
    scope = 2;
    displayName = "FT AT";
    #define _weaps cnto_col_g3_flash, tf47_at4_HEDP, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack =;
};

/*
 * platoon (lead)
 */
class cnto_col_coy_co : cnto_col_soldier_base {
    scope = 2;
    displayName = "COY Commander";
    #define _weaps cnto_col_g3_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 1Rnd_SmokeRed_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x4(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack = cnto_col_coy_co_pack;
};
class cnto_col_coy_co_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(5, 1Rnd_Smoke_Grenade_shell);
        xmags(5, 1Rnd_SmokeRed_Grenade_shell);
        xmags(5, 1Rnd_SmokeGreen_Grenade_shell);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_col_coy_sgt : cnto_col_soldier_base {
    scope = 2;
    displayName = "COY Sergeant";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x4(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack =;
};

class cnto_col_coy_medic : cnto_col_sq_medic {
    displayName = "COY Medic";
};

class cnto_col_coy_rfl : cnto_col_soldier_base {
    scope = 2;
    displayName = "COY Rifleman";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack = cnto_col_coy_rfl_pack;
};
class cnto_col_coy_rfl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(5, hlc_20rnd_762x51_b_G3);
        xmags(3, hlc_20rnd_762x51_T_G3);
    };
};

/*
 * MMG
 */
class cnto_col_mmg_tl : cnto_col_soldier_base {
    scope = 2;
    displayName = "MMG Lead";
    #define _weaps cnto_col_g3_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x4(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack = cnto_col_mmg_tl_pack;
};
class cnto_col_mmg_tl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(8, 1Rnd_HE_Grenade_shell);
        xmags(2, 1Rnd_Smoke_Grenade_shell);
        xmags(5, 1Rnd_SmokeRed_Grenade_shell);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_col_mmg_gunner : cnto_col_soldier_base {
    scope = 2;
    displayName = "MMG Gunner";
    #define _weaps MMG_02_black_F, hgun_ACPC2_F, Throw, Put
    #define _mags 130Rnd_338_Mag, 9Rnd_45ACP_Mag, \
                  130Rnd_338_Mag, x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack = cnto_col_mmg_gunner_pack;
};
class cnto_col_mmg_gunner_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(3, 130Rnd_338_Mag);
    };
};

class cnto_col_mmg_bearer : cnto_col_soldier_base {
    scope = 2;
    displayName = "MMG Bearer";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack = cnto_col_mmg_bearer_pack;
};
class cnto_col_mmg_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(4, 130Rnd_338_Mag);
    };
};

/*
 * MAT
 */
class cnto_col_mat_tl : cnto_col_mmg_tl {
    displayName = "MAT Lead";
};

class cnto_col_mat_gunner : cnto_col_soldier_base {
    scope = 2;
    displayName = "MAT Rocketman";
    #define _weaps cnto_col_g3_flash, cnto_col_rpg7_optic, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, rhs_rpg7_PG7VL_mag, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack = cnto_col_mat_gunner_pack;
};
class cnto_col_mat_gunner_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_rpg7_PG7VL_mag);
        xmags(2, rhs_rpg7_PG7VR_mag);
    };
};

class cnto_col_mat_bearer : cnto_col_soldier_base {
    scope = 2;
    displayName = "MAT Carrier";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack = cnto_col_mat_bearer_pack;
};
class cnto_col_mat_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(5, rhs_rpg7_PG7VL_mag);
        xmags(3, rhs_rpg7_PG7VR_mag);
    };
};

/*
 * Mortar
 */
class cnto_col_mortar_assist : cnto_col_soldier_base {
    scope = 2;
    displayName = "Mortar Ass. Gunner";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  SmokeShellGreen, SmokeShellBlue, x4(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm, ACRE_PRC152
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW, ItemGPS
    ADD_GEAR;
    backpack = I_Mortar_01_support_F;
};

class cnto_col_mortar_gunner : cnto_col_soldier_base {
    scope = 2;
    displayName = "Mortar Gunner";
    #define _weaps cnto_col_g3_flash, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_20rnd_762x51_b_G3, 9Rnd_45ACP_Mag, \
                  x5(hlc_20rnd_762x51_b_G3), x2(hlc_20rnd_762x51_T_G3), x1(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm
    #define _linked AAFVest01_l_CamoW, CamoH_CamoW
    ADD_GEAR;
    backpack = I_Mortar_01_weapon_F;
};

/* ------------------------------------------------------------------------- */

class cnto_col_crew_base : I_Soldier_base_F {
    scope = 0;
    faction = CNTO_COL;
    #define _weaps hlc_smg_mp5a4, hgun_P07_F, Throw, Put
    #define _mags hlc_30Rnd_9x19_B_MP5, 16Rnd_9x21_Mag, \
                  x2(SmokeShell), x2(SmokeShellGreen), x2(SmokeShellBlue), x2(MiniGrenade), x5(hlc_30Rnd_9x19_B_MP5)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343, cnto_flecktarn_h_beret
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ACE_NVG_Wide
    ASSIGN_GEAR;
};

/*
 * Vehicle Crew
 */
class cnto_col_veh_co : cnto_col_crew_base {
    scope = 2;
    displayName = "Vehicle Commander";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_h_CamoW, CamoH_Black, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = CamoU_Black;
};

class cnto_col_veh_driver : cnto_col_crew_base {
    scope = 2;
    displayName = "Vehicle Driver";
    #define _weaps
    #define _mags
    #define _items
    #define _linked AAFVest01_h_CamoW, CamoH_Black
    ADD_GEAR;
    backpack = cnto_col_veh_driver_pack;
    uniformClass = CamoU_Black;
    engineer = 1;
};
class cnto_col_veh_driver_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, hlc_20rnd_762x51_b_G3);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class cnto_col_veh_gunner : cnto_col_crew_base {
    scope = 2;
    displayName = "Vehicle Gunner";
    #define _weaps
    #define _mags
    #define _items
    #define _linked AAFVest01_h_CamoW, CamoH_Black
    ADD_GEAR;
    backpack =;
    uniformClass = CamoU_Black;
    engineer = 1;
};

/*
 * Air crew
 */
class cnto_col_air_pilot : cnto_col_crew_base {
    scope = 2;
    displayName = "Air Pilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_CamoW, H_PilotHelmetHeli_B, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = U_I_pilotCoveralls;
    engineer = 1;
};

class cnto_col_air_copilot : cnto_col_crew_base {
    scope = 2;
    displayName = "Air Copilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_CamoW, H_PilotHelmetHeli_B, ItemGPS
    ADD_GEAR;
    backpack = cnto_col_air_copilot_pack;
    uniformClass = U_I_pilotCoveralls;
    engineer = 1;
};
class cnto_col_air_copilot_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportItems {
        xitems(1, ToolKit);
    };
};

/* ------------------------------------------------------------------------- */

/*
 * Trainer
 */
class cnto_col_trainer : cnto_col_soldier_base {
    scope = 2;
    displayName = "Trainer";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x4(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), x10(ACE_epinephrine), x5(ACE_bloodIV), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked AAFVest01_l_CamoW, cnto_flecktarn_h_beret, ItemGPS
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
 * GM - completely ccoltom soldier, not from base
 */
class cnto_col_gm : I_Soldier_base_F {
    scope = 2;
    faction = CNTO_COL;
    displayName = "GM";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x10(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_Flashlight_MX991, ACRE_PRC343, ACRE_PRC152, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ItemGPS, cnto_flecktarn_h_beret
    ASSIGN_GEAR;
    backpack =;
    uniformClass = CamoU_CamoW;
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

class Box_IND_Ammo_F;
class cnto_col_resupply_small : Box_IND_Ammo_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_COL_Supplies;
    displayName = "Infantry Resupply (Small)";
    class TransportWeapons {
        xweaps(1, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(24, hlc_20rnd_762x51_b_G3);
        xmags(6, hlc_20rnd_762x51_T_G3);
        xmags(4, hlc_200rnd_556x45_M_SAW);
        xmags(12, SmokeShell);
        xmags(10, MiniGrenade);
        xmags(5, 1Rnd_HE_Grenade_shell);
    };
    class TransportItems {
        xitems(16, ACE_fieldDressing);
        xitems(6, ACE_morphine);
    };
    class TransportBackpacks {};
};

class I_supplyCrate_F;
class cnto_col_resupply_medium : I_supplyCrate_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_COL_Supplies;
    displayName = "Infantry Resupply (Medium)";
    class TransportWeapons {
        xweaps(4, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(80, hlc_20rnd_762x51_b_G3);
        xmags(20, hlc_20rnd_762x51_T_G3);
        xmags(12, hlc_200rnd_556x45_M_SAW);
        xmags(30, SmokeShell);
        xmags(8, SmokeShellGreen);
        xmags(4, SmokeShellBlue);
        xmags(24, MiniGrenade);
        xmags(15, 1Rnd_HE_Grenade_shell);
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
