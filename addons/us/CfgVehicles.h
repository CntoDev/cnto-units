#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class SoldierWB;
class B_Soldier_base_F : SoldierWB {
    class EventHandlers;
};
class B_AssaultPack_rgr;
class B_Kitbag_rgr;

class cnto_us_soldier_base : B_Soldier_base_F {
    scope = 0;
    faction = CNTO_US;
    #define _weaps
    #define _mags \
                  x4(SmokeShell), x2(MiniGrenade)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
};

/*
 * squad (lead)
 */
class cnto_us_sq_sl : cnto_us_soldier_base {
    scope = 2;
    displayName = "SQ SL";
    #define _weaps cnto_us_m4a1_gl_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x6(rhs_mag_30Rnd_556x45_M855A1_Stanag), x4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked rhsusf_iotv_ucp_Squadleader, rhsusf_ach_helmet_headset_ucp, ItemGPS
    ADD_GEAR;
    backpack = cnto_us_sq_sl_pack;
};
class cnto_us_sq_sl_pack : B_AssaultPack_rgr {
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

class cnto_us_sq_medic : cnto_us_soldier_base {
    scope = 2;
    displayName = "SQ Medic";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_Medic, rhsusf_ach_helmet_ucp, ItemGPS
    ADD_GEAR;
    backpack = cnto_us_sq_medic_pack;
    attendant = true;
};
class cnto_us_sq_medic_pack : B_Kitbag_rgr {
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
class cnto_us_ft_tl : cnto_us_soldier_base {
    scope = 2;
    displayName = "FT Lead";
    #define _weaps cnto_us_m4a1_gl_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x6(rhs_mag_30Rnd_556x45_M855A1_Stanag), x4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked rhsusf_iotv_ucp_Grenadier, rhsusf_ach_helmet_headset_ucp, ItemGPS
    ADD_GEAR;
    backpack = cnto_us_ft_tl_pack;
};
class cnto_us_ft_tl_pack : B_AssaultPack_rgr {
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

class cnto_us_ft_ar : cnto_us_soldier_base {
    scope = 2;
    displayName = "FT AR";
    #define _weaps cnto_us_m249_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhsusf_100Rnd_556x45_soft_pouch, 9Rnd_45ACP_Mag, \
                  x3(rhsusf_100Rnd_556x45_soft_pouch), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_SAW, rhsusf_ach_helmet_ESS_ucp
    ADD_GEAR;
    backpack =;
};

class cnto_us_ft_aar : cnto_us_soldier_base {
    scope = 2;
    displayName = "FT AAR";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked rhsusf_iotv_ucp_Teamleader, rhsusf_ach_helmet_ucp, ItemGPS
    ADD_GEAR;
    backpack = cnto_us_ft_aar_pack;
};
class cnto_us_ft_aar_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(2, rhsusf_100Rnd_556x45_soft_pouch);
        xmags(6, rhs_mag_30Rnd_556x45_M855A1_Stanag);
        xmags(2, rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red);
        xmags(2, MiniGrenade);
        xmags(3, SmokeShell);
        xmags(2, SmokeShellGreen);
        xmags(1, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class cnto_us_ft_at : cnto_us_soldier_base {
    scope = 2;
    displayName = "FT AT";
    #define _weaps cnto_us_m4a1_flash, tf47_at4_HEDP, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_Rifleman, rhsusf_ach_helmet_ucp
    ADD_GEAR;
    backpack =;
};

/*
 * platoon (lead)
 */
class cnto_us_plt_co : cnto_us_soldier_base {
    scope = 2;
    displayName = "PLT Commander";
    #define _weaps cnto_us_m4a1_gl_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 1Rnd_SmokeRed_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x6(rhs_mag_30Rnd_556x45_M855A1_Stanag), x4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhsusf_iotv_ucp_Squadleader, rhsusf_patrolcap_ucp, ItemGPS
    ADD_GEAR;
    backpack = cnto_us_plt_co_pack;
};
class cnto_us_plt_co_pack : B_AssaultPack_rgr {
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

class cnto_us_plt_sgt : cnto_us_soldier_base {
    scope = 2;
    displayName = "PLT Sergeant";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x6(rhs_mag_30Rnd_556x45_M855A1_Stanag), x4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhsusf_iotv_ucp_Teamleader, rhsusf_ach_helmet_headset_ucp, ItemGPS
    ADD_GEAR;
    backpack =;
};

class cnto_us_plt_medic : cnto_us_sq_medic {
    displayName = "PLT Medic";
};

class cnto_us_plt_rfl : cnto_us_soldier_base {
    scope = 2;
    displayName = "PLT Rifleman";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_Rifleman, rhsusf_ach_helmet_ucp
    ADD_GEAR;
    backpack =;
};

/*
 * MMG
 */
class cnto_us_mmg_tl : cnto_us_soldier_base {
    scope = 2;
    displayName = "MMG Lead";
    #define _weaps cnto_us_m4a1_gl_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 1Rnd_HE_Grenade_shell, 9Rnd_45ACP_Mag, \
                  x6(rhs_mag_30Rnd_556x45_M855A1_Stanag), x4(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked rhsusf_iotv_ucp_Grenadier, rhsusf_ach_helmet_headset_ucp, ItemGPS
    ADD_GEAR;
    backpack = cnto_us_mmg_tl_pack;
};
class cnto_us_mmg_tl_pack : B_AssaultPack_rgr {
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

class cnto_us_mmg_gunner : cnto_us_soldier_base {
    scope = 2;
    displayName = "MMG Gunner";
    #define _weaps hlc_lmg_m60, hgun_ACPC2_F, Throw, Put
    #define _mags hlc_100Rnd_762x51_M_M60E4, 9Rnd_45ACP_Mag, \
                  x2(hlc_100Rnd_762x51_M_M60E4), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_SAW, rhsusf_ach_helmet_ESS_ucp
    ADD_GEAR;
    backpack = cnto_us_mmg_gunner_pack;
};
class cnto_us_mmg_gunner_pack : B_AssaultPack_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(2, hlc_100Rnd_762x51_M_M60E4);
        xmags(1, hlc_100Rnd_762x51_T_M60E4);
    };
};

class cnto_us_mmg_bearer : cnto_us_soldier_base {
    scope = 2;
    displayName = "MMG Bearer";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_Rifleman, rhsusf_ach_helmet_ucp
    ADD_GEAR;
    backpack = cnto_us_mmg_bearer_pack;
};
class cnto_us_mmg_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(5, hlc_100Rnd_762x51_M_M60E4);
        xmags(2, hlc_100Rnd_762x51_T_M60E4);
    };
};

/*
 * MAT
 */
class cnto_us_mat_tl : cnto_us_mmg_tl {
    displayName = "MAT Lead";
};

class cnto_us_mat_gunner : cnto_us_soldier_base {
    scope = 2;
    displayName = "MAT Rocketman";
    #define _weaps cnto_us_m4a1_flash, cnto_us_m3maaws_optic, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, tf47_m3maaws_HEAT, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_Rifleman, rhsusf_ach_helmet_ESS_ucp
    ADD_GEAR;
    backpack = cnto_us_mat_gunner_pack;
};
class cnto_us_mat_gunner_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(2, tf47_m3maaws_HEAT);
        xmags(1, tf47_m3maaws_HEDP);
    };
};

class cnto_us_mat_bearer : cnto_us_soldier_base {
    scope = 2;
    displayName = "MAT Carrier";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items
    #define _linked rhsusf_iotv_ucp_Rifleman, rhsusf_ach_helmet_ucp
    ADD_GEAR;
    backpack = cnto_us_mat_bearer_pack;
};
class cnto_us_mat_bearer_pack : B_Kitbag_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(2, tf47_m3maaws_HEAT);
        xmags(1, tf47_m3maaws_HEDP);
    };
};

