#include "Source.h"

void _TickCountInfo()
{
	printf_s("--- Tick Count Info ---\n\n");

	printf_s("TickCount.High1Time : %ul\n", KUSER_SHARED_DATA->TickCount.High1Time);
	printf_s("TickCount.High2Time : %ul\n", KUSER_SHARED_DATA->TickCount.High2Time);
	printf_s("TickCount.LowPart : %ul\n", KUSER_SHARED_DATA->TickCount.LowPart);
	printf_s("TickCountLowDeprecated : %ul\n",KUSER_SHARED_DATA->TickCountLowDeprecated);
	printf_s("TickCountMultiplier : %ul\n", KUSER_SHARED_DATA->TickCountMultiplier);
	printf_s("InterruptTime.High1Time : %ul\n", KUSER_SHARED_DATA->InterruptTime.High1Time);
	printf_s("InterruptTime.High2Time : %ul\n", KUSER_SHARED_DATA->InterruptTime.High2Time);
	printf_s("InterruptTime.LowPart : %ul\n", KUSER_SHARED_DATA->InterruptTime.LowPart);
	printf_s("SystemTime.High1Time : %ul\n", KUSER_SHARED_DATA->SystemTime.High1Time);
	printf_s("SystemTime.High2Time : %ul\n", KUSER_SHARED_DATA->SystemTime.High2Time);
	printf_s("SystemTime.LowPart : %ul\n", KUSER_SHARED_DATA->SystemTime.LowPart);
	printf_s("TimeZoneBias.High1Time : %ul\n", KUSER_SHARED_DATA->TimeZoneBias.High1Time);
	printf_s("TimeZoneBias.High2Time : %ul\n", KUSER_SHARED_DATA->TimeZoneBias.High2Time);
	printf_s("TimeZoneBias.LowPart : %ul\n", KUSER_SHARED_DATA->TimeZoneBias.LowPart);



	printf_s("LastSystemRITEventTickCount : %ul\n", KUSER_SHARED_DATA->LastSystemRITEventTickCount);
	printf_s("TickCount : %ul\n", KUSER_SHARED_DATA->TickCount);
	printf_s("TickCountQuad : %ul\n", KUSER_SHARED_DATA->TickCountQuad);
	printf_s("TickCountPad : %ul\n", KUSER_SHARED_DATA->TickCountPad);
	printf_s("ReservedTickCountOverlay : %ul\n\n", KUSER_SHARED_DATA->ReservedTickCountOverlay);

}

//The computer takes milliseconds on the system's timer. The TickCount property is not related to the computer's clock setting.

/*
0 for NX_SUPPORT_POLICY_ALWAYSOFF;
1 for NX_SUPPORT_POLICY_ALWAYSON;
2 for NX_SUPPORT_POLICY_OPTIN;
3 for NX_SUPPORT_POLICY_OPTOUT;

0 for SEH_VALIDATION_POLICY_ON;
1 for SEH_VALIDATION_POLICY_OFF;
2 for SEH_VALIDATION_POLICY_TELEMETRY;
3 for SEH_VALIDATION_POLICY_DEFER.
*/