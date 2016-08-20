#include "\cnto\units\shared\gear.h"
#include "\cnto\units\shared\cnt_cargo.h"

class SoldierGB;
class I_Soldier_base_F : SoldierGB {
    class EventHandlers;
};

class B_AssaultPack_blk;
class B_FieldPack_blk;
class B_Carryall_oli;

class cnto_tfnsf_base : I_Soldier_base_F {
    scope = 0;
    faction = CNTO_TFNSF;
    backpack =;
    nameSound = veh_infantry_SF_s;
    camouflage = 0.3;  //we use 0.7 spotdistance skill
    audible = 0.005;
    attendant = 1;
    engineer = 1;
    uavHacker = 1;
    canDeactivateMines = 1;
    canHideBodies = 1;
    /* I should actually just re-define all of the 9000 sounds, but with lower
     * volume .. though it would be a lot of variables to break on Arma update.
     * This is really lazy, but as there are still *some* quiet footstep
     * sounds, it works reasonably well in practice. */
    class SoundEnvironExt {};
    class SoundGear {};
};

/* ------------------------------------------------------------------------- */

class cnto_tfnsf_blackop_base : cnto_tfnsf_base {
    editorSubcategory = CNTO_TFNSF_BlackOps;
    #define _weaps
    #define _mags \
                  x2(SmokeShellGreen), x2(MiniGrenade)
    #define _items x4(ACE_fieldDressing), x2(ACE_morphine), ACE_Flashlight_XL50, x2(ACE_CableTie), x2(ACE_IR_Strobe_Item), ACE_MapTools, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadioAcreFlagged, NVGoggles_OPFOR
    ASSIGN_GEAR;
    uniformClass = CamoU_Black;
};

class cnto_tfnsf_blackop_cqb : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "CQB Specialist";
    #define _weaps cnto_tfnsf_sting, ACE_Vector, Throw, Put
    #define _mags 30Rnd_9x21_Mag, \
                  x8(30Rnd_9x21_Mag), x8(ACE_M84)
    #define _items x4(ACE_CableTie)
    #define _linked AAFVest01_l_black, rhsusf_protech_helmet, cnto_flecktarn_f_bala_forest
    ADD_GEAR;
    backpack = cnto_tfnsf_blackop_cqb_pack;
};
class cnto_tfnsf_blackop_cqb_pack : B_AssaultPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(8, 30Rnd_9x21_Mag);
        xmags(4, MiniGrenade);
        xmags(12, ACE_M84);
    };
};

class cnto_tfnsf_blackop_rifle : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "Grenadier";
    #define _weaps cnto_tfnsf_katiba_gl, hgun_P07_snds_F, ACE_Vector, Throw, Put
    #define _mags 30Rnd_65x39_caseless_green, 1Rnd_HE_Grenade_shell, 30Rnd_9x21_Mag, \
                  x8(30Rnd_65x39_caseless_green), x2(ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim)
    #define _items
    #define _linked AAFVest01_m_black, rhsusf_protech_helmet, cnto_flecktarn_f_bala_forest
    ADD_GEAR;
    backpack = cnto_tfnsf_blackop_rifle_pack;
};
class cnto_tfnsf_blackop_rifle_pack : B_AssaultPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(12, 1Rnd_HE_Grenade_shell);
        xmags(4, 1Rnd_Smoke_Grenade_shell);
        xmags(4, UGL_FlareWhite_F);
        xmags(8, ACE_HuntIR_M203);
        xmags(2, I_IR_Grenade);
    };
    class TransportItems {
        xitems(1, ACE_HuntIR_monitor);
    };
};

class cnto_tfnsf_blackop_mark : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "Marksman (AT/Utility)";
    #define _weaps rhs_weap_asval, rhs_weap_m72a7, hgun_P07_snds_F, ACE_Vector, Throw, Put
    #define _mags rhs_20rnd_9x39mm_SP5, 30Rnd_9x21_Mag, \
                  x6(rhs_20rnd_9x39mm_SP5), x2(30Rnd_9x21_Mag)
    #define _items
    #define _linked AAFVest01_l_black, H_Watchcap_blk, G_Bandanna_blk
    ADD_GEAR;
    backpack = cnto_tfnsf_blackop_mark_pack;
};
class cnto_tfnsf_blackop_mark_pack : B_AssaultPack_blk {
    scope = 1;
    class TransportItems {
        xitems(1, ToolKit);
        xitems(1, ACE_wirecutter);
    };
};

