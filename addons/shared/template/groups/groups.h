class High_Command {
    name = "High Command";
    class PLT_Lead {
        name = "PLT Lead";
        icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(plt_co_x);    position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = SOLDIER_CLASS(plt_sgt_x);   position[] = {1,0,0}; rank = "CAPTAIN"; dir = 180; };
        class Unit2 { vehicle = SOLDIER_CLASS(plt_medic_x); position[] = {2,0,0}; rank = "PRIVATE"; dir = 180; };
        class Unit3 { vehicle = SOLDIER_CLASS(plt_rfl_x);   position[] = {3,0,0}; rank = "PRIVATE"; dir = 180; };
    };
};
class Infantry {
    name = "Infantry";
    class SQ1_Lead {
        name = "Alpha SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(sq_sl_a);    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = SOLDIER_CLASS(sq_medic_a); position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class SQ1_FT {
        name = "Alpha FT";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(ft_tl_a);  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(ft_ar_a);  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = SOLDIER_CLASS(ft_aar_a); position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = SOLDIER_CLASS(ft_at_a);  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class SQ2_Lead {
        name = "Bravo SQ Lead";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(sq_sl_b);    position[] = {0,0,0}; rank = "LIEUTENANT"; dir = 180; };
        class Unit1 { vehicle = SOLDIER_CLASS(sq_medic_b); position[] = {1,0,0}; rank = "PRIVATE"; dir = 180; };
    };
    class SQ2_FT {
        name = "Bravo FT";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(ft_tl_b);  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(ft_ar_b);  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = SOLDIER_CLASS(ft_aar_b); position[] = {2,0,0}; rank = "CORPORAL"; };
        class Unit3 { vehicle = SOLDIER_CLASS(ft_at_b);  position[] = {3,0,0}; rank = "PRIVATE"; };
    };
    class MMG {
        name = "MMG";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(mmg_tl_x);     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(mmg_gunner_x); position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = SOLDIER_CLASS(mmg_bearer_x); position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class MAT {
        name = "MAT";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(mat_tl_x);     position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(mat_gunner_x); position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = SOLDIER_CLASS(mat_bearer_x); position[] = {2,0,0}; rank = "PRIVATE"; };
    };
    class Mortar {
        name = "Mortar";
        icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(mortar_assist_x); position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(mortar_gunner_x); position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Engineers {
        name = "Engineers";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(eng_tl_x);  position[] = {0,0,0}; rank = "SERGEANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(eng_rfl_x); position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = SOLDIER_CLASS(eng_rfl_x); position[] = {2,0,0}; rank = "PRIVATE"; };
        class Unit3 { vehicle = SOLDIER_CLASS(eng_rfl_x); position[] = {3,0,0}; rank = "PRIVATE"; };
    };
};
class Crew {
    name = "Crew";
    class Vehicle {
        name = "Dagger";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(veh_co_x);      position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(veh_driver_x);  position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = SOLDIER_CLASS(veh_gunner_x);  position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Tank {
        name = "Thunder (Tank)";
        icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(veh_co_y);     position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(veh_driver_y); position[] = {1,0,0}; rank = "PRIVATE"; };
        class Unit2 { vehicle = SOLDIER_CLASS(veh_gunner_y); position[] = {2,0,0}; rank = "CORPORAL"; };
    };
    class Air {
        name = "Nightbird";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(air_pilot_x);   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(air_copilot_x); position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Air_Cas {
        name = "Reaper (CAS)";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(air_pilot_y);   position[] = {0,0,0}; rank = "LIEUTENANT"; };
        class Unit1 { vehicle = SOLDIER_CLASS(air_copilot_y); position[] = {1,0,0}; rank = "PRIVATE"; };
    };
    class Air_Jet {
        name = "Wildcat (Jet)";
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(air_jetpilot_x); position[] = {0,0,0}; rank = "LIEUTENANT"; };
    };
};
class Special {
    name = "Special";
    class Trainer_Team {
        name = "Trainer Team";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(trainer_x); position[] = {0,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit1 { vehicle = SOLDIER_CLASS(trainer_x); position[] = {1,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit2 { vehicle = SOLDIER_CLASS(trainer_x); position[] = {2,0,0}; rank = "MAJOR"; dir = 180; };
        class Unit3 { vehicle = SOLDIER_CLASS(trainer_x); position[] = {3,0,0}; rank = "MAJOR"; dir = 180; };
    };
    class GM_Team {
        name = "GM Team";
        icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
        class Unit0 { vehicle = SOLDIER_CLASS(gm_x); position[] = {0,0,0}; rank = "COLONEL"; dir = 180; };
        class Unit1 { vehicle = SOLDIER_CLASS(gm_x); position[] = {1,0,0}; rank = "COLONEL"; dir = 180; };
    };
};
