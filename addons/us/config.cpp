#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_us {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "rhsusf_c_weapons",
            "tf47_m3maaws"
        };
    };
};

#include "defines.h"
#include "\cnto\units\shared\template\config.h"

class CfgWeapons {
#include "CfgWeapons.h"
};
