#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class B_Soldier_base_F;
class B_AssaultPack_rgr;
class B_Kitbag_rgr;

class cnto_us_soldier_base : B_Soldier_base_F {
    scope = 0;
    faction = CNTO_US;
    #define _weaps Throw, Put, hgun_ACPC2_F
    #define _mags x4(SmokeShell), x2(MiniGrenade), x3(9Rnd_45ACP_Mag)
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine), ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
};

/*
 * squad (lead)
 */
class cnto_us_sl : cnto_us_soldier_base {
    scope = 2;
    displayName = "SL";
    #define _weaps cnto_us_m4a1_gl_flash, ACE_Vector
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 1Rnd_SmokeRed_Grenade_shell, \
                  x10(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACE_Flashlight_MX991, ACRE_PRC152
    #define _linked rhsusf_iotv_ucp_Squadleader, rhsusf_ach_helmet_ESS_ucp, ItemGPS
    ADD_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
    backpack = cnto_us_sl_pack;
};
class cnto_us_sl_pack : B_AssaultPack_rgr {
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

class cnto_us_medic : cnto_us_soldier_base {
    scope = 2;
    displayName = "Medic";
    #define _weaps cnto_us_m4a1_flash
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, \
                  x10(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red)
    #define _items ACE_Flashlight_MX991
    #define _linked rhsusf_iotv_ucp_Medic, rhsusf_ach_helmet_ESS_ucp, ItemGPS
    ADD_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
    backpack = cnto_us_medic_pack;
};
class cnto_us_medic_pack : B_Kitbag_rgr {
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
class cnto_us_ftl : cnto_us_soldier_base {
    scope = 2;
    displayName = "FTL";
    #define _weaps cnto_us_m4a1_gl_flash, ACE_Vector
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, 1Rnd_HE_Grenade_shell, \
                  x10(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACE_Flashlight_MX991
    #define _linked rhsusf_iotv_ucp_Grenadier, rhsusf_ach_helmet_ESS_ucp, ItemGPS
    ADD_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
    backpack = cnto_us_ftl_pack;
};
class cnto_us_ftl_pack : B_AssaultPack_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(5, 1Rnd_HE_Grenade_shell);
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

class cnto_us_ar : cnto_us_soldier_base {
    scope = 2;
    displayName = "AR";
    #define _weaps cnto_us_m249_flash
    #define _mags rhsusf_100Rnd_556x45_soft_pouch, \
                  x3(rhsusf_100Rnd_556x45_soft_pouch)
    #define _items ACE_Flashlight_MX991
    #define _linked rhsusf_iotv_ucp_SAW, rhsusf_ach_helmet_ESS_ucp
    ADD_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
    backpack =;
};

class cnto_us_aar : cnto_us_soldier_base {
    scope = 2;
    displayName = "AAR";
    #define _weaps cnto_us_m4a1_flash, ACE_Vector
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, \
                  x10(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red)
    #define _items x2(ACE_CableTie), ACE_MapTools, ACE_Flashlight_MX991
    #define _linked rhsusf_iotv_ucp_Teamleader, rhsusf_ach_helmet_ESS_ucp, ItemGPS
    ADD_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
    backpack = cnto_us_aar_pack;
};
class cnto_us_aar_pack : B_Kitbag_rgr {
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

class cnto_us_at : cnto_us_soldier_base {
    scope = 2;
    displayName = "AT";
    #define _weaps cnto_us_m4a1_flash, tf47_at4_HEDP
    #define _mags rhsusf_100Rnd_556x45_soft_pouch, \
                  x10(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red)
    #define _items ACE_Flashlight_MX991
    #define _linked rhsusf_iotv_ucp_Rifleman, rhsusf_ach_helmet_ESS_ucp
    ADD_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
    backpack =;
};
