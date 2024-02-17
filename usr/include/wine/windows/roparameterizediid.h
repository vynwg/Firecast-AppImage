/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/roparameterizediid.idl - Do not edit ***/

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

#ifndef __roparameterizediid_h__
#define __roparameterizediid_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IRoSimpleMetaDataBuilder_FWD_DEFINED__
#define __IRoSimpleMetaDataBuilder_FWD_DEFINED__
typedef interface IRoSimpleMetaDataBuilder IRoSimpleMetaDataBuilder;
#ifdef __cplusplus
interface IRoSimpleMetaDataBuilder;
#endif /* __cplusplus */
#endif

#ifndef __IRoMetaDataLocator_FWD_DEFINED__
#define __IRoMetaDataLocator_FWD_DEFINED__
typedef interface IRoMetaDataLocator IRoMetaDataLocator;
#ifdef __cplusplus
interface IRoMetaDataLocator;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void *ROPARAMIIDHANDLE;
/*****************************************************************************
 * IRoSimpleMetaDataBuilder interface
 */
#ifndef __IRoSimpleMetaDataBuilder_INTERFACE_DEFINED__
#define __IRoSimpleMetaDataBuilder_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
interface IRoSimpleMetaDataBuilder
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE SetWinRtInterface(
        GUID iid) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDelegate(
        GUID iid) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInterfaceGroupSimpleDefault(
        const WCHAR *typename,
        const WCHAR *default_name,
        const GUID *default_iid) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInterfaceGroupParameterizedDefault(
        const WCHAR *typename,
        UINT32 name_element_count,
        const WCHAR **name_elements) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRuntimeClassSimpleDefault(
        const WCHAR *typename,
        const WCHAR *default_name,
        const GUID *default_iid) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRuntimeClassParameterizedDefault(
        const WCHAR *typename,
        UINT32 name_element_count,
        const WCHAR **name_elements) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStruct(
        const WCHAR *typename,
        UINT32 field_count,
        const WCHAR **field_typenames) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEnum(
        const WCHAR *typename,
        const WCHAR *base_type) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetParameterizedInterface(
        GUID iid,
        UINT32 arg_count) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetParameterizedDelegate(
        GUID iid,
        UINT32 arg_count) = 0;

    END_INTERFACE

};
#else
typedef struct IRoSimpleMetaDataBuilderVtbl {
    BEGIN_INTERFACE

    /*** IRoSimpleMetaDataBuilder methods ***/
    HRESULT (STDMETHODCALLTYPE *SetWinRtInterface)(
        IRoSimpleMetaDataBuilder *This,
        GUID iid);

    HRESULT (STDMETHODCALLTYPE *SetDelegate)(
        IRoSimpleMetaDataBuilder *This,
        GUID iid);

    HRESULT (STDMETHODCALLTYPE *SetInterfaceGroupSimpleDefault)(
        IRoSimpleMetaDataBuilder *This,
        const WCHAR *typename,
        const WCHAR *default_name,
        const GUID *default_iid);

    HRESULT (STDMETHODCALLTYPE *SetInterfaceGroupParameterizedDefault)(
        IRoSimpleMetaDataBuilder *This,
        const WCHAR *typename,
        UINT32 name_element_count,
        const WCHAR **name_elements);

    HRESULT (STDMETHODCALLTYPE *SetRuntimeClassSimpleDefault)(
        IRoSimpleMetaDataBuilder *This,
        const WCHAR *typename,
        const WCHAR *default_name,
        const GUID *default_iid);

    HRESULT (STDMETHODCALLTYPE *SetRuntimeClassParameterizedDefault)(
        IRoSimpleMetaDataBuilder *This,
        const WCHAR *typename,
        UINT32 name_element_count,
        const WCHAR **name_elements);

    HRESULT (STDMETHODCALLTYPE *SetStruct)(
        IRoSimpleMetaDataBuilder *This,
        const WCHAR *typename,
        UINT32 field_count,
        const WCHAR **field_typenames);

    HRESULT (STDMETHODCALLTYPE *SetEnum)(
        IRoSimpleMetaDataBuilder *This,
        const WCHAR *typename,
        const WCHAR *base_type);

    HRESULT (STDMETHODCALLTYPE *SetParameterizedInterface)(
        IRoSimpleMetaDataBuilder *This,
        GUID iid,
        UINT32 arg_count);

    HRESULT (STDMETHODCALLTYPE *SetParameterizedDelegate)(
        IRoSimpleMetaDataBuilder *This,
        GUID iid,
        UINT32 arg_count);

    END_INTERFACE
} IRoSimpleMetaDataBuilderVtbl;

