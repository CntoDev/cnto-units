/*
 * "named" units, for use in CfgGroups, with lobby-friendly names
 */

#define QUOTE(x) #x
#define INIT_EH(id, color) [(_this select 0), id, color] call cnto_units_fnc_initGroupAttr
#define SOLDIER(base, suffix, dname, grpid, color) \
    class base##_##suffix : base { \
        scope = 1; \
        displayName = dname; \
        class EventHandlers { \
            init = QUOTE(INIT_EH(grpid, color)); \
        }; \
    }

// TODO: scope = 1  and add it to a group in CfgGroups

SOLDIER(cnto_us_sq_sl,asl,    "Alpha 1 Squad Leader",         'ASL', 'MAIN');
SOLDIER(cnto_us_sq_medic,asl, "Alpha 1 Squad Medic",          'ASL', 'MAIN');
SOLDIER(cnto_us_ft_tl,a1,     "Alpha 1 Fireteam Leader",      'A1',  'BLUE');
SOLDIER(cnto_us_ft_ar,a1,     "Alpha 1 Autorifleman",         'A1',  'GREEN');
SOLDIER(cnto_us_ft_aar,a1,    "Alpha 1 Assist. autorifleman", 'A1',  'GREEN');
SOLDIER(cnto_us_ft_at,a1,     "Alpha 1 Rifleman AT",          'A1',  'BLUE');
SOLDIER(cnto_us_ft_tl,a2,     "Alpha 2 Fireteam Leader",      'A2',  'RED');
SOLDIER(cnto_us_ft_ar,a2,     "Alpha 2 Autorifleman",         'A2',  'YELLOW');
SOLDIER(cnto_us_ft_aar,a2,    "Alpha 2 Assist. autorifleman", 'A2',  'YELLOW');
SOLDIER(cnto_us_ft_at,a2,     "Alpha 2 Rifleman AT",          'A2',  'RED');
SOLDIER(cnto_us_ft_tl,a3,     "Alpha 3 Fireteam Leader",      'A3',  'BLUE');
SOLDIER(cnto_us_ft_ar,a3,     "Alpha 3 Autorifleman",         'A3',  'GREEN');
SOLDIER(cnto_us_ft_aar,a3,    "Alpha 3 Assist. autorifleman", 'A3',  'GREEN');
SOLDIER(cnto_us_ft_at,a3,     "Alpha 3 Rifleman AT",          'A3',  'BLUE');

SOLDIER(cnto_us_sq_sl,bsl,    "Bravo 1 Squad Leader",         'BSL', 'MAIN');
SOLDIER(cnto_us_sq_medic,bsl, "Bravo 1 Squad Medic",          'BSL', 'MAIN');
SOLDIER(cnto_us_ft_tl,b1,     "Bravo 1 Fireteam Leader",      'B1',  'BLUE');
SOLDIER(cnto_us_ft_ar,b1,     "Bravo 1 Autorifleman",         'B1',  'GREEN');
SOLDIER(cnto_us_ft_aar,b1,    "Bravo 1 Assist. autorifleman", 'B1',  'GREEN');
SOLDIER(cnto_us_ft_at,b1,     "Bravo 1 Rifleman AT",          'B1',  'BLUE');
SOLDIER(cnto_us_ft_tl,b2,     "Bravo 2 Fireteam Leader",      'B2',  'RED');
SOLDIER(cnto_us_ft_ar,b2,     "Bravo 2 Autorifleman",         'B2',  'YELLOW');
SOLDIER(cnto_us_ft_aar,b2,    "Bravo 2 Assist. autorifleman", 'B2',  'YELLOW');
SOLDIER(cnto_us_ft_at,b2,     "Bravo 2 Rifleman AT",          'B2',  'RED');

SOLDIER(cnto_us_hq_co,1,         "HQ Commander",       'HQ',  'MAIN');
SOLDIER(cnto_us_hq_sgt,1,        "HQ Sergeant",        'HQ',  'MAIN');
SOLDIER(cnto_us_hq_medic,1,      "HQ Medic",           'HQ',  'MAIN');
SOLDIER(cnto_us_hq_rfl,1,        "HQ Rifleman",        'HQ',  'MAIN');

