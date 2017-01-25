#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_ch {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "hlcweapons_stgw57"
        };
    };
};

#include "defines.h"
#include "\cnto\units\shared\template\config.h"

class CfgWeapons {
#include "CfgWeapons.h"
};
