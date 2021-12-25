/*** Autogenerated by WIDL 7.0-rc2 from include/spatialaudioclient.idl - Do not edit ***/

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

#ifndef __spatialaudioclient_h__
#define __spatialaudioclient_h__

/* Forward declarations */

#ifndef __ISpatialAudioObjectRenderStreamNotify_FWD_DEFINED__
#define __ISpatialAudioObjectRenderStreamNotify_FWD_DEFINED__
typedef interface ISpatialAudioObjectRenderStreamNotify ISpatialAudioObjectRenderStreamNotify;
#ifdef __cplusplus
interface ISpatialAudioObjectRenderStreamNotify;
#endif /* __cplusplus */
#endif

#ifndef __IAudioFormatEnumerator_FWD_DEFINED__
#define __IAudioFormatEnumerator_FWD_DEFINED__
typedef interface IAudioFormatEnumerator IAudioFormatEnumerator;
#ifdef __cplusplus
interface IAudioFormatEnumerator;
#endif /* __cplusplus */
#endif

#ifndef __ISpatialAudioClient_FWD_DEFINED__
#define __ISpatialAudioClient_FWD_DEFINED__
typedef interface ISpatialAudioClient ISpatialAudioClient;
#ifdef __cplusplus
interface ISpatialAudioClient;
#endif /* __cplusplus */
#endif

#ifndef __ISpatialAudioObjectBase_FWD_DEFINED__
#define __ISpatialAudioObjectBase_FWD_DEFINED__
typedef interface ISpatialAudioObjectBase ISpatialAudioObjectBase;
#ifdef __cplusplus
interface ISpatialAudioObjectBase;
#endif /* __cplusplus */
#endif

#ifndef __ISpatialAudioObject_FWD_DEFINED__
#define __ISpatialAudioObject_FWD_DEFINED__
typedef interface ISpatialAudioObject ISpatialAudioObject;
#ifdef __cplusplus
interface ISpatialAudioObject;
#endif /* __cplusplus */
#endif

#ifndef __ISpatialAudioObjectRenderStreamBase_FWD_DEFINED__
#define __ISpatialAudioObjectRenderStreamBase_FWD_DEFINED__
typedef interface ISpatialAudioObjectRenderStreamBase ISpatialAudioObjectRenderStreamBase;
#ifdef __cplusplus
interface ISpatialAudioObjectRenderStreamBase;
#endif /* __cplusplus */
#endif

#ifndef __ISpatialAudioObjectRenderStream_FWD_DEFINED__
#define __ISpatialAudioObjectRenderStream_FWD_DEFINED__
typedef interface ISpatialAudioObjectRenderStream ISpatialAudioObjectRenderStream;
#ifdef __cplusplus
interface ISpatialAudioObjectRenderStream;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <audioclient.h>
#include <propsys.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum AudioObjectType {
    AudioObjectType_None = 0,
    AudioObjectType_Dynamic = 0x1,
    AudioObjectType_FrontLeft = 0x2,
    AudioObjectType_FrontRight = 0x4,
    AudioObjectType_FrontCenter = 0x8,
    AudioObjectType_LowFrequency = 0x10,
    AudioObjectType_SideLeft = 0x20,
    AudioObjectType_SideRight = 0x40,
    AudioObjectType_BackLeft = 0x80,
    AudioObjectType_BackRight = 0x100,
    AudioObjectType_TopFrontLeft = 0x200,
    AudioObjectType_TopFrontRight = 0x400,
    AudioObjectType_TopBackLeft = 0x800,
    AudioObjectType_TopBackRight = 0x1000,
    AudioObjectType_BottomFrontLeft = 0x2000,
    AudioObjectType_BottomFrontRight = 0x4000,
    AudioObjectType_BottomBackLeft = 0x8000,
    AudioObjectType_BottomBackRight = 0x10000,
    AudioObjectType_BackCenter = 0x20000
} AudioObjectType;
#define SPTLAUDCLNT_E_DESTROYED                     AUDCLNT_ERR(0x100)
#define SPTLAUDCLNT_E_OUT_OF_ORDER                  AUDCLNT_ERR(0x101)
#define SPTLAUDCLNT_E_RESOURCES_INVALIDATED         AUDCLNT_ERR(0x102)
#define SPTLAUDCLNT_E_NO_MORE_OBJECTS               AUDCLNT_ERR(0x103)
#define SPTLAUDCLNT_E_PROPERTY_NOT_SUPPORTED        AUDCLNT_ERR(0x104)
#define SPTLAUDCLNT_E_ERRORS_IN_OBJECT_CALLS        AUDCLNT_ERR(0x105)
#define SPTLAUDCLNT_E_METADATA_FORMAT_NOT_SUPPORTED AUDCLNT_ERR(0x106)
#define SPTLAUDCLNT_E_STREAM_NOT_AVAILABLE          AUDCLNT_ERR(0x107)
#define SPTLAUDCLNT_E_INVALID_LICENSE               AUDCLNT_ERR(0x108)
#define SPTLAUDCLNT_E_STREAM_NOT_STOPPED            AUDCLNT_ERR(0x10a)
#define SPTLAUDCLNT_E_STATIC_OBJECT_NOT_AVAILABLE   AUDCLNT_ERR(0x10b)
#define SPTLAUDCLNT_E_OBJECT_ALREADY_ACTIVE         AUDCLNT_ERR(0x10c)
#define SPTLAUDCLNT_E_INTERNAL                      AUDCLNT_ERR(0x10d)
#ifndef __ISpatialAudioObjectRenderStreamBase_FWD_DEFINED__
#define __ISpatialAudioObjectRenderStreamBase_FWD_DEFINED__
typedef interface ISpatialAudioObjectRenderStreamBase ISpatialAudioObjectRenderStreamBase;
#ifdef __cplusplus
interface ISpatialAudioObjectRenderStreamBase;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * ISpatialAudioObjectRenderStreamNotify interface
 */
