/*
 * 'named' units, for use in CfgGroups, with lobby-friendly names
 */

#define SIGN_STR(name,rest) SQUOTE(JOIN2(name,rest))
#define INF_STR(name,rest) SQUOTE(JOIN2(name,rest))
#define VEH_STR(rest,name) SQUOTE(JOIN2(rest,QQUOTE(JOIN2(name, %1))))

NAMED_SOLDIER(SOLDIER_CLASS(sq_sl),a,    INF_STR(GROUP_SQ1_NAME, Squad Leader),            SIGN_STR(GROUP_SQ1_SIGN,SL), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(sq_medic),a, INF_STR(GROUP_SQ1_NAME, Squad Medic),             SIGN_STR(GROUP_SQ1_SIGN,SL), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(ft_tl),a,    INF_STR(GROUP_SQ1_NAME, %1 Fireteam Leader),      SIGN_STR(GROUP_SQ1_SIGN,%1), 'RED');
NAMED_SOLDIER(SOLDIER_CLASS(ft_ar),a,    INF_STR(GROUP_SQ1_NAME, %1 Autorifleman),         SIGN_STR(GROUP_SQ1_SIGN,%1), 'YELLOW');
NAMED_SOLDIER(SOLDIER_CLASS(ft_aar),a,   INF_STR(GROUP_SQ1_NAME, %1 Assist. autorifleman), SIGN_STR(GROUP_SQ1_SIGN,%1), 'YELLOW');
NAMED_SOLDIER(SOLDIER_CLASS(ft_at),a,    INF_STR(GROUP_SQ1_NAME, %1 Rifleman AT),          SIGN_STR(GROUP_SQ1_SIGN,%1), 'RED');

NAMED_SOLDIER(SOLDIER_CLASS(sq_sl),b,    INF_STR(GROUP_SQ2_NAME, Squad Leader),            SIGN_STR(GROUP_SQ2_SIGN,SL), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(sq_medic),b, INF_STR(GROUP_SQ2_NAME, Squad Medic),             SIGN_STR(GROUP_SQ2_SIGN,SL), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(ft_tl),b,    INF_STR(GROUP_SQ2_NAME, %1 Fireteam Leader),      SIGN_STR(GROUP_SQ2_SIGN,%1), 'BLUE');
NAMED_SOLDIER(SOLDIER_CLASS(ft_ar),b,    INF_STR(GROUP_SQ2_NAME, %1 Autorifleman),         SIGN_STR(GROUP_SQ2_SIGN,%1), 'GREEN');
NAMED_SOLDIER(SOLDIER_CLASS(ft_aar),b,   INF_STR(GROUP_SQ2_NAME, %1 Assist. autorifleman), SIGN_STR(GROUP_SQ2_SIGN,%1), 'GREEN');
NAMED_SOLDIER(SOLDIER_CLASS(ft_at),b,    INF_STR(GROUP_SQ2_NAME, %1 Rifleman AT),          SIGN_STR(GROUP_SQ2_SIGN,%1), 'BLUE');

NAMED_SOLDIER(SOLDIER_CLASS(sq_sl),c,    INF_STR(GROUP_SQ3_NAME, Squad Leader),            SIGN_STR(GROUP_SQ3_SIGN,SL), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(sq_medic),c, INF_STR(GROUP_SQ3_NAME, Squad Medic),             SIGN_STR(GROUP_SQ3_SIGN,SL), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(ft_tl),c,    INF_STR(GROUP_SQ3_NAME, %1 Fireteam Leader),      SIGN_STR(GROUP_SQ3_SIGN,%1), 'RED');
NAMED_SOLDIER(SOLDIER_CLASS(ft_ar),c,    INF_STR(GROUP_SQ3_NAME, %1 Autorifleman),         SIGN_STR(GROUP_SQ3_SIGN,%1), 'YELLOW');
NAMED_SOLDIER(SOLDIER_CLASS(ft_aar),c,   INF_STR(GROUP_SQ3_NAME, %1 Assist. autorifleman), SIGN_STR(GROUP_SQ3_SIGN,%1), 'YELLOW');
NAMED_SOLDIER(SOLDIER_CLASS(ft_at),c,    INF_STR(GROUP_SQ3_NAME, %1 Rifleman AT),          SIGN_STR(GROUP_SQ3_SIGN,%1), 'RED');

