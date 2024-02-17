/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/restrictederrorinfo.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __restrictederrorinfo_h__
#define __restrictederrorinfo_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IRestrictedErrorInfo_FWD_DEFINED__
#define __IRestrictedErrorInfo_FWD_DEFINED__
typedef interface IRestrictedErrorInfo IRestrictedErrorInfo;
#ifdef __cplusplus
interface IRestrictedErrorInfo;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IRestrictedErrorInfo interface
 */
#ifndef __IRestrictedErrorInfo_INTERFACE_DEFINED__
#define __IRestrictedErrorInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRestrictedErrorInfo, 0x82ba7092, 0x4c88, 0x427d, 0xa7,0xbc, 0x16,0xdd,0x93,0xfe,0xb6,0x7e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("82ba7092-4c88-427d-a7bc-16dd93feb67e")
IRestrictedErrorInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetErrorDetails(
        BSTR *desc,
        HRESULT *error,
        BSTR *restricted_desc,
        BSTR *sid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetReference(
        BSTR *reference) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRestrictedErrorInfo, 0x82ba7092, 0x4c88, 0x427d, 0xa7,0xbc, 0x16,0xdd,0x93,0xfe,0xb6,0x7e)
#endif
#else
typedef struct IRestrictedErrorInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRestrictedErrorInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRestrictedErrorInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRestrictedErrorInfo *This);

    /*** IRestrictedErrorInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetErrorDetails)(
        IRestrictedErrorInfo *This,
        BSTR *desc,
        HRESULT *error,
        BSTR *restricted_desc,
        BSTR *sid);

    HRESULT (STDMETHODCALLTYPE *GetReference)(
        IRestrictedErrorInfo *This,
        BSTR *reference);

    END_INTERFACE
} IRestrictedErrorInfoVtbl;

interface IRestrictedErrorInfo {
    CONST_VTBL IRestrictedErrorInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRestrictedErrorInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRestrictedErrorInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRestrictedErrorInfo_Release(This) (This)->lpVtbl->Release(This)
/*** IRestrictedErrorInfo methods ***/
#define IRestrictedErrorInfo_GetErrorDetails(This,desc,error,restricted_desc,sid) (This)->lpVtbl->GetErrorDetails(This,desc,error,restricted_desc,sid)
#define IRestrictedErrorInfo_GetReference(This,reference) (This)->lpVtbl->GetReference(This,reference)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IRestrictedErrorInfo_QueryInterface(IRestrictedErrorInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IRestrictedErrorInfo_AddRef(IRestrictedErrorInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IRestrictedErrorInfo_Release(IRestrictedErrorInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** IRestrictedErrorInfo methods ***/
static __WIDL_INLINE HRESULT IRestrictedErrorInfo_GetErrorDetails(IRestrictedErrorInfo* This,BSTR *desc,HRESULT *error,BSTR *restricted_desc,BSTR *sid) {
    return This->lpVtbl->GetErrorDetails(This,desc,error,restricted_desc,sid);
}
static __WIDL_INLINE HRESULT IRestrictedErrorInfo_GetReference(IRestrictedErrorInfo* This,BSTR *reference) {
    return This->lpVtbl->GetReference(This,reference);
}
#endif
#endif

#endif


#endif  /* __IRestrictedErrorInfo_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __restrictederrorinfo_h__ */
