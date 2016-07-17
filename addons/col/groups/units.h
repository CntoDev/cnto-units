/*
 * "named" units, for COL in CfgGroups, with lobby-friendly names
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

SOLDIER(cnto_col_sq_sl,rsl,    "Ranger Squad Leader",           'RL', 'MAIN');
SOLDIER(cnto_col_sq_medic,rsl, "Ranger Squad Medic",            'RL', 'MAIN');
SOLDIER(cnto_col_ft_tl,r1,     "Ranger 1 Fireteam Leader",      'R1',  'BLUE');
SOLDIER(cnto_col_ft_ar,r1,     "Ranger 1 Autorifleman",         'R1',  'GREEN');
SOLDIER(cnto_col_ft_aar,r1,    "Ranger 1 Assist. autorifleman", 'R1',  'GREEN');
SOLDIER(cnto_col_ft_at,r1,     "Ranger 1 Rifleman AT",          'R1',  'BLUE');
SOLDIER(cnto_col_ft_tl,r2,     "Ranger 2 Fireteam Leader",      'R2',  'RED');
SOLDIER(cnto_col_ft_ar,r2,     "Ranger 2 Autorifleman",         'R2',  'YELLOW');
SOLDIER(cnto_col_ft_aar,r2,    "Ranger 2 Assist. autorifleman", 'R2',  'YELLOW');
SOLDIER(cnto_col_ft_at,r2,     "Ranger 2 Rifleman AT",          'R2',  'RED');
SOLDIER(cnto_col_ft_tl,r3,     "Ranger 3 Fireteam Leader",      'R3',  'BLUE');
SOLDIER(cnto_col_ft_ar,r3,     "Ranger 3 Autorifleman",         'R3',  'GREEN');
SOLDIER(cnto_col_ft_aar,r3,    "Ranger 3 Assist. autorifleman", 'R3',  'GREEN');
SOLDIER(cnto_col_ft_at,r3,     "Ranger 3 Rifleman AT",          'R3',  'BLUE');

SOLDIER(cnto_col_sq_sl,msl,    "Marine Squad Leader",           'ML', 'MAIN');
SOLDIER(cnto_col_sq_medic,msl, "Marine Squad Medic",            'ML', 'MAIN');
SOLDIER(cnto_col_ft_tl,m1,     "Marine 1 Fireteam Leader",      'M1',  'BLUE');
SOLDIER(cnto_col_ft_ar,m1,     "Marine 1 Autorifleman",         'M1',  'GREEN');
SOLDIER(cnto_col_ft_aar,m1,    "Marine 1 Assist. autorifleman", 'M1',  'GREEN');
SOLDIER(cnto_col_ft_at,m1,     "Marine 1 Rifleman AT",          'M1',  'BLUE');
SOLDIER(cnto_col_ft_tl,m2,     "Marine 2 Fireteam Leader",      'M2',  'RED');
SOLDIER(cnto_col_ft_ar,m2,     "Marine 2 Autorifleman",         'M2',  'YELLOW');
SOLDIER(cnto_col_ft_aar,m2,    "Marine 2 Assist. autorifleman", 'M2',  'YELLOW');
SOLDIER(cnto_col_ft_at,m2,     "Marine 2 Rifleman AT",          'M2',  'RED');

SOLDIER(cnto_col_coy_co,1,        "COY Commander",      'COY', 'MAIN');
SOLDIER(cnto_col_coy_sgt,1,       "COY Sergeant",       'COY', 'MAIN');
SOLDIER(cnto_col_coy_medic,1,     "COY Medic",          'COY', 'MAIN');
SOLDIER(cnto_col_coy_rfl,1,       "COY Rifleman",       'COY', 'MAIN');

SOLDIER(cnto_col_mmg_tl,1,        "MMG Team Leader",    'MMG', 'MAIN');
SOLDIER(cnto_col_mmg_gunner,1,    "MMG Gunner",         'MMG', 'MAIN');
SOLDIER(cnto_col_mmg_bearer,1,    "MMG Ammo Bearer",    'MMG', 'MAIN');

SOLDIER(cnto_col_mat_tl,1,        "MAT Team Leader",    'MAT', 'MAIN');
SOLDIER(cnto_col_mat_gunner,1,    "MAT Gunner",         'MAT', 'MAIN');
SOLDIER(cnto_col_mat_bearer,1,    "MAT Ammo Bearer",    'MAT', 'MAIN');

SOLDIER(cnto_col_mortar_assist,1, "Mortar Ass. Gunner", 'MTR', 'MAIN');
SOLDIER(cnto_col_mortar_gunner,1, "Mortar Gunner",      'MTR', 'MAIN');

SOLDIER(cnto_col_veh_co,1,      "Vehicle Commander ""Sabre 1""",       'SBR 1', 'MAIN');
SOLDIER(cnto_col_veh_driver,1,  "Vehicle Driver ""Sabre 1"" (Repair)", 'SBR 1', 'MAIN');
SOLDIER(cnto_col_veh_gunner,1,  "Vehicle Gunner ""Sabre 1""",          'SBR 1', 'MAIN');
SOLDIER(cnto_col_veh_co,2,      "Vehicle Commander ""Sabre 2""",       'SBR 2', 'MAIN');
SOLDIER(cnto_col_veh_driver,2,  "Vehicle Driver ""Sabre 2"" (Repair)", 'SBR 2', 'MAIN');
SOLDIER(cnto_col_veh_gunner,2,  "Vehicle Gunner ""Sabre 2""",          'SBR 2', 'MAIN');
SOLDIER(cnto_col_veh_co,3,      "Vehicle Commander ""Sabre 3""",       'SBR 3', 'MAIN');
SOLDIER(cnto_col_veh_driver,3,  "Vehicle Driver ""Sabre 3"" (Repair)", 'SBR 3', 'MAIN');
SOLDIER(cnto_col_veh_gunner,3,  "Vehicle Gunner ""Sabre 3""",          'SBR 3', 'MAIN');
SOLDIER(cnto_col_veh_co,4,      "Vehicle Commander ""Paladin""",        'Paladin', 'MAIN');
SOLDIER(cnto_col_veh_driver,4,  "Vehicle Driver ""Paladin"" (Repair)",  'Paladin', 'MAIN');
SOLDIER(cnto_col_veh_gunner,4,  "Vehicle Gunner ""Paladin""",           'Paladin', 'MAIN');

SOLDIER(cnto_col_air_pilot,1,   "Pilot ""Falcon 1""",                'FAL 1', 'MAIN');
SOLDIER(cnto_col_air_copilot,1, "Co-pilot ""Falcon 1"" (Repair)",    'FAL 1', 'MAIN');
SOLDIER(cnto_col_air_pilot,2,   "Pilot ""Falcon 2""",                'FAL 2', 'MAIN');
SOLDIER(cnto_col_air_copilot,2, "Co-pilot ""Falcon 2"" (Repair)",    'FAL 2', 'MAIN');
SOLDIER(cnto_col_air_pilot,3,   "Pilot ""Falcon 3""",                'FAL 3', 'MAIN');
SOLDIER(cnto_col_air_copilot,3, "Co-pilot ""Falcon 3"" (Repair)",    'FAL 3', 'MAIN');
SOLDIER(cnto_col_air_pilot,4,   "Pilot ""Tempest""",                     'TPST', 'MAIN');
SOLDIER(cnto_col_air_copilot,4, "Co-pilot ""Tempest"" (Repair)",         'TPST', 'MAIN');

SOLDIER(cnto_col_trainer,1, "Trainer 1", 'Trg', 'MAIN');
SOLDIER(cnto_col_trainer,2, "Trainer 2", 'Trg', 'MAIN');
SOLDIER(cnto_col_trainer,3, "Trainer 3", 'Trg', 'MAIN');
SOLDIER(cnto_col_trainer,4, "Trainer 4", 'Trg', 'MAIN');

SOLDIER(cnto_col_gm,1,      "Game master 1", 'GMs', 'MAIN');
SOLDIER(cnto_col_gm,2,      "Game master 2", 'GMs', 'MAIN');