interface IRoSimpleMetaDataBuilder {
    CONST_VTBL IRoSimpleMetaDataBuilderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IRoSimpleMetaDataBuilder methods ***/
#define IRoSimpleMetaDataBuilder_SetWinRtInterface(This,iid) (This)->lpVtbl->SetWinRtInterface(This,iid)
#define IRoSimpleMetaDataBuilder_SetDelegate(This,iid) (This)->lpVtbl->SetDelegate(This,iid)
#define IRoSimpleMetaDataBuilder_SetInterfaceGroupSimpleDefault(This,typename,default_name,default_iid) (This)->lpVtbl->SetInterfaceGroupSimpleDefault(This,typename,default_name,default_iid)
#define IRoSimpleMetaDataBuilder_SetInterfaceGroupParameterizedDefault(This,typename,name_element_count,name_elements) (This)->lpVtbl->SetInterfaceGroupParameterizedDefault(This,typename,name_element_count,name_elements)
#define IRoSimpleMetaDataBuilder_SetRuntimeClassSimpleDefault(This,typename,default_name,default_iid) (This)->lpVtbl->SetRuntimeClassSimpleDefault(This,typename,default_name,default_iid)
#define IRoSimpleMetaDataBuilder_SetRuntimeClassParameterizedDefault(This,typename,name_element_count,name_elements) (This)->lpVtbl->SetRuntimeClassParameterizedDefault(This,typename,name_element_count,name_elements)
#define IRoSimpleMetaDataBuilder_SetStruct(This,typename,field_count,field_typenames) (This)->lpVtbl->SetStruct(This,typename,field_count,field_typenames)
#define IRoSimpleMetaDataBuilder_SetEnum(This,typename,base_type) (This)->lpVtbl->SetEnum(This,typename,base_type)
#define IRoSimpleMetaDataBuilder_SetParameterizedInterface(This,iid,arg_count) (This)->lpVtbl->SetParameterizedInterface(This,iid,arg_count)
#define IRoSimpleMetaDataBuilder_SetParameterizedDelegate(This,iid,arg_count) (This)->lpVtbl->SetParameterizedDelegate(This,iid,arg_count)
#else
/*** IRoSimpleMetaDataBuilder methods ***/
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetWinRtInterface(IRoSimpleMetaDataBuilder* This,GUID iid) {
    return This->lpVtbl->SetWinRtInterface(This,iid);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetDelegate(IRoSimpleMetaDataBuilder* This,GUID iid) {
    return This->lpVtbl->SetDelegate(This,iid);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetInterfaceGroupSimpleDefault(IRoSimpleMetaDataBuilder* This,const WCHAR *typename,const WCHAR *default_name,const GUID *default_iid) {
    return This->lpVtbl->SetInterfaceGroupSimpleDefault(This,typename,default_name,default_iid);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetInterfaceGroupParameterizedDefault(IRoSimpleMetaDataBuilder* This,const WCHAR *typename,UINT32 name_element_count,const WCHAR **name_elements) {
    return This->lpVtbl->SetInterfaceGroupParameterizedDefault(This,typename,name_element_count,name_elements);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetRuntimeClassSimpleDefault(IRoSimpleMetaDataBuilder* This,const WCHAR *typename,const WCHAR *default_name,const GUID *default_iid) {
    return This->lpVtbl->SetRuntimeClassSimpleDefault(This,typename,default_name,default_iid);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetRuntimeClassParameterizedDefault(IRoSimpleMetaDataBuilder* This,const WCHAR *typename,UINT32 name_element_count,const WCHAR **name_elements) {
    return This->lpVtbl->SetRuntimeClassParameterizedDefault(This,typename,name_element_count,name_elements);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetStruct(IRoSimpleMetaDataBuilder* This,const WCHAR *typename,UINT32 field_count,const WCHAR **field_typenames) {
    return This->lpVtbl->SetStruct(This,typename,field_count,field_typenames);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetEnum(IRoSimpleMetaDataBuilder* This,const WCHAR *typename,const WCHAR *base_type) {
    return This->lpVtbl->SetEnum(This,typename,base_type);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetParameterizedInterface(IRoSimpleMetaDataBuilder* This,GUID iid,UINT32 arg_count) {
    return This->lpVtbl->SetParameterizedInterface(This,iid,arg_count);
}
static __WIDL_INLINE HRESULT IRoSimpleMetaDataBuilder_SetParameterizedDelegate(IRoSimpleMetaDataBuilder* This,GUID iid,UINT32 arg_count) {
    return This->lpVtbl->SetParameterizedDelegate(This,iid,arg_count);
}
#endif
#endif

#endif

#endif  /* __IRoSimpleMetaDataBuilder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRoMetaDataLocator interface
 */
#ifndef __IRoMetaDataLocator_INTERFACE_DEFINED__
#define __IRoMetaDataLocator_INTERFACE_DEFINED__

#if defined(__cplusplus) && !defined(CINTERFACE)
interface IRoMetaDataLocator
{

    BEGIN_INTERFACE

    virtual HRESULT STDMETHODCALLTYPE Locate(
        const WCHAR *typename,
        IRoSimpleMetaDataBuilder *out) = 0;

    END_INTERFACE

};
#else
typedef struct IRoMetaDataLocatorVtbl {
    BEGIN_INTERFACE

    /*** IRoMetaDataLocator methods ***/
    HRESULT (STDMETHODCALLTYPE *Locate)(
        IRoMetaDataLocator *This,
        const WCHAR *typename,
        IRoSimpleMetaDataBuilder *out);

    END_INTERFACE
} IRoMetaDataLocatorVtbl;

interface IRoMetaDataLocator {
    CONST_VTBL IRoMetaDataLocatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IRoMetaDataLocator methods ***/
#define IRoMetaDataLocator_Locate(This,typename,out) (This)->lpVtbl->Locate(This,typename,out)
#else
/*** IRoMetaDataLocator methods ***/
static __WIDL_INLINE HRESULT IRoMetaDataLocator_Locate(IRoMetaDataLocator* This,const WCHAR *typename,IRoSimpleMetaDataBuilder *out) {
    return This->lpVtbl->Locate(This,typename,out);
}
#endif
#endif

#endif

#endif  /* __IRoMetaDataLocator_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __roparameterizediid_h__ */
