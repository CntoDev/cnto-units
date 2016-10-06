#ifdef FACTION_SIDE_WEST
class SoldierWB;
class B_Soldier_base_F : SoldierWB {
    class EventHandlers;
};
#define BASE_BASE_CLASS B_Soldier_base_F
#endif

#ifdef FACTION_SIDE_EAST
class SoldierEB;
class O_Soldier_base_F : SoldierEB {
    class EventHandlers;
};
#define BASE_BASE_CLASS O_Soldier_base_F
#endif

#ifdef FACTION_SIDE_GUER
class SoldierGB;
class I_Soldier_base_F : SoldierGB {
    class EventHandlers;
};
#define BASE_BASE_CLASS I_Soldier_base_F
#endif

#ifdef FACTION_SIDE_CIV
class Civilian;
class Civilian_F : Civilian {
    class EventHandlers;
};
#define BASE_BASE_CLASS Civilian_F
#endif

class BACKPACK_MAIN;
class BACKPACK_ALT;
class BACKPACK_BIG;

class SOLDIER_CLASS(soldier_base) : BASE_BASE_CLASS {
    scope = 0;
    faction = JOIN2(CNTO_,FACTION_META);
    #define _weaps
    #define _mags \
                  x4(SmokeShell), x2(MiniGrenade)
    #define _items x4(ACE_fieldDressing), x6(ACE_quikclot), ACE_morphine, ACE_tourniquet, FLASHLIGHT, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
    uniformClass = UNIFORM_DEFAULT;
    backpack =;
};

/*
 * squad (lead)
 */
