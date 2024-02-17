/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/docobj.idl - Do not edit ***/

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

#ifndef __docobj_h__
#define __docobj_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IOleDocument_FWD_DEFINED__
#define __IOleDocument_FWD_DEFINED__
typedef interface IOleDocument IOleDocument;
#ifdef __cplusplus
interface IOleDocument;
#endif /* __cplusplus */
#endif

#ifndef __IOleDocumentSite_FWD_DEFINED__
#define __IOleDocumentSite_FWD_DEFINED__
typedef interface IOleDocumentSite IOleDocumentSite;
#ifdef __cplusplus
interface IOleDocumentSite;
#endif /* __cplusplus */
#endif

#ifndef __IOleDocumentView_FWD_DEFINED__
#define __IOleDocumentView_FWD_DEFINED__
typedef interface IOleDocumentView IOleDocumentView;
#ifdef __cplusplus
interface IOleDocumentView;
#endif /* __cplusplus */
#endif

#ifndef __IEnumOleDocumentViews_FWD_DEFINED__
#define __IEnumOleDocumentViews_FWD_DEFINED__
typedef interface IEnumOleDocumentViews IEnumOleDocumentViews;
#ifdef __cplusplus
interface IEnumOleDocumentViews;
#endif /* __cplusplus */
#endif

#ifndef __IOleCommandTarget_FWD_DEFINED__
#define __IOleCommandTarget_FWD_DEFINED__
typedef interface IOleCommandTarget IOleCommandTarget;
#ifdef __cplusplus
interface IOleCommandTarget;
#endif /* __cplusplus */
#endif

#ifndef __IContinueCallback_FWD_DEFINED__
#define __IContinueCallback_FWD_DEFINED__
typedef interface IContinueCallback IContinueCallback;
#ifdef __cplusplus
interface IContinueCallback;
#endif /* __cplusplus */
#endif

#ifndef __IPrint_FWD_DEFINED__
#define __IPrint_FWD_DEFINED__
typedef interface IPrint IPrint;
#ifdef __cplusplus
interface IPrint;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <ocidl.h>
#include <objidl.h>
#include <oleidl.h>
#include <oaidl.h>
#include <servprov.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IOleDocumentView_FWD_DEFINED__
#define __IOleDocumentView_FWD_DEFINED__
typedef interface IOleDocumentView IOleDocumentView;
#ifdef __cplusplus
interface IOleDocumentView;
#endif /* __cplusplus */
#endif

#ifndef __IEnumOleDocumentViews_FWD_DEFINED__
#define __IEnumOleDocumentViews_FWD_DEFINED__
typedef interface IEnumOleDocumentViews IEnumOleDocumentViews;
#ifdef __cplusplus
interface IEnumOleDocumentViews;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IOleDocument interface
 */
#ifndef __IOleDocument_INTERFACE_DEFINED__
#define __IOleDocument_INTERFACE_DEFINED__

typedef IOleDocument *LPOLEDOCUMENT;
typedef enum __WIDL_docobj_generated_name_0000001E {
    DOCMISC_CANCREATEMULTIPLEVIEWS = 1,
    DOCMISC_SUPPORTCOMPLEXRECTANGLES = 2,
    DOCMISC_CANTOPENEDIT = 4,
    DOCMISC_NOFILESUPPORT = 8
} DOCMISC;
DEFINE_GUID(IID_IOleDocument, 0xb722bcc5, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b722bcc5-4e68-101b-a2bc-00aa00404770")
IOleDocument : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateView(
        IOleInPlaceSite *pIPSite,
        IStream *pstm,
        DWORD dwReserved,
        IOleDocumentView **ppView) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDocMiscStatus(
        DWORD *pdwStatus) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumViews(
        IEnumOleDocumentViews **ppEnum,
        IOleDocumentView **ppView) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IOleDocument, 0xb722bcc5, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70)
