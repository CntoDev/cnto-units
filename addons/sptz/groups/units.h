/*
 * "named" units, for sptze in CfgGroups, with lobby-friendly names
 */

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

SOLDIER(cnto_sptz_sq_sl,ssl,    "Sokol Squad Leader",           'SSL', 'MAIN');
SOLDIER(cnto_sptz_sq_medic,ssl, "Sokol Squad Medic",            'SSL', 'MAIN');
SOLDIER(cnto_sptz_ft_tl,s1,     "Sokol 1 Fireteam Leader",      'S1',  'BLUE');
SOLDIER(cnto_sptz_ft_ar,s1,     "Sokol 1 Autorifleman",         'S1',  'GREEN');
SOLDIER(cnto_sptz_ft_aar,s1,    "Sokol 1 Assist. autorifleman", 'S1',  'GREEN');
SOLDIER(cnto_sptz_ft_at,s1,     "Sokol 1 Rifleman AT",          'S1',  'BLUE');
SOLDIER(cnto_sptz_ft_tl,s2,     "Sokol 2 Fireteam Leader",      'S2',  'RED');
SOLDIER(cnto_sptz_ft_ar,s2,     "Sokol 2 Autorifleman",         'S2',  'YELLOW');
SOLDIER(cnto_sptz_ft_aar,s2,    "Sokol 2 Assist. autorifleman", 'S2',  'YELLOW');
SOLDIER(cnto_sptz_ft_at,s2,     "Sokol 2 Rifleman AT",          'S2',  'RED');
SOLDIER(cnto_sptz_ft_tl,s3,     "Sokol 3 Fireteam Leader",      'S3',  'BLUE');
SOLDIER(cnto_sptz_ft_ar,s3,     "Sokol 3 Autorifleman",         'S3',  'GREEN');
SOLDIER(cnto_sptz_ft_aar,s3,    "Sokol 3 Assist. autorifleman", 'S3',  'GREEN');
SOLDIER(cnto_sptz_ft_at,s3,     "Sokol 3 Rifleman AT",          'S3',  'BLUE');

SOLDIER(cnto_sptz_sq_sl,osl,    "Orel Squad Leader",           'OSL', 'MAIN');
SOLDIER(cnto_sptz_sq_medic,osl, "Orel Squad Medic",            'OSL', 'MAIN');
SOLDIER(cnto_sptz_ft_tl,o1,     "Orel 1 Fireteam Leader",      'O1',  'BLUE');
SOLDIER(cnto_sptz_ft_ar,o1,     "Orel 1 Autorifleman",         'O1',  'GREEN');
SOLDIER(cnto_sptz_ft_aar,o1,    "Orel 1 Assist. autorifleman", 'O1',  'GREEN');
SOLDIER(cnto_sptz_ft_at,o1,     "Orel 1 Rifleman AT",          'O1',  'BLUE');
SOLDIER(cnto_sptz_ft_tl,o2,     "Orel 2 Fireteam Leader",      'O2',  'RED');
SOLDIER(cnto_sptz_ft_ar,o2,     "Orel 2 Autorifleman",         'O2',  'YELLOW');
SOLDIER(cnto_sptz_ft_aar,o2,    "Orel 2 Assist. autorifleman", 'O2',  'YELLOW');
SOLDIER(cnto_sptz_ft_at,o2,     "Orel 2 Rifleman AT",          'O2',  'RED');

SOLDIER(cnto_sptz_coy_co,1,        "COY Commander",      'COY Comd', 'MAIN');
SOLDIER(cnto_sptz_coy_sgt,1,       "COY Sergeant",       'COY Comd', 'MAIN');
SOLDIER(cnto_sptz_coy_medic,1,     "COY Medic",          'COY Comd', 'MAIN');
SOLDIER(cnto_sptz_coy_rfl,1,       "COY Rifleman",       'COY Comd', 'MAIN');

SOLDIER(cnto_sptz_mmg_tl,1,        "MMG Team Leader",    'MMG', 'MAIN');
SOLDIER(cnto_sptz_mmg_gunner,1,    "MMG Gunner",         'MMG', 'MAIN');
SOLDIER(cnto_sptz_mmg_bearer,1,    "MMG Ammo Bearer",    'MMG', 'MAIN');

