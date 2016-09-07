#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class SoldierEB;
class O_Soldier_base_F : SoldierEB {
    class EventHandlers;
};
class B_TacticalPack_blk;
class B_Kitbag_rgr;
class B_Carryall_cbr;

class cnto_rus_soldier_base : O_Soldier_base_F {
    scope = 0;
    faction = CNTO_RUS;
    #define _weaps
    #define _mags \
                  x4(SmokeShell), x2(MiniGrenade)
    #define _items x2(ACE_elasticBandage), x8(ACE_packingBandage), x2(ACE_morphine), ACE_tourniquet, ACE_Flashlight_MX991, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
    uniformClass = rhsgref_uniform_ttsko_mountain;
};

/*
 * squad (lead)
 */
class cnto_rus_sq_sl : cnto_rus_soldier_base {
    scope = 2;
    displayName = "SQ SL";
    #define _weaps cnto_rus_ak74m_gl, rhs_weap_pya, ACE_VectorDay, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VOG25, rhs_mag_9x19_17, \
                  x6(rhs_30Rnd_545x39_AK), x4(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_vog_od, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_sq_sl_pack;
	attendant = 1;
};
class cnto_rus_sq_sl_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, rhs_VOG25);
        xmags(4, rhs_VG40MD_White);
        xmags(4, rhs_VG40MD_Red);
        xmags(4, rhs_VG40MD_Green);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_rus_sq_medic : cnto_rus_soldier_base {
    scope = 2;
    displayName = "SQ Medic";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_sq_medic_pack;
    attendant = 1;
};
class cnto_rus_sq_medic_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(16, SmokeShell);
        xmags(4, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_surgicalKit);
        xitems(14, ACE_elasticBandage);
        xitems(56, ACE_packingBandage);
        xitems(16, ACE_bloodIV_500);
        xitems(25, ACE_morphine);
        xitems(10, ACE_epinephrine);
        xitems(5, ACE_atropine);
        xitems(5, ACE_tourniquet);
    };
};

/*
 * fireteam
 */
class cnto_rus_ft_tl : cnto_rus_soldier_base {
    scope = 2;
    displayName = "FT Lead";
    #define _weaps cnto_rus_ak74m_gl, rhs_weap_pya, ACE_VectorDay, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VOG25, rhs_mag_9x19_17, \
                  x6(rhs_30Rnd_545x39_AK), x4(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_vog_od, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_ft_tl_pack;
};
class cnto_rus_ft_tl_pack : B_TacticalPack_blk {
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

class cnto_rus_ft_ar : cnto_rus_soldier_base {
    scope = 2;
    displayName = "FT AR";
    #define _weaps rhs_weap_pkm, rhs_weap_pya, Throw, Put
    #define _mags rhs_100Rnd_762x54mmR, rhs_mag_9x19_17, \
                  rhs_100Rnd_762x54mmR, rhs_100Rnd_762x54mmR_green
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack =;
};

class cnto_rus_ft_aar : cnto_rus_soldier_base {
    scope = 2;
    displayName = "FT AAR";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, ACE_VectorDay, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_ft_aar_pack;
};
class cnto_rus_ft_aar_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(1, rhs_100Rnd_762x54mmR);
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

class cnto_rus_ft_at : cnto_rus_soldier_base {
    scope = 2;
    displayName = "FT AT";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_rpg26, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack =;
};

/*
 * platoon (lead)
 */
class cnto_rus_coy_co : cnto_rus_soldier_base {
    scope = 2;
    displayName = "COY Commander";
    #define _weaps cnto_rus_ak74m_gl, rhs_weap_pya, ACE_VectorDay, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VG40MD_Red, rhs_mag_9x19_17, \
                  x6(rhs_30Rnd_545x39_AK), x4(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_vog_od, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_coy_co_pack;
};
class cnto_rus_coy_co_pack : B_TacticalPack_blk {
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

class cnto_rus_coy_sgt : cnto_rus_soldier_base {
    scope = 2;
    displayName = "COY Sergeant";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, ACE_VectorDay, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x6(rhs_30Rnd_545x39_AK), x4(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_vog_od, ItemGPS
    ADD_GEAR;
    backpack =;
};

class cnto_rus_coy_medic : cnto_rus_sq_medic {
    displayName = "COY Medic";
};

class cnto_rus_coy_rfl : cnto_rus_soldier_base {
    scope = 2;
    displayName = "COY Rifleman";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack =;
};

/*
 * MMG
 */
class cnto_rus_mmg_tl : cnto_rus_soldier_base {
    scope = 2;
    displayName = "MMG Lead";
    #define _weaps cnto_rus_ak74m_gl, rhs_weap_pya, ACE_VectorDay, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_VOG25, rhs_mag_9x19_17, \
                  x6(rhs_30Rnd_545x39_AK), x4(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_vog_od, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_mmg_tl_pack;
};
class cnto_rus_mmg_tl_pack : B_TacticalPack_blk {
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

class cnto_rus_mmg_gunner : cnto_rus_soldier_base {
    scope = 2;
    displayName = "MMG Gunner";
    #define _weaps rhs_weap_pkp, rhs_weap_pya, Throw, Put
    #define _mags rhs_100Rnd_762x54mmR, rhs_mag_9x19_17, \
                  rhs_100Rnd_762x54mmR, rhs_100Rnd_762x54mmR_green
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack = cnto_rus_mmg_gunner_pack;
};
class cnto_rus_mmg_gunner_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_100Rnd_762x54mmR);
        xmags(1, rhs_100Rnd_762x54mmR_green);
    };
};

class cnto_rus_mmg_bearer : cnto_rus_soldier_base {
    scope = 2;
    displayName = "MMG Bearer";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack = cnto_rus_mmg_bearer_pack;
};
class cnto_rus_mmg_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_100Rnd_762x54mmR);
        xmags(1, rhs_100Rnd_762x54mmR_green);
    };
};

/*
 * MAT
 */
class cnto_rus_mat_tl : cnto_rus_mmg_tl {
    displayName = "MAT Lead";
};

class cnto_rus_mat_gunner : cnto_rus_soldier_base {
    scope = 2;
    displayName = "MAT Rocketman";
    #define _weaps cnto_rus_ak74m_flash, cnto_rus_rpg7_optic, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_rpg7_PG7VL_mag, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack = cnto_rus_mat_gunner_pack;
};
class cnto_rus_mat_gunner_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_rpg7_PG7VL_mag);
        xmags(2, rhs_rpg7_PG7VR_mag);
    };
};