#endif
#else
typedef struct IOleDocumentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleDocument *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleDocument *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleDocument *This);

    /*** IOleDocument methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateView)(
        IOleDocument *This,
        IOleInPlaceSite *pIPSite,
        IStream *pstm,
        DWORD dwReserved,
        IOleDocumentView **ppView);

    HRESULT (STDMETHODCALLTYPE *GetDocMiscStatus)(
        IOleDocument *This,
        DWORD *pdwStatus);

    HRESULT (STDMETHODCALLTYPE *EnumViews)(
        IOleDocument *This,
        IEnumOleDocumentViews **ppEnum,
        IOleDocumentView **ppView);

    END_INTERFACE
} IOleDocumentVtbl;

interface IOleDocument {
    CONST_VTBL IOleDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IOleDocument_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IOleDocument_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IOleDocument_Release(This) (This)->lpVtbl->Release(This)
/*** IOleDocument methods ***/
#define IOleDocument_CreateView(This,pIPSite,pstm,dwReserved,ppView) (This)->lpVtbl->CreateView(This,pIPSite,pstm,dwReserved,ppView)
#define IOleDocument_GetDocMiscStatus(This,pdwStatus) (This)->lpVtbl->GetDocMiscStatus(This,pdwStatus)
#define IOleDocument_EnumViews(This,ppEnum,ppView) (This)->lpVtbl->EnumViews(This,ppEnum,ppView)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IOleDocument_QueryInterface(IOleDocument* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IOleDocument_AddRef(IOleDocument* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IOleDocument_Release(IOleDocument* This) {
    return This->lpVtbl->Release(This);
}
/*** IOleDocument methods ***/
static __WIDL_INLINE HRESULT IOleDocument_CreateView(IOleDocument* This,IOleInPlaceSite *pIPSite,IStream *pstm,DWORD dwReserved,IOleDocumentView **ppView) {
    return This->lpVtbl->CreateView(This,pIPSite,pstm,dwReserved,ppView);
}
static __WIDL_INLINE HRESULT IOleDocument_GetDocMiscStatus(IOleDocument* This,DWORD *pdwStatus) {
    return This->lpVtbl->GetDocMiscStatus(This,pdwStatus);
}
static __WIDL_INLINE HRESULT IOleDocument_EnumViews(IOleDocument* This,IEnumOleDocumentViews **ppEnum,IOleDocumentView **ppView) {
    return This->lpVtbl->EnumViews(This,ppEnum,ppView);
}
#endif
#endif

#endif


#endif  /* __IOleDocument_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleDocumentSite interface
 */
#ifndef __IOleDocumentSite_INTERFACE_DEFINED__
#define __IOleDocumentSite_INTERFACE_DEFINED__

typedef IOleDocumentSite *LPOLEDOCUMENTSITE;
DEFINE_GUID(IID_IOleDocumentSite, 0xb722bcc7, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b722bcc7-4e68-101b-a2bc-00aa00404770")
IOleDocumentSite : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ActivateMe(
        IOleDocumentView *pViewToActivate) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IOleDocumentSite, 0xb722bcc7, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70)
#endif
#else
typedef struct IOleDocumentSiteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleDocumentSite *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleDocumentSite *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleDocumentSite *This);

    /*** IOleDocumentSite methods ***/
    HRESULT (STDMETHODCALLTYPE *ActivateMe)(
        IOleDocumentSite *This,
        IOleDocumentView *pViewToActivate);

    END_INTERFACE
} IOleDocumentSiteVtbl;

interface IOleDocumentSite {
    CONST_VTBL IOleDocumentSiteVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IOleDocumentSite_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IOleDocumentSite_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IOleDocumentSite_Release(This) (This)->lpVtbl->Release(This)
/*** IOleDocumentSite methods ***/
#define IOleDocumentSite_ActivateMe(This,pViewToActivate) (This)->lpVtbl->ActivateMe(This,pViewToActivate)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IOleDocumentSite_QueryInterface(IOleDocumentSite* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IOleDocumentSite_AddRef(IOleDocumentSite* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IOleDocumentSite_Release(IOleDocumentSite* This) {
    return This->lpVtbl->Release(This);
}
/*** IOleDocumentSite methods ***/
static __WIDL_INLINE HRESULT IOleDocumentSite_ActivateMe(IOleDocumentSite* This,IOleDocumentView *pViewToActivate) {
    return This->lpVtbl->ActivateMe(This,pViewToActivate);
}
#endif
#endif

#endif


#endif  /* __IOleDocumentSite_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleDocumentView interface
 */
#ifndef __IOleDocumentView_INTERFACE_DEFINED__
#define __IOleDocumentView_INTERFACE_DEFINED__

