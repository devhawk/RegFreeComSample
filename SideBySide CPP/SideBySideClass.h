// SideBySideClass.h : Declaration of the CSideBySideClass

#pragma once
#include "resource.h"       // main symbols

#include "SideBySide.h"


// CSideBySideClass

class ATL_NO_VTABLE CSideBySideClass : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSideBySideClass, &CLSID_SideBySideClass>,
	public IDispatchImpl<ISideBySideClass, &IID_ISideBySideClass, &LIBID_SideBySideLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CSideBySideClass()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SIDEBYSIDECLASS)


BEGIN_COM_MAP(CSideBySideClass)
	COM_INTERFACE_ENTRY(ISideBySideClass)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}
	
	void FinalRelease() 
	{
	}

public:

	STDMETHOD(Version)(BSTR* pVer);
};

OBJECT_ENTRY_AUTO(__uuidof(SideBySideClass), CSideBySideClass)
