// Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

#define DLL_PATH "BypassUAC2_Test.dll"
//"C:\\Users\\GIL\\Desktop\\WINDOWS黑客编程技术详解-配套资源\\用户层\\6\\Bypass UAC\\BypassUAC2_Test\\Debug\\BypassUAC2_Test.dll"
//"C:\\Users\\DemonGan\\Desktop\\BypassUAC2_Test\\Debug\\BypassUAC2_Test.dll";
int _tmain(int argc, _TCHAR* argv[])
{
	char szCmdLine[MAX_PATH] = { 0 };
	char szRundll32Path[MAX_PATH] = "C:\\Windows\\System32\\rundll32.exe";
	char szDllPath[MAX_PATH] = DLL_PATH;
	::sprintf_s(szCmdLine, "%s \"%s\" %s", szRundll32Path, szDllPath, "BypassUAC");
	::WinExec(szCmdLine, SW_HIDE);

	printf("Run OK.\n");
	system("pause");
	return 0;
}

