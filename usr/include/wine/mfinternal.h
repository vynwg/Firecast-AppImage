/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/wine/mfinternal.idl - Do not edit ***/

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

#ifndef __mfinternal_h__
#define __mfinternal_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IMFSinkClassFactory_FWD_DEFINED__
#define __IMFSinkClassFactory_FWD_DEFINED__
typedef interface IMFSinkClassFactory IMFSinkClassFactory;
#ifdef __cplusplus
interface IMFSinkClassFactory;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IMFByteStream_FWD_DEFINED__
#define __IMFByteStream_FWD_DEFINED__
typedef interface IMFByteStream IMFByteStream;
#ifdef __cplusplus
interface IMFByteStream;
#endif /* __cplusplus */
#endif

#ifndef __IMFMediaSink_FWD_DEFINED__
#define __IMFMediaSink_FWD_DEFINED__
typedef interface IMFMediaSink IMFMediaSink;
#ifdef __cplusplus
interface IMFMediaSink;
#endif /* __cplusplus */
#endif

#ifndef __IMFMediaType_FWD_DEFINED__
#define __IMFMediaType_FWD_DEFINED__
typedef interface IMFMediaType IMFMediaType;
#ifdef __cplusplus
interface IMFMediaType;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IMFSinkClassFactory interface
 */
#ifndef __IMFSinkClassFactory_INTERFACE_DEFINED__
#define __IMFSinkClassFactory_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFSinkClassFactory, 0x37aa1c3b, 0x620f, 0x477e, 0xbe,0xf9, 0xac,0x4a,0xa8,0x5b,0xe9,0x5d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("37aa1c3b-620f-477e-bef9-ac4aa85be95d")
IMFSinkClassFactory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateMediaSink(
        IMFByteStream *stream,
        IMFMediaType *video_type,
        IMFMediaType *audio_type,
        IMFMediaSink **sink) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFSinkClassFactory, 0x37aa1c3b, 0x620f, 0x477e, 0xbe,0xf9, 0xac,0x4a,0xa8,0x5b,0xe9,0x5d)
#endif
#else
typedef struct IMFSinkClassFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSinkClassFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSinkClassFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSinkClassFactory *This);

    /*** IMFSinkClassFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateMediaSink)(
        IMFSinkClassFactory *This,
        IMFByteStream *stream,
        IMFMediaType *video_type,
        IMFMediaType *audio_type,
        IMFMediaSink **sink);

    END_INTERFACE
} IMFSinkClassFactoryVtbl;

interface IMFSinkClassFactory {
    CONST_VTBL IMFSinkClassFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFSinkClassFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFSinkClassFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFSinkClassFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IMFSinkClassFactory methods ***/
#define IMFSinkClassFactory_CreateMediaSink(This,stream,video_type,audio_type,sink) (This)->lpVtbl->CreateMediaSink(This,stream,video_type,audio_type,sink)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMFSinkClassFactory_QueryInterface(IMFSinkClassFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMFSinkClassFactory_AddRef(IMFSinkClassFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMFSinkClassFactory_Release(IMFSinkClassFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFSinkClassFactory methods ***/
static __WIDL_INLINE HRESULT IMFSinkClassFactory_CreateMediaSink(IMFSinkClassFactory* This,IMFByteStream *stream,IMFMediaType *video_type,IMFMediaType *audio_type,IMFMediaSink **sink) {
    return This->lpVtbl->CreateMediaSink(This,stream,video_type,audio_type,sink);
}
#endif
#endif

#endif


#endif  /* __IMFSinkClassFactory_INTERFACE_DEFINED__ */

DEFINE_GUID(CLSID_MF3GPSinkClassFactory, 0xe54cdfaf, 0x2381, 0x4cad, 0xab, 0x99, 0xf3, 0x85, 0x17, 0x12, 0x7d, 0x5c);
DEFINE_GUID(CLSID_MFAC3SinkClassFactory, 0x255a6fda, 0x6f93, 0x4e8a, 0x96, 0x11, 0xde, 0xd1, 0x16, 0x9e, 0xef, 0xb4);
DEFINE_GUID(CLSID_MFADTSSinkClassFactory, 0xd7ca55ab, 0x5022, 0x4db3, 0xa5, 0x99, 0xab, 0xaf, 0xa3, 0x58, 0xe6, 0xf3);
DEFINE_GUID(CLSID_MFAVISinkClassFactory, 0xaf4b1274, 0xb78a, 0x4979, 0xae, 0xf5, 0x20, 0xe7, 0x8f, 0xee, 0x10, 0x2e);
DEFINE_GUID(CLSID_MFFMPEG4SinkClassFactory, 0x60f9f51e, 0x4613, 0x4b35, 0xae, 0x88, 0x33, 0x25, 0x42, 0xb5, 0x67, 0xb8);
DEFINE_GUID(CLSID_MFMP3SinkClassFactory, 0x11275a82, 0x5e5a, 0x47fd, 0xa0, 0x1c, 0x36, 0x83, 0xc1, 0x2f, 0xb1, 0x96);
DEFINE_GUID(CLSID_MFMPEG4SinkClassFactory, 0xa22c4fc7, 0x6e91, 0x4e1d, 0x89, 0xe9, 0x53, 0xb2, 0x66, 0x7b, 0x72, 0xba);
DEFINE_GUID(CLSID_MFWAVESinkClassFactory, 0x36f99745, 0x23c9, 0x4c9c, 0x8d, 0xd5, 0xcc, 0x31, 0xce, 0x96, 0x43, 0x90);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mfinternal_h__ */