SOLDIER(cnto_us_mmg_tl,1,        "MMG Team Leader",    'MMG', 'MAIN');
SOLDIER(cnto_us_mmg_gunner,1,    "MMG Gunner",         'MMG', 'MAIN');
SOLDIER(cnto_us_mmg_bearer,1,    "MMG Ammo Bearer",    'MMG', 'MAIN');

SOLDIER(cnto_us_mat_tl,1,        "MAT Team Leader",    'MAT', 'MAIN');
SOLDIER(cnto_us_mat_gunner,1,    "MAT Gunner",         'MAT', 'MAIN');
SOLDIER(cnto_us_mat_bearer,1,    "MAT Ammo Bearer",    'MAT', 'MAIN');

SOLDIER(cnto_us_mortar_gunner,1, "Mortar Gunner",      'MTR', 'MAIN');
SOLDIER(cnto_us_mortar_assist,1, "Mortar Ass. Gunner", 'MTR', 'MAIN');

SOLDIER(cnto_us_veh_co,1,      "Vehicle Commander ""Dagger 1""",       'DGR1', 'MAIN');
SOLDIER(cnto_us_veh_driver,1,  "Vehicle Driver ""Dagger 1"" (Repair)", 'DGR1', 'MAIN');
SOLDIER(cnto_us_veh_gunner,1,  "Vehicle Gunner ""Dagger 1""",          'DGR1', 'MAIN');
SOLDIER(cnto_us_veh_co,2,      "Vehicle Commander ""Dagger 2""",       'DGR2', 'MAIN');
SOLDIER(cnto_us_veh_driver,2,  "Vehicle Driver ""Dagger 2"" (Repair)", 'DGR2', 'MAIN');
SOLDIER(cnto_us_veh_gunner,2,  "Vehicle Gunner ""Dagger 2""",          'DGR2', 'MAIN');
SOLDIER(cnto_us_veh_co,3,      "Vehicle Commander ""Dagger 3""",       'DGR3', 'MAIN');
SOLDIER(cnto_us_veh_driver,3,  "Vehicle Driver ""Dagger 3"" (Repair)", 'DGR3', 'MAIN');
SOLDIER(cnto_us_veh_gunner,3,  "Vehicle Gunner ""Dagger 3""",          'DGR3', 'MAIN');
SOLDIER(cnto_us_veh_co,4,      "Vehicle Commander ""Thunder""",        'Thunder', 'MAIN');
SOLDIER(cnto_us_veh_driver,4,  "Vehicle Driver ""Thunder"" (Repair)",  'Thunder', 'MAIN');
SOLDIER(cnto_us_veh_gunner,4,  "Vehicle Gunner ""Thunder""",           'Thunder', 'MAIN');

SOLDIER(cnto_us_air_pilot,1,   "Pilot ""Nightbird 1""",                'NB1', 'MAIN');
SOLDIER(cnto_us_air_copilot,1, "Co-pilot ""Nightbird 1"" (Repair)",    'NB1', 'MAIN');
SOLDIER(cnto_us_air_pilot,2,   "Pilot ""Nightbird 2""",                'NB2', 'MAIN');
SOLDIER(cnto_us_air_copilot,2, "Co-pilot ""Nightbird 2"" (Repair)",    'NB2', 'MAIN');
SOLDIER(cnto_us_air_pilot,3,   "Pilot ""Nightbird 3""",                'NB3', 'MAIN');
SOLDIER(cnto_us_air_copilot,3, "Co-pilot ""Nightbird 3"" (Repair)",    'NB3', 'MAIN');
SOLDIER(cnto_us_air_pilot,4,   "Pilot ""Reaper""",                     'RPR', 'MAIN');
SOLDIER(cnto_us_air_copilot,4, "Co-pilot ""Reaper"" (Repair)",         'RPR', 'MAIN');

SOLDIER(cnto_us_trainer,1, "Trainer 1", 'Trains', 'MAIN');
SOLDIER(cnto_us_trainer,2, "Trainer 2", 'Trains', 'MAIN');
SOLDIER(cnto_us_trainer,3, "Trainer 3", 'Trains', 'MAIN');
SOLDIER(cnto_us_trainer,4, "Trainer 4", 'Trains', 'MAIN');

SOLDIER(cnto_us_gm,1,      "Game master 1", 'GMs', 'MAIN');
SOLDIER(cnto_us_gm,2,      "Game master 2", 'GMs', 'MAIN');
