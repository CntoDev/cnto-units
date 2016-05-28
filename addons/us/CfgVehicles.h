#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class B_Soldier_base_F;
class B_AssaultPack_rgr;

class cnto_us_soldier_base : B_Soldier_base_F {
    scope = 0;
    faction = CNTO_US;
    #define _weaps Throw, Put
    #define _mags 
    #define _items x8(ACE_fieldDressing), x2(ACE_morphine)
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
};

/*
 * fireteam
 */
class cnto_us_ft_ftl : cnto_us_soldier_base {
    scope = 2;
    displayName = "FTL";
    #define _weaps cnto_us_m4a1_gl_flash, hgun_ACPC2_F, ACE_Vector
    #define _mags rhs_mag_30Rnd_556x45_M855A1_Stanag, rhs_mag_M441_HE, 9Rnd_45ACP_Mag, \
                  x4(SmokeShell), x2(9Rnd_45ACP_Mag), x10(rhs_mag_30Rnd_556x45_M855A1_Stanag), x2(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red)
    #define _items ACRE_PRC343, x2(ACE_CableTie), ACE_MapTools, ACE_Flashlight_MX991
    #define _linked rhsusf_iotv_ucp_Grenadier, rhsusf_ach_helmet_ESS_ucp, ItemGPS
    ADD_GEAR;
    uniformClass = rhs_uniform_cu_ucp;
    backpack = cnto_us_ft_ftl_pack;
};
class cnto_us_ft_ftl_pack : B_AssaultPack_rgr {
    scope = 1;
    class TransportMagazines {
        xmags(5, rhs_mag_M441_HE);
        xmags(5, rhs_mag_m714_White);
        xmags(5, rhs_mag_m713_Red);
        xmags(2, MiniGrenade);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};