NAMED_SOLDIER(SOLDIER_CLASS(plt_co),x,    INF_STR(GROUP_PLT_NAME, Commander), SQUOTE(GROUP_PLT_SIGN), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(plt_sgt),x,   INF_STR(GROUP_PLT_NAME, Sergeant),  SQUOTE(GROUP_PLT_SIGN), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(plt_medic),x, INF_STR(GROUP_PLT_NAME, Medic),     SQUOTE(GROUP_PLT_SIGN), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(plt_rfl),x,   INF_STR(GROUP_PLT_NAME, Rifleman),  SQUOTE(GROUP_PLT_SIGN), 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(mmg_tl),x,        'MMG %1 Team Leader',      'MMG%1', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(mmg_gunner),x,    'MMG %1 Gunner',           'MMG%1', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(mmg_bearer),x,    'MMG %1 Ammo Bearer',      'MMG%1', 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(mat_tl),x,        'MAT %1 Team Leader',      'MAT%1', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(mat_gunner),x,    'MAT %1 Gunner',           'MAT%1', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(mat_bearer),x,    'MAT %1 Ammo Bearer',      'MAT%1', 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(dmt_tl),x,        'DMT %1 Team Leader',      'DMT%1', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(dmt_shooter),x,   'DMT %1 Shooter',          'DMT%1', 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(mortar_assist),x, 'Mortar %1 Ass. Gunner',   'MTR%1', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(mortar_gunner),x, 'Mortar %1 Gunner',        'MTR%1', 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(eng_tl),x,        'Engineer %1 Team Leader', 'ENG%1', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(eng_rfl),x,       'Engineer %1 Rifleman',    'ENG%1', 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(veh_co),x,       VEH_STR(Vehicle Commander ,GROUP_VEHICLE_NAME), SIGN_STR(GROUP_VEHICLE_SIGN,%1), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(veh_driver),x,   VEH_STR(Vehicle Driver ,GROUP_VEHICLE_NAME),    SIGN_STR(GROUP_VEHICLE_SIGN,%1), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(veh_gunner),x,   VEH_STR(Vehicle Gunner ,GROUP_VEHICLE_NAME),    SIGN_STR(GROUP_VEHICLE_SIGN,%1), 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(veh_co),y,       VEH_STR(Tank Commander ,GROUP_TANK_NAME),       SIGN_STR(GROUP_TANK_SIGN,%1), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(veh_driver),y,   VEH_STR(Tank Driver ,GROUP_TANK_NAME),          SIGN_STR(GROUP_TANK_SIGN,%1), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(veh_gunner),y,   VEH_STR(Tank Gunner ,GROUP_TANK_NAME),          SIGN_STR(GROUP_TANK_SIGN,%1), 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(air_pilot),x,    VEH_STR(Pilot ,GROUP_PILOT_NAME),               SIGN_STR(GROUP_PILOT_SIGN,%1), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(air_copilot),x,  VEH_STR(Co-Pilot ,GROUP_PILOT_NAME),            SIGN_STR(GROUP_PILOT_SIGN,%1), 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(air_pilot),y,    VEH_STR(CAS Pilot ,GROUP_CASPILOT_NAME),        SIGN_STR(GROUP_CASPILOT_SIGN,%1), 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(air_copilot),y,  VEH_STR(CAS Co-Pilot ,GROUP_CASPILOT_NAME),     SIGN_STR(GROUP_CASPILOT_SIGN,%1), 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(air_jetpilot),x, VEH_STR(Jet Pilot ,GROUP_JETPILOT_NAME),        SIGN_STR(GROUP_JETPILOT_SIGN,%1), 'MAIN');

NAMED_SOLDIER(SOLDIER_CLASS(trainer),x, 'Trainer',     'TRN', 'MAIN');
NAMED_SOLDIER(SOLDIER_CLASS(gm),x,      'Game master', 'GM',  'MAIN');

#undef SIGN_STR
#undef INF_STR
#undef VEH_STR
