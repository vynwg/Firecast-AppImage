/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/richole.idl - Do not edit ***/

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

#ifndef __richole_h__
#define __richole_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IRichEditOle_FWD_DEFINED__
#define __IRichEditOle_FWD_DEFINED__
typedef interface IRichEditOle IRichEditOle;
#ifdef __cplusplus
interface IRichEditOle;
#endif /* __cplusplus */
#endif

#ifndef __IRichEditOleCallback_FWD_DEFINED__
#define __IRichEditOleCallback_FWD_DEFINED__
typedef interface IRichEditOleCallback IRichEditOleCallback;
#ifdef __cplusplus
interface IRichEditOleCallback;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oleidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#if 0
#endif
#define REO_GETOBJ_NO_INTERFACES        0x00000000
#define REO_GETOBJ_POLEOBJ              0x00000001
#define REO_GETOBJ_PSTG                 0x00000002
#define REO_GETOBJ_POLESITE             0x00000004
#define REO_GETOBJ_ALL_INTERFACES       0x00000007
#define REO_CP_SELECTION                0xFFFFFFFF
#define REO_IOB_SELECTION               0xFFFFFFFF
#define REO_IOB_USE_CP                  0xFFFFFFFE
#define REO_NULL                        0x00000000
#define REO_READWRITEMASK               0x0000003F
#define REO_DONTNEEDPALETTE             0x00000020
#define REO_BLANK                       0x00000010
#define REO_DYNAMICSIZE                 0x00000008
#define REO_INVERTEDSELECT              0x00000004
#define REO_BELOWBASELINE               0x00000002
#define REO_RESIZABLE                   0x00000001
#define REO_LINK                        0x80000000
#define REO_STATIC                      0x40000000
#define REO_SELECTED                    0x08000000
#define REO_OPEN                        0x04000000
#define REO_INPLACEACTIVE               0x02000000
#define REO_HILITED                     0x01000000
#define REO_LINKAVAILABLE               0x00800000
#define REO_GETMETAFILE                 0x00400000
#define RECO_PASTE            0x00000000
#define RECO_DROP             0x00000001
#define RECO_COPY             0x00000002
#define RECO_CUT              0x00000003
#define RECO_DRAG             0x00000004
typedef struct _reobject {
    DWORD cbStruct;
    LONG cp;
    CLSID clsid;
    LPOLEOBJECT poleobj;
    LPSTORAGE pstg;
    LPOLECLIENTSITE polesite;
    SIZEL sizel;
    DWORD dvaspect;
    DWORD dwFlags;
    DWORD dwUser;
} REOBJECT;
#ifndef __RICHEDIT_CHARRANGE_DEFINED
#define __RICHEDIT_CHARRANGE_DEFINED
typedef struct _charrange {
    LONG cpMin;
    LONG cpMax;
} CHARRANGE;
#endif /* __RICHEDIT_CHARRANGE_DEFINED */
/*****************************************************************************
 * IRichEditOle interface
 */
#ifndef __IRichEditOle_INTERFACE_DEFINED__
#define __IRichEditOle_INTERFACE_DEFINED__