class SOLDIER_CLASS(sq_sl) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "SQ SL";
    #define _weaps WEAPONS_LEADER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_LEADER, \
                  MAGAZINES_CARRY_LEADER
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked VEST_SL, HELMET_LEADER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(sq_sl);
    attendant = 1;
};
class BACKPACK_CLASS(sq_sl) : BACKPACK_MAIN {
    scope = 1;
    class TransportMagazines {
        xmags(4, MAGAZINE_GL_HE);
        xmags(4, MAGAZINE_GL_SMOKE_WHITE);
        xmags(4, MAGAZINE_GL_SMOKE_RED);
        xmags(4, MAGAZINE_GL_SMOKE_GREEN);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class SOLDIER_CLASS(sq_medic) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "SQ Medic";
    #define _weaps WEAPONS_OTHER, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_OTHER
    #define _items
    #define _linked VEST_MEDIC, HELMET_OTHER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(sq_medic);
    attendant = 1;
};
class BACKPACK_CLASS(sq_medic) : BACKPACK_ALT {
    scope = 1;
    class TransportMagazines {
        xmags(8, SmokeShell);
        xmags(2, SmokeShellGreen);
    };
    class TransportItems {
        xitems(20, ACE_fieldDressing);
        xitems(30, ACE_quikclot);
        xitems(20, ACE_packingBandage);
        xitems(20, ACE_elasticBandage);
        xitems(20, ACE_morphine);
        xitems(10, ACE_epinephrine);
        xitems(5, ACE_adenosine);
        xitems(8, ACE_bloodIV_500);
        xitems(4, ACE_tourniquet);
        xitems(1, ACE_surgicalKit);
    };
};

/*
 * fireteam
 */
class SOLDIER_CLASS(ft_tl) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "FT Lead";
    #define _weaps WEAPONS_LEADER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_LEADER, \
                  MAGAZINES_CARRY_LEADER
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked VEST_FTL, HELMET_LEADER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(ft_tl);
};
class BACKPACK_CLASS(ft_tl) : BACKPACK_MAIN {
    scope = 1;
    class TransportMagazines {
        xmags(8, MAGAZINE_GL_HE);
        xmags(5, MAGAZINE_GL_SMOKE_WHITE);
        xmags(5, MAGAZINE_GL_SMOKE_RED);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class SOLDIER_CLASS(ft_ar) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "FT AR";
    #define _weaps WEAPONS_AR, Throw, Put
    #define _mags MAGAZINES_LOADED_AR, \
                  MAGAZINES_CARRY_AR
    #define _items
    #define _linked VEST_AR, HELMET_AR
    ADD_GEAR;
};

class SOLDIER_CLASS(ft_aar) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "FT AAR";
    #define _weaps WEAPONS_AAR, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_LEADER
    #define _items x2(ACE_CableTie), ACE_MapTools
    #define _linked VEST_AAR, HELMET_OTHER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(ft_aar);
};
class BACKPACK_CLASS(ft_aar) : BACKPACK_ALT {
    scope = 1;
    class TransportMagazines {
        xmags(2, MAGAZINE_PRIMARY_AR);
        xmags(8, MAGAZINE_PRIMARY);
        xmags(2, MiniGrenade);
        xmags(3, SmokeShell);
        xmags(2, SmokeShellGreen);
        xmags(1, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class SOLDIER_CLASS(ft_at) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "FT AT";
    #define _weaps WEAPONS_AT, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_OTHER
    #define _items
    #define _linked VEST_OTHER, HELMET_OTHER
    ADD_GEAR;
};

/*
 * platoon (lead)
 */
class SOLDIER_CLASS(plt_co) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "PLT Commander";
    #define _weaps WEAPONS_LEADER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_LEADER_PLT, \
                  MAGAZINES_CARRY_LEADER
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked VEST_SL, HELMET_COMMANDER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(plt_co);
};
class BACKPACK_CLASS(plt_co) : BACKPACK_MAIN {
    scope = 1;
    class TransportMagazines {
        xmags(5, MAGAZINE_GL_SMOKE_WHITE);
        xmags(5, MAGAZINE_GL_SMOKE_RED);
        xmags(5, MAGAZINE_GL_SMOKE_GREEN);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class SOLDIER_CLASS(plt_sgt) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "PLT Sergeant";
    #define _weaps WEAPONS_OTHER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_LEADER
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked VEST_AAR, HELMET_LEADER, ItemGPS
    ADD_GEAR;
};

class SOLDIER_CLASS(plt_medic) : SOLDIER_CLASS(sq_medic) {
    displayName = "PLT Medic";
};

class SOLDIER_CLASS(plt_rfl) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "PLT Rifleman";
    #define _weaps WEAPONS_OTHER, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_OTHER
    #define _items
    #define _linked VEST_OTHER, HELMET_OTHER
    ADD_GEAR;
};

/*
 * MMG
 */
class SOLDIER_CLASS(mmg_tl) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "MMG Lead";
    #define _weaps WEAPONS_LEADER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_LEADER, \
                  MAGAZINES_CARRY_LEADER
    #define _items x2(ACE_CableTie), ACE_MapTools, ACRE_PRC152
    #define _linked VEST_FTL, HELMET_LEADER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(mmg_tl);
};
class BACKPACK_CLASS(mmg_tl) : BACKPACK_MAIN {
    scope = 1;
    class TransportMagazines {
        xmags(8, MAGAZINE_GL_HE);
        xmags(2, MAGAZINE_GL_SMOKE_WHITE);
        xmags(5, MAGAZINE_GL_SMOKE_RED);
        xmags(3, SmokeShell);
        xmags(5, SmokeShellGreen);
        xmags(2, SmokeShellBlue);
    };
    class TransportItems {
        xitems(1, ACE_IR_Strobe_Item);
    };
};

class SOLDIER_CLASS(mmg_gunner) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "MMG Gunner";
    #define _weaps WEAPONS_MMG, Throw, Put
    #define _mags MAGAZINES_LOADED_MMG, \
                  MAGAZINES_CARRY_MMG
    #define _items
    #define _linked VEST_AR, HELMET_AR
    ADD_GEAR;
};

class SOLDIER_CLASS(mmg_bearer) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "MMG Bearer";
    #define _weaps WEAPONS_OTHER, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_OTHER
    #define _items
    #define _linked VEST_OTHER, HELMET_OTHER
    ADD_GEAR;
    backpack = BACKPACK_CLASS(mmg_bearer);
};
class BACKPACK_CLASS(mmg_bearer) : BACKPACK_ALT {
    scope = 1;
    class TransportMagazines {
        xmags(5, MAGAZINE_PRIMARY_MMG);
        xmags(2, MAGAZINE_PRIMARY_MMG_TRACER);
    };
};

