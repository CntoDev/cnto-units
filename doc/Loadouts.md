BIG WARNING
===========

This describes how to create a completely custom faction from scratch, incl.
custom groups, custom unit roles, etc.

If you "just" want to define a new loadout for the "standard" unit structure,
(you most likely want that) look into `Loadout_Template.md`.

Soldier loadouts
================

These are defined as
```
weapons[]
respawnWeapons[]
magazines[]
respawnMagazines[]
items[]
respawnItems[]
linkedItems[]
respawnLinkedItems[]
```
(see https://community.bistudio.com/wiki/Arma_3_Characters_And_Gear_Encoding_Guide#Character_configuration).

Normally, you would use these as ie.
```
weapons[] = { someweap,anotherweap,thirdweap };
respawnWeapons[] = { someweap,anotherweap,thirdweap };
```

In order to not have to duplicate loadout specification between normal/respawn
config options, you can use preprocessor defines, ie.
```
#define something someweap,anotherweap,thirdweap
weapons[] = { something };
respawnWeapons[] = { something }
```

This can be applied to all 4 categories at once in a nice fashion, suppose you
define all of the categories in a preprocessor like
```
#define ASSIGN_GEAR \
    weapons[] = {_weaps}; \
    respawnWeapons[] = {_weaps}; \
    magazines[] = {_mags}; \
    respawnMagazines[] = {_mags}; \
    items[] = {_items}; \
    respawnItems[] = {_items}; \
    linkedItems[] = {_linked}; \
    respawnLinkedItems[] = {_linked}
```
(`\` is needed for to make the next line be part of the macro).

And then you can simply define all 4 placeholders and place this `ASSIGN_GEAR`
"alias" in the soldier config, like
```
#define _weaps  someweap,anotherweap,thirdweap
#define _mags   somemag,anothermag
#define _items  ItemGPS,something_else
#define _linked somehelmet
ASSIGN_GEAR;
```
(note the last `;` as we didn't add it in the macro).

This would automatically expand to
```
    weapons[] = {someweap,anotherweap,thirdweap};
    respawnWeapons[] = {someweap,anotherweap,thirdweap};
    magazines[] = {somemag,anothermag};
    respawnMagazines[] = {somemag,anothermag};
    items[] = {ItemGPS,something_else};
    respawnItems[] = {ItemGPS,something_else};
    linkedItems[] = {somehelmet};
    respawnLinkedItems[] = {somehelmet};
```
While you could use ie. `weaps` instead of `_weaps`, if anything else
(unrelated) in the config contains the word `weaps`, it would get replaced
as well! While this is unlikely for `weaps`, it is likely for `items`,
which is a valid identifier inside cargo loadout classes.

Adding
------

The config syntax also supports the `+=` operator, using which you can add
things to an existing (inherited) list.

Assume the following is defined in a parent class:
```
magazines[] = {somemag,anothermag};
respawnMagazines[] = {somemag,anothermag};
```
Then you can, in an inherited class:
```
magazines[] += {thirdmag};
respawnMagazines[] += {thirdmag};
```

To (again) simplify it, we can define a variation on `ASSIGN_GEAR` from above
called ie. `ADD_GEAR` (or `APPEND_GEAR`, or something):
```
#define ADD_GEAR \
    weapons[] += {_weaps}; \
    respawnWeapons[] += {_weaps}; \
    magazines[] += {_mags}; \
    respawnMagazines[] += {_mags}; \
    items[] += {_items}; \
    respawnItems[] += {_items}; \
    linkedItems[] += {_linked}; \
    respawnLinkedItems[] += {_linked}
```
Its usage should be pretty clear by now - one would use `ASSIGN_GEAR` for the
parent class and `ADD_GEAR` in the child one.

If you don't want to add anything in a specific category (ie. you're fine with
the items inherited from parent), you still need to define `_items` as empty,
so that nothing is added. Otherwise, the previous definition of `_items` would
be used (likely the parent one), adding twice as many items.

To add ie. 20 mags on top of whatever was inherited from the parent,
```
#define _weaps
#define _mags   x20(somemag)
#define _items
#define _linked
ADD_GEAR;
```

Multiplication
--------------

To have ie. more than one magazine of a single type, you need to specify it
multiple times:
```
magazines[] = { somemag,somemag,somemag };
```
This can be very tedious for ie. 50x magazines of one type.

Fortunately, you can again use the preprocessor to define a macro:
```
#define once(x)   x
#define twice(x)  x,x
#define ten(x)    x,x,x,x,x,x,x,x,x,x
#define fifty(x)  ten(x),ten(x),ten(x),ten(x),ten(x)
...
magazines[] = { fifty(somemag) };
```
Preprocessor aliases cannot start with a number, but they can contain one,
so you can give better names to "once" and "twice", perhaps "x1" and "x2",
with "fifty" being ie. "x50".


Cargo loadouts
==============

Cargo (backpack, boxes, vehicles, etc.) is very different, there, you put
loadouts in specific classes,

 * TransportWeapons
 * TransportMagazines
 * TransportItems
 * TransportBackpacks

as unique class names with specific content based on the class above.

For `TransportWeapons`, these are
```
class unique_class_name_someweap {
    weapon = someweap;
    count = 1;
};
```

For `TransportMagazines`, ie.:
```
class unique_class_name_somemag {
    magazine = somemag;
    count = 5;
};
class another_class_name_anothermag {
    magazine = anothermag;
    count = 15;
};
```

`TransportItems`:
```
class some_gps_item_classname {
    name = ItemGPS;
    count = 1;
};
```

And `TransportBackpacks`:
```
class ten_backpacks_on_a_wall {
    backpack = B_AssaultPack_F;
    count = 10;
};
```

Multiplication
--------------

As you can directly specify the count, there's no need for crazy duplication
like in a soldier config. However the definitions above can indeed be made
nicer, ie. like:
```
#define xweaps(cnt, id) class id { weapon = id; count = cnt; }
#define xmags(cnt, id) class id { magazine = id; count = cnt; }
#define xitems(cnt, id) class id { name = id; count = cnt; }
#define xbackpacks(cnt, id) class id { backpack = id; count = cnt; }
```

And then you can simply
```
xmags(5, somemag);
xmags(15, anothermag);
```
inside `TransportMagazines` as `id` will be the magazine name, providing
a unique class name.


Bugs / warnings
===============

Weapons in `weapons[]` or `respawnWeapons[]` need to be in a specific order,
otherwise animation glitches occur. Make sure to have

 * main weapon first (if any),
 * followed by a launcher (if any),
 * followed by a handgun (if any),
 * followed by whatever else in any order, incl. `Throw` and `Put`

See the explanation on wiki for more details (end of the section):
https://community.bistudio.com/wiki/Arma_3_Characters_And_Gear_Encoding_Guide#Character_configuration


Conventions and standards
=========================

Please try to keep / follow any conventions outlined here, to avoid confusion
when other people read the configs after you.

Soldier spec
------------

In the code below, anything inside `<` `>` is something that should be replaced
with an actual value. Also, not all items need to be specified, omit unwanted
ones.
```
class cnto_<faction>_<unittype> : <baseclass> {
    scope = 2;
    displayName = "Some Soldier Type";
    #define _weaps <primary_weapon>, <launcher>, <secondary_weapon>, <binoculars>, Throw, Put
    #define _mags <loaded_primary_mags>, <loaded_launcher_rocket>, <loaded_handgun_mags>, <loaded_laser_batteries>, \
                  <any_additional_mags_for_uniform_or_vest_same_order_as_above>
    #define _items <radios>, <any_items_for_uniform_or_vest>
    #define _linked <vest>, <helmet>, <any_other_linked_items>
    ADD_GEAR;
    backpack = cnto_<faction>_<unittype>_pack;
    ... any soldier specific tunables (like medic/engineer) here ..
    ... any EventHandlers here ...
};
class cnto_<faction>_<unittype>_pack : <baseclass> {
    scope = 1;
    class TransportWeapons {
        xweaps(123, <weapclass>);
    };
    class TransportMagazines {
        xmags(123, <magclass>);
    };
    class TransportItems {
        xitems(123, <itemclass>);
    };
    class TransportBackpacks {
        xbackpacks(123, <bpclass>);
    };
};
```
For examples, see one of the factions in `addons`, look in `CfgVehicles.h`.
