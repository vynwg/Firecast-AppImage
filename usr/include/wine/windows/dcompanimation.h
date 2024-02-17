/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/dcompanimation.idl - Do not edit ***/

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

#ifndef __dcompanimation_h__
#define __dcompanimation_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IDCompositionAnimation_FWD_DEFINED__
#define __IDCompositionAnimation_FWD_DEFINED__
typedef interface IDCompositionAnimation IDCompositionAnimation;
#ifdef __cplusplus
interface IDCompositionAnimation;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypes.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IDCompositionAnimation interface
 */
#ifndef __IDCompositionAnimation_INTERFACE_DEFINED__
#define __IDCompositionAnimation_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDCompositionAnimation, 0xcbfd91d9, 0x51b2, 0x45e4, 0xb3,0xde, 0xd1,0x9c,0xcf,0xb8,0x63,0xc5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cbfd91d9-51b2-45e4-b3de-d19ccfb863c5")
IDCompositionAnimation : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAbsoluteBeginTime(
        LARGE_INTEGER time) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddCubic(
        double offset,
        float constant_coefficient,
        float linear_coefficient,
        float quadratic_coefficient,
        float cubic_coefficient) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddSinusoidal(
        double offset,
        float bias,
        float amplitude,
        float frequency,
        float phase) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddRepeat(
        double offset,
        double duration) = 0;

    virtual HRESULT STDMETHODCALLTYPE End(
        double offset,
        float value) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDCompositionAnimation, 0xcbfd91d9, 0x51b2, 0x45e4, 0xb3,0xde, 0xd1,0x9c,0xcf,0xb8,0x63,0xc5)
#endif
#else
typedef struct IDCompositionAnimationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDCompositionAnimation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDCompositionAnimation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDCompositionAnimation *This);

    /*** IDCompositionAnimation methods ***/
    HRESULT (STDMETHODCALLTYPE *Reset)(
        IDCompositionAnimation *This);

    HRESULT (STDMETHODCALLTYPE *SetAbsoluteBeginTime)(
        IDCompositionAnimation *This,
        LARGE_INTEGER time);

    HRESULT (STDMETHODCALLTYPE *AddCubic)(
        IDCompositionAnimation *This,
        double offset,
        float constant_coefficient,
        float linear_coefficient,
        float quadratic_coefficient,
        float cubic_coefficient);

    HRESULT (STDMETHODCALLTYPE *AddSinusoidal)(
        IDCompositionAnimation *This,
        double offset,
        float bias,
        float amplitude,
        float frequency,
        float phase);

    HRESULT (STDMETHODCALLTYPE *AddRepeat)(
        IDCompositionAnimation *This,
        double offset,
        double duration);

    HRESULT (STDMETHODCALLTYPE *End)(
        IDCompositionAnimation *This,
        double offset,
        float value);

    END_INTERFACE
} IDCompositionAnimationVtbl;

interface IDCompositionAnimation {
    CONST_VTBL IDCompositionAnimationVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDCompositionAnimation_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDCompositionAnimation_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDCompositionAnimation_Release(This) (This)->lpVtbl->Release(This)
/*** IDCompositionAnimation methods ***/
#define IDCompositionAnimation_Reset(This) (This)->lpVtbl->Reset(This)
#define IDCompositionAnimation_SetAbsoluteBeginTime(This,time) (This)->lpVtbl->SetAbsoluteBeginTime(This,time)
#define IDCompositionAnimation_AddCubic(This,offset,constant_coefficient,linear_coefficient,quadratic_coefficient,cubic_coefficient) (This)->lpVtbl->AddCubic(This,offset,constant_coefficient,linear_coefficient,quadratic_coefficient,cubic_coefficient)
#define IDCompositionAnimation_AddSinusoidal(This,offset,bias,amplitude,frequency,phase) (This)->lpVtbl->AddSinusoidal(This,offset,bias,amplitude,frequency,phase)
#define IDCompositionAnimation_AddRepeat(This,offset,duration) (This)->lpVtbl->AddRepeat(This,offset,duration)
#define IDCompositionAnimation_End(This,offset,value) (This)->lpVtbl->End(This,offset,value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IDCompositionAnimation_QueryInterface(IDCompositionAnimation* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IDCompositionAnimation_AddRef(IDCompositionAnimation* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IDCompositionAnimation_Release(IDCompositionAnimation* This) {
    return This->lpVtbl->Release(This);
}
/*** IDCompositionAnimation methods ***/
static __WIDL_INLINE HRESULT IDCompositionAnimation_Reset(IDCompositionAnimation* This) {
    return This->lpVtbl->Reset(This);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_SetAbsoluteBeginTime(IDCompositionAnimation* This,LARGE_INTEGER time) {
    return This->lpVtbl->SetAbsoluteBeginTime(This,time);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_AddCubic(IDCompositionAnimation* This,double offset,float constant_coefficient,float linear_coefficient,float quadratic_coefficient,float cubic_coefficient) {
    return This->lpVtbl->AddCubic(This,offset,constant_coefficient,linear_coefficient,quadratic_coefficient,cubic_coefficient);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_AddSinusoidal(IDCompositionAnimation* This,double offset,float bias,float amplitude,float frequency,float phase) {
    return This->lpVtbl->AddSinusoidal(This,offset,bias,amplitude,frequency,phase);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_AddRepeat(IDCompositionAnimation* This,double offset,double duration) {
    return This->lpVtbl->AddRepeat(This,offset,duration);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_End(IDCompositionAnimation* This,double offset,float value) {
    return This->lpVtbl->End(This,offset,value);
}
#endif
#endif

#endif


#endif  /* __IDCompositionAnimation_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dcompanimation_h__ */
