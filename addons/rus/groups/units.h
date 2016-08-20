/*
 * "named" units, for ruse in CfgGroups, with lobby-friendly names
 */

#include "\cnto\units\shared\group_units.h"

SOLDIER(cnto_rus_sq_sl,asl,    "Amur Squad Leader",           'ASL', 'MAIN');
SOLDIER(cnto_rus_sq_medic,asl, "Amur Squad Medic",            'ASL', 'MAIN');
SOLDIER(cnto_rus_ft_tl,a1,     "Amur 1 Fireteam Leader",      'A1',  'BLUE');
SOLDIER(cnto_rus_ft_ar,a1,     "Amur 1 Autorifleman",         'A1',  'GREEN');
SOLDIER(cnto_rus_ft_aar,a1,    "Amur 1 Assist. autorifleman", 'A1',  'GREEN');
SOLDIER(cnto_rus_ft_at,a1,     "Amur 1 Rifleman AT",          'A1',  'BLUE');
SOLDIER(cnto_rus_ft_tl,a2,     "Amur 2 Fireteam Leader",      'A2',  'RED');
SOLDIER(cnto_rus_ft_ar,a2,     "Amur 2 Autorifleman",         'A2',  'YELLOW');
SOLDIER(cnto_rus_ft_aar,a2,    "Amur 2 Assist. autorifleman", 'A2',  'YELLOW');
SOLDIER(cnto_rus_ft_at,a2,     "Amur 2 Rifleman AT",          'A2',  'RED');
SOLDIER(cnto_rus_ft_tl,a3,     "Amur 3 Fireteam Leader",      'A3',  'BLUE');
SOLDIER(cnto_rus_ft_ar,a3,     "Amur 3 Autorifleman",         'A3',  'GREEN');
SOLDIER(cnto_rus_ft_aar,a3,    "Amur 3 Assist. autorifleman", 'A3',  'GREEN');
SOLDIER(cnto_rus_ft_at,a3,     "Amur 3 Rifleman AT",          'A3',  'BLUE');

SOLDIER(cnto_rus_sq_sl,osl,    "Volk Squad Leader",           'VSL', 'MAIN');
SOLDIER(cnto_rus_sq_medic,osl, "Volk Squad Medic",            'VSL', 'MAIN');
SOLDIER(cnto_rus_ft_tl,v1,     "Volk 1 Fireteam Leader",      'V1',  'BLUE');
SOLDIER(cnto_rus_ft_ar,v1,     "Volk 1 Autorifleman",         'V1',  'GREEN');
SOLDIER(cnto_rus_ft_aar,v1,    "Volk 1 Assist. autorifleman", 'V1',  'GREEN');
SOLDIER(cnto_rus_ft_at,v1,     "Volk 1 Rifleman AT",          'V1',  'BLUE');
SOLDIER(cnto_rus_ft_tl,v2,     "Volk 2 Fireteam Leader",      'V2',  'RED');
SOLDIER(cnto_rus_ft_ar,v2,     "Volk 2 Autorifleman",         'V2',  'YELLOW');
SOLDIER(cnto_rus_ft_aar,v2,    "Volk 2 Assist. autorifleman", 'V2',  'YELLOW');
SOLDIER(cnto_rus_ft_at,v2,     "Volk 2 Rifleman AT",          'V2',  'RED');

SOLDIER(cnto_rus_coy_co,1,        "COY Commander",      'COY Comd', 'MAIN');
SOLDIER(cnto_rus_coy_sgt,1,       "COY Sergeant",       'COY Comd', 'MAIN');
SOLDIER(cnto_rus_coy_medic,1,     "COY Medic",          'COY Comd', 'MAIN');
SOLDIER(cnto_rus_coy_rfl,1,       "COY Rifleman",       'COY Comd', 'MAIN');

SOLDIER(cnto_rus_mmg_tl,1,        "MMG Team Leader",    'MMG', 'MAIN');
SOLDIER(cnto_rus_mmg_gunner,1,    "MMG Gunner",         'MMG', 'MAIN');
SOLDIER(cnto_rus_mmg_bearer,1,    "MMG Ammo Bearer",    'MMG', 'MAIN');