typedef IOleDocumentView *LPOLEDOCUMENTVIEW;
DEFINE_GUID(IID_IOleDocumentView, 0xb722bcc6, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b722bcc6-4e68-101b-a2bc-00aa00404770")
IOleDocumentView : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetInPlaceSite(
        IOleInPlaceSite *pIPSite) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInPlaceSite(
        IOleInPlaceSite **ppIPSite) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDocument(
        IUnknown **ppunk) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRect(
        LPRECT prcView) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRect(
        LPRECT prcView) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRectComplex(
        LPRECT prcView,
        LPRECT prcHScroll,
        LPRECT prcVScroll,
        LPRECT prcSizeBox) = 0;

    virtual HRESULT STDMETHODCALLTYPE Show(
        BOOL fShow) = 0;

    virtual HRESULT STDMETHODCALLTYPE UIActivate(
        BOOL fUIActivate) = 0;

    virtual HRESULT STDMETHODCALLTYPE Open(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE CloseView(
        DWORD dwReserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE SaveViewState(
        LPSTREAM pstm) = 0;

    virtual HRESULT STDMETHODCALLTYPE ApplyViewState(
        LPSTREAM pstm) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IOleInPlaceSite *pIPSiteNew,
        IOleDocumentView **ppViewNew) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IOleDocumentView, 0xb722bcc6, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70)
#endif
#else
typedef struct IOleDocumentViewVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleDocumentView *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleDocumentView *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleDocumentView *This);

    /*** IOleDocumentView methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInPlaceSite)(
        IOleDocumentView *This,
        IOleInPlaceSite *pIPSite);

    HRESULT (STDMETHODCALLTYPE *GetInPlaceSite)(
        IOleDocumentView *This,
        IOleInPlaceSite **ppIPSite);

    HRESULT (STDMETHODCALLTYPE *GetDocument)(
        IOleDocumentView *This,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *SetRect)(
        IOleDocumentView *This,
        LPRECT prcView);

    HRESULT (STDMETHODCALLTYPE *GetRect)(
        IOleDocumentView *This,
        LPRECT prcView);

    HRESULT (STDMETHODCALLTYPE *SetRectComplex)(
        IOleDocumentView *This,
        LPRECT prcView,
        LPRECT prcHScroll,
        LPRECT prcVScroll,
        LPRECT prcSizeBox);

    HRESULT (STDMETHODCALLTYPE *Show)(
        IOleDocumentView *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *UIActivate)(
        IOleDocumentView *This,
        BOOL fUIActivate);

    HRESULT (STDMETHODCALLTYPE *Open)(
        IOleDocumentView *This);

    HRESULT (STDMETHODCALLTYPE *CloseView)(
        IOleDocumentView *This,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SaveViewState)(
        IOleDocumentView *This,
        LPSTREAM pstm);

    HRESULT (STDMETHODCALLTYPE *ApplyViewState)(
        IOleDocumentView *This,
        LPSTREAM pstm);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IOleDocumentView *This,
        IOleInPlaceSite *pIPSiteNew,
        IOleDocumentView **ppViewNew);

    END_INTERFACE
} IOleDocumentViewVtbl;

interface IOleDocumentView {
    CONST_VTBL IOleDocumentViewVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IOleDocumentView_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IOleDocumentView_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IOleDocumentView_Release(This) (This)->lpVtbl->Release(This)
/*** IOleDocumentView methods ***/
#define IOleDocumentView_SetInPlaceSite(This,pIPSite) (This)->lpVtbl->SetInPlaceSite(This,pIPSite)
#define IOleDocumentView_GetInPlaceSite(This,ppIPSite) (This)->lpVtbl->GetInPlaceSite(This,ppIPSite)
#define IOleDocumentView_GetDocument(This,ppunk) (This)->lpVtbl->GetDocument(This,ppunk)
#define IOleDocumentView_SetRect(This,prcView) (This)->lpVtbl->SetRect(This,prcView)
#define IOleDocumentView_GetRect(This,prcView) (This)->lpVtbl->GetRect(This,prcView)
#define IOleDocumentView_SetRectComplex(This,prcView,prcHScroll,prcVScroll,prcSizeBox) (This)->lpVtbl->SetRectComplex(This,prcView,prcHScroll,prcVScroll,prcSizeBox)
#define IOleDocumentView_Show(This,fShow) (This)->lpVtbl->Show(This,fShow)
#define IOleDocumentView_UIActivate(This,fUIActivate) (This)->lpVtbl->UIActivate(This,fUIActivate)
#define IOleDocumentView_Open(This) (This)->lpVtbl->Open(This)
#define IOleDocumentView_CloseView(This,dwReserved) (This)->lpVtbl->CloseView(This,dwReserved)
#define IOleDocumentView_SaveViewState(This,pstm) (This)->lpVtbl->SaveViewState(This,pstm)
#define IOleDocumentView_ApplyViewState(This,pstm) (This)->lpVtbl->ApplyViewState(This,pstm)
#define IOleDocumentView_Clone(This,pIPSiteNew,ppViewNew) (This)->lpVtbl->Clone(This,pIPSiteNew,ppViewNew)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IOleDocumentView_QueryInterface(IOleDocumentView* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IOleDocumentView_AddRef(IOleDocumentView* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IOleDocumentView_Release(IOleDocumentView* This) {
    return This->lpVtbl->Release(This);
}
/*** IOleDocumentView methods ***/
static __WIDL_INLINE HRESULT IOleDocumentView_SetInPlaceSite(IOleDocumentView* This,IOleInPlaceSite *pIPSite) {
    return This->lpVtbl->SetInPlaceSite(This,pIPSite);
}
static __WIDL_INLINE HRESULT IOleDocumentView_GetInPlaceSite(IOleDocumentView* This,IOleInPlaceSite **ppIPSite) {
    return This->lpVtbl->GetInPlaceSite(This,ppIPSite);
}
static __WIDL_INLINE HRESULT IOleDocumentView_GetDocument(IOleDocumentView* This,IUnknown **ppunk) {
    return This->lpVtbl->GetDocument(This,ppunk);
}
static __WIDL_INLINE HRESULT IOleDocumentView_SetRect(IOleDocumentView* This,LPRECT prcView) {
    return This->lpVtbl->SetRect(This,prcView);
}
static __WIDL_INLINE HRESULT IOleDocumentView_GetRect(IOleDocumentView* This,LPRECT prcView) {
    return This->lpVtbl->GetRect(This,prcView);
}
static __WIDL_INLINE HRESULT IOleDocumentView_SetRectComplex(IOleDocumentView* This,LPRECT prcView,LPRECT prcHScroll,LPRECT prcVScroll,LPRECT prcSizeBox) {
    return This->lpVtbl->SetRectComplex(This,prcView,prcHScroll,prcVScroll,prcSizeBox);
}
static __WIDL_INLINE HRESULT IOleDocumentView_Show(IOleDocumentView* This,BOOL fShow) {
    return This->lpVtbl->Show(This,fShow);
}
static __WIDL_INLINE HRESULT IOleDocumentView_UIActivate(IOleDocumentView* This,BOOL fUIActivate) {
    return This->lpVtbl->UIActivate(This,fUIActivate);
}
static __WIDL_INLINE HRESULT IOleDocumentView_Open(IOleDocumentView* This) {
    return This->lpVtbl->Open(This);
}
static __WIDL_INLINE HRESULT IOleDocumentView_CloseView(IOleDocumentView* This,DWORD dwReserved) {
    return This->lpVtbl->CloseView(This,dwReserved);
}
static __WIDL_INLINE HRESULT IOleDocumentView_SaveViewState(IOleDocumentView* This,LPSTREAM pstm) {
    return This->lpVtbl->SaveViewState(This,pstm);
}
static __WIDL_INLINE HRESULT IOleDocumentView_ApplyViewState(IOleDocumentView* This,LPSTREAM pstm) {
    return This->lpVtbl->ApplyViewState(This,pstm);
}
static __WIDL_INLINE HRESULT IOleDocumentView_Clone(IOleDocumentView* This,IOleInPlaceSite *pIPSiteNew,IOleDocumentView **ppViewNew) {
    return This->lpVtbl->Clone(This,pIPSiteNew,ppViewNew);
}
#endif
#endif

