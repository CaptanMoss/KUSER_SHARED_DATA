#include "Source.h"

void _VersiyonInfo()
{
	printf_s("--- Version Info ---\n\n");

	printf_s("NtMajorVersion : %ul\n", KUSER_SHARED_DATA->NtMajorVersion); //printf_s("%d", *(ULONG*)(KUSER_SHARED_DATA_VA + 0x26c));
	printf_s("NtMinorVersion : %ul\n", KUSER_SHARED_DATA->NtMinorVersion);
	printf_s("NtBuildNumber : %ul\n\n", KUSER_SHARED_DATA->NtBuildNumber);

	printf_s("NtProductWinNt : %d\n", NtProductWinNt);
	printf_s("NtProductLanManNt : %d\n", NtProductLanManNt);
	printf_s("NtProductServer : %d\n", NtProductServer);
	printf_s("ProductTypeIsValid : %us\n", KUSER_SHARED_DATA->ProductTypeIsValid);
	printf_s("Reserved0 : %us\n", KUSER_SHARED_DATA->Reserved0);
	printf_s("NativeProcessorArchitecture : %uh\n", KUSER_SHARED_DATA->NativeProcessorArchitecture);
	printf_s("ProcessorFeatures : %us\n", KUSER_SHARED_DATA->ProcessorFeatures);

	printf_s("Reserved1 : %ul\n", KUSER_SHARED_DATA->Reserved1); //MmHighestUserAddress
	printf_s("Reserved3 : %ul\n", KUSER_SHARED_DATA->Reserved3); //MmSystemRangeStart 
}

//https://edu.anarcho-copy.org/other/Windows/Windows%2010%20System%20Programming.pdf page : 49