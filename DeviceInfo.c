#include "Source.h"

void _DeviceInfo()
{
	printf_s("--- Device Info ---\n\n");

	printf_s("MaxStackTraceDepth : %ul\n", KUSER_SHARED_DATA->MaxStackTraceDepth);// Maximum stack trace depth if tracing enabled
	printf_s("CryptoExponent : %ul\n", KUSER_SHARED_DATA->CryptoExponent); //Crypto exponent value
	printf_s("TimeZoneId : %ul\n\n", KUSER_SHARED_DATA->TimeZoneId);

	printf_s("LargePageMinimum : %ul\n", KUSER_SHARED_DATA->LargePageMinimum);
	printf_s("AitSamplingValue : %ul\n", KUSER_SHARED_DATA->AitSamplingValue);
	printf_s("AppCompatFlag : %ul\n", KUSER_SHARED_DATA->AppCompatFlag);
	printf_s("RNGSeedVersion : %ul\n", KUSER_SHARED_DATA->RNGSeedVersion);
	printf_s("GlobalValidationRunlevel : %ul\n", KUSER_SHARED_DATA->GlobalValidationRunlevel);

	
}
//https://docs.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-getlogicaldrive