#endif


#endif  /* __IOleDocumentView_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumOleDocumentViews interface
 */
#ifndef __IEnumOleDocumentViews_INTERFACE_DEFINED__
#define __IEnumOleDocumentViews_INTERFACE_DEFINED__

typedef IEnumOleDocumentViews *LPENUMOLEDOCUMENTVIEWS;
DEFINE_GUID(IID_IEnumOleDocumentViews, 0xb722bcc8, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b722bcc8-4e68-101b-a2bc-00aa00404770")
IEnumOleDocumentViews : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Next(
        ULONG cViews,
        IOleDocumentView **rgpView,
        ULONG *pcFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        ULONG cViews) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumOleDocumentViews **ppEnum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumOleDocumentViews, 0xb722bcc8, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70)
#endif
#else
typedef struct IEnumOleDocumentViewsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumOleDocumentViews *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumOleDocumentViews *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumOleDocumentViews *This);

    /*** IEnumOleDocumentViews methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumOleDocumentViews *This,
        ULONG cViews,
        IOleDocumentView **rgpView,
        ULONG *pcFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumOleDocumentViews *This,
        ULONG cViews);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumOleDocumentViews *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumOleDocumentViews *This,
        IEnumOleDocumentViews **ppEnum);

    END_INTERFACE
} IEnumOleDocumentViewsVtbl;

interface IEnumOleDocumentViews {
    CONST_VTBL IEnumOleDocumentViewsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumOleDocumentViews_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumOleDocumentViews_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumOleDocumentViews_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumOleDocumentViews methods ***/