SOLDIER(cnto_sptz_mat_tl,1,        "MAT Team Leader",    'MAT', 'MAIN');
SOLDIER(cnto_sptz_mat_gunner,1,    "MAT Gunner",         'MAT', 'MAIN');
SOLDIER(cnto_sptz_mat_bearer,1,    "MAT Ammo Bearer",    'MAT', 'MAIN');

SOLDIER(cnto_sptz_mortar_gunner,1, "Mortar Gunner",      'MTR', 'MAIN');
SOLDIER(cnto_sptz_mortar_assist,1, "Mortar Ass. Gunner", 'MTR', 'MAIN');

SOLDIER(cnto_sptz_veh_co,1,      "Vehicle Commander ""Grozney 1""",       'GRZNY 1', 'MAIN');
SOLDIER(cnto_sptz_veh_driver,1,  "Vehicle Driver ""Grozney 1"" (Repair)", 'GRZNY 1', 'MAIN');
SOLDIER(cnto_sptz_veh_gunner,1,  "Vehicle Gunner ""Grozney 1""",          'GRZNY 1', 'MAIN');
SOLDIER(cnto_sptz_veh_co,2,      "Vehicle Commander ""Grozney 2""",       'GRZNY 2', 'MAIN');
SOLDIER(cnto_sptz_veh_driver,2,  "Vehicle Driver ""Grozney 2"" (Repair)", 'GRZNY 2', 'MAIN');
SOLDIER(cnto_sptz_veh_gunner,2,  "Vehicle Gunner ""Grozney 2""",          'GRZNY 2', 'MAIN');
SOLDIER(cnto_sptz_veh_co,3,      "Vehicle Commander ""Grozney 3""",       'GRZNY 3', 'MAIN');
SOLDIER(cnto_sptz_veh_driver,3,  "Vehicle Driver ""Grozney 3"" (Repair)", 'GRZNY 3', 'MAIN');
SOLDIER(cnto_sptz_veh_gunner,3,  "Vehicle Gunner ""Grozney 3""",          'GRZNY 3', 'MAIN');
SOLDIER(cnto_sptz_veh_co,4,      "Vehicle Commander ""Armata""",        'Armata', 'MAIN');
SOLDIER(cnto_sptz_veh_driver,4,  "Vehicle Driver ""Armata"" (Repair)",  'Armata', 'MAIN');
SOLDIER(cnto_sptz_veh_gunner,4,  "Vehicle Gunner ""Armata""",           'Armata', 'MAIN');

SOLDIER(cnto_sptz_air_pilot,1,   "Pilot ""Yastreb 1""",                'YSTB 1', 'MAIN');
SOLDIER(cnto_sptz_air_copilot,1, "Co-pilot ""Yastreb 1"" (Repair)",    'YSTB 1', 'MAIN');
SOLDIER(cnto_sptz_air_pilot,2,   "Pilot ""Yastreb 2""",                'YSTB 2', 'MAIN');
SOLDIER(cnto_sptz_air_copilot,2, "Co-pilot ""Yastreb 2"" (Repair)",    'YSTB 2', 'MAIN');
SOLDIER(cnto_sptz_air_pilot,3,   "Pilot ""Yastreb 3""",                'YSTB 3', 'MAIN');
SOLDIER(cnto_sptz_air_copilot,3, "Co-pilot ""Yastreb 3"" (Repair)",    'YSTB 3', 'MAIN');
SOLDIER(cnto_sptz_air_pilot,4,   "Pilot ""Sova""",                     'SOVA', 'MAIN');
SOLDIER(cnto_sptz_air_copilot,4, "Co-pilot ""Sova"" (Repair)",         'SOVA', 'MAIN');

SOLDIER(cnto_sptz_trainer,1, "Trainer 1", 'Trg', 'MAIN');
SOLDIER(cnto_sptz_trainer,2, "Trainer 2", 'Trg', 'MAIN');
SOLDIER(cnto_sptz_trainer,3, "Trainer 3", 'Trg', 'MAIN');
SOLDIER(cnto_sptz_trainer,4, "Trainer 4", 'Trg', 'MAIN');

SOLDIER(cnto_sptz_gm,1,      "Game master 1", 'GMs', 'MAIN');
SOLDIER(cnto_sptz_gm,2,      "Game master 2", 'GMs', 'MAIN');
