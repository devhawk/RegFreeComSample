// SideBySideClass.cpp : Implementation of CSideBySideClass

#include "stdafx.h"
#include "SideBySideClass.h"
#include ".\sidebysideclass.h"


// CSideBySideClass


STDMETHODIMP CSideBySideClass::Version(BSTR* pVer)
{
	*pVer = SysAllocString(L"1.0.0-CPP");

	return S_OK;
}
