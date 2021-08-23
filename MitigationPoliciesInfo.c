#include "Source.h"

void _MitigationPoliciesInfo()
{
	printf_s("--- Mitigation Policies Info ---\n\n");

	printf_s("NXSupportPolicy : %uc\n", KUSER_SHARED_DATA->NXSupportPolicy);
	printf_s("SEHValidationPolicy : %uc\n", KUSER_SHARED_DATA->SEHValidationPolicy);
	printf_s("CurDirDevicesSkippedForDlls : %uc\n", KUSER_SHARED_DATA->CurDirDevicesSkippedForDlls);
	printf_s("Reserved : %uc\n\n", KUSER_SHARED_DATA->Reserved);
}