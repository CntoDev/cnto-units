#include "\cnto\units\shared\include.h"

class CfgPatches {
    class cnto_units_col {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "cnto_units_us",
            "A3_Characters_F",
            "A3_Weapons_F_Ammoboxes",
            "rhs_c_weapons",
            "hlcweapons_g3"
        };
    };
};

#include "defines.h"
#include "\cnto\units\shared\template\config.h"

class CfgWeapons {
#include "CfgWeapons.h"
};
