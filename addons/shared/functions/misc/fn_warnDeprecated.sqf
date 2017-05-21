if (!is3DEN) exitWith {};

if (isNil "cnto_last_deprecated_warn") then {
    cnto_last_deprecated_warn = 0;
};

if (diag_frameNo > cnto_last_deprecated_warn) then {
    cnto_last_deprecated_warn = diag_frameNo + 180000;  // 30min @ 100FPS
    private _n = toString [10];
    disableSerialization;
    [
        "You are using deprecated CNTO units/modules/viscom/scopebox from the @cnto_units mod. These will be removed some time in the future, possibly breaking this mission.<br/>Please use the official Compositions instead, link with more info has been copied to your clipboard, Ctrl+V it into web browser.",
        1,
        20
    ] call BIS_fnc_3DENNotification;
    copyToClipboard "http://www.carpenoctem.co/forums/m/26081621/viewthread/30183932-how-to-set-up-automated-update-compositions-from-github";
};