class cnto_tfnsf_blackop_demo : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "Demo Expert";
    #define _weaps cnto_tfnsf_katiba, hgun_P07_snds_F, ACE_Vector, Throw, Put
    #define _mags 30Rnd_65x39_caseless_green, 30Rnd_9x21_Mag, \
                  x8(30Rnd_65x39_caseless_green), x2(ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim)
    #define _items ACE_DeadManSwitch, ACE_DefusalKit
    #define _linked AAFVest01_m_black, H_Beret_blk, G_Balaclava_blk
    ADD_GEAR;
    backpack = cnto_tfnsf_blackop_demo_pack;
};
class cnto_tfnsf_blackop_demo_pack : B_FieldPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(6, DemoCharge_Remote_Mag);
        xmags(2, SLAMDirectionalMine_Wire_Mag);
        xmags(1, IEDUrbanSmall_Remote_Mag);
    };
    /* vanilla mine detector doesn't work with ACE */
};

class cnto_tfnsf_blackop_scout : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "Scout";
    #define _weaps cnto_tfnsf_pdw, Laserdesignator_03, Throw, Put
    #define _mags 30Rnd_9x21_Mag, Laserbatteries, \
                  x4(30Rnd_9x21_Mag)
    #define _items
    #define _linked TacVest_black, BoonieH_black, G_Balaclava_blk
    ADD_GEAR;
    class EventHandlers : EventHandlers {
        /* is a weapon, doesn't work in _items or _weaps and having a backpack
         * just for it is not enough of a justification */
        class add_thermal_binos { init = "if (!is3DEN) then { (_this select 0) addItemToVest ""ACE_MX2A"" }"; };
        /* since we already use EH for the above, add these explicitly
         * into the vest, leaving items shared by other classes in the uniform
         * (although all of these can be added via _items) */
        class add_uav_terminal { init = "if (!is3DEN) then { (_this select 0) addItemToVest ""I_UavTerminal"" }"; };
        class add_microdagr { init = "if (!is3DEN) then { (_this select 0) addItemToVest ""ACE_microDAGR"" }"; };
    };
};

class cnto_tfnsf_blackop_sniper : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "Support Sniper";
    #define _weaps cnto_tfnsf_gm6lynx, hgun_P07_snds_F, ACE_Vector, Throw, Put
    #define _mags 5Rnd_127x108_APDS_Mag, 30Rnd_9x21_Mag, \
                  x6(5Rnd_127x108_APDS_Mag), 30Rnd_9x21_Mag
    #define _items ACE_ATragMX, ACE_Kestrel4500
    #define _linked AAFVest01_l_black, BoonieH_black, G_Balaclava_blk
    ADD_GEAR;
};
/* no backpack - the AP rounds are very powerful, limited supply is needed
class cnto_tfnsf_blackop_sniper_pack : B_AssaultPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(4, 5Rnd_127x108_APDS_Mag);
        xmags(2, 30Rnd_9x21_Mag);
    };
};*/

class cnto_tfnsf_blackop_mg : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "Support Gunner";
    #define _weaps cnto_tfnsf_m60, hgun_P07_snds_F, ACE_Vector, Throw, Put
    #define _mags hlc_100Rnd_762x51_B_M60E4, 30Rnd_9x21_Mag, \
                  x4(hlc_100Rnd_762x51_B_M60E4)
    #define _items ACE_EarPlugs
    #define _linked AAFVest01_m_black, H_Bandanna_gry, G_Bandanna_blk
    ADD_GEAR;
    backpack = cnto_tfnsf_blackop_mg_pack;
};
class cnto_tfnsf_blackop_mg_pack : B_FieldPack_blk {
    scope = 1;
    class TransportMagazines {
        xmags(7, hlc_100Rnd_762x51_B_M60E4);
        xmags(1, 30Rnd_9x21_Mag);
    };
};

class cnto_tfnsf_blackop_missile : cnto_tfnsf_blackop_base {
    scope = 2;
    displayName = "Missile Master (AT)";
    #define _weaps cnto_tfnsf_katiba, launch_I_Titan_short_F, hgun_P07_snds_F, ACE_Vector, Throw, Put
    #define _mags 30Rnd_65x39_caseless_green, Titan_AT, 30Rnd_9x21_Mag, \
                  x4(30Rnd_65x39_caseless_green), x2(ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim)
    #define _items
    #define _linked AAFVest01_m_black, H_Bandanna_gry, G_Bandanna_blk
    ADD_GEAR;
    backpack = cnto_tfnsf_blackop_missile_pack;
};
class cnto_tfnsf_blackop_missile_pack : B_Carryall_oli {
    scope = 1;
    class TransportMagazines {
        xmags(3, Titan_AT);
    };
};