/*
 * MAT
 */
class SOLDIER_CLASS(mat_tl) : SOLDIER_CLASS(mmg_tl) {
    displayName = "MAT Lead";
};

class SOLDIER_CLASS(mat_gunner) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "MAT Rocketman";
    #define _weaps WEAPONS_MAT, Throw, Put
    #define _mags MAGAZINES_LOADED_MAT, \
                  MAGAZINES_CARRY_MAT
    #define _items
    #define _linked VEST_OTHER, HELMET_AR
    ADD_GEAR;
    backpack = BACKPACK_CLASS(mat_gunner);
};
class BACKPACK_CLASS(mat_gunner) : BACKPACK_ALT {
    scope = 1;
    class TransportMagazines {
        xmags(2, MAGAZINE_LAUNCHER_MAT_PRI);
        xmags(1, MAGAZINE_LAUNCHER_MAT_SEC);
    };
};

class SOLDIER_CLASS(mat_bearer) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "MAT Carrier";
    #define _weaps WEAPONS_OTHER, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_OTHER
    #define _items
    #define _linked VEST_OTHER, HELMET_OTHER
    ADD_GEAR;
    backpack = BACKPACK_CLASS(mat_bearer);
};
class BACKPACK_CLASS(mat_bearer) : BACKPACK_ALT {
    scope = 1;
    class TransportMagazines {
        xmags(2, MAGAZINE_LAUNCHER_MAT_PRI);
        xmags(1, MAGAZINE_LAUNCHER_MAT_SEC);
    };
};

/*
 * Mortar
 */
class SOLDIER_CLASS(mortar_assist) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "Mortar Ass. Gunner";
    #define _weaps WEAPONS_OTHER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  x2(SmokeShellGreen), SmokeShellBlue, MAGAZINES_CARRY_OTHER
    #define _items ACE_MapTools, ACE_RangeTable_82mm, ACRE_PRC152
    #define _linked VEST_AAR, HELMET_LEADER, ItemGPS
    ADD_GEAR;
    backpack = B_Mortar_01_support_F;
};

class SOLDIER_CLASS(mortar_gunner) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "Mortar Gunner";
    #define _weaps WEAPONS_OTHER, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  MAGAZINES_CARRY_OTHER
    #define _items ACE_MapTools, ACE_RangeTable_82mm
    #define _linked VEST_OTHER, HELMET_OTHER
    ADD_GEAR;
    backpack = B_Mortar_01_weapon_F;
};

/*
 * Engineering Team
 */
class SOLDIER_CLASS(eng_tl) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "Eng TL";
    #define _weaps WEAPONS_OTHER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  x4(MAGAZINE_PRIMARY)
    #define _items ACE_MapTools, ACRE_PRC148, ACRE_PRC152, ACE_M26_Clacker, ACE_DefusalKit, ACE_EntrenchingTool, ACE_wirecutter
    #define _linked VEST_AAR, HELMET_LEADER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(eng_tl);
    engineer = 1;
    canDeactivateMines = 1;
};
class BACKPACK_CLASS(eng_tl) : BACKPACK_BIG {
    scope = 1;
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class SOLDIER_CLASS(eng_rfl) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "Eng Rifleman";
    #define _weaps WEAPONS_OTHER, BINOCULARS, Throw, Put
    #define _mags MAGAZINES_LOADED_OTHER, \
                  x4(MAGAZINE_PRIMARY)
    #define _items ACE_MapTools, ACRE_PRC148, ACE_M26_Clacker, ACE_DefusalKit, ACE_EntrenchingTool, ACE_wirecutter
    #define _linked VEST_AR, HELMET_OTHER, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(eng_tl);
    engineer = 1;
    canDeactivateMines = 1;
};

/* ------------------------------------------------------------------------- */