typedef IRichEditOle *LPRICHEDITOLE;
DEFINE_GUID(IID_IRichEditOle, 0x00020d00, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00020d00-0000-0000-c000-000000000046")
IRichEditOle : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetClientSite(
        LPOLECLIENTSITE *lplpolesite) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetObjectCount(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLinkCount(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetObject(
        LONG iob,
        REOBJECT *lpreobject,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE InsertObject(
        REOBJECT *lpreobject) = 0;

    virtual HRESULT STDMETHODCALLTYPE ConvertObject(
        LONG iob,
        REFCLSID rclsidNew,
        LPCSTR lpstrUserTypeNew) = 0;

    virtual HRESULT STDMETHODCALLTYPE ActivateAs(
        REFCLSID rclsid,
        REFCLSID rclsidAs) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetHostNames(
        LPCSTR lpstrContainerApp,
        LPCSTR lpstrContainerObj) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLinkAvailable(
        LONG iob,
        BOOL fAvailable) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDvaspect(
        LONG iob,
        DWORD dvaspect) = 0;

    virtual HRESULT STDMETHODCALLTYPE HandsOffStorage(
        LONG iob) = 0;

    virtual HRESULT STDMETHODCALLTYPE SaveCompleted(
        LONG iob,
        LPSTORAGE lpstg) = 0;

    virtual HRESULT STDMETHODCALLTYPE InPlaceDeactivate(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE ContextSensitiveHelp(
        BOOL fEnterMode) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetClipboardData(
        CHARRANGE *lpchrg,
        DWORD reco,
        LPDATAOBJECT *lplpdataobj) = 0;

    virtual HRESULT STDMETHODCALLTYPE ImportDataObject(
        LPDATAOBJECT lpdataobj,
        CLIPFORMAT cf,
        HGLOBAL hMetaPict) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRichEditOle, 0x00020d00, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IRichEditOleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRichEditOle *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRichEditOle *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRichEditOle *This);

    /*** IRichEditOle methods ***/
    HRESULT (STDMETHODCALLTYPE *GetClientSite)(
        IRichEditOle *This,
        LPOLECLIENTSITE *lplpolesite);

    HRESULT (STDMETHODCALLTYPE *GetObjectCount)(
        IRichEditOle *This);

    HRESULT (STDMETHODCALLTYPE *GetLinkCount)(
        IRichEditOle *This);

    HRESULT (STDMETHODCALLTYPE *GetObject)(
        IRichEditOle *This,
        LONG iob,
        REOBJECT *lpreobject,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *InsertObject)(
        IRichEditOle *This,
        REOBJECT *lpreobject);

    HRESULT (STDMETHODCALLTYPE *ConvertObject)(
        IRichEditOle *This,
        LONG iob,
        REFCLSID rclsidNew,
        LPCSTR lpstrUserTypeNew);

    HRESULT (STDMETHODCALLTYPE *ActivateAs)(
        IRichEditOle *This,
        REFCLSID rclsid,
        REFCLSID rclsidAs);

    HRESULT (STDMETHODCALLTYPE *SetHostNames)(
        IRichEditOle *This,
        LPCSTR lpstrContainerApp,
        LPCSTR lpstrContainerObj);

    HRESULT (STDMETHODCALLTYPE *SetLinkAvailable)(
        IRichEditOle *This,
        LONG iob,
        BOOL fAvailable);

    HRESULT (STDMETHODCALLTYPE *SetDvaspect)(
        IRichEditOle *This,
        LONG iob,
        DWORD dvaspect);

    HRESULT (STDMETHODCALLTYPE *HandsOffStorage)(
        IRichEditOle *This,
        LONG iob);

    HRESULT (STDMETHODCALLTYPE *SaveCompleted)(
        IRichEditOle *This,
        LONG iob,
        LPSTORAGE lpstg);

    HRESULT (STDMETHODCALLTYPE *InPlaceDeactivate)(
        IRichEditOle *This);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IRichEditOle *This,
        BOOL fEnterMode);

    HRESULT (STDMETHODCALLTYPE *GetClipboardData)(
        IRichEditOle *This,
        CHARRANGE *lpchrg,
        DWORD reco,
        LPDATAOBJECT *lplpdataobj);

    HRESULT (STDMETHODCALLTYPE *ImportDataObject)(
        IRichEditOle *This,
        LPDATAOBJECT lpdataobj,
        CLIPFORMAT cf,
        HGLOBAL hMetaPict);

    END_INTERFACE
} IRichEditOleVtbl;

interface IRichEditOle {
    CONST_VTBL IRichEditOleVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRichEditOle_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRichEditOle_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRichEditOle_Release(This) (This)->lpVtbl->Release(This)
/*** IRichEditOle methods ***/
#define IRichEditOle_GetClientSite(This,lplpolesite) (This)->lpVtbl->GetClientSite(This,lplpolesite)
#define IRichEditOle_GetObjectCount(This) (This)->lpVtbl->GetObjectCount(This)
#define IRichEditOle_GetLinkCount(This) (This)->lpVtbl->GetLinkCount(This)
#define IRichEditOle_GetObject(This,iob,lpreobject,dwFlags) (This)->lpVtbl->GetObject(This,iob,lpreobject,dwFlags)
#define IRichEditOle_InsertObject(This,lpreobject) (This)->lpVtbl->InsertObject(This,lpreobject)
#define IRichEditOle_ConvertObject(This,iob,rclsidNew,lpstrUserTypeNew) (This)->lpVtbl->ConvertObject(This,iob,rclsidNew,lpstrUserTypeNew)
#define IRichEditOle_ActivateAs(This,rclsid,rclsidAs) (This)->lpVtbl->ActivateAs(This,rclsid,rclsidAs)
#define IRichEditOle_SetHostNames(This,lpstrContainerApp,lpstrContainerObj) (This)->lpVtbl->SetHostNames(This,lpstrContainerApp,lpstrContainerObj)
#define IRichEditOle_SetLinkAvailable(This,iob,fAvailable) (This)->lpVtbl->SetLinkAvailable(This,iob,fAvailable)
#define IRichEditOle_SetDvaspect(This,iob,dvaspect) (This)->lpVtbl->SetDvaspect(This,iob,dvaspect)
#define IRichEditOle_HandsOffStorage(This,iob) (This)->lpVtbl->HandsOffStorage(This,iob)
#define IRichEditOle_SaveCompleted(This,iob,lpstg) (This)->lpVtbl->SaveCompleted(This,iob,lpstg)
#define IRichEditOle_InPlaceDeactivate(This) (This)->lpVtbl->InPlaceDeactivate(This)
#define IRichEditOle_ContextSensitiveHelp(This,fEnterMode) (This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode)
#define IRichEditOle_GetClipboardData(This,lpchrg,reco,lplpdataobj) (This)->lpVtbl->GetClipboardData(This,lpchrg,reco,lplpdataobj)
#define IRichEditOle_ImportDataObject(This,lpdataobj,cf,hMetaPict) (This)->lpVtbl->ImportDataObject(This,lpdataobj,cf,hMetaPict)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IRichEditOle_QueryInterface(IRichEditOle* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IRichEditOle_AddRef(IRichEditOle* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IRichEditOle_Release(IRichEditOle* This) {
    return This->lpVtbl->Release(This);
}
/*** IRichEditOle methods ***/
static __WIDL_INLINE HRESULT IRichEditOle_GetClientSite(IRichEditOle* This,LPOLECLIENTSITE *lplpolesite) {
    return This->lpVtbl->GetClientSite(This,lplpolesite);
}
static __WIDL_INLINE HRESULT IRichEditOle_GetObjectCount(IRichEditOle* This) {
    return This->lpVtbl->GetObjectCount(This);
}
static __WIDL_INLINE HRESULT IRichEditOle_GetLinkCount(IRichEditOle* This) {
    return This->lpVtbl->GetLinkCount(This);
}
static __WIDL_INLINE HRESULT IRichEditOle_GetObject(IRichEditOle* This,LONG iob,REOBJECT *lpreobject,DWORD dwFlags) {
    return This->lpVtbl->GetObject(This,iob,lpreobject,dwFlags);
}
static __WIDL_INLINE HRESULT IRichEditOle_InsertObject(IRichEditOle* This,REOBJECT *lpreobject) {
    return This->lpVtbl->InsertObject(This,lpreobject);
}
static __WIDL_INLINE HRESULT IRichEditOle_ConvertObject(IRichEditOle* This,LONG iob,REFCLSID rclsidNew,LPCSTR lpstrUserTypeNew) {
    return This->lpVtbl->ConvertObject(This,iob,rclsidNew,lpstrUserTypeNew);
}
static __WIDL_INLINE HRESULT IRichEditOle_ActivateAs(IRichEditOle* This,REFCLSID rclsid,REFCLSID rclsidAs) {
    return This->lpVtbl->ActivateAs(This,rclsid,rclsidAs);
}
static __WIDL_INLINE HRESULT IRichEditOle_SetHostNames(IRichEditOle* This,LPCSTR lpstrContainerApp,LPCSTR lpstrContainerObj) {
    return This->lpVtbl->SetHostNames(This,lpstrContainerApp,lpstrContainerObj);
}
static __WIDL_INLINE HRESULT IRichEditOle_SetLinkAvailable(IRichEditOle* This,LONG iob,BOOL fAvailable) {
    return This->lpVtbl->SetLinkAvailable(This,iob,fAvailable);
}
static __WIDL_INLINE HRESULT IRichEditOle_SetDvaspect(IRichEditOle* This,LONG iob,DWORD dvaspect) {
    return This->lpVtbl->SetDvaspect(This,iob,dvaspect);
}
static __WIDL_INLINE HRESULT IRichEditOle_HandsOffStorage(IRichEditOle* This,LONG iob) {
    return This->lpVtbl->HandsOffStorage(This,iob);
}
static __WIDL_INLINE HRESULT IRichEditOle_SaveCompleted(IRichEditOle* This,LONG iob,LPSTORAGE lpstg) {
    return This->lpVtbl->SaveCompleted(This,iob,lpstg);
}
static __WIDL_INLINE HRESULT IRichEditOle_InPlaceDeactivate(IRichEditOle* This) {
    return This->lpVtbl->InPlaceDeactivate(This);
}
static __WIDL_INLINE HRESULT IRichEditOle_ContextSensitiveHelp(IRichEditOle* This,BOOL fEnterMode) {
    return This->lpVtbl->ContextSensitiveHelp(This,fEnterMode);
}
static __WIDL_INLINE HRESULT IRichEditOle_GetClipboardData(IRichEditOle* This,CHARRANGE *lpchrg,DWORD reco,LPDATAOBJECT *lplpdataobj) {
    return This->lpVtbl->GetClipboardData(This,lpchrg,reco,lplpdataobj);
}
static __WIDL_INLINE HRESULT IRichEditOle_ImportDataObject(IRichEditOle* This,LPDATAOBJECT lpdataobj,CLIPFORMAT cf,HGLOBAL hMetaPict) {
    return This->lpVtbl->ImportDataObject(This,lpdataobj,cf,hMetaPict);
}
#endif
#endif

#endif


#endif  /* __IRichEditOle_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRichEditOleCallback interface
 */
#ifndef __IRichEditOleCallback_INTERFACE_DEFINED__
#define __IRichEditOleCallback_INTERFACE_DEFINED__

typedef IRichEditOleCallback *LPRICHEDITOLECALLBACK;
DEFINE_GUID(IID_IRichEditOleCallback, 0x00020d03, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00020d03-0000-0000-c000-000000000046")
IRichEditOleCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetNewStorage(
        LPSTORAGE *lplpstg) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInPlaceContext(
        LPOLEINPLACEFRAME *lplpFrame,
        LPOLEINPLACEUIWINDOW *lplpDoc,
        LPOLEINPLACEFRAMEINFO lpFrameInfo) = 0;

    virtual HRESULT STDMETHODCALLTYPE ShowContainerUI(
        BOOL fShow) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryInsertObject(
        LPCLSID lpclsid,
        LPSTORAGE lpstg,
        LONG cp) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteObject(
        LPOLEOBJECT lpoleobj) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryAcceptData(
        LPDATAOBJECT lpdataobj,
        CLIPFORMAT *lpcfFormat,
        DWORD reco,
        BOOL fReally,
        HGLOBAL hMetaPict) = 0;

    virtual HRESULT STDMETHODCALLTYPE ContextSensitiveHelp(
        BOOL fEnterMode) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetClipboardData(
        CHARRANGE *lpchrg,
        DWORD reco,
        LPDATAOBJECT *lplpdataobj) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDragDropEffect(
        BOOL fDrag,
        DWORD grfKeyState,
        LPDWORD pdwEffect) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetContextMenu(
        WORD seltype,
        LPOLEOBJECT lpoleobj,
        CHARRANGE *lpchrg,
        HMENU *lphmenu) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRichEditOleCallback, 0x00020d03, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IRichEditOleCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRichEditOleCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRichEditOleCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRichEditOleCallback *This);

    /*** IRichEditOleCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNewStorage)(
        IRichEditOleCallback *This,
        LPSTORAGE *lplpstg);

    HRESULT (STDMETHODCALLTYPE *GetInPlaceContext)(
        IRichEditOleCallback *This,
        LPOLEINPLACEFRAME *lplpFrame,
        LPOLEINPLACEUIWINDOW *lplpDoc,
        LPOLEINPLACEFRAMEINFO lpFrameInfo);

    HRESULT (STDMETHODCALLTYPE *ShowContainerUI)(
        IRichEditOleCallback *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *QueryInsertObject)(
        IRichEditOleCallback *This,
        LPCLSID lpclsid,
        LPSTORAGE lpstg,
        LONG cp);

    HRESULT (STDMETHODCALLTYPE *DeleteObject)(
        IRichEditOleCallback *This,
        LPOLEOBJECT lpoleobj);

    HRESULT (STDMETHODCALLTYPE *QueryAcceptData)(
        IRichEditOleCallback *This,
        LPDATAOBJECT lpdataobj,
        CLIPFORMAT *lpcfFormat,
        DWORD reco,
        BOOL fReally,
        HGLOBAL hMetaPict);

    HRESULT (STDMETHODCALLTYPE *ContextSensitiveHelp)(
        IRichEditOleCallback *This,
        BOOL fEnterMode);

    HRESULT (STDMETHODCALLTYPE *GetClipboardData)(
        IRichEditOleCallback *This,
        CHARRANGE *lpchrg,
        DWORD reco,
        LPDATAOBJECT *lplpdataobj);

    HRESULT (STDMETHODCALLTYPE *GetDragDropEffect)(
        IRichEditOleCallback *This,
        BOOL fDrag,
        DWORD grfKeyState,
        LPDWORD pdwEffect);

    HRESULT (STDMETHODCALLTYPE *GetContextMenu)(
        IRichEditOleCallback *This,
        WORD seltype,
        LPOLEOBJECT lpoleobj,
        CHARRANGE *lpchrg,
        HMENU *lphmenu);

    END_INTERFACE
} IRichEditOleCallbackVtbl;

interface IRichEditOleCallback {
    CONST_VTBL IRichEditOleCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRichEditOleCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRichEditOleCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRichEditOleCallback_Release(This) (This)->lpVtbl->Release(This)
/*** IRichEditOleCallback methods ***/
#define IRichEditOleCallback_GetNewStorage(This,lplpstg) (This)->lpVtbl->GetNewStorage(This,lplpstg)
#define IRichEditOleCallback_GetInPlaceContext(This,lplpFrame,lplpDoc,lpFrameInfo) (This)->lpVtbl->GetInPlaceContext(This,lplpFrame,lplpDoc,lpFrameInfo)
#define IRichEditOleCallback_ShowContainerUI(This,fShow) (This)->lpVtbl->ShowContainerUI(This,fShow)
#define IRichEditOleCallback_QueryInsertObject(This,lpclsid,lpstg,cp) (This)->lpVtbl->QueryInsertObject(This,lpclsid,lpstg,cp)
#define IRichEditOleCallback_DeleteObject(This,lpoleobj) (This)->lpVtbl->DeleteObject(This,lpoleobj)
#define IRichEditOleCallback_QueryAcceptData(This,lpdataobj,lpcfFormat,reco,fReally,hMetaPict) (This)->lpVtbl->QueryAcceptData(This,lpdataobj,lpcfFormat,reco,fReally,hMetaPict)
#define IRichEditOleCallback_ContextSensitiveHelp(This,fEnterMode) (This)->lpVtbl->ContextSensitiveHelp(This,fEnterMode)
#define IRichEditOleCallback_GetClipboardData(This,lpchrg,reco,lplpdataobj) (This)->lpVtbl->GetClipboardData(This,lpchrg,reco,lplpdataobj)
#define IRichEditOleCallback_GetDragDropEffect(This,fDrag,grfKeyState,pdwEffect) (This)->lpVtbl->GetDragDropEffect(This,fDrag,grfKeyState,pdwEffect)
#define IRichEditOleCallback_GetContextMenu(This,seltype,lpoleobj,lpchrg,lphmenu) (This)->lpVtbl->GetContextMenu(This,seltype,lpoleobj,lpchrg,lphmenu)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IRichEditOleCallback_QueryInterface(IRichEditOleCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IRichEditOleCallback_AddRef(IRichEditOleCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IRichEditOleCallback_Release(IRichEditOleCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** IRichEditOleCallback methods ***/
static __WIDL_INLINE HRESULT IRichEditOleCallback_GetNewStorage(IRichEditOleCallback* This,LPSTORAGE *lplpstg) {
    return This->lpVtbl->GetNewStorage(This,lplpstg);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_GetInPlaceContext(IRichEditOleCallback* This,LPOLEINPLACEFRAME *lplpFrame,LPOLEINPLACEUIWINDOW *lplpDoc,LPOLEINPLACEFRAMEINFO lpFrameInfo) {
    return This->lpVtbl->GetInPlaceContext(This,lplpFrame,lplpDoc,lpFrameInfo);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_ShowContainerUI(IRichEditOleCallback* This,BOOL fShow) {
    return This->lpVtbl->ShowContainerUI(This,fShow);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_QueryInsertObject(IRichEditOleCallback* This,LPCLSID lpclsid,LPSTORAGE lpstg,LONG cp) {
    return This->lpVtbl->QueryInsertObject(This,lpclsid,lpstg,cp);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_DeleteObject(IRichEditOleCallback* This,LPOLEOBJECT lpoleobj) {
    return This->lpVtbl->DeleteObject(This,lpoleobj);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_QueryAcceptData(IRichEditOleCallback* This,LPDATAOBJECT lpdataobj,CLIPFORMAT *lpcfFormat,DWORD reco,BOOL fReally,HGLOBAL hMetaPict) {
    return This->lpVtbl->QueryAcceptData(This,lpdataobj,lpcfFormat,reco,fReally,hMetaPict);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_ContextSensitiveHelp(IRichEditOleCallback* This,BOOL fEnterMode) {
    return This->lpVtbl->ContextSensitiveHelp(This,fEnterMode);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_GetClipboardData(IRichEditOleCallback* This,CHARRANGE *lpchrg,DWORD reco,LPDATAOBJECT *lplpdataobj) {
    return This->lpVtbl->GetClipboardData(This,lpchrg,reco,lplpdataobj);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_GetDragDropEffect(IRichEditOleCallback* This,BOOL fDrag,DWORD grfKeyState,LPDWORD pdwEffect) {
    return This->lpVtbl->GetDragDropEffect(This,fDrag,grfKeyState,pdwEffect);
}
static __WIDL_INLINE HRESULT IRichEditOleCallback_GetContextMenu(IRichEditOleCallback* This,WORD seltype,LPOLEOBJECT lpoleobj,CHARRANGE *lpchrg,HMENU *lphmenu) {
    return This->lpVtbl->GetContextMenu(This,seltype,lpoleobj,lpchrg,lphmenu);
}
#endif
#endif

#endif


#endif  /* __IRichEditOleCallback_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER CLIPFORMAT_UserSize     (ULONG *, ULONG, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal  (ULONG *, unsigned char *, CLIPFORMAT *);
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(ULONG *, unsigned char *, CLIPFORMAT *);
void            __RPC_USER CLIPFORMAT_UserFree     (ULONG *, CLIPFORMAT *);
ULONG           __RPC_USER HGLOBAL_UserSize     (ULONG *, ULONG, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserMarshal  (ULONG *, unsigned char *, HGLOBAL *);
unsigned char * __RPC_USER HGLOBAL_UserUnmarshal(ULONG *, unsigned char *, HGLOBAL *);
void            __RPC_USER HGLOBAL_UserFree     (ULONG *, HGLOBAL *);
ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);
ULONG           __RPC_USER HACCEL_UserSize     (ULONG *, ULONG, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserMarshal  (ULONG *, unsigned char *, HACCEL *);
unsigned char * __RPC_USER HACCEL_UserUnmarshal(ULONG *, unsigned char *, HACCEL *);
void            __RPC_USER HACCEL_UserFree     (ULONG *, HACCEL *);
ULONG           __RPC_USER HMENU_UserSize     (ULONG *, ULONG, HMENU *);
unsigned char * __RPC_USER HMENU_UserMarshal  (ULONG *, unsigned char *, HMENU *);
unsigned char * __RPC_USER HMENU_UserUnmarshal(ULONG *, unsigned char *, HMENU *);
void            __RPC_USER HMENU_UserFree     (ULONG *, HMENU *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __richole_h__ */
