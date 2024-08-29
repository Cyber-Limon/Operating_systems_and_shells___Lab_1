#include <windows.h> 
#include <iostream> 

using namespace std;

int main() {
	
	STARTUPINFO StartupInfo;
	ZeroMemory(&StartupInfo, sizeof(StartupInfo));
	StartupInfo.cb = sizeof(StartupInfo);
	PROCESS_INFORMATION ProcInfo;
	ZeroMemory(&ProcInfo, sizeof(ProcInfo));
	wchar_t AppName[] = L"C:\\Users\\Максим\\source\\repos\\Daughter\\x64\\Debug\\Daughter.exe";
	if (!CreateProcess(AppName, NULL, NULL, NULL, FALSE, 0, NULL, NULL, &StartupInfo, &ProcInfo)) return 0;
	WaitForSingleObject(ProcInfo.hProcess, INFINITE);
	CloseHandle(ProcInfo.hProcess);
	CloseHandle(ProcInfo.hThread);
}