#ifndef __ISpatialAudioObjectRenderStreamNotify_INTERFACE_DEFINED__
#define __ISpatialAudioObjectRenderStreamNotify_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialAudioObjectRenderStreamNotify, 0xdddf83e6, 0x68d7, 0x4c70, 0x88,0x3f, 0xa1,0x83,0x6a,0xfb,0x4a,0x50);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("dddf83e6-68d7-4c70-883f-a1836afb4a50")
ISpatialAudioObjectRenderStreamNotify : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnAvailableDynamicObjectCountChange(
        ISpatialAudioObjectRenderStreamBase *stream,
        LONGLONG deadline,
        UINT32 object_count) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialAudioObjectRenderStreamNotify, 0xdddf83e6, 0x68d7, 0x4c70, 0x88,0x3f, 0xa1,0x83,0x6a,0xfb,0x4a,0x50)
#endif
#else
typedef struct ISpatialAudioObjectRenderStreamNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialAudioObjectRenderStreamNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialAudioObjectRenderStreamNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialAudioObjectRenderStreamNotify *This);

    /*** ISpatialAudioObjectRenderStreamNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *OnAvailableDynamicObjectCountChange)(
        ISpatialAudioObjectRenderStreamNotify *This,
        ISpatialAudioObjectRenderStreamBase *stream,
        LONGLONG deadline,
        UINT32 object_count);

    END_INTERFACE
} ISpatialAudioObjectRenderStreamNotifyVtbl;

interface ISpatialAudioObjectRenderStreamNotify {
    CONST_VTBL ISpatialAudioObjectRenderStreamNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialAudioObjectRenderStreamNotify_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialAudioObjectRenderStreamNotify_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialAudioObjectRenderStreamNotify_Release(This) (This)->lpVtbl->Release(This)
/*** ISpatialAudioObjectRenderStreamNotify methods ***/
#define ISpatialAudioObjectRenderStreamNotify_OnAvailableDynamicObjectCountChange(This,stream,deadline,object_count) (This)->lpVtbl->OnAvailableDynamicObjectCountChange(This,stream,deadline,object_count)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamNotify_QueryInterface(ISpatialAudioObjectRenderStreamNotify* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialAudioObjectRenderStreamNotify_AddRef(ISpatialAudioObjectRenderStreamNotify* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialAudioObjectRenderStreamNotify_Release(ISpatialAudioObjectRenderStreamNotify* This) {
    return This->lpVtbl->Release(This);
}
/*** ISpatialAudioObjectRenderStreamNotify methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamNotify_OnAvailableDynamicObjectCountChange(ISpatialAudioObjectRenderStreamNotify* This,ISpatialAudioObjectRenderStreamBase *stream,LONGLONG deadline,UINT32 object_count) {
    return This->lpVtbl->OnAvailableDynamicObjectCountChange(This,stream,deadline,object_count);
}
#endif
#endif

#endif


#endif  /* __ISpatialAudioObjectRenderStreamNotify_INTERFACE_DEFINED__ */

typedef struct tagSpatialAudioObjectRenderStreamActivationParams {
    const WAVEFORMATEX *ObjectFormat;
    AudioObjectType StaticObjectTypeMask;
    UINT32 MinDynamicObjectCount;
    UINT32 MaxDynamicObjectCount;
    AUDIO_STREAM_CATEGORY Category;
    HANDLE EventHandle;
    ISpatialAudioObjectRenderStreamNotify *NotifyObject;
} SpatialAudioObjectRenderStreamActivationParams;
/*****************************************************************************
 * IAudioFormatEnumerator interface
 */
