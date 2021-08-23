#include "Source.h"
#include <wchar.h>

void _MachineInfo()
{
	printf_s("--- Machine Info ---\n\n");

	printf_s("ImageNumberLow : %uh\n", KUSER_SHARED_DATA->ImageNumberLow);
	printf_s("ImageNumberHigh : %uh\n", KUSER_SHARED_DATA->ImageNumberHigh);
	printf_s("NtSystemRoot : %ls\n\n", KUSER_SHARED_DATA->NtSystemRoot);	
}

/*
	IMAGE_FILE_MACHINE_I386 (0x014C)
	IMAGE_FILE_MACHINE_AMD64 (0x8664)
*/