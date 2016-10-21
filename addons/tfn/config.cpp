#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_tfn {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "cnto_units_us",
            "cnto_assets",  /* backpacks */
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "hlcweapons_m14"
        };
    };
};

#include "defines.h"
#include "\cnto\units\shared\template\config.h"

class CfgWeapons {
#include "CfgWeapons.h"
};
