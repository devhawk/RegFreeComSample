

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Tue Feb 22 15:56:39 2005
 */
/* Compiler settings for .\SideBySide.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SideBySide_h__
#define __SideBySide_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISideBySideClass_FWD_DEFINED__
#define __ISideBySideClass_FWD_DEFINED__
typedef interface ISideBySideClass ISideBySideClass;
#endif 	/* __ISideBySideClass_FWD_DEFINED__ */


#ifndef __SideBySideClass_FWD_DEFINED__
#define __SideBySideClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class SideBySideClass SideBySideClass;
#else
typedef struct SideBySideClass SideBySideClass;
#endif /* __cplusplus */

#endif 	/* __SideBySideClass_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISideBySideClass_INTERFACE_DEFINED__
#define __ISideBySideClass_INTERFACE_DEFINED__

/* interface ISideBySideClass */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISideBySideClass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CBA85B94-9C11-43aa-84F6-30B90145FD3E")
    ISideBySideClass : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Version( 
            /* [retval][out] */ BSTR *pVer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISideBySideClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISideBySideClass * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISideBySideClass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISideBySideClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISideBySideClass * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISideBySideClass * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISideBySideClass * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISideBySideClass * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Version )( 
            ISideBySideClass * This,
            /* [retval][out] */ BSTR *pVer);
        
        END_INTERFACE
    } ISideBySideClassVtbl;

    interface ISideBySideClass
    {
        CONST_VTBL struct ISideBySideClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISideBySideClass_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISideBySideClass_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISideBySideClass_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISideBySideClass_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISideBySideClass_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISideBySideClass_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISideBySideClass_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISideBySideClass_Version(This,pVer)	\
    (This)->lpVtbl -> Version(This,pVer)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISideBySideClass_Version_Proxy( 
    ISideBySideClass * This,
    /* [retval][out] */ BSTR *pVer);


void __RPC_STUB ISideBySideClass_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISideBySideClass_INTERFACE_DEFINED__ */



#ifndef __SideBySideLib_LIBRARY_DEFINED__
#define __SideBySideLib_LIBRARY_DEFINED__

/* library SideBySideLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SideBySideLib;

EXTERN_C const CLSID CLSID_SideBySideClass;

#ifdef __cplusplus

class DECLSPEC_UUID("4B72FC46-C543-4101-80DB-7777848D1357")
SideBySideClass;
#endif
#endif /* __SideBySideLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


