#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class SoldierGB;
class I_Soldier_base_F : SoldierGB {
    class EventHandlers;
};
class cnto_flecktarn_b_ap_mediterranean;
class cnto_flecktarn_b_kb_mediterranean;

class cnto_tfn_soldier_base : I_Soldier_base_F {
    scope = 0;
    faction = CNTO_TFN;
    #define _weaps
    #define _mags \
                  x4(SmokeShell), x2(MiniGrenade)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
    uniformClass = cnto_flecktarn_u_mediterranean;
};

/*
 * squad (lead)
 */
class cnto_tfn_sq_sl : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "SQ SL";
    #define _weaps cnto_tfn_416_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x6(30Rnd_556x45_Stanag), x4(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked cnto_flecktarn_v_mediterranean, cnto_flecktarn_h_c_mediterranean, ItemGPS
    ADD_GEAR;
    backpack = cnto_tfn_sq_sl_pack;
};
class cnto_tfn_sq_sl_pack : cnto_flecktarn_b_ap_mediterranean {
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

class cnto_tfn_sq_medic : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "SQ Medic";
    #define _weaps cnto_tfn_416_flash, hgun_ACPC2_F, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean, ItemGPS
    ADD_GEAR;
    backpack = cnto_tfn_sq_medic_pack;
    attendant = 1;
};
class cnto_tfn_sq_medic_pack : cnto_flecktarn_b_kb_mediterranean {
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
class cnto_tfn_ft_tl : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "FT Lead";
    #define _weaps cnto_tfn_416_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x6(30Rnd_556x45_Stanag), x4(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked cnto_flecktarn_v_mediterranean, cnto_flecktarn_h_c_mediterranean, ItemGPS
    ADD_GEAR;
    backpack = cnto_tfn_ft_tl_pack;
};
class cnto_tfn_ft_tl_pack : cnto_flecktarn_b_ap_mediterranean {
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

class cnto_tfn_ft_ar : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "FT AR";
    #define _weaps cnto_tfn_m249, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_200rnd_556x45_M_SAW, 9Rnd_45ACP_Mag, \
                  hlc_200rnd_556x45_M_SAW, x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_h_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
    backpack =;
};

class cnto_tfn_ft_aar : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "FT AAR";
    #define _weaps cnto_tfn_samr_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean, ItemGPS
    ADD_GEAR;
    backpack = cnto_tfn_ft_aar_pack;
};
class cnto_tfn_ft_aar_pack : cnto_flecktarn_b_kb_mediterranean {
    scope = 1;
    class TransportMagazines {
        xmags(1, hlc_200rnd_556x45_M_SAW);
        xmags(6, 30Rnd_556x45_Stanag);
        xmags(2, 30Rnd_556x45_Stanag_Tracer_Red);
        xmags(2, MiniGrenade);
        xmags(3, SmokeShell);
        xmags(2, SmokeShellGreen);
        xmags(1, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_tfn_ft_at : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "FT AT";
    #define _weaps cnto_tfn_416_flash, tf47_at4_HEDP, hgun_ACPC2_F, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
    backpack =;
};

/*
 * platoon (lead)
 */
class cnto_tfn_plt_co : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "PLT Commander";
    #define _weaps cnto_tfn_416_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 1Rnd_SmokeRed_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x6(30Rnd_556x45_Stanag), x4(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked cnto_flecktarn_v_mediterranean, cnto_flecktarn_h_boo_mediterranean, ItemGPS
    ADD_GEAR;
    backpack = cnto_tfn_plt_co_pack;
};
class cnto_tfn_plt_co_pack : cnto_flecktarn_b_ap_mediterranean {
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

class cnto_tfn_plt_sgt : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "PLT Sergeant";
    #define _weaps cnto_tfn_416_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x6(30Rnd_556x45_Stanag), x4(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean, ItemGPS
    ADD_GEAR;
    backpack =;
};

class cnto_tfn_plt_medic : cnto_tfn_sq_medic {
    displayName = "PLT Medic";
};

class cnto_tfn_plt_rfl : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "PLT Rifleman";
    #define _weaps cnto_tfn_samr_flash, hgun_ACPC2_F, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
    backpack =;
};

/*
 * MMG
 */
