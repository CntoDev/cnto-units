Logic behind this
=================

Instead of defining completely custom factions from scratch every time, the idea
is to have some place (`shared/template`) which would define all the "low level"
logic, unit classes, group structure, etc., and a layer on top which would
specify the loadouts and gear.

There could be multiple layers re-using the same "low level" base structure,
effectively creating multiple factions as we know them, but much more easily
and with less code.

**The code examples below are not functioning codes, they just illustrate the
mechanisms behind this system.**

The template
============

The low level template is in `addons/shared/template` and the layers are the
factions in `addons`. The template defines placeholders which the layers fill
in with specific weapon classes, ammo, etc.
Code wise, this uses the Arma 3 preprocessor.

Let's say we have something like this in the template, in `soldiers.h` file:
```
class cnto_FACTION_autorifleman {
    main_weapon = AR_MAIN_WEAPON;
    sec_weapon = AR_SEC_WEAPON;
};
```
and in the layer, we do
```
#define FACTION csat
#define AR_MAIN_WEAPON LMG_Zafir_F
#define AR_SEC_WEAPON  hgun_ACPC2_F

#include "path\to\template\soldiers.h"
```

The include causes the layer-defined file to appear as
```
#define FACTION csat
#define AR_MAIN_WEAPON LMG_Zafir_F
#define AR_SEC_WEAPON  hgun_ACPC2_F

class cnto_FACTION_autorifleman {
    main_weapon = AR_MAIN_WEAPON;
    sec_weapon = AR_SEC_WEAPON;
};
```
and Arma finally interprets it as
```
class cnto_csat_autorifleman {
    main_weapon = LMG_Zafir_F;
    sec_weapon = hgun_ACPC2_F;
};
```

Stacking
========

This mechanism can be stacked/nested - one layer (faction) might define most of
the loadout and another needs to just redefine ie. the main weapon and can
re-use all other definitions.

Let's say the `nato` faction defines this in `defines.h`:
```
#define FACTION nato
#define MAIN_WEAPON arifle_MX_ACO_F
#define SEC_WEAPON  hgun_P07_F
#define LIGHTAT     launch_NLAW_F
#define ANTIAIR     launch_Titan_F
#define ANTITANK    launch_Titan_short_F
```
and we want to make a `ctrg` faction using the same loadout except the main
weapon. We can simply include the `nato` defines file and just re-define
what we want, leaving the rest untouched:
```
#include "path\to\factions\nato\defines.h"

#define FACTION ctrg
#define MAIN_WEAPON arifle_Mk20_F

#include "path\to\template\soldiers.h"
```

This gets expanded to
```
#define FACTION nato
#define MAIN_WEAPON arifle_MX_ACO_F
#define SEC_WEAPON  hgun_P07_F
#define LIGHTAT     launch_NLAW_F
#define ANTIAIR     launch_Titan_F
#define ANTITANK    launch_Titan_short_F

#define FACTION ctrg
#define MAIN_WEAPON arifle_Mk20_F

#include "path\to\template\soldiers.h"
```
which, after processing defines, results in
```
#define FACTION ctrg
#define MAIN_WEAPON arifle_Mk20_F
#define SEC_WEAPON  hgun_P07_F
#define LIGHTAT     launch_NLAW_F
#define ANTIAIR     launch_Titan_F
#define ANTITANK    launch_Titan_short_F

#include "path\to\template\soldiers.h"
```
(template part not included, you get the idea hopefully).

Defines of defines
==================

As defines are really just aliases of one thing for another, you can easily
reference another define inside your define, dawg:
```
#define MAIN_WEAPON arifle_MX_ACO_F
#define SEC_WEAPON  hgun_P07_F

#define ALL_WEAPONS MAIN_WEAPON,SEC_WEAPON
```
The `ALL_WEAPONS` literally contains `MAIN_WEAPON,SEC_WEAPON`, not the final
definitions, so if you re-defined ie. `MAIN_WEAPON` later on, it doesn't matter:
```
#define MAIN_WEAPON arifle_MX_ACO_F
#define SEC_WEAPON  hgun_P07_F

#define ALL_WEAPONS MAIN_WEAPON,SEC_WEAPON

#define MAIN_WEAPON arifle_Mk20_F
```
What matters is *when* these definitions are used and that's only when you
include the soldiers file from the template.

This means we can have a standard structure of ie. how many magazines a soldier
should have without every layer/faction needing to specify it, while still being
able to say the magazine class:
```
// in the nato faction
#define LEADER_MAGS     x6(MAG_MAIN), x2(MAG_MAIN_TRACER), x2(MAG_SEC)
#define MAG_MAIN        30Rnd_65x39_caseless_mag
#define MAG_MAIN_TRACER 30Rnd_65x39_caseless_mag_Tracer
#define MAG_SEC         16Rnd_9x21_Mag

// in the ctrg faction
#define MAG_MAIN        30Rnd_556x45_Stanag
#define MAG_MAIN_TRACER 30Rnd_556x45_Stanag_Tracer_Yellow
```
This way, `ctrg` reuses the magazine counts and secondary mag class, while being
able to re-define the main weapon magazines.

What does this do for you
=========================

This logic allows us to abstract a LOT of the boilerplate you would normally
need to define or take care of when making a faction, like

 * Class definitions for all soldiers
 * "Named" definitions, incl. colors / callsign specs
 * Group classes, unit positions, ranks, etc.
 * Specifying correctly named side for `CfgGroups` definition
 * Selecting proper side (numeric) for the faction
 * Picking the right soldier base class based on side
 * ... a lot of corner cases ...

The layering also means that if you ie. include definitions from NATO and
override only what you need, you can get new units (like the recent jet pilot
or designated marksman team additions) **for free, without any changes**!

(You can customize them, but don't need to.)

Actual real examples
====================

Take a look into `addons` at the `us` faction and into the `defines.h` file.
This defines all placeholders and serves as a reference for you, to see what
can be re-defined in your faction. You can re-define everything, but by no
means you should - the idea is to modify only what you want to modify compared
to this reference.

Then take a look at the `tfn` faction and see how the layering works in
practice - the faction is based on `us` and re-uses most of the definitions,
but specifies different uniforms, vests, weapons and ammo. Though it gets ie.
the MAAWS launcher "for free", as it is defined in the `us` faction.

You can see more layering in practice on the `sptz` faction, which uses the
`rus` faction as a base, which itself uses `us` - each layer defines only
what really needs changing, nothing more.

Weapons with attachments
========================

This unfortunately doesn't change - you still need to define a new weapon
in the game with the attachments you want, and then use the weapon in your
loadouts. See the `CfgWeapons.h` file in the `us` faction, for example.

This comes with the need to specify PBO dependencies in the `config.cpp`
file of your faction (again look at `us`), so that the base class of the
weapon is available at the time you modify it.

You can find the parent PBO defining the weapon using the following in one
of the 4 small lines of the debug console:
```
configSourceAddonList (configFile >> "CfgWeapons" >> "the_class_you_inherit");
```

For example if you want to modify `arifle_Mk20_F` (adding ie. optic to it),
you would get the dependency as
```
configSourceAddonList (configFile >> "CfgWeapons" >> "arifle_Mk20_F");
```
which returns `A3_Weapons_F_Rifles_Mk20`, which is what you need to depend on.
