#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class SoldierGB;
class I_Soldier_base_F : SoldierGB {
    class EventHandlers;
};
class B_TacticalPack_blk;   //black
class B_TacticalPack_rgr;   //green
class B_TacticalPack_oli;   //olive
class B_TacticalPack_ocamo; //hex
class B_FieldPack_blk;      //black
class B_FieldPack_ocamo;    //hex
class B_FieldPack_oucamo;   //urban

class cnto_ff_soldier_base : I_Soldier_base_F {
    scope = 0;
    faction = CNTO_FF;
    #define _weaps
    #define _mags
    #define _items
    #define _linked ItemRadioAcreFlagged
    ASSIGN_GEAR_EMPTY_RESPAWN;
    backpack =;
    uniformClass = U_BasicBody;
    class EventHandlers : EventHandlers {
        class facewear { init = "if (local (_this select 0)) then { removeGoggles (_this select 0) }"; };
        class guerrilla { init = "(_this select 0) call cnto_units_ff_fnc_doGuerrillaFunctions"; };
    };
};

/* ------------------------------------------------------------------------- */

class cnto_ff_urban_base : cnto_ff_soldier_base {
    editorSubcategory = CNTO_FF_MenUrbanRebels;
};

/*
 * Urban Rebels
 */
class cnto_ff_urban_scout : cnto_ff_urban_base {
    scope = 2;
    displayName = "Scout";
    #define _weaps Binocular, Throw, Put
    #define _mags
    #define _items ACRE_PRC343, ACE_Flashlight_XL50, ACE_SpraypaintGreen
    #define _linked H_Hat_brown, ItemMap, ItemCompass, ItemWatch, ACE_MapTools
    ADD_GEAR_EMPTY_RESPAWN;
    uniformClass = U_C_Poloshirt_tricolour;
};

class cnto_ff_urban_looter : cnto_ff_urban_base {
    scope = 2;
    displayName = "Looter";
    #define _weaps hgun_Pistol_heavy_02_F, Throw, Put
    #define _mags 6Rnd_45ACP_Cylinder, \
                  x2(6Rnd_45ACP_Cylinder)
    #define _items
    #define _linked H_Bandanna_gry, ItemMap, ItemCompass
    ADD_GEAR_EMPTY_RESPAWN;
    backpack = cnto_ff_urban_looter_pack;
    uniformClass = U_Competitor;
};
class cnto_ff_urban_looter_pack : B_FieldPack_oucamo {
    scope = 1;
    class TransportMagazines {
        xmags(2, rhs_mag_nspd);
        xmags(2, rhs_mag_rgo);
    };
};

class cnto_ff_urban_gunner : cnto_ff_urban_base {
    scope = 2;
    displayName = "Gunner";
    #define _weaps rhs_weap_pp2000_folded, Throw, Put
    #define _mags rhs_mag_9x19mm_7n21_20, \
                  x2(rhs_mag_9x19mm_7n21_20)
    #define _items
    #define _linked V_BandollierB_blk, H_Cap_press
    ADD_GEAR_EMPTY_RESPAWN;
    uniformClass = U_C_Journalist;
};

class cnto_ff_urban_doctor : cnto_ff_urban_base {
    scope = 2;
    displayName = "Doctor";
    #define _weaps Throw, Put
    #define _mags x2(rhs_mag_m18_yellow)
    #define _items ACRE_PRC343, x2(Chemlight_blue)
    #define _linked ItemWatch
    ADD_GEAR_EMPTY_RESPAWN;
    backpack = cnto_ff_urban_doctor_pack;
    uniformClass = U_Marshal;
    attendant = 1;
};
class cnto_ff_urban_doctor_pack : B_TacticalPack_blk {
    scope = 1;
    class TransportItems {
        xitems(12, ACE_fieldDressing);
        xitems(6, ACE_morphine);
        xitems(2, ACE_epinephrine);
        xitems(2, ACE_bloodIV_500);
        xitems(2, ACE_bloodIV_250);
    };
};

class cnto_ff_urban_repairman : cnto_ff_urban_base {
    scope = 2;
    displayName = "Repairman";
    #define _weaps rhsusf_weap_m1911a1, Throw, Put
    #define _mags rhsusf_mag_7x45acp_MHP, \
                  x2(rhsusf_mag_7x45acp_MHP), rhs_mag_f1
    #define _items x2(Chemlight_yellow)
    #define _linked H_Beret_blk, ItemMap, ItemWatch
    ADD_GEAR_EMPTY_RESPAWN;
    backpack = cnto_ff_urban_repairman_pack;
    uniformClass = U_C_Poor_1;
    class EventHandlers : EventHandlers {
        class facewear { init = "if (local (_this select 0)) then { (_this select 0) addGoggles ""G_Aviator"" }"; };
    };
    engineer = 1;
};
class cnto_ff_urban_repairman_pack : B_FieldPack_blk {
    scope = 1;
    class TransportWeapons {
        xweaps(2, rhs_weap_rsp30_red);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class cnto_ff_urban_itnerd : cnto_ff_urban_base {
    scope = 2;
    displayName = "IT Nerd";
    #define _weaps hgun_Rook40_F, Throw, Put
    #define _mags 16Rnd_9x21_Mag, \
                  16Rnd_9x21_Mag
    #define _items
    #define _linked H_Cap_grn_BI, ItemMap, ItemCompass, ItemWatch, I_UavTerminal
    ADD_GEAR_EMPTY_RESPAWN;
    uniformClass = U_C_Poloshirt_burgundy;
    uavHacker = 1;
};

/* ------------------------------------------------------------------------- */

class cnto_ff_guerrilla_base : cnto_ff_soldier_base {
    editorSubcategory = CNTO_FF_MenForestGuerrillas;
};

/*
 * Forest Guerrillas
 */
class cnto_ff_guerrilla_scout : cnto_ff_guerrilla_base {
    scope = 2;
    displayName = "Scout";
    #define _weaps rhs_weap_pp2000, Binocular, Throw, Put
    #define _mags rhs_mag_9x19mm_7n21_44
    #define _items ACRE_PRC343, ACE_Flashlight_XL50
    #define _linked H_Cap_grn, ItemMap, ItemCompass, ItemWatch, ACE_MapTools
    ADD_GEAR_EMPTY_RESPAWN;
    uniformClass = U_BG_leader;
};

class cnto_ff_guerrilla_hunter : cnto_ff_guerrilla_base {
    scope = 2;
    displayName = "Hunter";
    #define _weaps cnto_ff_m14, Binocular, Throw, Put
    #define _mags hlc_20Rnd_762x51_B_M14
    #define _items
    #define _linked H_Booniehat_oli, ItemMap, ItemCompass
    ADD_GEAR_EMPTY_RESPAWN;
    uniformClass = U_BG_Guerilla2_3;
};

/* ------------------------------------------------------------------------- */

/*
 * GM - completely custom soldier, not from base
 */
class cnto_ff_gm : I_Soldier_base_F {
    scope = 2;
    faction = CNTO_FF;
    displayName = "GM";
    editorSubcategory = CNTO_MenSpecial;
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x10(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_Flashlight_MX991, ACRE_PRC343, ACRE_PRC152, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ItemGPS, cnto_flecktarn_h_beret
    ASSIGN_GEAR;
    backpack =;
    uniformClass = U_I_Protagonist_VR;
    class EventHandlers : EventHandlers {
        class godlike { init = "(_this select 0) call cnto_units_fnc_godlike"; };
    };
    attendant = 1;
    engineer = 1;
    uavHacker = 1;
};
