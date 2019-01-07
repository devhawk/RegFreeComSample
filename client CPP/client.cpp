#include "stdafx.h"
#include <iostream>
using namespace std;

void ErrorDescription(HRESULT hr)
{
    TCHAR* szErrMsg;
    if (FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM, NULL, hr, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR)&szErrMsg, 0, NULL) != 0)
	{
        cout << szErrMsg << endl;
        LocalFree(szErrMsg);
    }
	else
        cout << "Could not find a description for error 0x" << hex << hr << dec << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitializeEx(0, COINIT_MULTITHREADED);

	{
		ISideBySideClassPtr ptr;
		HRESULT hr = ptr.CreateInstance(__uuidof(SideBySideClass));
		if (SUCCEEDED(hr))
		{
			cout << ptr->Version() << endl;
		}
		ErrorDescription(hr);

		char c;
		cin >> c;
	}

	CoUninitialize();

	return 0;
}
