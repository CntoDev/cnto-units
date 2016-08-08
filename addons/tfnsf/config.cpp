class CfgPatches {
    class cnto_units_tfnsf {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "cnto_units_shared",
            "A3_Characters_F",
            "A3_Weapons_F",
            "A3_Weapons_F_SMGs_SMG_02",         // sting smg
            "A3_Weapons_F_Rifles_Khaybar",      // katiba
            "A3_Weapons_F_LongRangeRifles_GM6", // gm6 lynx
            "hlcweapons_m60e4"
        };
    };
};


class CfgFactionClasses {
    class CNTO_TFNSF {
        displayName = "CNTO TFN Special Forces";
        side = 2;
    };
};

class CfgEditorSubcategories {
    class CNTO_TFNSF_BlackOps { displayName = "BlackOps (Night)"; };
};

class CfgVehicles {
#include "CfgVehicles.h"
};
class CfgWeapons {
#include "CfgWeapons.h"
};
