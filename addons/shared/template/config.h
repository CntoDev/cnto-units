class CfgFactionClasses {
    class JOIN2(CNTO_,FACTION_META) {
        displayName = QUOTE(JOIN2(CNTO ,FACTION_HUMAN));
        side = 1;
    };
};

class CfgEditorSubcategories {
    class JOIN3(CNTO_,FACTION_META,_Supplies) {
        displayName = QUOTE(JOIN2(FACTION_HUMAN, Supplies));
    };
};

#define SOLDIER_CLASS(x)   JOIN4(cnto_,FACTION_META,_,x)
#define BACKPACK_CLASS(x)  JOIN2(SOLDIER_CLASS(x),_pack)

class CfgVehicles {
#include "CfgVehicles.h"
};

#ifdef FACTION_SIDE_WEST
#define GROUP_SIDE_CLASS West
#endif
#ifdef FACTION_SIDE_EAST
#define GROUP_SIDE_CLASS East
#endif
#ifdef FACTION_SIDE_GUER
#define GROUP_SIDE_CLASS Indep
#endif
#ifdef FACTION_SIDE_CIV
#define GROUP_SIDE_CLASS Empty
#endif

class CfgGroups {
    class GROUP_SIDE_CLASS {
        class JOIN2(CNTO_,FACTION_META) {
            name = QUOTE(JOIN2(CNTO ,FACTION_HUMAN));
#include "groups\groups.h"
        };
    };
};

#undef SOLDIER_CLASS
#undef BACKPACK_CLASS
