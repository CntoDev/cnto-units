#define QUOTE(x) #x
#define INIT_EH(id, color) [(_this select 0), id, color] call cnto_units_fnc_initGroupAttr
#define SOLDIER(base, suffix, dname, grpid, color) \
    class base##_##suffix : base { \
        scope = 1; \
        displayName = dname; \
        class EventHandlers : EventHandlers { \
            class group_attr { init = QUOTE(INIT_EH(grpid, color)); }; \
        }; \
    }

//SOLDIER(cnto_us_sq_sl,asl,    "Alpha Squad Leader",           'ASL', 'MAIN');