#define IEnumOleDocumentViews_Next(This,cViews,rgpView,pcFetched) (This)->lpVtbl->Next(This,cViews,rgpView,pcFetched)
#define IEnumOleDocumentViews_Skip(This,cViews) (This)->lpVtbl->Skip(This,cViews)
#define IEnumOleDocumentViews_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumOleDocumentViews_Clone(This,ppEnum) (This)->lpVtbl->Clone(This,ppEnum)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IEnumOleDocumentViews_QueryInterface(IEnumOleDocumentViews* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IEnumOleDocumentViews_AddRef(IEnumOleDocumentViews* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IEnumOleDocumentViews_Release(IEnumOleDocumentViews* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumOleDocumentViews methods ***/
static __WIDL_INLINE HRESULT IEnumOleDocumentViews_Next(IEnumOleDocumentViews* This,ULONG cViews,IOleDocumentView **rgpView,ULONG *pcFetched) {
    return This->lpVtbl->Next(This,cViews,rgpView,pcFetched);
}
static __WIDL_INLINE HRESULT IEnumOleDocumentViews_Skip(IEnumOleDocumentViews* This,ULONG cViews) {
    return This->lpVtbl->Skip(This,cViews);
}
static __WIDL_INLINE HRESULT IEnumOleDocumentViews_Reset(IEnumOleDocumentViews* This) {
    return This->lpVtbl->Reset(This);
}
static __WIDL_INLINE HRESULT IEnumOleDocumentViews_Clone(IEnumOleDocumentViews* This,IEnumOleDocumentViews **ppEnum) {
    return This->lpVtbl->Clone(This,ppEnum);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IEnumOleDocumentViews_RemoteNext_Proxy(
    IEnumOleDocumentViews* This,
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched);
void __RPC_STUB IEnumOleDocumentViews_RemoteNext_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumOleDocumentViews_Next_Proxy(
    IEnumOleDocumentViews* This,
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched);
HRESULT __RPC_STUB IEnumOleDocumentViews_Next_Stub(
    IEnumOleDocumentViews* This,
    ULONG cViews,
    IOleDocumentView **rgpView,
    ULONG *pcFetched);

#endif  /* __IEnumOleDocumentViews_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IOleCommandTarget interface
 */
#ifndef __IOleCommandTarget_INTERFACE_DEFINED__
#define __IOleCommandTarget_INTERFACE_DEFINED__

typedef IOleCommandTarget *LPOLECOMMANDTARGET;
typedef enum OLECMDF {
    OLECMDF_SUPPORTED = 0x1,
    OLECMDF_ENABLED = 0x2,
    OLECMDF_LATCHED = 0x4,
    OLECMDF_NINCHED = 0x8,
    OLECMDF_INVISIBLE = 0x10,
    OLECMDF_DEFHIDEONCTXTMENU = 0x20
} OLECMDF;
typedef struct _tagOLECMD {
    ULONG cmdID;
    DWORD cmdf;
} OLECMD;
typedef struct _tagOLECMDTEXT {
    DWORD cmdtextf;
    ULONG cwActual;
    ULONG cwBuf;
    WCHAR rgwz[1];
} OLECMDTEXT;
typedef enum OLECMDTEXTF {
    OLECMDTEXTF_NONE = 0,
    OLECMDTEXTF_NAME = 1,
    OLECMDTEXTF_STATUS = 2
} OLECMDTEXTF;
typedef enum OLECMDEXECOPT {
    OLECMDEXECOPT_DODEFAULT = 0,
    OLECMDEXECOPT_PROMPTUSER = 1,
    OLECMDEXECOPT_DONTPROMPTUSER = 2,
    OLECMDEXECOPT_SHOWHELP = 3
} OLECMDEXECOPT;
typedef enum OLECMDID {
    OLECMDID_OPEN = 1,
    OLECMDID_NEW = 2,
    OLECMDID_SAVE = 3,
    OLECMDID_SAVEAS = 4,
    OLECMDID_SAVECOPYAS = 5,
    OLECMDID_PRINT = 6,
    OLECMDID_PRINTPREVIEW = 7,
    OLECMDID_PAGESETUP = 8,
    OLECMDID_SPELL = 9,
    OLECMDID_PROPERTIES = 10,
    OLECMDID_CUT = 11,
    OLECMDID_COPY = 12,
    OLECMDID_PASTE = 13,
    OLECMDID_PASTESPECIAL = 14,
    OLECMDID_UNDO = 15,
    OLECMDID_REDO = 16,
    OLECMDID_SELECTALL = 17,
    OLECMDID_CLEARSELECTION = 18,
    OLECMDID_ZOOM = 19,
    OLECMDID_GETZOOMRANGE = 20,
    OLECMDID_UPDATECOMMANDS = 21,
    OLECMDID_REFRESH = 22,
    OLECMDID_STOP = 23,
    OLECMDID_HIDETOOLBARS = 24,
    OLECMDID_SETPROGRESSMAX = 25,
    OLECMDID_SETPROGRESSPOS = 26,
    OLECMDID_SETPROGRESSTEXT = 27,
    OLECMDID_SETTITLE = 28,
    OLECMDID_SETDOWNLOADSTATE = 29,
    OLECMDID_STOPDOWNLOAD = 30,
    OLECMDID_ONTOOLBARACTIVATED = 31,
    OLECMDID_FIND = 32,
    OLECMDID_DELETE = 33,
    OLECMDID_HTTPEQUIV = 34,
    OLECMDID_HTTPEQUIV_DONE = 35,
    OLECMDID_ENABLE_INTERACTION = 36,
    OLECMDID_ONUNLOAD = 37,
    OLECMDID_PROPERTYBAG2 = 38,
    OLECMDID_PREREFRESH = 39,
    OLECMDID_SHOWSCRIPTERROR = 40,
    OLECMDID_SHOWMESSAGE = 41,
    OLECMDID_SHOWFIND = 42,
    OLECMDID_SHOWPAGESETUP = 43,
    OLECMDID_SHOWPRINT = 44,
    OLECMDID_CLOSE = 45,
    OLECMDID_ALLOWUILESSSAVEAS = 46,
    OLECMDID_DONTDOWNLOADCSS = 47,
    OLECMDID_UPDATEPAGESTATUS = 48,
    OLECMDID_PRINT2 = 49,
    OLECMDID_PRINTPREVIEW2 = 50,
    OLECMDID_SETPRINTTEMPLATE = 51,
    OLECMDID_GETPRINTTEMPLATE = 52,
    OLECMDID_PAGEACTIONBLOCKED = 55,
    OLECMDID_PAGEACTIONUIQUERY = 56,
    OLECMDID_FOCUSVIEWCONTROLS = 57,
    OLECMDID_FOCUSVIEWCONTROLSQUERY = 58,
    OLECMDID_SHOWPAGEACTIONMENU = 59,
    OLECMDID_ADDTRAVELENTRY = 60,
    OLECMDID_UPDATETRAVELENTRY = 61,
    OLECMDID_UPDATEBACKFORWARDSTATE = 62,
    OLECMDID_OPTICAL_ZOOM = 63,
    OLECMDID_OPTICAL_GETZOOMRANGE = 64,
    OLECMDID_WINDOWSTATECHANGED = 65,
    OLECMDID_ACTIVEXINSTALLSCOPE = 66,
    OLECMDID_UPDATETRAVELENTRY_DATARECOVERY = 67,
    OLECMDID_SHOWTASKDLG = 68,
    OLECMDID_POPSTATEEVENT = 69,
    OLECMDID_VIEWPORT_MODE = 70,
    OLECMDID_LAYOUT_VIEWPORT_WIDTH = 71,
    OLECMDID_VISUAL_VIEWPORT_EXCLUDE_BOTTOM = 72,
    OLECMDID_USER_OPTICAL_ZOOM = 73,
    OLECMDID_PAGEAVAILABLE = 74,
    OLECMDID_GETUSERSCALABLE = 75,
    OLECMDID_UPDATE_CARET = 76,
    OLECMDID_ENABLE_VISIBILITY = 77,
    OLECMDID_MEDIA_PLAYBACK = 78
} OLECMDID;
DEFINE_GUID(IID_IOleCommandTarget, 0xb722bccb, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b722bccb-4e68-101b-a2bc-00aa00404770")
IOleCommandTarget : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE QueryStatus(
        const GUID *pguidCmdGroup,
        ULONG cCmds,
        OLECMD prgCmds[],
        OLECMDTEXT *pCmdText) = 0;

    virtual HRESULT STDMETHODCALLTYPE Exec(
        const GUID *pguidCmdGroup,
        DWORD nCmdID,
        DWORD nCmdexecopt,
        VARIANT *pvaIn,
        VARIANT *pvaOut) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IOleCommandTarget, 0xb722bccb, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70)
#endif
#else
typedef struct IOleCommandTargetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IOleCommandTarget *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IOleCommandTarget *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IOleCommandTarget *This);

    /*** IOleCommandTarget methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryStatus)(
        IOleCommandTarget *This,
        const GUID *pguidCmdGroup,
        ULONG cCmds,
        OLECMD prgCmds[],
        OLECMDTEXT *pCmdText);

    HRESULT (STDMETHODCALLTYPE *Exec)(
        IOleCommandTarget *This,
        const GUID *pguidCmdGroup,
        DWORD nCmdID,
        DWORD nCmdexecopt,
        VARIANT *pvaIn,
        VARIANT *pvaOut);

    END_INTERFACE
} IOleCommandTargetVtbl;

interface IOleCommandTarget {
    CONST_VTBL IOleCommandTargetVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IOleCommandTarget_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IOleCommandTarget_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IOleCommandTarget_Release(This) (This)->lpVtbl->Release(This)
/*** IOleCommandTarget methods ***/
#define IOleCommandTarget_QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText) (This)->lpVtbl->QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText)
#define IOleCommandTarget_Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut) (This)->lpVtbl->Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IOleCommandTarget_QueryInterface(IOleCommandTarget* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IOleCommandTarget_AddRef(IOleCommandTarget* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IOleCommandTarget_Release(IOleCommandTarget* This) {
    return This->lpVtbl->Release(This);
}
/*** IOleCommandTarget methods ***/
static __WIDL_INLINE HRESULT IOleCommandTarget_QueryStatus(IOleCommandTarget* This,const GUID *pguidCmdGroup,ULONG cCmds,OLECMD prgCmds[],OLECMDTEXT *pCmdText) {
    return This->lpVtbl->QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText);
}
static __WIDL_INLINE HRESULT IOleCommandTarget_Exec(IOleCommandTarget* This,const GUID *pguidCmdGroup,DWORD nCmdID,DWORD nCmdexecopt,VARIANT *pvaIn,VARIANT *pvaOut) {
    return This->lpVtbl->Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut);
}
#endif
#endif