class cnto_tfn_mmg_tl : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "MMG Lead";
    #define _weaps cnto_tfn_416_gl_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked cnto_flecktarn_v_mediterranean, cnto_flecktarn_h_c_mediterranean, ItemGPS
    ADD_GEAR;
    backpack = cnto_tfn_mmg_tl_pack;
};
class cnto_tfn_mmg_tl_pack : cnto_flecktarn_b_ap_mediterranean {
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

class cnto_tfn_mmg_gunner : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "MMG Gunner";
    #define _weaps hlc_lmg_M60E4, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_100Rnd_762x51_M_M60E4, 9Rnd_45ACP_Mag, \
                  x3(hlc_100Rnd_762x51_M_M60E4), hlc_100Rnd_762x51_T_M60E4, x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_h_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
};

class cnto_tfn_mmg_bearer : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "MMG Bearer";
    #define _weaps cnto_tfn_416_flash, hgun_ACPC2_F, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
    backpack = cnto_tfn_mmg_bearer_pack;
};
class cnto_tfn_mmg_bearer_pack : cnto_flecktarn_b_kb_mediterranean {
    scope = 1;
    class TransportMagazines {
        xmags(5, hlc_100Rnd_762x51_M_M60E4);
        xmags(2, hlc_100Rnd_762x51_T_M60E4);
    };
};

/*
 * MAT
 */
class cnto_tfn_mat_tl : cnto_tfn_mmg_tl {
    displayName = "MAT Lead";
};

class cnto_tfn_mat_gunner : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "MAT Rocketman";
    #define _weaps cnto_tfn_416_flash, cnto_tfn_m3maaws_optic, hgun_ACPC2_F, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, tf47_m3maaws_HEAT, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
    backpack = cnto_tfn_mat_gunner_pack;
};
class cnto_tfn_mat_gunner_pack : cnto_flecktarn_b_kb_mediterranean {
    scope = 1;
    class TransportMagazines {
        xmags(2, tf47_m3maaws_HEAT);
        xmags(1, tf47_m3maaws_HEDP);
    };
};

class cnto_tfn_mat_bearer : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "MAT Carrier";
    #define _weaps cnto_tfn_416_flash, hgun_ACPC2_F, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
    backpack = cnto_tfn_mat_bearer_pack;
};
class cnto_tfn_mat_bearer_pack : cnto_flecktarn_b_kb_mediterranean {
    scope = 1;
    class TransportMagazines {
        xmags(2, tf47_m3maaws_HEAT);
        xmags(1, tf47_m3maaws_HEDP);
    };
};

/*
 * Mortar
 */
class cnto_tfn_mortar_assist : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "Mortar Ass. Gunner";
    #define _weaps cnto_tfn_416_flash, hgun_ACPC2_F, ACE_VectorDay, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x2(SmokeShellGreen), SmokeShellBlue, x6(30Rnd_556x45_Stanag), x4(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm, ACRE_PRC152
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean, ItemGPS
    ADD_GEAR;
    backpack = B_Mortar_01_support_F;
};

class cnto_tfn_mortar_gunner : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "Mortar Gunner";
    #define _weaps cnto_tfn_416_flash, hgun_ACPC2_F, Throw, Put
    #define _mags 30Rnd_556x45_Stanag, 9Rnd_45ACP_Mag, \
                  x8(30Rnd_556x45_Stanag), x2(30Rnd_556x45_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm
    #define _linked cnto_flecktarn_v_l_mediterranean, cnto_flecktarn_h_c_mediterranean
    ADD_GEAR;
    backpack = B_Mortar_01_weapon_F;
};

/* ------------------------------------------------------------------------- */

class cnto_tfn_crew_base : I_Soldier_base_F {
    scope = 0;
    faction = CNTO_TFN;
    #define _weaps rhsusf_weap_MP7A1_aor1, hgun_P07_F, Throw, Put
    #define _mags rhsusf_mag_40Rnd_46x30_FMJ, 16Rnd_9x21_Mag, \
                  x2(SmokeShell), x2(SmokeShellGreen), x2(SmokeShellBlue), x2(MiniGrenade), x5(rhsusf_mag_40Rnd_46x30_FMJ)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ACE_NVG_Wide
    ASSIGN_GEAR;
};

/*
 * Vehicle Crew
 */
class cnto_tfn_veh_co : cnto_tfn_crew_base {
    scope = 2;
    displayName = "Vehicle Commander";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked cnto_flecktarn_v_l_mediterranean, H_HelmetCrew_I, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = U_IG_Guerrilla_6_1;
};

