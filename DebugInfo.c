#include "Source.h"

void _DebugInfo()
{
	printf_s("--- Debug Info ---\n\n");

	printf_s("KdDebuggerEnabled : %uc\n", KUSER_SHARED_DATA->KdDebuggerEnabled); //Kernel Mode Local Debugging = 1, ernel Mode Remote Debugging = 3
	printf_s("DbgErrorPortPresent : %ul\n", KUSER_SHARED_DATA->DbgErrorPortPresent);
	printf_s("DbgElevationEnabled : %ul\n", KUSER_SHARED_DATA->DbgElevationEnabled);
	printf_s("DbgVirtEnabled : %ul\n", KUSER_SHARED_DATA->DbgVirtEnabled);
	printf_s("DbgInstallerDetectEnabled : %ul\n", KUSER_SHARED_DATA->DbgInstallerDetectEnabled);
	printf_s("DbgLkgEnabled : %ul\n", KUSER_SHARED_DATA->DbgLkgEnabled);
	printf_s("DbgDynProcessorEnabled : %ul\n", KUSER_SHARED_DATA->DbgDynProcessorEnabled);
	printf_s("DbgConsoleBrokerEnabled : %ul\n", KUSER_SHARED_DATA->DbgConsoleBrokerEnabled);
	printf_s("DbgSecureBootEnabled : %ul\n", KUSER_SHARED_DATA->DbgSecureBootEnabled);
	printf_s("DbgMultiSessionSku : %ul\n", KUSER_SHARED_DATA->DbgMultiSessionSku);
	printf_s("DbgMultiUsersInSessionSku : %ul\n", KUSER_SHARED_DATA->DbgMultiUsersInSessionSku);
	printf_s("DbgStateSeparationEnabled : %ul\n", KUSER_SHARED_DATA->DbgStateSeparationEnabled);
	printf_s("SpareBits : %ul\n\n", KUSER_SHARED_DATA->SpareBits);
	//You can check and operation with variables result
}

//http://bsodtutorials.blogspot.com/2014/07/using-kuser-to-find-kusershareddata.html