class cnto_rus_mat_bearer : cnto_rus_soldier_base {
    scope = 2;
    displayName = "MAT Carrier";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack = cnto_rus_mat_bearer_pack;
};
class cnto_rus_mat_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(3, rhs_rpg7_PG7VL_mag);
        xmags(2, rhs_rpg7_PG7VR_mag);
    };
};

/*
 * Mortar
 */
class cnto_rus_mortar_assist : cnto_rus_soldier_base {
    scope = 2;
    displayName = "Mortar Ass. Gunner";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, ACE_VectorDay, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x2(SmokeShellGreen), SmokeShellBlue, x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items ACE_MapTools, ACE_RangeTable_82mm, ACRE_PRC152
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_vog_od, ItemGPS
    ADD_GEAR;
    backpack = I_Mortar_01_support_F;
};

class cnto_rus_mortar_gunner : cnto_rus_soldier_base {
    scope = 2;
    displayName = "Mortar Gunner";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x8(rhs_30Rnd_545x39_AK), x2(rhs_30Rnd_545x39_AK_green), rhs_mag_9x19_17
    #define _items ACE_MapTools, ACE_RangeTable_82mm
    #define _linked rhs_6b7_1m_olive, rhs_6b23_6sh116_od
    ADD_GEAR;
    backpack = I_Mortar_01_weapon_F;
};

/*
 * Engineering Team
 */