#endif


#endif  /* __IOleCommandTarget_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IContinueCallback interface
 */
#ifndef __IContinueCallback_INTERFACE_DEFINED__
#define __IContinueCallback_INTERFACE_DEFINED__

typedef IContinueCallback *LPCONTINUECALLBACK;
DEFINE_GUID(IID_IContinueCallback, 0xb722bcca, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b722bcca-4e68-101b-a2bc-00aa00404770")
IContinueCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE FContinue(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE FContinuePrinting(
        LONG nCntPrinted,
        LONG nCurPage,
        WCHAR *pwszPrintStatus) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IContinueCallback, 0xb722bcca, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70)
#endif
#else
typedef struct IContinueCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IContinueCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IContinueCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IContinueCallback *This);

    /*** IContinueCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *FContinue)(
        IContinueCallback *This);

    HRESULT (STDMETHODCALLTYPE *FContinuePrinting)(
        IContinueCallback *This,
        LONG nCntPrinted,
        LONG nCurPage,
        WCHAR *pwszPrintStatus);

    END_INTERFACE
} IContinueCallbackVtbl;

interface IContinueCallback {
    CONST_VTBL IContinueCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IContinueCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IContinueCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IContinueCallback_Release(This) (This)->lpVtbl->Release(This)
/*** IContinueCallback methods ***/
#define IContinueCallback_FContinue(This) (This)->lpVtbl->FContinue(This)
#define IContinueCallback_FContinuePrinting(This,nCntPrinted,nCurPage,pwszPrintStatus) (This)->lpVtbl->FContinuePrinting(This,nCntPrinted,nCurPage,pwszPrintStatus)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IContinueCallback_QueryInterface(IContinueCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IContinueCallback_AddRef(IContinueCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IContinueCallback_Release(IContinueCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** IContinueCallback methods ***/
static __WIDL_INLINE HRESULT IContinueCallback_FContinue(IContinueCallback* This) {
    return This->lpVtbl->FContinue(This);
}
static __WIDL_INLINE HRESULT IContinueCallback_FContinuePrinting(IContinueCallback* This,LONG nCntPrinted,LONG nCurPage,WCHAR *pwszPrintStatus) {
    return This->lpVtbl->FContinuePrinting(This,nCntPrinted,nCurPage,pwszPrintStatus);
}
#endif
#endif

