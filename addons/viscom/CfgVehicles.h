class Items_base_F;
class Land_Laptop_unfolded_F : Items_base_F { class EventHandlers; };
class Land_PCSet_01_screen_F : Items_base_F { class EventHandlers; };
class Land_PCSet_01_keyboard_F : Items_base_F { class EventHandlers; };
class Land_PCSet_01_mouse_F : Items_base_F { class EventHandlers; };
class Land_PCSet_01_case_F : Items_base_F { class EventHandlers; };
class Land_Portable_generator_F : Items_base_F { class EventHandlers; };
class ThingX;
class Land_CampingTable_F : ThingX { class EventHandlers; };
class House;
class Land_Antenna : House { class EventHandlers; };
class Land_CamoNetVar_EAST : House { class EventHandlers; };

#define VISCOM_OBJECT(new, base, name) \
    class new : base { \
        editorCategory = CNTO_Other; \
        editorSubcategory = CNTO_VISCOM; \
        displayName = name; \
        class EventHandlers : EventHandlers { \
            class viscom { init = "(_this select 0) addAction [""VISCOM"", {[true,false] call ace_spectator_fnc_setSpectator}]"; }; \
            class nosimul { init = "if (is3DEN) then { 0 = (_this select 0) spawn { waitUntil { !isNil {((_this get3DENAttribute ""enableSimulation"") select 0) } }; _this set3DENAttribute [""enableSimulation"", false] }}"; } \
        }; \
    }

VISCOM_OBJECT(cnto_viscom_laptop,    Land_Laptop_unfolded_F,    "VISCOM Laptop");
VISCOM_OBJECT(cnto_viscom_screen,    Land_PCSet_01_screen_F,    "VISCOM Monitor");
VISCOM_OBJECT(cnto_viscom_keyboard,  Land_PCSet_01_keyboard_F,  "VISCOM Keyboard");
VISCOM_OBJECT(cnto_viscom_mouse,     Land_PCSet_01_mouse_F,     "VISCOM Mouse");
VISCOM_OBJECT(cnto_viscom_case,      Land_PCSet_01_case_F,      "VISCOM PC Case");
VISCOM_OBJECT(cnto_viscom_table,     Land_CampingTable_F,       "VISCOM Table");
VISCOM_OBJECT(cnto_viscom_generator, Land_Portable_generator_F, "VISCOM Generator");
VISCOM_OBJECT(cnto_viscom_antenna,   Land_Antenna,              "VISCOM Antenna");
VISCOM_OBJECT(cnto_viscom_camonet,   Land_CamoNetVar_EAST,      "VISCOM Camo Net");