class SOLDIER_CLASS(crew_base) : BASE_BASE_CLASS {
    scope = 0;
    faction = JOIN2(CNTO_,FACTION_META);
    #define _weaps WEAPONS_CREW, Throw, Put
    #define _mags MAGAZINES_LOADED_CREW, \
                  x2(SmokeShell), x2(SmokeShellGreen), x2(SmokeShellBlue), x2(MiniGrenade), MAGAZINES_CARRY_CREW
    #define _items x10(ACE_quikclot), ACE_morphine, FLASHLIGHT, ACRE_PRC343
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged
    ASSIGN_GEAR;
    backpack =;
};

/*
 * Vehicle Crew
 */
class SOLDIER_CLASS(veh_co) : SOLDIER_CLASS(crew_base) {
    scope = 2;
    displayName = "Vehicle Commander";
    #define _weaps BINOCULARS_CREW
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked VEST_CREW, HELMET_CREW_VEHICLE, ACE_NVG_Wide, ItemGPS
    ADD_GEAR;
    uniformClass = UNIFORM_CREW_VEHICLE;
};

class SOLDIER_CLASS(veh_driver) : SOLDIER_CLASS(crew_base) {
    scope = 2;
    displayName = "Vehicle Driver";
    #define _weaps
    #define _mags
    #define _items
    #define _linked VEST_CREW, HELMET_CREW_VEHICLE, ACE_NVG_Wide
    ADD_GEAR;
    backpack = BACKPACK_CLASS(veh_driver);
    uniformClass = UNIFORM_CREW_VEHICLE;
    engineer = 1;
};
class BACKPACK_CLASS(veh_driver) : BACKPACK_MAIN {
    scope = 1;
    class TransportMagazines {
        xmags(4, MAGAZINE_PRIMARY);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class SOLDIER_CLASS(veh_gunner) : SOLDIER_CLASS(crew_base) {
    scope = 2;
    displayName = "Vehicle Gunner";
    #define _weaps
    #define _mags
    #define _items
    #define _linked VEST_CREW, HELMET_CREW_VEHICLE, ACE_NVG_Wide
    ADD_GEAR;
    uniformClass = UNIFORM_CREW_VEHICLE;
    engineer = 1;
};

/*
 * Air crew
 */
class SOLDIER_CLASS(air_pilot) : SOLDIER_CLASS(crew_base) {
    scope = 2;
    displayName = "Air Pilot";
    #define _weaps BINOCULARS_CREW
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked VEST_CREW, HELMET_CREW_PILOT, ACE_NVG_Wide, ItemGPS
    ADD_GEAR;
    uniformClass = UNIFORM_CREW_PILOT;
    engineer = 1;
};

class SOLDIER_CLASS(air_copilot) : SOLDIER_CLASS(crew_base) {
    scope = 2;
    displayName = "Air Copilot";
    #define _weaps BINOCULARS_CREW
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked VEST_CREW, HELMET_CREW_PILOT, ACE_NVG_Wide, ItemGPS
    ADD_GEAR;
    backpack = BACKPACK_CLASS(air_copilot);
    uniformClass = UNIFORM_CREW_PILOT;
    engineer = 1;
};
class BACKPACK_CLASS(air_copilot) : BACKPACK_MAIN {
    scope = 1;
    class TransportMagazines {
        xmags(4, MAGAZINE_PRIMARY);
    };
    class TransportItems {
        xitems(1, ToolKit);
    };
};

class SOLDIER_CLASS(air_jetpilot) : SOLDIER_CLASS(crew_base) {
    scope = 2;
    displayName = "Jet Pilot";
    #define _weaps BINOCULARS_CREW
    #define _mags
    #define _items ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked VEST_CREW, HELMET_CREW_JETPILOT, ItemGPS
    ADD_GEAR;
    backpack = B_Parachute;
    uniformClass = UNIFORM_CREW_PILOT;
    engineer = 1;
};

/* ------------------------------------------------------------------------- */

/*
 * Trainer
 */
class SOLDIER_CLASS(trainer) : SOLDIER_CLASS(soldier_base) {
    scope = 2;
    displayName = "Trainer";
    #define _weaps WEAPON_SECONDARY, Throw, Put
    #define _mags MAGAZINE_SECONDARY, \
                  x4(MAGAZINE_SECONDARY)
    #define _items x2(ACE_CableTie), x5(ACE_epinephrine), x2(ACE_bloodIV), ACE_MapTools, ACRE_PRC152, ACRE_PRC148
    #define _linked VEST_SL, HELMET_COMMANDER, ItemGPS
    ADD_GEAR;
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
class SOLDIER_CLASS(gm) : BASE_BASE_CLASS {
    scope = 2;
    faction = JOIN2(CNTO_,FACTION_META);
    displayName = "GM";
    #define _weaps WEAPON_SECONDARY, Throw, Put
    #define _mags MAGAZINE_SECONDARY, \
                  x10(MAGAZINE_SECONDARY)
    #define _items ACE_MapTools, FLASHLIGHT, ACRE_PRC343, ACRE_PRC152, ACRE_PRC148
    #define _linked ItemMap, ItemCompass, ItemWatch, ItemRadioAcreFlagged, ItemGPS, G_Goggles_VR
    ASSIGN_GEAR;
    backpack =;
    //cannot use nested ifdefs in arma
    #define UNIFORM_CLASS_GM U_I_Protagonist_VR
    #ifdef FACTION_SIDE_WEST
    #define UNIFORM_CLASS_GM U_B_Protagonist_VR
    #endif
    #ifdef FACTION_SIDE_EAST
    #define UNIFORM_CLASS_GM U_O_Protagonist_VR
    #endif
    uniformClass = UNIFORM_CLASS_GM;
    #undef UNIFORM_CLASS_GM
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

class RESUPPLY_BOX_SMALL;
class SOLDIER_CLASS(resupply_small) : RESUPPLY_BOX_SMALL {
    editorCategory = CNTO_Other;
    editorSubcategory = JOIN3(CNTO_,FACTION_META,_Supplies);
    displayName = "Infantry Resupply (Small)";
    class TransportWeapons {
        xweaps(1, WEAPON_LAUNCHER);
    };
    class TransportMagazines {
        xmags(24, MAGAZINE_PRIMARY);
        xmags(6, MAGAZINE_PRIMARY_TRACER);
        xmags(4, MAGAZINE_PRIMARY_AR);
        xmags(12, SmokeShell);
        xmags(10, MiniGrenade);
        xmags(5, MAGAZINE_GL_HE);
    };
    class TransportItems {
        xitems(12, ACE_fieldDressing);
        xitems(18, ACE_quikclot);
        xitems(4, ACE_morphine);
    };
    class TransportBackpacks {};
};

class RESUPPLY_BOX_MEDIUM;
class SOLDIER_CLASS(resupply_medium) : RESUPPLY_BOX_MEDIUM {
    editorCategory = CNTO_Other;
    editorSubcategory = JOIN3(CNTO_,FACTION_META,_Supplies);
    displayName = "Infantry Resupply (Medium)";
    class TransportWeapons {
        xweaps(4, WEAPON_LAUNCHER);
    };
    class TransportMagazines {
        xmags(80, MAGAZINE_PRIMARY);
        xmags(20, MAGAZINE_PRIMARY_TRACER);
        xmags(12, MAGAZINE_PRIMARY_AR);
        xmags(30, SmokeShell);
        xmags(8, SmokeShellGreen);
        xmags(4, SmokeShellBlue);
        xmags(24, MiniGrenade);
        xmags(15, MAGAZINE_GL_HE);
        xmags(4, MAGAZINE_PRIMARY_MMG);
        xmags(4, MAGAZINE_LAUNCHER_MAT_PRI);
        xmags(2, MAGAZINE_LAUNCHER_MAT_SEC);
    };
    class TransportItems {
        xitems(40, ACE_fieldDressing);
        xitems(60, ACE_quikclot);
        xitems(20, ACE_packingBandage);
        xitems(20, ACE_elasticBandage);
        xitems(20, ACE_morphine);
        xitems(10, ACE_epinephrine);
        xitems(5, ACE_adenosine);
        xitems(8, ACE_bloodIV_500);
    };
    class TransportBackpacks {};
};