#endif


#endif  /* __IContinueCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPrint interface
 */
#ifndef __IPrint_INTERFACE_DEFINED__
#define __IPrint_INTERFACE_DEFINED__

typedef IPrint *LPPRINT;
typedef enum __WIDL_docobj_generated_name_0000001F {
    PRINTFLAG_MAYBOTHERUSER = 1,
    PRINTFLAG_PROMPTUSER = 2,
    PRINTFLAG_USERMAYCHANGEPRINTER = 4,
    PRINTFLAG_RECOMPOSETODEVICE = 8,
    PRINTFLAG_DONTACTUALLYPRINT = 16,
    PRINTFLAG_FORCEPROPERTIES = 32,
    PRINTFLAG_PRINTTOFILE = 64
} PRINTFLAG;
typedef struct tagPAGERANGE {
    LONG nFromPage;
    LONG nToPage;
} PAGERANGE;
typedef struct tagPAGESET {
    ULONG cbStruct;
    BOOL fOddPages;
    BOOL fEvenPages;
    ULONG cPageRange;
    PAGERANGE rgPages[1];
} PAGESET;
DEFINE_GUID(IID_IPrint, 0xb722bcc9, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b722bcc9-4e68-101b-a2bc-00aa00404770")
IPrint : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetInitialPageNum(
        LONG nFirstPage) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPageInfo(
        LONG *pnFirstPage,
        LONG *pcPages) = 0;

    virtual HRESULT STDMETHODCALLTYPE Print(
        DWORD grfFlags,
        DVTARGETDEVICE **pptd,
        PAGESET **ppPageSet,
        STGMEDIUM *pstgmOptions,
        IContinueCallback *pcallback,
        LONG nFirstPage,
        LONG *pcPagesPrinted,
        LONG *pnLastPage) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPrint, 0xb722bcc9, 0x4e68, 0x101b, 0xa2,0xbc, 0x00,0xaa,0x00,0x40,0x47,0x70)