#ifndef __IAudioFormatEnumerator_INTERFACE_DEFINED__
#define __IAudioFormatEnumerator_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAudioFormatEnumerator, 0xdcdaa858, 0x895a, 0x4a22, 0xa5,0xeb, 0x67,0xbd,0xa5,0x06,0x09,0x6d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("dcdaa858-895a-4a22-a5eb-67bda506096d")
IAudioFormatEnumerator : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCount(
        UINT32 *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFormat(
        UINT32 index,
        WAVEFORMATEX **format) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAudioFormatEnumerator, 0xdcdaa858, 0x895a, 0x4a22, 0xa5,0xeb, 0x67,0xbd,0xa5,0x06,0x09,0x6d)
#endif
#else
typedef struct IAudioFormatEnumeratorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAudioFormatEnumerator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAudioFormatEnumerator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAudioFormatEnumerator *This);

    /*** IAudioFormatEnumerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IAudioFormatEnumerator *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        IAudioFormatEnumerator *This,
        UINT32 index,
        WAVEFORMATEX **format);

    END_INTERFACE
} IAudioFormatEnumeratorVtbl;

interface IAudioFormatEnumerator {
    CONST_VTBL IAudioFormatEnumeratorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAudioFormatEnumerator_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioFormatEnumerator_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioFormatEnumerator_Release(This) (This)->lpVtbl->Release(This)
/*** IAudioFormatEnumerator methods ***/
#define IAudioFormatEnumerator_GetCount(This,count) (This)->lpVtbl->GetCount(This,count)
#define IAudioFormatEnumerator_GetFormat(This,index,format) (This)->lpVtbl->GetFormat(This,index,format)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAudioFormatEnumerator_QueryInterface(IAudioFormatEnumerator* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAudioFormatEnumerator_AddRef(IAudioFormatEnumerator* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAudioFormatEnumerator_Release(IAudioFormatEnumerator* This) {
    return This->lpVtbl->Release(This);
}
/*** IAudioFormatEnumerator methods ***/
static FORCEINLINE HRESULT IAudioFormatEnumerator_GetCount(IAudioFormatEnumerator* This,UINT32 *count) {
    return This->lpVtbl->GetCount(This,count);
}
static FORCEINLINE HRESULT IAudioFormatEnumerator_GetFormat(IAudioFormatEnumerator* This,UINT32 index,WAVEFORMATEX **format) {
    return This->lpVtbl->GetFormat(This,index,format);
}
#endif
#endif

#endif


#endif  /* __IAudioFormatEnumerator_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpatialAudioClient interface
 */
