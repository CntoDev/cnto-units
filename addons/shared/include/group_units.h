/*
 * "named" units, for use in CfgGroups, with lobby-friendly names
 */
#define WRAP_INIT_EH(name, id, color) [(_this select 0), name, id, color] call cnto_units_fnc_initGroupAttr
#define NAMED_SOLDIER(base, suffix, name, grpid, color) \
    class base##_##suffix : base { \
        scope = 1; \
        class EventHandlers : EventHandlers { \
            class group_attr { init = QUOTE(WRAP_INIT_EH(name, grpid, color)); }; \
        }; \
    }

//NAMED_SOLDIER(cnto_us_sq_sl,a,    "Alpha Squad Leader",            'ASL', 'MAIN');
//NAMED_SOLDIER(cnto_us_ft_tl,a,    "Alpha %1 Fireteam Leader",      'A%1', 'RED');