class cnto_tfn_veh_driver : cnto_tfn_crew_base {
    scope = 2;
    displayName = "Vehicle Driver";
    #define _weaps
    #define _mags
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, H_HelmetCrew_I
    ADD_GEAR;
    backpack = cnto_tfn_veh_driver_pack;
    uniformClass = U_IG_Guerrilla_6_1;
    engineer = 1;
};
class cnto_tfn_veh_driver_pack : cnto_flecktarn_b_ap_mediterranean {
    scope = 1;
    class TransportMagazines {
        xmags(4, rhsusf_mag_40Rnd_46x30_FMJ);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class cnto_tfn_veh_gunner : cnto_tfn_crew_base {
    scope = 2;
    displayName = "Vehicle Gunner";
    #define _weaps
    #define _mags
    #define _items
    #define _linked cnto_flecktarn_v_l_mediterranean, H_HelmetCrew_I
    ADD_GEAR;
    backpack =;
    uniformClass = U_IG_Guerrilla_6_1;
    engineer = 1;
};

/*
 * Air crew
 */
class cnto_tfn_air_pilot : cnto_tfn_crew_base {
    scope = 2;
    displayName = "Air Pilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked cnto_flecktarn_v_l_mediterranean, H_PilotHelmetHeli_B, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = U_I_pilotCoveralls;
    engineer = 1;
};

class cnto_tfn_air_copilot : cnto_tfn_crew_base {
    scope = 2;
    displayName = "Air Copilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked cnto_flecktarn_v_l_mediterranean, H_PilotHelmetHeli_B, ItemGPS
    ADD_GEAR;
    backpack = cnto_tfn_air_copilot_pack;
    uniformClass = U_I_pilotCoveralls;
    engineer = 1;
};
class cnto_tfn_air_copilot_pack : cnto_flecktarn_b_ap_mediterranean {
    scope = 1;
    class TransportMagazines {
        xmags(4, rhsusf_mag_40Rnd_46x30_FMJ);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

/* ------------------------------------------------------------------------- */

/*
 * Trainer
 */
class cnto_tfn_trainer : cnto_tfn_soldier_base {
    scope = 2;
    displayName = "Trainer";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x4(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), x10(ACE_epinephrine), x5(ACE_bloodIV), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked cnto_flecktarn_v_mediterranean, cnto_flecktarn_h_beret, ItemGPS
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
class cnto_tfn_gm : I_Soldier_base_F {
    scope = 2;
    faction = CNTO_TFN;
    displayName = "GM";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x10(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_Flashlight_MX991, ACRE_PRC343, ACRE_PRC152, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ItemGPS, cnto_flecktarn_h_beret
    ASSIGN_GEAR;
    backpack =;
    uniformClass = cnto_flecktarn_u_r_mediterranean;
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

class Box_NATO_Ammo_F;
class cnto_tfn_resupply_small : Box_NATO_Ammo_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_TFN_Supplies;
    displayName = "Infantry Resupply (Small)";
    class TransportWeapons {
        xweaps(1, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(24, 30Rnd_556x45_Stanag);
        xmags(6, 30Rnd_556x45_Stanag_Tracer_Red);
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

class B_supplyCrate_F;
class cnto_tfn_resupply_medium : B_supplyCrate_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_TFN_Supplies;
    displayName = "Infantry Resupply (Medium)";
    class TransportWeapons {
        xweaps(4, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(80, 30Rnd_556x45_Stanag);
        xmags(20, 30Rnd_556x45_Stanag_Tracer_Red);
        xmags(12, hlc_200rnd_556x45_M_SAW);
        xmags(30, SmokeShell);
        xmags(8, SmokeShellGreen);
        xmags(4, SmokeShellBlue);
        xmags(24, MiniGrenade);
        xmags(15, 1Rnd_HE_Grenade_shell);
        xmags(4, 130Rnd_338_Mag);
        xmags(4, tf47_m3maaws_HEAT);
        xmags(2, tf47_m3maaws_HEDP);
    };
    class TransportItems {
        xitems(40, ACE_fieldDressing);
        xitems(20, ACE_morphine);
        xitems(10, ACE_epinephrine);
        xitems(4, ACE_bloodIV);
    };
    class TransportBackpacks {};
};
