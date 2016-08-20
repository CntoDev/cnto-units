/*
 * "named" units, for Task Force Noctem Faction in CfgGroups, with lobby-friendly names
 */

#include "\cnto\units\shared\group_units.h"

SOLDIER(cnto_tfn_sq_sl,tsl,    "Templar Squad Leader",           'TSL', 'MAIN');
SOLDIER(cnto_tfn_sq_medic,tsl, "Templar Squad Medic",            'TSL', 'MAIN');
SOLDIER(cnto_tfn_ft_tl,t1,     "Templar 1 Fireteam Leader",      'T1',  'BLUE');
SOLDIER(cnto_tfn_ft_ar,t1,     "Templar 1 Autorifleman",         'T1',  'GREEN');
SOLDIER(cnto_tfn_ft_aar,t1,    "Templar 1 Assist. autorifleman", 'T1',  'GREEN');
SOLDIER(cnto_tfn_ft_at,t1,     "Templar 1 Rifleman AT",          'T1',  'BLUE');
SOLDIER(cnto_tfn_ft_tl,t2,     "Templar 2 Fireteam Leader",      'T2',  'RED');
SOLDIER(cnto_tfn_ft_ar,t2,     "Templar 2 Autorifleman",         'T2',  'YELLOW');
SOLDIER(cnto_tfn_ft_aar,t2,    "Templar 2 Assist. autorifleman", 'T2',  'YELLOW');
SOLDIER(cnto_tfn_ft_at,t2,     "Templar 2 Rifleman AT",          'T2',  'RED');
SOLDIER(cnto_tfn_ft_tl,t3,     "Templar 3 Fireteam Leader",      'T3',  'BLUE');
SOLDIER(cnto_tfn_ft_ar,t3,     "Templar 3 Autorifleman",         'T3',  'GREEN');
SOLDIER(cnto_tfn_ft_aar,t3,    "Templar 3 Assist. autorifleman", 'T3',  'GREEN');
SOLDIER(cnto_tfn_ft_at,t3,     "Templar 3 Rifleman AT",          'T3',  'BLUE');

SOLDIER(cnto_tfn_sq_sl,lsl,    "Lancer Squad Leader",           'LSL', 'MAIN');
SOLDIER(cnto_tfn_sq_medic,lsl, "Lancer Squad Medic",            'LSL', 'MAIN');
SOLDIER(cnto_tfn_ft_tl,l1,     "Lancer 1 Fireteam Leader",      'L1',  'BLUE');
SOLDIER(cnto_tfn_ft_ar,l1,     "Lancer 1 Autorifleman",         'L1',  'GREEN');
SOLDIER(cnto_tfn_ft_aar,l1,    "Lancer 1 Assist. autorifleman", 'L1',  'GREEN');
SOLDIER(cnto_tfn_ft_at,l1,     "Lancer 1 Rifleman AT",          'L1',  'BLUE');
SOLDIER(cnto_tfn_ft_tl,l2,     "Lancer 2 Fireteam Leader",      'L2',  'RED');
SOLDIER(cnto_tfn_ft_ar,l2,     "Lancer 2 Autorifleman",         'L2',  'YELLOW');
SOLDIER(cnto_tfn_ft_aar,l2,    "Lancer 2 Assist. autorifleman", 'L2',  'YELLOW');
SOLDIER(cnto_tfn_ft_at,l2,     "Lancer 2 Rifleman AT",          'L2',  'RED');

SOLDIER(cnto_tfn_plt_co,1,        "PLT Commander",      'PLT', 'MAIN');
SOLDIER(cnto_tfn_plt_sgt,1,       "PLT Sergeant",       'PLT', 'MAIN');
SOLDIER(cnto_tfn_plt_medic,1,     "PLT Medic",          'PLT', 'MAIN');
SOLDIER(cnto_tfn_plt_rfl,1,       "PLT Rifleman",       'PLT', 'MAIN');

SOLDIER(cnto_tfn_mmg_tl,1,        "MMG Team Leader",    'MMG', 'MAIN');
SOLDIER(cnto_tfn_mmg_gunner,1,    "MMG Gunner",         'MMG', 'MAIN');
SOLDIER(cnto_tfn_mmg_bearer,1,    "MMG Ammo Bearer",    'MMG', 'MAIN');

