/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/unknwn.idl - Do not edit ***/

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

#ifndef __unknwn_h__
#define __unknwn_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IUnknown_FWD_DEFINED__
#define __IUnknown_FWD_DEFINED__
typedef interface IUnknown IUnknown;
#ifdef __cplusplus
interface IUnknown;
#endif /* __cplusplus */
#endif

#ifndef __IClassFactory_FWD_DEFINED__
#define __IClassFactory_FWD_DEFINED__
typedef interface IClassFactory IClassFactory;
#ifdef __cplusplus
interface IClassFactory;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __WINESRC__
#define WIDL_C_INLINE_WRAPPERS
#endif
#ifdef WIDL_C_INLINE_WRAPPERS
#define SAVE_WIDL_C_INLINE_WRAPPERS
#undef WIDL_C_INLINE_WRAPPERS
#endif
/*****************************************************************************
 * IUnknown interface
 */
#ifndef __IUnknown_INTERFACE_DEFINED__
#define __IUnknown_INTERFACE_DEFINED__

typedef IUnknown *LPUNKNOWN;
DEFINE_GUID(IID_IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000000-0000-0000-c000-000000000046")
IUnknown
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE QueryInterface(
        REFIID riid,
        void **ppvObject) = 0;

    virtual ULONG STDMETHODCALLTYPE AddRef(
        ) = 0;

    virtual ULONG STDMETHODCALLTYPE Release(
        ) = 0;

    END_INTERFACE

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IUnknown, 0x00000000, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IUnknownVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IUnknown *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IUnknown *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IUnknown *This);

    END_INTERFACE
} IUnknownVtbl;

interface IUnknown {
    CONST_VTBL IUnknownVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IUnknown_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IUnknown_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IUnknown_Release(This) (This)->lpVtbl->Release(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IUnknown_QueryInterface(IUnknown* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IUnknown_AddRef(IUnknown* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IUnknown_Release(IUnknown* This) {
    return This->lpVtbl->Release(This);
}
#endif
#endif

#endif


#endif  /* __IUnknown_INTERFACE_DEFINED__ */

HRESULT STDMETHODCALLTYPE IUnknown_QueryInterface_Proxy(IUnknown* This, REFIID riid, void **ppvObject);
void __RPC_STUB IUnknown_QueryInterface_Stub(IRpcStubBuffer* This, IRpcChannelBuffer* pRpcChannelBuffer,
     PRPC_MESSAGE pRpcMessage, DWORD* pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_AddRef_Proxy(IUnknown* This);
void __RPC_STUB IUnknown_AddRef_Stub(IRpcStubBuffer* This, IRpcChannelBuffer* pRpcChannelBuffer,
     PRPC_MESSAGE pRpcMessage, DWORD* pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_Release_Proxy(IUnknown* This);
void __RPC_STUB IUnknown_Release_Stub(IRpcStubBuffer* This, IRpcChannelBuffer* pRpcChannelBuffer,
     PRPC_MESSAGE pRpcMessage, DWORD* pdwStubPhase);
#ifdef SAVE_WIDL_C_INLINE_WRAPPERS
#define WIDL_C_INLINE_WRAPPERS
#endif
/*****************************************************************************
 * IClassFactory interface
 */
#ifndef __IClassFactory_INTERFACE_DEFINED__
#define __IClassFactory_INTERFACE_DEFINED__

typedef IClassFactory *LPCLASSFACTORY;
DEFINE_GUID(IID_IClassFactory, 0x00000001, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000001-0000-0000-c000-000000000046")
IClassFactory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE LockServer(
        BOOL fLock) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IClassFactory, 0x00000001, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IClassFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IClassFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IClassFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IClassFactory *This);

    /*** IClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IClassFactory *This,
        IUnknown *pUnkOuter,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *LockServer)(
        IClassFactory *This,
        BOOL fLock);

    END_INTERFACE
} IClassFactoryVtbl;

interface IClassFactory {
    CONST_VTBL IClassFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IClassFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IClassFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IClassFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IClassFactory methods ***/
#define IClassFactory_CreateInstance(This,pUnkOuter,riid,ppvObject) (This)->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject)
#define IClassFactory_LockServer(This,fLock) (This)->lpVtbl->LockServer(This,fLock)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IClassFactory_QueryInterface(IClassFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IClassFactory_AddRef(IClassFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IClassFactory_Release(IClassFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IClassFactory methods ***/
static __WIDL_INLINE HRESULT IClassFactory_CreateInstance(IClassFactory* This,IUnknown *pUnkOuter,REFIID riid,void **ppvObject) {
    return This->lpVtbl->CreateInstance(This,pUnkOuter,riid,ppvObject);
}
static __WIDL_INLINE HRESULT IClassFactory_LockServer(IClassFactory* This,BOOL fLock) {
    return This->lpVtbl->LockServer(This,fLock);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IClassFactory_RemoteCreateInstance_Proxy(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
void __RPC_STUB IClassFactory_RemoteCreateInstance_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IClassFactory_RemoteLockServer_Proxy(
    IClassFactory* This,
    BOOL fLock);
void __RPC_STUB IClassFactory_RemoteLockServer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IClassFactory_CreateInstance_Proxy(
    IClassFactory* This,
    IUnknown *pUnkOuter,
    REFIID riid,
    void **ppvObject);
HRESULT __RPC_STUB IClassFactory_CreateInstance_Stub(
    IClassFactory* This,
    REFIID riid,
    IUnknown **ppvObject);
HRESULT CALLBACK IClassFactory_LockServer_Proxy(
    IClassFactory* This,
    BOOL fLock);
HRESULT __RPC_STUB IClassFactory_LockServer_Stub(
    IClassFactory* This,
    BOOL fLock);

#endif  /* __IClassFactory_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __unknwn_h__ */