#ifndef __ISpatialAudioClient_INTERFACE_DEFINED__
#define __ISpatialAudioClient_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialAudioClient, 0xbbf8e066, 0xaaaa, 0x49be, 0x9a,0x4d, 0xfd,0x2a,0x85,0x8e,0xa2,0x7f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bbf8e066-aaaa-49be-9a4d-fd2a858ea27f")
ISpatialAudioClient : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetStaticObjectPosition(
        AudioObjectType type,
        float *x,
        float *y,
        float *z) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNativeStaticObjectTypeMask(
        AudioObjectType *mask) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxDynamicObjectCount(
        UINT32 *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSupportedAudioObjectFormatEnumerator(
        IAudioFormatEnumerator **enumerator) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxFrameCount(
        const WAVEFORMATEX *format,
        UINT32 *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsAudioObjectFormatSupported(
        const WAVEFORMATEX *format) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsSpatialAudioStreamAvailable(
        REFIID stream_uuid,
        const PROPVARIANT *info) = 0;

    virtual HRESULT STDMETHODCALLTYPE ActivateSpatialAudioStream(
        const PROPVARIANT *params,
        REFIID riid,
        void **stream) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialAudioClient, 0xbbf8e066, 0xaaaa, 0x49be, 0x9a,0x4d, 0xfd,0x2a,0x85,0x8e,0xa2,0x7f)
#endif
#else
typedef struct ISpatialAudioClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialAudioClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialAudioClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialAudioClient *This);

    /*** ISpatialAudioClient methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStaticObjectPosition)(
        ISpatialAudioClient *This,
        AudioObjectType type,
        float *x,
        float *y,
        float *z);

    HRESULT (STDMETHODCALLTYPE *GetNativeStaticObjectTypeMask)(
        ISpatialAudioClient *This,
        AudioObjectType *mask);

    HRESULT (STDMETHODCALLTYPE *GetMaxDynamicObjectCount)(
        ISpatialAudioClient *This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *GetSupportedAudioObjectFormatEnumerator)(
        ISpatialAudioClient *This,
        IAudioFormatEnumerator **enumerator);

    HRESULT (STDMETHODCALLTYPE *GetMaxFrameCount)(
        ISpatialAudioClient *This,
        const WAVEFORMATEX *format,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *IsAudioObjectFormatSupported)(
        ISpatialAudioClient *This,
        const WAVEFORMATEX *format);

    HRESULT (STDMETHODCALLTYPE *IsSpatialAudioStreamAvailable)(
        ISpatialAudioClient *This,
        REFIID stream_uuid,
        const PROPVARIANT *info);

    HRESULT (STDMETHODCALLTYPE *ActivateSpatialAudioStream)(
        ISpatialAudioClient *This,
        const PROPVARIANT *params,
        REFIID riid,
        void **stream);

    END_INTERFACE
} ISpatialAudioClientVtbl;

interface ISpatialAudioClient {
    CONST_VTBL ISpatialAudioClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialAudioClient_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialAudioClient_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialAudioClient_Release(This) (This)->lpVtbl->Release(This)
/*** ISpatialAudioClient methods ***/
#define ISpatialAudioClient_GetStaticObjectPosition(This,type,x,y,z) (This)->lpVtbl->GetStaticObjectPosition(This,type,x,y,z)
#define ISpatialAudioClient_GetNativeStaticObjectTypeMask(This,mask) (This)->lpVtbl->GetNativeStaticObjectTypeMask(This,mask)
#define ISpatialAudioClient_GetMaxDynamicObjectCount(This,value) (This)->lpVtbl->GetMaxDynamicObjectCount(This,value)
#define ISpatialAudioClient_GetSupportedAudioObjectFormatEnumerator(This,enumerator) (This)->lpVtbl->GetSupportedAudioObjectFormatEnumerator(This,enumerator)
#define ISpatialAudioClient_GetMaxFrameCount(This,format,count) (This)->lpVtbl->GetMaxFrameCount(This,format,count)
#define ISpatialAudioClient_IsAudioObjectFormatSupported(This,format) (This)->lpVtbl->IsAudioObjectFormatSupported(This,format)
#define ISpatialAudioClient_IsSpatialAudioStreamAvailable(This,stream_uuid,info) (This)->lpVtbl->IsSpatialAudioStreamAvailable(This,stream_uuid,info)
#define ISpatialAudioClient_ActivateSpatialAudioStream(This,params,riid,stream) (This)->lpVtbl->ActivateSpatialAudioStream(This,params,riid,stream)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialAudioClient_QueryInterface(ISpatialAudioClient* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialAudioClient_AddRef(ISpatialAudioClient* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialAudioClient_Release(ISpatialAudioClient* This) {
    return This->lpVtbl->Release(This);
}
/*** ISpatialAudioClient methods ***/
static FORCEINLINE HRESULT ISpatialAudioClient_GetStaticObjectPosition(ISpatialAudioClient* This,AudioObjectType type,float *x,float *y,float *z) {
    return This->lpVtbl->GetStaticObjectPosition(This,type,x,y,z);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetNativeStaticObjectTypeMask(ISpatialAudioClient* This,AudioObjectType *mask) {
    return This->lpVtbl->GetNativeStaticObjectTypeMask(This,mask);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetMaxDynamicObjectCount(ISpatialAudioClient* This,UINT32 *value) {
    return This->lpVtbl->GetMaxDynamicObjectCount(This,value);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetSupportedAudioObjectFormatEnumerator(ISpatialAudioClient* This,IAudioFormatEnumerator **enumerator) {
    return This->lpVtbl->GetSupportedAudioObjectFormatEnumerator(This,enumerator);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetMaxFrameCount(ISpatialAudioClient* This,const WAVEFORMATEX *format,UINT32 *count) {
    return This->lpVtbl->GetMaxFrameCount(This,format,count);
}
static FORCEINLINE HRESULT ISpatialAudioClient_IsAudioObjectFormatSupported(ISpatialAudioClient* This,const WAVEFORMATEX *format) {
    return This->lpVtbl->IsAudioObjectFormatSupported(This,format);
}
static FORCEINLINE HRESULT ISpatialAudioClient_IsSpatialAudioStreamAvailable(ISpatialAudioClient* This,REFIID stream_uuid,const PROPVARIANT *info) {
    return This->lpVtbl->IsSpatialAudioStreamAvailable(This,stream_uuid,info);
}
static FORCEINLINE HRESULT ISpatialAudioClient_ActivateSpatialAudioStream(ISpatialAudioClient* This,const PROPVARIANT *params,REFIID riid,void **stream) {
    return This->lpVtbl->ActivateSpatialAudioStream(This,params,riid,stream);
}
#endif
#endif

#endif


#endif  /* __ISpatialAudioClient_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpatialAudioObjectBase interface
 */
#ifndef __ISpatialAudioObjectBase_INTERFACE_DEFINED__
#define __ISpatialAudioObjectBase_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialAudioObjectBase, 0xcce0b8f2, 0x8d4d, 0x4efb, 0xa8,0xcf, 0x3d,0x6e,0xcf,0x1c,0x30,0xe0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cce0b8f2-8d4d-4efb-a8cf-3d6ecf1c30e0")
ISpatialAudioObjectBase : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetBuffer(
        BYTE **buffer,
        UINT32 *bytes) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetEndOfStream(
        UINT32 frames) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsActive(
        WINBOOL *active) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAudioObjectType(
        AudioObjectType *type) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialAudioObjectBase, 0xcce0b8f2, 0x8d4d, 0x4efb, 0xa8,0xcf, 0x3d,0x6e,0xcf,0x1c,0x30,0xe0)
#endif
#else
typedef struct ISpatialAudioObjectBaseVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialAudioObjectBase *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialAudioObjectBase *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialAudioObjectBase *This);

    /*** ISpatialAudioObjectBase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        ISpatialAudioObjectBase *This,
        BYTE **buffer,
        UINT32 *bytes);

    HRESULT (STDMETHODCALLTYPE *SetEndOfStream)(
        ISpatialAudioObjectBase *This,
        UINT32 frames);

    HRESULT (STDMETHODCALLTYPE *IsActive)(
        ISpatialAudioObjectBase *This,
        WINBOOL *active);

    HRESULT (STDMETHODCALLTYPE *GetAudioObjectType)(
        ISpatialAudioObjectBase *This,
        AudioObjectType *type);

    END_INTERFACE
} ISpatialAudioObjectBaseVtbl;

interface ISpatialAudioObjectBase {
    CONST_VTBL ISpatialAudioObjectBaseVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialAudioObjectBase_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialAudioObjectBase_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialAudioObjectBase_Release(This) (This)->lpVtbl->Release(This)
/*** ISpatialAudioObjectBase methods ***/
#define ISpatialAudioObjectBase_GetBuffer(This,buffer,bytes) (This)->lpVtbl->GetBuffer(This,buffer,bytes)
#define ISpatialAudioObjectBase_SetEndOfStream(This,frames) (This)->lpVtbl->SetEndOfStream(This,frames)
#define ISpatialAudioObjectBase_IsActive(This,active) (This)->lpVtbl->IsActive(This,active)
#define ISpatialAudioObjectBase_GetAudioObjectType(This,type) (This)->lpVtbl->GetAudioObjectType(This,type)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectBase_QueryInterface(ISpatialAudioObjectBase* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialAudioObjectBase_AddRef(ISpatialAudioObjectBase* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialAudioObjectBase_Release(ISpatialAudioObjectBase* This) {
    return This->lpVtbl->Release(This);
}
/*** ISpatialAudioObjectBase methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectBase_GetBuffer(ISpatialAudioObjectBase* This,BYTE **buffer,UINT32 *bytes) {
    return This->lpVtbl->GetBuffer(This,buffer,bytes);
}
static FORCEINLINE HRESULT ISpatialAudioObjectBase_SetEndOfStream(ISpatialAudioObjectBase* This,UINT32 frames) {
    return This->lpVtbl->SetEndOfStream(This,frames);
}
static FORCEINLINE HRESULT ISpatialAudioObjectBase_IsActive(ISpatialAudioObjectBase* This,WINBOOL *active) {
    return This->lpVtbl->IsActive(This,active);
}
static FORCEINLINE HRESULT ISpatialAudioObjectBase_GetAudioObjectType(ISpatialAudioObjectBase* This,AudioObjectType *type) {
    return This->lpVtbl->GetAudioObjectType(This,type);
}
#endif
#endif

#endif


#endif  /* __ISpatialAudioObjectBase_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpatialAudioObject interface
 */
#ifndef __ISpatialAudioObject_INTERFACE_DEFINED__
#define __ISpatialAudioObject_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialAudioObject, 0xdde28967, 0x521b, 0x46e5, 0x8f,0x00, 0xbd,0x6f,0x2b,0xc8,0xab,0x1d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("dde28967-521b-46e5-8f00-bd6f2bc8ab1d")
ISpatialAudioObject : public ISpatialAudioObjectBase
{
    virtual HRESULT STDMETHODCALLTYPE SetPosition(
        float x,
        float y,
        float z) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetVolume(
        float vol) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialAudioObject, 0xdde28967, 0x521b, 0x46e5, 0x8f,0x00, 0xbd,0x6f,0x2b,0xc8,0xab,0x1d)
#endif
#else
typedef struct ISpatialAudioObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialAudioObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialAudioObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialAudioObject *This);

    /*** ISpatialAudioObjectBase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        ISpatialAudioObject *This,
        BYTE **buffer,
        UINT32 *bytes);

    HRESULT (STDMETHODCALLTYPE *SetEndOfStream)(
        ISpatialAudioObject *This,
        UINT32 frames);

    HRESULT (STDMETHODCALLTYPE *IsActive)(
        ISpatialAudioObject *This,
        WINBOOL *active);

    HRESULT (STDMETHODCALLTYPE *GetAudioObjectType)(
        ISpatialAudioObject *This,
        AudioObjectType *type);

    /*** ISpatialAudioObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPosition)(
        ISpatialAudioObject *This,
        float x,
        float y,
        float z);

    HRESULT (STDMETHODCALLTYPE *SetVolume)(
        ISpatialAudioObject *This,
        float vol);

    END_INTERFACE
} ISpatialAudioObjectVtbl;

interface ISpatialAudioObject {
    CONST_VTBL ISpatialAudioObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialAudioObject_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialAudioObject_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialAudioObject_Release(This) (This)->lpVtbl->Release(This)
/*** ISpatialAudioObjectBase methods ***/
#define ISpatialAudioObject_GetBuffer(This,buffer,bytes) (This)->lpVtbl->GetBuffer(This,buffer,bytes)
#define ISpatialAudioObject_SetEndOfStream(This,frames) (This)->lpVtbl->SetEndOfStream(This,frames)
#define ISpatialAudioObject_IsActive(This,active) (This)->lpVtbl->IsActive(This,active)
#define ISpatialAudioObject_GetAudioObjectType(This,type) (This)->lpVtbl->GetAudioObjectType(This,type)
/*** ISpatialAudioObject methods ***/
#define ISpatialAudioObject_SetPosition(This,x,y,z) (This)->lpVtbl->SetPosition(This,x,y,z)
#define ISpatialAudioObject_SetVolume(This,vol) (This)->lpVtbl->SetVolume(This,vol)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialAudioObject_QueryInterface(ISpatialAudioObject* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialAudioObject_AddRef(ISpatialAudioObject* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialAudioObject_Release(ISpatialAudioObject* This) {
    return This->lpVtbl->Release(This);
}
/*** ISpatialAudioObjectBase methods ***/
static FORCEINLINE HRESULT ISpatialAudioObject_GetBuffer(ISpatialAudioObject* This,BYTE **buffer,UINT32 *bytes) {
    return This->lpVtbl->GetBuffer(This,buffer,bytes);
}
static FORCEINLINE HRESULT ISpatialAudioObject_SetEndOfStream(ISpatialAudioObject* This,UINT32 frames) {
    return This->lpVtbl->SetEndOfStream(This,frames);
}
static FORCEINLINE HRESULT ISpatialAudioObject_IsActive(ISpatialAudioObject* This,WINBOOL *active) {
    return This->lpVtbl->IsActive(This,active);
}
static FORCEINLINE HRESULT ISpatialAudioObject_GetAudioObjectType(ISpatialAudioObject* This,AudioObjectType *type) {
    return This->lpVtbl->GetAudioObjectType(This,type);
}
/*** ISpatialAudioObject methods ***/
static FORCEINLINE HRESULT ISpatialAudioObject_SetPosition(ISpatialAudioObject* This,float x,float y,float z) {
    return This->lpVtbl->SetPosition(This,x,y,z);
}
static FORCEINLINE HRESULT ISpatialAudioObject_SetVolume(ISpatialAudioObject* This,float vol) {
    return This->lpVtbl->SetVolume(This,vol);
}
#endif
#endif