SOLDIER(cnto_tfn_mat_tl,1,        "MAT Team Leader",    'MAT', 'MAIN');
SOLDIER(cnto_tfn_mat_gunner,1,    "MAT Gunner",         'MAT', 'MAIN');
SOLDIER(cnto_tfn_mat_bearer,1,    "MAT Ammo Bearer",    'MAT', 'MAIN');

SOLDIER(cnto_tfn_mortar_assist,1, "Mortar Ass. Gunner", 'MTR', 'MAIN');
SOLDIER(cnto_tfn_mortar_gunner,1, "Mortar Gunner",      'MTR', 'MAIN');

SOLDIER(cnto_tfn_veh_co,1,      "Vehicle Commander ""Axe 1""",       'AXE 1', 'MAIN');
SOLDIER(cnto_tfn_veh_driver,1,  "Vehicle Driver ""Axe 1"" (Repair)", 'AXE 1', 'MAIN');
SOLDIER(cnto_tfn_veh_gunner,1,  "Vehicle Gunner ""Axe 1""",          'AXE 1', 'MAIN');
SOLDIER(cnto_tfn_veh_co,2,      "Vehicle Commander ""Axe 2""",       'AXE 2', 'MAIN');
SOLDIER(cnto_tfn_veh_driver,2,  "Vehicle Driver ""Axe 2"" (Repair)", 'AXE 2', 'MAIN');
SOLDIER(cnto_tfn_veh_gunner,2,  "Vehicle Gunner ""Axe 2""",          'AXE 2', 'MAIN');
SOLDIER(cnto_tfn_veh_co,3,      "Vehicle Commander ""Axe 3""",       'AXE 3', 'MAIN');
SOLDIER(cnto_tfn_veh_driver,3,  "Vehicle Driver ""Axe 3"" (Repair)", 'AXE 3', 'MAIN');
SOLDIER(cnto_tfn_veh_gunner,3,  "Vehicle Gunner ""Axe 3""",          'AXE 3', 'MAIN');
SOLDIER(cnto_tfn_veh_co,4,      "Vehicle Commander ""Knight""",        'Knight', 'MAIN');
SOLDIER(cnto_tfn_veh_driver,4,  "Vehicle Driver ""Knight"" (Repair)",  'Knight', 'MAIN');
SOLDIER(cnto_tfn_veh_gunner,4,  "Vehicle Gunner ""Knight""",           'Knight', 'MAIN');

SOLDIER(cnto_tfn_air_pilot,1,   "Pilot ""Rapier 1""",                'Rpr 1', 'MAIN');
SOLDIER(cnto_tfn_air_copilot,1, "Co-pilot ""Rapier 1"" (Repair)",    'Rpr 1', 'MAIN');
SOLDIER(cnto_tfn_air_pilot,2,   "Pilot ""Rapier 2""",                'Rpr 2', 'MAIN');
SOLDIER(cnto_tfn_air_copilot,2, "Co-pilot ""Rapier 2"" (Repair)",    'Rpr 2', 'MAIN');
SOLDIER(cnto_tfn_air_pilot,3,   "Pilot ""Rapier 3""",                'Rpr 3', 'MAIN');
SOLDIER(cnto_tfn_air_copilot,3, "Co-pilot ""Rapier 3"" (Repair)",    'Rpr 3', 'MAIN');
SOLDIER(cnto_tfn_air_pilot,4,   "Pilot ""Archer""",                     'ARC', 'MAIN');
SOLDIER(cnto_tfn_air_copilot,4, "Co-pilot ""Archer"" (Repair)",         'ARC', 'MAIN');

SOLDIER(cnto_tfn_trainer,1, "Trainer 1", 'Trg', 'MAIN');
SOLDIER(cnto_tfn_trainer,2, "Trainer 2", 'Trg', 'MAIN');
SOLDIER(cnto_tfn_trainer,3, "Trainer 3", 'Trg', 'MAIN');
SOLDIER(cnto_tfn_trainer,4, "Trainer 4", 'Trg', 'MAIN');

SOLDIER(cnto_tfn_gm,1,      "Game master 1", 'GM', 'MAIN');
SOLDIER(cnto_tfn_gm,2,      "Game master 2", 'GM', 'MAIN');
