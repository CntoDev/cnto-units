class High_Command {
    name = "High Command";
    class Coy_Comd {
        name = "Coy Comd";
        icon = "\A3\ui_f\data\map\markers\nato\n_hq.paa";
        class Unit0 { vehicle = cnto_col_coy_co_1;    position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_col_coy_sgt_1;   position[] = {1,0,0}; rank = "CAPTAIN"; dir = 180; };
        class Unit2 { vehicle = cnto_col_coy_medic_1; position[] = {2,0,0}; rank = "PRIVATE"; dir = 180; };
        class Unit3 { vehicle = cnto_col_coy_rfl_1;   position[] = {3,0,0}; rank = "PRIVATE"; dir = 180; };
    };
};
class Infantry {
    name = "Infantry";
    class Ranger_SQ_Lead {
        name = "Ranger SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_sq_sl_rsl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_col_sq_medic_rsl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Ranger_1 {
        name = "Ranger 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_ft_tl_r1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_ft_ar_r1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_ft_aar_r1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_col_ft_at_r1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Ranger_2 {
        name = "Ranger 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_ft_tl_r2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_ft_ar_r2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_ft_aar_r2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_col_ft_at_r2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Ranger_3 {
        name = "Ranger 3";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_ft_tl_r3;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_ft_ar_r3;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_ft_aar_r3; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_col_ft_at_r3;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Marine_SQ_Lead {
        name = "Marine SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_sq_sl_msl;    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = cnto_col_sq_medic_msl; position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class Marine_1 {
        name = "Marine 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_ft_tl_m1;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_ft_ar_m1;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_ft_aar_m1; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_col_ft_at_m1;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class Marine_2 {
        name = "Marine 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_ft_tl_m2;  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_ft_ar_m2;  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_ft_aar_m2; position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = cnto_col_ft_at_m2;  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class MMG {
        name = "MMG";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_mmg_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_mmg_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_mmg_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class MAT {
        name = "MAT";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_mat_tl_1;     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_mat_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_mat_bearer_1; position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class Mortar {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";
        class Unit0 { vehicle = cnto_col_mortar_assist_1; position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = cnto_col_mortar_gunner_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
};
class Crew {
    name = "Crew";
    class Sabre_1 {
        name = "Sabre 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_col_veh_co_1;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_veh_driver_1; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_veh_gunner_1; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Sabre_2 {
        name = "Sabre 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_col_veh_co_2;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_veh_driver_2; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_veh_gunner_2; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Sabre_3 {
        name = "Sabre 3";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_col_veh_co_3;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_veh_driver_3; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_veh_gunner_3; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Paladin {
        name = "Paladin (Tank)";
        icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
        class Unit0 { vehicle = cnto_col_veh_co_4;     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_veh_driver_4; position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = cnto_col_veh_gunner_4; position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Falcon_1 {
        name = "Falcon 1";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_col_air_pilot_1;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_air_copilot_1; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Falcon_2 {
        name = "Falcon 2";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_col_air_pilot_2;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_air_copilot_2; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Falcon_3 {
        name = "Falcon 3";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_col_air_pilot_3;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_air_copilot_3; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Tempest {
        name = "Tempest (CAS)";
        icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";
        class Unit0 { vehicle = cnto_col_air_pilot_4;   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = cnto_col_air_copilot_4; position[] = {1,0,0}; rank = "PRIVATE"; };
    };
};
class Special {
    name = "Special";
    class Trainer_Team {
        name = "Trainer Team";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_trainer_1; position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = cnto_col_trainer_2; position[] = {1,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit2 { vehicle = cnto_col_trainer_3; position[] = {2,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit3 { vehicle = cnto_col_trainer_4; position[] = {3,0,0}; rank = "MAJOR"; dir = 180; };
    };
    class GM_Team {
        name = "GM Team";
        icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
        class Unit0 { vehicle = cnto_col_gm_1; position[] = {0,0,0}; rank = "COLONEL"; dir = 180; };
        class Unit1 { vehicle = cnto_col_gm_2; position[] = {1,0,0}; rank = "COLONEL"; dir = 180; };
    };
};