class cnto_rus_eng_tl : cnto_rus_soldier_base {
    scope = 2;
    displayName = "Eng TL";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x4(rhs_30Rnd_545x39_AK)
    #define _items ACE_MapTools, ACRE_PRC148, ACRE_PRC152, ACE_M26_Clacker, ACE_DefusalKit, ACE_EntrenchingTool, ACE_wirecutter
    #define _linked rhs_6b23_6sh116_od, rhs_6b7_1m_olive, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_eng_tl_pack;
    engineer = 1;
    canDeactivateMines = 1;
};
class cnto_rus_eng_tl_pack : B_Carryall_cbr {
    scope = 1;
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class cnto_rus_eng_rfl : cnto_rus_soldier_base {
    scope = 2;
    displayName = "Eng Rifleman";
    #define _weaps cnto_rus_ak74m_flash, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x4(rhs_30Rnd_545x39_AK)
    #define _items ACE_MapTools, ACRE_PRC148, ACE_M26_Clacker, ACE_DefusalKit, ACE_EntrenchingTool, ACE_wirecutter
    #define _linked rhs_6b23_6sh116_od, rhs_6b7_1m_olive, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_eng_tl_pack;
    engineer = 1;
    canDeactivateMines = 1;
};

/* ------------------------------------------------------------------------- */

class cnto_rus_crew_base : O_Soldier_base_F {
    scope = 0;
    faction = CNTO_RUS;
    #define _weaps rhs_weap_aks74un_folded, rhs_weap_pya, Throw, Put
    #define _mags rhs_30Rnd_545x39_AK, rhs_mag_9x19_17, \
                  x2(SmokeShell), x2(SmokeShellGreen), x2(SmokeShellBlue), x2(MiniGrenade), x5(rhs_30Rnd_545x39_AK)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ACE_NVG_Wide
    ASSIGN_GEAR;
};

/*
 * Vehicle Crew
 */
class cnto_rus_veh_co : cnto_rus_crew_base {
    scope = 2;
    displayName = "Vehicle Commander";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhs_6b23_6sh116_od, rhs_6b7_1m_olive, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = rhs_uniform_gorka_r_g;
};

class cnto_rus_veh_driver : cnto_rus_crew_base {
    scope = 2;
    displayName = "Vehicle Driver";
    #define _weaps
    #define _mags
    #define _items
    #define _linked rhs_6b23_6sh116_od, rhs_6b7_1m_olive
    ADD_GEAR;
    backpack = cnto_rus_veh_driver_pack;
    uniformClass = rhs_uniform_gorka_r_g;
    engineer = 1;
};
class cnto_rus_veh_driver_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, rhs_30Rnd_545x39_AK);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class cnto_rus_veh_gunner : cnto_rus_crew_base {
    scope = 2;
    displayName = "Vehicle Gunner";
    #define _weaps
    #define _mags
    #define _items
    #define _linked rhs_6b23_6sh116_od, rhs_6b7_1m_olive
    ADD_GEAR;
    backpack =;
    uniformClass = rhs_uniform_gorka_r_g;
    engineer = 1;
};

/*
 * Air crew
 */
class cnto_rus_air_pilot : cnto_rus_crew_base {
    scope = 2;
    displayName = "Air Pilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhs_6b23_6sh116_od, H_PilotHelmetHeli_O, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = U_O_PilotCoveralls;
    engineer = 1;
};

class cnto_rus_air_copilot : cnto_rus_crew_base {
    scope = 2;
    displayName = "Air Copilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhs_6b23_6sh116_od, H_PilotHelmetHeli_O, ItemGPS
    ADD_GEAR;
    backpack = cnto_rus_air_copilot_pack;
    uniformClass = U_O_PilotCoveralls;
    engineer = 1;
};
class cnto_rus_air_copilot_pack : B_TacticalPack_blk {
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
class cnto_rus_trainer : cnto_rus_soldier_base {
    scope = 2;
    displayName = "Trainer";
    #define _weaps rhs_weap_pya, ACE_Vector, Throw, Put
    #define _mags rhs_mag_9x19_17, \
                  x4(rhs_mag_9x19_17)
    #define _items x2(ACE_CableTie), x10(ACE_epinephrine), x5(ACE_bloodIV), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhs_6b23_6sh116_od, cnto_flecktarn_h_beret, ItemGPS
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
 * GM - completely custom soldier, not from base
 */
class cnto_rus_gm : O_Soldier_base_F {
    scope = 2;
    faction = CNTO_RUS;
    displayName = "GM";
    #define _weaps rhs_weap_pya, ACE_Vector, Throw, Put
    #define _mags rhs_mag_9x19_17, \
                  x10(rhs_mag_9x19_17)
    #define _items ACE_MapTools, ACE_Flashlight_MX991, ACRE_PRC343, ACRE_PRC152, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ItemGPS, rhs_6b23_6sh116_od, cnto_flecktarn_h_beret
    ASSIGN_GEAR;
    backpack =;
    uniformClass = rhsgref_uniform_ttsko_mountain;
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
class cnto_rus_resupply_small : Box_EAST_Ammo_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_RUS_Supplies;
    displayName = "Infantry Resupply (Small)";
    class TransportWeapons {
        xweaps(1, rhs_weap_rpg26);
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
        xitems(16, ACE_packingBandage);
        xitems(4, ACE_elasticBandage);
        xitems(6, ACE_morphine);
    };
    class TransportBackpacks {};
};

class O_supplyCrate_F;
class cnto_rus_resupply_medium : O_supplyCrate_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_RUS_Supplies;
    displayName = "Infantry Resupply (Medium)";
    class TransportWeapons {
        xweaps(4, rhs_weap_rpg26);
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
        xitems(40, ACE_packingBandage);
        xitems(10, ACE_elasticBandage);
        xitems(20, ACE_morphine);
        xitems(10, ACE_epinephrine);
        xitems(5, ACE_atropine);
        xitems(8, ACE_bloodIV_500);
    };
    class TransportBackpacks {};
};