/*
 * Mortar
 */
class cnto_us_mortar_assist : cnto_us_soldier_base {
    scope = 2;
    displayName = "Mortar Ass. Gunner";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x2(SmokeShellGreen), SmokeShellBlue, x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm, ACRE_PRC152
    #define _linked rhsusf_iotv_ucp_Teamleader, rhsusf_ach_helmet_headset_ucp, ItemGPS
    ADD_GEAR;
    backpack = B_Mortar_01_support_F;
};

class cnto_us_mortar_gunner : cnto_us_soldier_base {
    scope = 2;
    displayName = "Mortar Gunner";
    #define _weaps cnto_us_m4a1_flash, hgun_ACPC2_F, Throw, Put
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 9Rnd_45ACP_Mag, \
                  x8(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red), x2(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_RangeTable_82mm
    #define _linked rhsusf_iotv_ucp_Rifleman, rhsusf_ach_helmet_ucp
    ADD_GEAR;
    backpack = B_Mortar_01_weapon_F;
};

/* ------------------------------------------------------------------------- */

class cnto_us_crew_base : B_Soldier_base_F {
    scope = 0;
    faction = CNTO_US;
    #define _weaps SMG_02_F, hgun_P07_F, Throw, Put
    #define _mags 30Rnd_9x21_Mag, 16Rnd_9x21_Mag, \
                  x2(SmokeShell), x2(SmokeShellGreen), x2(SmokeShellBlue), x2(MiniGrenade), x5(30Rnd_9x21_Mag)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_MX991, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ACE_NVG_Wide
    ASSIGN_GEAR;
};

/*
 * Vehicle Crew
 */
class cnto_us_veh_co : cnto_us_crew_base {
    scope = 2;
    displayName = "Vehicle Commander";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked TacVest_black, H_HelmetCrew_I, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = U_BG_Guerrilla_6_1;
};

class cnto_us_veh_driver : cnto_us_crew_base {
    scope = 2;
    displayName = "Vehicle Driver";
    #define _weaps
    #define _mags
    #define _items
    #define _linked TacVest_black, H_HelmetCrew_I
    ADD_GEAR;
    backpack = cnto_us_veh_driver_pack;
    uniformClass = U_BG_Guerrilla_6_1;
    engineer = true;
};
class cnto_us_veh_driver_pack : B_AssaultPack_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(4, 30Rnd_9x21_Mag);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class cnto_us_veh_gunner : cnto_us_crew_base {
    scope = 2;
    displayName = "Vehicle Gunner";
    #define _weaps
    #define _mags
    #define _items
    #define _linked TacVest_black, H_HelmetCrew_I
    ADD_GEAR;
    backpack =;
    uniformClass = U_BG_Guerrilla_6_1;
};

/*
 * Air crew
 */
class cnto_us_air_pilot : cnto_us_crew_base {
    scope = 2;
    displayName = "Air Pilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked TacVest_black, H_PilotHelmetHeli_B, ItemGPS
    ADD_GEAR;
    backpack =;
    uniformClass = U_B_PilotCoveralls;
};

class cnto_us_air_copilot : cnto_us_crew_base {
    scope = 2;
    displayName = "Air Copilot";
    #define _weaps ACE_Vector
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked TacVest_black, H_PilotHelmetHeli_B, ItemGPS
    ADD_GEAR;
    backpack = cnto_us_air_copilot_pack;
    uniformClass = U_B_PilotCoveralls;
    engineer = true;
};
class cnto_us_air_copilot_pack : B_AssaultPack_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(4, 30Rnd_9x21_Mag);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

/* ------------------------------------------------------------------------- */

/*
 * Trainer
 */
class cnto_us_trainer : cnto_us_soldier_base {
    scope = 2;
    displayName = "Trainer";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x4(9Rnd_45ACP_Mag)
    #define _items x2(ACE_CableTie), x10(ACE_epinephrine), x5(ACE_bloodIV), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked rhsusf_iotv_ucp_Squadleader, rhsusf_patrolcap_ucp, ItemGPS
    ADD_GEAR;
    backpack =;
    class EventHandlers : EventHandlers {
        class godlike { init = "(_this select 0) call cnto_units_fnc_godlike"; };
    };
    attendant = true;
    engineer = true;
    uavHacker = true;
};

/*
 * GM - completely custom soldier, not from base
 */
class cnto_us_gm : B_Soldier_base_F {
    scope = 2;
    faction = CNTO_US;
    displayName = "GM";
    #define _weaps hgun_ACPC2_F, ACE_Vector, Throw, Put
    #define _mags 9Rnd_45ACP_Mag, \
                  x10(9Rnd_45ACP_Mag)
    #define _items ACE_MapTools, ACE_Flashlight_MX991, ACRE_PRC343, ACRE_PRC152, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ItemGPS, G_Goggles_VR
    ASSIGN_GEAR;
    backpack =;
    uniformClass = U_B_Protagonist_VR;
    class EventHandlers : EventHandlers {
        class godlike { init = "(_this select 0) call cnto_units_fnc_godlike"; };
    };
    attendant = true;
    engineer = true;
    uavHacker = true;
};

/* ------------------------------------------------------------------------- */

#include "groups\units.h"

/* ------------------------------------------------------------------------- */

/*
 * Crates
 */

class Box_NATO_Ammo_F;
class cnto_us_resupply_small : Box_NATO_Ammo_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_US_Supplies;
    displayName = "Infantry Resupply (Small)";
    class TransportWeapons {
        xweaps(1, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(24, rhs_mag_30Rnd_556x45_M855A1_Stanag);
        xmags(6, rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red);
        xmags(4, rhsusf_100Rnd_556x45_soft_pouch);
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
class cnto_us_resupply_medium : B_supplyCrate_F {
    editorCategory = CNTO_Other;
    editorSubcategory = CNTO_US_Supplies;
    displayName = "Infantry Resupply (Medium)";
    class TransportWeapons {
        xweaps(4, tf47_at4_HEDP);
    };
    class TransportMagazines {
        xmags(80, rhs_mag_30Rnd_556x45_M855A1_Stanag);
        xmags(20, rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red);
        xmags(12, rhsusf_100Rnd_556x45_soft_pouch);
        xmags(30, SmokeShell);
        xmags(8, SmokeShellGreen);
        xmags(4, SmokeShellBlue);
        xmags(24, MiniGrenade);
        xmags(15, 1Rnd_HE_Grenade_shell);
        xmags(4, hlc_100Rnd_762x51_M_M60E4);
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