#endif


#endif  /* __ISpatialAudioObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpatialAudioObjectRenderStreamBase interface
 */
#ifndef __ISpatialAudioObjectRenderStreamBase_INTERFACE_DEFINED__
#define __ISpatialAudioObjectRenderStreamBase_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialAudioObjectRenderStreamBase, 0xfeaaf403, 0xc1d8, 0x450d, 0xaa,0x05, 0xe0,0xcc,0xee,0x75,0x02,0xa8);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("feaaf403-c1d8-450d-aa05-e0ccee7502a8")
ISpatialAudioObjectRenderStreamBase : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetAvailableDynamicObjectCount(
        UINT32 *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetService(
        REFIID riid,
        void **service) = 0;

    virtual HRESULT STDMETHODCALLTYPE Start(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Stop(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE BeginUpdatingAudioObjects(
        UINT32 *count,
        UINT32 *frames) = 0;

    virtual HRESULT STDMETHODCALLTYPE EndUpdatingAudioObjects(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialAudioObjectRenderStreamBase, 0xfeaaf403, 0xc1d8, 0x450d, 0xaa,0x05, 0xe0,0xcc,0xee,0x75,0x02,0xa8)
#endif
#else
typedef struct ISpatialAudioObjectRenderStreamBaseVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialAudioObjectRenderStreamBase *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialAudioObjectRenderStreamBase *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialAudioObjectRenderStreamBase *This);

    /*** ISpatialAudioObjectRenderStreamBase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAvailableDynamicObjectCount)(
        ISpatialAudioObjectRenderStreamBase *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetService)(
        ISpatialAudioObjectRenderStreamBase *This,
        REFIID riid,
        void **service);

    HRESULT (STDMETHODCALLTYPE *Start)(
        ISpatialAudioObjectRenderStreamBase *This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        ISpatialAudioObjectRenderStreamBase *This);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        ISpatialAudioObjectRenderStreamBase *This);

    HRESULT (STDMETHODCALLTYPE *BeginUpdatingAudioObjects)(
        ISpatialAudioObjectRenderStreamBase *This,
        UINT32 *count,
        UINT32 *frames);

    HRESULT (STDMETHODCALLTYPE *EndUpdatingAudioObjects)(
        ISpatialAudioObjectRenderStreamBase *This);

    END_INTERFACE
} ISpatialAudioObjectRenderStreamBaseVtbl;

interface ISpatialAudioObjectRenderStreamBase {
    CONST_VTBL ISpatialAudioObjectRenderStreamBaseVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialAudioObjectRenderStreamBase_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialAudioObjectRenderStreamBase_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialAudioObjectRenderStreamBase_Release(This) (This)->lpVtbl->Release(This)
/*** ISpatialAudioObjectRenderStreamBase methods ***/
#define ISpatialAudioObjectRenderStreamBase_GetAvailableDynamicObjectCount(This,count) (This)->lpVtbl->GetAvailableDynamicObjectCount(This,count)
#define ISpatialAudioObjectRenderStreamBase_GetService(This,riid,service) (This)->lpVtbl->GetService(This,riid,service)
#define ISpatialAudioObjectRenderStreamBase_Start(This) (This)->lpVtbl->Start(This)
#define ISpatialAudioObjectRenderStreamBase_Stop(This) (This)->lpVtbl->Stop(This)
#define ISpatialAudioObjectRenderStreamBase_Reset(This) (This)->lpVtbl->Reset(This)
#define ISpatialAudioObjectRenderStreamBase_BeginUpdatingAudioObjects(This,count,frames) (This)->lpVtbl->BeginUpdatingAudioObjects(This,count,frames)
#define ISpatialAudioObjectRenderStreamBase_EndUpdatingAudioObjects(This) (This)->lpVtbl->EndUpdatingAudioObjects(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_QueryInterface(ISpatialAudioObjectRenderStreamBase* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialAudioObjectRenderStreamBase_AddRef(ISpatialAudioObjectRenderStreamBase* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialAudioObjectRenderStreamBase_Release(ISpatialAudioObjectRenderStreamBase* This) {
    return This->lpVtbl->Release(This);
}
/*** ISpatialAudioObjectRenderStreamBase methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_GetAvailableDynamicObjectCount(ISpatialAudioObjectRenderStreamBase* This,UINT32 *count) {
    return This->lpVtbl->GetAvailableDynamicObjectCount(This,count);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_GetService(ISpatialAudioObjectRenderStreamBase* This,REFIID riid,void **service) {
    return This->lpVtbl->GetService(This,riid,service);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_Start(ISpatialAudioObjectRenderStreamBase* This) {
    return This->lpVtbl->Start(This);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_Stop(ISpatialAudioObjectRenderStreamBase* This) {
    return This->lpVtbl->Stop(This);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_Reset(ISpatialAudioObjectRenderStreamBase* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_BeginUpdatingAudioObjects(ISpatialAudioObjectRenderStreamBase* This,UINT32 *count,UINT32 *frames) {
    return This->lpVtbl->BeginUpdatingAudioObjects(This,count,frames);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStreamBase_EndUpdatingAudioObjects(ISpatialAudioObjectRenderStreamBase* This) {
    return This->lpVtbl->EndUpdatingAudioObjects(This);
}
#endif
#endif

#endif


#endif  /* __ISpatialAudioObjectRenderStreamBase_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpatialAudioObjectRenderStream interface
 */
#ifndef __ISpatialAudioObjectRenderStream_INTERFACE_DEFINED__
#define __ISpatialAudioObjectRenderStream_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialAudioObjectRenderStream, 0xbab5f473, 0xb423, 0x477b, 0x85,0xf5, 0xb5,0xa3,0x32,0xa0,0x41,0x53);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bab5f473-b423-477b-85f5-b5a332a04153")
ISpatialAudioObjectRenderStream : public ISpatialAudioObjectRenderStreamBase
{
    virtual HRESULT STDMETHODCALLTYPE ActivateSpatialAudioObject(
        AudioObjectType type,
        ISpatialAudioObject **object) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialAudioObjectRenderStream, 0xbab5f473, 0xb423, 0x477b, 0x85,0xf5, 0xb5,0xa3,0x32,0xa0,0x41,0x53)
#endif
#else
typedef struct ISpatialAudioObjectRenderStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialAudioObjectRenderStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialAudioObjectRenderStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialAudioObjectRenderStream *This);

    /*** ISpatialAudioObjectRenderStreamBase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAvailableDynamicObjectCount)(
        ISpatialAudioObjectRenderStream *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetService)(
        ISpatialAudioObjectRenderStream *This,
        REFIID riid,
        void **service);

    HRESULT (STDMETHODCALLTYPE *Start)(
        ISpatialAudioObjectRenderStream *This);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        ISpatialAudioObjectRenderStream *This);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        ISpatialAudioObjectRenderStream *This);

    HRESULT (STDMETHODCALLTYPE *BeginUpdatingAudioObjects)(
        ISpatialAudioObjectRenderStream *This,
        UINT32 *count,
        UINT32 *frames);

    HRESULT (STDMETHODCALLTYPE *EndUpdatingAudioObjects)(
        ISpatialAudioObjectRenderStream *This);

    /*** ISpatialAudioObjectRenderStream methods ***/
    HRESULT (STDMETHODCALLTYPE *ActivateSpatialAudioObject)(
        ISpatialAudioObjectRenderStream *This,
        AudioObjectType type,
        ISpatialAudioObject **object);

    END_INTERFACE
} ISpatialAudioObjectRenderStreamVtbl;

