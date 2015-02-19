//text strings which should be translated
prog_char g_psReady[] PROGMEM = "Ready";
prog_char g_psCharging[] PROGMEM = "Charging";

prog_char g_psGfiTest[] PROGMEM = "GFI Self Test";
prog_char g_psSetup[] PROGMEM = "Setup";
prog_char g_psSvcLevel[] PROGMEM = "Service Level";
prog_char g_psMaxCurrent[] PROGMEM = "Max Current";
prog_char g_psDiodeCheck[] PROGMEM = "Diode Check";
prog_char g_psVentReqChk[] PROGMEM = "Vent Req'd Check";
prog_char g_psBklType[] PROGMEM = "Backlight Type";
prog_char g_psGndChk[] PROGMEM = "Ground Check";
prog_char g_psRlyChk[] PROGMEM = "Relay Check";
prog_char g_psReset[] PROGMEM = "Restart";
prog_char g_psExit[] PROGMEM = "Exit";
prog_char g_psAutoStart[] PROGMEM = "Auto Start";
prog_char g_psRTC[] PROGMEM = "Date/Time";
prog_char g_psRTC_Month[] PROGMEM = "Set Month";
prog_char g_psRTC_Day[] PROGMEM = "Set Day";
prog_char g_psRTC_Year[] PROGMEM = "Set Year";
prog_char g_psRTC_Hour[] PROGMEM = "Set Hour";
prog_char g_psRTC_Minute[] PROGMEM = "Set Minute";
prog_char g_psDelayTimer[] PROGMEM = "Delay Timer";
prog_char g_psDelayTimerEnableDisable[] PROGMEM = "Enable/Disable Timer?";
prog_char g_psDelayTimerStartHour[] PROGMEM = "Set Start Hour";
prog_char g_psDelayTimerStartMin[] PROGMEM = "Set Start Min";
prog_char g_psDelayTimerStopHour[] PROGMEM = "Set Stop Hour";
prog_char g_psDelayTimerStopMin[] PROGMEM = "Set Stop Min";

prog_char g_psEnabled[] PROGMEM = "enabled";
prog_char g_psDisabled[] PROGMEM = "disabled";
prog_char g_psPwrOn[] PROGMEM = "Power On";
prog_char g_psSelfTest[] PROGMEM = "Self Test";
prog_char g_psAutoDetect[] PROGMEM = "Auto Detect";
prog_char g_psLevel1[] PROGMEM = "Svc Level: L1";
prog_char g_psLevel2[] PROGMEM = "Svc Level: L2";
prog_char g_psTestFailed[] PROGMEM = "TEST FAILED";
prog_char g_psEvseError[] PROGMEM = "EVSE ERROR";
prog_char g_psSvcReq[] PROGMEM = "SERVICE REQUIRED";
prog_char g_psVentReq[] PROGMEM = "VENT REQUIRED";
prog_char g_psDiodeChkFailed[] PROGMEM = "DIODE CHK FAILED";
prog_char g_psGfciFault[] PROGMEM = "GFCI FAULT";
prog_char g_psNoGround[] PROGMEM = "NO GROUND";
prog_char g_psStuckRelay[] PROGMEM = "STUCK RELAY";
prog_char g_psStopped[] PROGMEM = "Stopped";
prog_char g_psWaiting[] PROGMEM = "Waiting";
prog_char g_psSleeping[] PROGMEM = "Sleeping";
prog_char g_psEvConnected[] PROGMEM = "EV Connected";
prog_char g_psEvNotConnected[] PROGMEM = "EV Not Connected";
g_OBD.LcdPrint_P(1,PSTR("Resetting..."));
println_P(PSTR("OpenEVSE")); // CLI print prompt when serial is ready
print_P(PSTR("Firmware - Open EVSE V")); //CLI info
println_P(PSTR("type help for command list"));
print_P(PSTR("OpenEVSE> ")); // CLI Prompt
prog_char g_pson[] PROGMEM = "on";
println_P(PSTR("Settings"));
print_P(PSTR("Service level: L"));
Serial.println((int)g_EvseController.GetCurSvcLevel());
print_P(PSTR("Current capacity (Amps): "));
Serial.println((int)g_EvseController.GetCurrentCapacity());
print_P(PSTR("Min Current Capacity: "));
Serial.println(MIN_CURRENT_CAPACITY);
print_P(PSTR("Max Current Capacity: "));
print_P(PSTR("Vent Required: "));
print_P(PSTR("Diode Check: "));
print_P(PSTR("Ground Check: "));
print_P(PSTR("Stuck Relay Check: "));
print_P(PSTR("Auto Start: "));
print_P(PSTR("Delay Timer: "));
println_P(PSTR("Help Commands"));
println_P(PSTR("help - Display commands")); // print to the terminal
println_P(PSTR("set - Change settings"));
println_P(PSTR("show - Display settings/values"));
println_P(PSTR("dt - Date/Time commands"));
println_P(PSTR("timer - Delay timer commands"));
println_P(PSTR("Set Commands - Usage: set amp"));
println_P(PSTR("amp - set current capacity"));
println_P(PSTR("vntreq on/off - enable/disable vent required state"));
println_P(PSTR("diochk on/off - enable/disable diode check"));
println_P(PSTR("gndchk on/off - turn ground check on/off"));
println_P(PSTR("rlychk on/off - turn stuck relay check on/off"));
println_P(PSTR("autostart on/off - enable/disable autostart"));
println_P(PSTR("sdbg on/off - turn serial debugging on/off"));
print_P(PSTR("serial debugging "));
print_P(PSTR("vent required "));
print_P(PSTR("diode check "));
print_P(PSTR("autostart "));
print_P(PSTR("ground check "));
println_P(PSTR("WARNING - Do not set higher than 80% of breaker value"));
print_P(PSTR("Enter amps ("));
println_P(PSTR("Invalid Setting"));
print_P(PSTR("Max current: ")); // print to the terminal

// Format String for date
println_P(PSTR("Set Date/Time (mm/dd/yy hh:mm)"));
println_P(PSTR("Date/Time Set"));
println_P(PSTR("Date/Time NOT Set"));
println_P(PSTR("Use 'dt set' to set the system date/time"));
println_P(PSTR("Set Start Time (hh:mm)"));
print_P(PSTR("Hour (hh): "));

print_P(PSTR("Minute (mm): "));



println_P(PSTR("Set Stop Time (hh:mm)"));
print_P(PSTR("Hour (hh): "));

print_P(PSTR("Minute (mm): "));

println_P(PSTR("Delay timer enabled, autostart disabled"));

println_P(PSTR("Delay timer disabled, autostart enabled"));

print_P(PSTR("Delay Timer: "));

println_P(PSTR("Enabled"));

println_P(PSTR("Disabled"));

print_P(PSTR("Start Time: "));

print_P(PSTR(" hour "));

println_P(PSTR(" min"));
print_P(PSTR("End Time: "));

print_P(PSTR(" hour "));

println_P(PSTR(" min"));

println_P(PSTR("Start and Stop times can not be the same!"));

println_P(PSTR("Use 'timer enable/disable' to enable/disable timer function"));
println_P(PSTR("Use 'timer set start/stop' to set timer start/stop times"));
println_P(PSTR("Unknown Command -- type help for command list")); // echo back to the terminal

print_P(PSTR("OpenEVSE> "));

LcdPrint_P(0,PSTR("Open EVSE "));
LcdPrint_P(0,1,PSTR("Version "));