SOLDIER(cnto_rus_mat_tl,1,        "MAT Team Leader",    'MAT', 'MAIN');
SOLDIER(cnto_rus_mat_gunner,1,    "MAT Gunner",         'MAT', 'MAIN');
SOLDIER(cnto_rus_mat_bearer,1,    "MAT Ammo Bearer",    'MAT', 'MAIN');

SOLDIER(cnto_rus_mortar_assist,1, "Mortar Ass. Gunner", 'MTR', 'MAIN');
SOLDIER(cnto_rus_mortar_gunner,1, "Mortar Gunner",      'MTR', 'MAIN');

SOLDIER(cnto_rus_veh_co,1,      "Vehicle Commander ""Medved 1""",       'MDVD 1', 'MAIN');
SOLDIER(cnto_rus_veh_driver,1,  "Vehicle Driver ""Medved 1"" (Repair)", 'MDVD 1', 'MAIN');
SOLDIER(cnto_rus_veh_gunner,1,  "Vehicle Gunner ""Medved 1""",          'MDVD 1', 'MAIN');
SOLDIER(cnto_rus_veh_co,2,      "Vehicle Commander ""Medved 2""",       'MDVD 2', 'MAIN');
SOLDIER(cnto_rus_veh_driver,2,  "Vehicle Driver ""Medved 2"" (Repair)", 'MDVD 2', 'MAIN');
SOLDIER(cnto_rus_veh_gunner,2,  "Vehicle Gunner ""Medved 2""",          'MDVD 2', 'MAIN');
SOLDIER(cnto_rus_veh_co,3,      "Vehicle Commander ""Medved 3""",       'MDVD 3', 'MAIN');
SOLDIER(cnto_rus_veh_driver,3,  "Vehicle Driver ""Medved 3"" (Repair)", 'MDVD 3', 'MAIN');
SOLDIER(cnto_rus_veh_gunner,3,  "Vehicle Gunner ""Medved 3""",          'MDVD 3', 'MAIN');
SOLDIER(cnto_rus_veh_co,4,      "Vehicle Commander ""Kamchatka""",        'Kamchatka', 'MAIN');
SOLDIER(cnto_rus_veh_driver,4,  "Vehicle Driver ""Kamchatka"" (Repair)",  'Kamchatka', 'MAIN');
SOLDIER(cnto_rus_veh_gunner,4,  "Vehicle Gunner ""Kamchatka""",           'Kamchatka', 'MAIN');

SOLDIER(cnto_rus_air_pilot,1,   "Pilot ""Yastreb 1""",                'YSTB 1', 'MAIN');
SOLDIER(cnto_rus_air_copilot,1, "Co-pilot ""Yastreb 1"" (Repair)",    'YSTB 1', 'MAIN');
SOLDIER(cnto_rus_air_pilot,2,   "Pilot ""Yastreb 2""",                'YSTB 2', 'MAIN');
SOLDIER(cnto_rus_air_copilot,2, "Co-pilot ""Yastreb 2"" (Repair)",    'YSTB 2', 'MAIN');
SOLDIER(cnto_rus_air_pilot,3,   "Pilot ""Yastreb 3""",                'YSTB 3', 'MAIN');
SOLDIER(cnto_rus_air_copilot,3, "Co-pilot ""Yastreb 3"" (Repair)",    'YSTB 3', 'MAIN');
SOLDIER(cnto_rus_air_pilot,4,   "Pilot ""Sova""",                     'SOVA', 'MAIN');
SOLDIER(cnto_rus_air_copilot,4, "Co-pilot ""Sova"" (Repair)",         'SOVA', 'MAIN');

SOLDIER(cnto_rus_trainer,1, "Trainer 1", 'Trg', 'MAIN');
SOLDIER(cnto_rus_trainer,2, "Trainer 2", 'Trg', 'MAIN');
SOLDIER(cnto_rus_trainer,3, "Trainer 3", 'Trg', 'MAIN');
SOLDIER(cnto_rus_trainer,4, "Trainer 4", 'Trg', 'MAIN');

SOLDIER(cnto_rus_gm,1,      "Game master 1", 'GMs', 'MAIN');
SOLDIER(cnto_rus_gm,2,      "Game master 2", 'GMs', 'MAIN');