interface ISpatialAudioObjectRenderStream {
    CONST_VTBL ISpatialAudioObjectRenderStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialAudioObjectRenderStream_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialAudioObjectRenderStream_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialAudioObjectRenderStream_Release(This) (This)->lpVtbl->Release(This)
/*** ISpatialAudioObjectRenderStreamBase methods ***/
#define ISpatialAudioObjectRenderStream_GetAvailableDynamicObjectCount(This,count) (This)->lpVtbl->GetAvailableDynamicObjectCount(This,count)
#define ISpatialAudioObjectRenderStream_GetService(This,riid,service) (This)->lpVtbl->GetService(This,riid,service)
#define ISpatialAudioObjectRenderStream_Start(This) (This)->lpVtbl->Start(This)
#define ISpatialAudioObjectRenderStream_Stop(This) (This)->lpVtbl->Stop(This)
#define ISpatialAudioObjectRenderStream_Reset(This) (This)->lpVtbl->Reset(This)
#define ISpatialAudioObjectRenderStream_BeginUpdatingAudioObjects(This,count,frames) (This)->lpVtbl->BeginUpdatingAudioObjects(This,count,frames)
#define ISpatialAudioObjectRenderStream_EndUpdatingAudioObjects(This) (This)->lpVtbl->EndUpdatingAudioObjects(This)
/*** ISpatialAudioObjectRenderStream methods ***/
#define ISpatialAudioObjectRenderStream_ActivateSpatialAudioObject(This,type,object) (This)->lpVtbl->ActivateSpatialAudioObject(This,type,object)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_QueryInterface(ISpatialAudioObjectRenderStream* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialAudioObjectRenderStream_AddRef(ISpatialAudioObjectRenderStream* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialAudioObjectRenderStream_Release(ISpatialAudioObjectRenderStream* This) {
    return This->lpVtbl->Release(This);
}
/*** ISpatialAudioObjectRenderStreamBase methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_GetAvailableDynamicObjectCount(ISpatialAudioObjectRenderStream* This,UINT32 *count) {
    return This->lpVtbl->GetAvailableDynamicObjectCount(This,count);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_GetService(ISpatialAudioObjectRenderStream* This,REFIID riid,void **service) {
    return This->lpVtbl->GetService(This,riid,service);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_Start(ISpatialAudioObjectRenderStream* This) {
    return This->lpVtbl->Start(This);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_Stop(ISpatialAudioObjectRenderStream* This) {
    return This->lpVtbl->Stop(This);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_Reset(ISpatialAudioObjectRenderStream* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_BeginUpdatingAudioObjects(ISpatialAudioObjectRenderStream* This,UINT32 *count,UINT32 *frames) {
    return This->lpVtbl->BeginUpdatingAudioObjects(This,count,frames);
}
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_EndUpdatingAudioObjects(ISpatialAudioObjectRenderStream* This) {
    return This->lpVtbl->EndUpdatingAudioObjects(This);
}
/*** ISpatialAudioObjectRenderStream methods ***/
static FORCEINLINE HRESULT ISpatialAudioObjectRenderStream_ActivateSpatialAudioObject(ISpatialAudioObjectRenderStream* This,AudioObjectType type,ISpatialAudioObject **object) {
    return This->lpVtbl->ActivateSpatialAudioObject(This,type,object);
}
#endif
#endif

#endif


#endif  /* __ISpatialAudioObjectRenderStream_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __spatialaudioclient_h__ */