#endif
#else
typedef struct IPrintVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPrint *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPrint *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPrint *This);

    /*** IPrint methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInitialPageNum)(
        IPrint *This,
        LONG nFirstPage);

    HRESULT (STDMETHODCALLTYPE *GetPageInfo)(
        IPrint *This,
        LONG *pnFirstPage,
        LONG *pcPages);

    HRESULT (STDMETHODCALLTYPE *Print)(
        IPrint *This,
        DWORD grfFlags,
        DVTARGETDEVICE **pptd,
        PAGESET **ppPageSet,
        STGMEDIUM *pstgmOptions,
        IContinueCallback *pcallback,
        LONG nFirstPage,
        LONG *pcPagesPrinted,
        LONG *pnLastPage);

    END_INTERFACE
} IPrintVtbl;

interface IPrint {
    CONST_VTBL IPrintVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPrint_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPrint_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPrint_Release(This) (This)->lpVtbl->Release(This)
/*** IPrint methods ***/
#define IPrint_SetInitialPageNum(This,nFirstPage) (This)->lpVtbl->SetInitialPageNum(This,nFirstPage)
#define IPrint_GetPageInfo(This,pnFirstPage,pcPages) (This)->lpVtbl->GetPageInfo(This,pnFirstPage,pcPages)
#define IPrint_Print(This,grfFlags,pptd,ppPageSet,pstgmOptions,pcallback,nFirstPage,pcPagesPrinted,pnLastPage) (This)->lpVtbl->Print(This,grfFlags,pptd,ppPageSet,pstgmOptions,pcallback,nFirstPage,pcPagesPrinted,pnLastPage)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IPrint_QueryInterface(IPrint* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IPrint_AddRef(IPrint* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IPrint_Release(IPrint* This) {
    return This->lpVtbl->Release(This);
}
/*** IPrint methods ***/
static __WIDL_INLINE HRESULT IPrint_SetInitialPageNum(IPrint* This,LONG nFirstPage) {
    return This->lpVtbl->SetInitialPageNum(This,nFirstPage);
}
static __WIDL_INLINE HRESULT IPrint_GetPageInfo(IPrint* This,LONG *pnFirstPage,LONG *pcPages) {
    return This->lpVtbl->GetPageInfo(This,pnFirstPage,pcPages);
}
static __WIDL_INLINE HRESULT IPrint_Print(IPrint* This,DWORD grfFlags,DVTARGETDEVICE **pptd,PAGESET **ppPageSet,STGMEDIUM *pstgmOptions,IContinueCallback *pcallback,LONG nFirstPage,LONG *pcPagesPrinted,LONG *pnLastPage) {
    return This->lpVtbl->Print(This,grfFlags,pptd,ppPageSet,pstgmOptions,pcallback,nFirstPage,pcPagesPrinted,pnLastPage);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IPrint_RemotePrint_Proxy(
    IPrint* This,
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **pppageset,
    RemSTGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage);
void __RPC_STUB IPrint_RemotePrint_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IPrint_Print_Proxy(
    IPrint* This,
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **ppPageSet,
    STGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage);
HRESULT __RPC_STUB IPrint_Print_Stub(
    IPrint* This,
    DWORD grfFlags,
    DVTARGETDEVICE **pptd,
    PAGESET **pppageset,
    RemSTGMEDIUM *pstgmOptions,
    IContinueCallback *pcallback,
    LONG nFirstPage,
    LONG *pcPagesPrinted,
    LONG *pnLastPage);

#endif  /* __IPrint_INTERFACE_DEFINED__ */

#define OLECMDERR_E_FIRST            (OLE_E_LAST+1)
#define OLECMDERR_E_NOTSUPPORTED     (OLECMDERR_E_FIRST)
#define OLECMDERR_E_DISABLED         (OLECMDERR_E_FIRST+1)
#define OLECMDERR_E_NOHELP           (OLECMDERR_E_FIRST+2)
#define OLECMDERR_E_CANCELED         (OLECMDERR_E_FIRST+3)
#define OLECMDERR_E_UNKNOWNGROUP     (OLECMDERR_E_FIRST+4)
#define MSOCMDERR_E_FIRST OLECMDERR_E_FIRST
#define MSOCMDERR_E_NOTSUPPORTED OLECMDERR_E_NOTSUPPORTED
#define MSOCMDERR_E_DISABLED OLECMDERR_E_DISABLED
#define MSOCMDERR_E_NOHELP OLECMDERR_E_NOHELP
#define MSOCMDERR_E_CANCELED OLECMDERR_E_CANCELED
#define MSOCMDERR_E_UNKNOWNGROUP OLECMDERR_E_UNKNOWNGROUP
#define LPMSODOCUMENT                  LPOLEDOCUMENT
#define LPMSODOCUMENTSITE              LPOLEDOCUMENTSITE
#define LPMSOVIEW                      LPOLEDOCUMENTVIEW
#define LPENUMMSOVIEW                  LPENUMOLEDOCUMENTVIEWS
#define LPMSOCOMMANDTARGET             LPOLECOMMANDTARGET
#define IID_IMsoDocument               IID_IOleDocument
#define IID_IMsoDocumentSite           IID_IOleDocumentSite
#define IID_IMsoView                   IID_IOleDocumentView
#define IID_IEnumMsoView               IID_IEnumOleDocumentViews
#define IID_IMsoCommandTarget          IID_IOleCommandTarget
EXTERN_C const GUID SID_SContainerDispatch;
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);
ULONG           __RPC_USER STGMEDIUM_UserSize     (ULONG *, ULONG, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserMarshal  (ULONG *, unsigned char *, STGMEDIUM *);
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(ULONG *, unsigned char *, STGMEDIUM *);
void            __RPC_USER STGMEDIUM_UserFree     (ULONG *, STGMEDIUM *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __docobj_h__ */
