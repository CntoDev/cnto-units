0 = [] spawn {
    waitUntil { time > 0 };
    private _end = time + 3;
    waitUntil {
        tao_foldmap_doShow = false;
        tao_foldmap_fnc_toggle = {};
        tao_foldmap_fnc_refold = {};
        tao_foldmap_fnc_zoomIn = {};
        tao_foldmap_fnc_zoomOut = {};
        tao_foldmap_fnc_nvMode = {};
        tao_foldmap_fnc_openFleximenu = {};
        _end < time;
    };
};
