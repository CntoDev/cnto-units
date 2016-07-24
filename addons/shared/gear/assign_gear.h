#define ASSIGN_GEAR \
    weapons[] = {_weaps}; respawnWeapons[] = {_weaps}; \
    magazines[] = {_mags}; respawnMagazines[] = {_mags}; \
    items[] = {_items}; respawnItems[] = {_items}; \
    linkedItems[] = {_linked}; respawnLinkedItems[] = {_linked}

#define ADD_GEAR \
    weapons[] += {_weaps}; respawnWeapons[] += {_weaps}; \
    magazines[] += {_mags}; respawnMagazines[] += {_mags}; \
    items[] += {_items}; respawnItems[] += {_items}; \
    linkedItems[] += {_linked}; respawnLinkedItems[] += {_linked}

#define ASSIGN_GEAR_EMPTY_RESPAWN \
    weapons[] = {_weaps}; respawnWeapons[] = {}; \
    magazines[] = {_mags}; respawnMagazines[] = {}; \
    items[] = {_items}; respawnItems[] = {}; \
    linkedItems[] = {_linked}; respawnLinkedItems[] = {}

#define ADD_GEAR_EMPTY_RESPAWN \
    weapons[] += {_weaps}; respawnWeapons[] = {}; \
    magazines[] += {_mags}; respawnMagazines[] = {}; \
    items[] += {_items}; respawnItems[] = {}; \
    linkedItems[] += {_linked}; respawnLinkedItems[] = {}
