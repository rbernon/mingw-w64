/*** Autogenerated by WIDL 8.13 from include/windows.security.isolation.idl - Do not edit ***/

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

#ifndef __windows_security_isolation_h__
#define __windows_security_isolation_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics ABI::Windows::Security::Isolation::IIsolatedWindowsEnvironmentHostStatics
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Isolation {
                interface IIsolatedWindowsEnvironmentHostStatics;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHost_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Isolation {
                class IsolatedWindowsEnvironmentHost;
            }
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHost __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHost;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHost_FWD_DEFINED__ */

#ifndef ____FIVectorView_1_IsolatedWindowsEnvironmentHostError_FWD_DEFINED__
#define ____FIVectorView_1_IsolatedWindowsEnvironmentHostError_FWD_DEFINED__
typedef interface __FIVectorView_1_IsolatedWindowsEnvironmentHostError __FIVectorView_1_IsolatedWindowsEnvironmentHostError;
#ifdef __cplusplus
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError >
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>
#include <asyncinfo.h>
#include <eventtoken.h>
#include <windowscontracts.h>
#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus
typedef enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError;
#endif /* __cplusplus */

#ifndef ____x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics ABI::Windows::Security::Isolation::IIsolatedWindowsEnvironmentHostStatics
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Isolation {
                interface IIsolatedWindowsEnvironmentHostStatics;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____FIVectorView_1_IsolatedWindowsEnvironmentHostError_FWD_DEFINED__
#define ____FIVectorView_1_IsolatedWindowsEnvironmentHostError_FWD_DEFINED__
typedef interface __FIVectorView_1_IsolatedWindowsEnvironmentHostError __FIVectorView_1_IsolatedWindowsEnvironmentHostError;
#ifdef __cplusplus
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError >
#endif /* __cplusplus */
#endif

#if !defined(WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION)
#define WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION)

#if WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Isolation {
                enum IsolatedWindowsEnvironmentHostError {
                    IsolatedWindowsEnvironmentHostError_AdminPolicyIsDisabledOrNotPresent = 0,
                    IsolatedWindowsEnvironmentHostError_FeatureNotInstalled = 1,
                    IsolatedWindowsEnvironmentHostError_HardwareRequirementsNotMet = 2,
                    IsolatedWindowsEnvironmentHostError_RebootRequired = 3,
                    IsolatedWindowsEnvironmentHostError_UnknownError = 4
                };
            }
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError {
    IsolatedWindowsEnvironmentHostError_AdminPolicyIsDisabledOrNotPresent = 0,
    IsolatedWindowsEnvironmentHostError_FeatureNotInstalled = 1,
    IsolatedWindowsEnvironmentHostError_HardwareRequirementsNotMet = 2,
    IsolatedWindowsEnvironmentHostError_RebootRequired = 3,
    IsolatedWindowsEnvironmentHostError_UnknownError = 4
};
#ifdef WIDL_using_Windows_Security_Isolation
#define IsolatedWindowsEnvironmentHostError __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError
#endif /* WIDL_using_Windows_Security_Isolation */
#endif

#endif /* WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION >= 0x10000 */
/*****************************************************************************
 * IIsolatedWindowsEnvironmentHostStatics interface
 */
#if WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics, 0x2c0e22c7, 0x05a0, 0x517a, 0xb8,0x1c, 0x6e,0xe8,0x79,0x0c,0x38,0x1f);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Isolation {
                MIDL_INTERFACE("2c0e22c7-05a0-517a-b81c-6ee8790c381f")
                IIsolatedWindowsEnvironmentHostStatics : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE get_IsReady(
                        boolean *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_HostErrors(
                        ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError > **value) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics, 0x2c0e22c7, 0x05a0, 0x517a, 0xb8,0x1c, 0x6e,0xe8,0x79,0x0c,0x38,0x1f)
#endif
#else
typedef struct __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStaticsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This,
        TrustLevel *trustLevel);

    /*** IIsolatedWindowsEnvironmentHostStatics methods ***/
    HRESULT (STDMETHODCALLTYPE *get_IsReady)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This,
        boolean *value);

    HRESULT (STDMETHODCALLTYPE *get_HostErrors)(
        __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics *This,
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError **value);

    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics {
    CONST_VTBL __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IIsolatedWindowsEnvironmentHostStatics methods ***/
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_get_IsReady(This,value) (This)->lpVtbl->get_IsReady(This,value)
#define __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_get_HostErrors(This,value) (This)->lpVtbl->get_HostErrors(This,value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_QueryInterface(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_AddRef(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_Release(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetIids(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetRuntimeClassName(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetTrustLevel(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IIsolatedWindowsEnvironmentHostStatics methods ***/
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_get_IsReady(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This,boolean *value) {
    return This->lpVtbl->get_IsReady(This,value);
}
static __WIDL_INLINE HRESULT __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_get_HostErrors(__x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics* This,__FIVectorView_1_IsolatedWindowsEnvironmentHostError **value) {
    return This->lpVtbl->get_HostErrors(This,value);
}
#endif
#ifdef WIDL_using_Windows_Security_Isolation
#define IID_IIsolatedWindowsEnvironmentHostStatics IID___x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics
#define IIsolatedWindowsEnvironmentHostStaticsVtbl __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStaticsVtbl
#define IIsolatedWindowsEnvironmentHostStatics __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics
#define IIsolatedWindowsEnvironmentHostStatics_QueryInterface __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_QueryInterface
#define IIsolatedWindowsEnvironmentHostStatics_AddRef __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_AddRef
#define IIsolatedWindowsEnvironmentHostStatics_Release __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_Release
#define IIsolatedWindowsEnvironmentHostStatics_GetIids __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetIids
#define IIsolatedWindowsEnvironmentHostStatics_GetRuntimeClassName __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetRuntimeClassName
#define IIsolatedWindowsEnvironmentHostStatics_GetTrustLevel __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_GetTrustLevel
#define IIsolatedWindowsEnvironmentHostStatics_get_IsReady __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_get_IsReady
#define IIsolatedWindowsEnvironmentHostStatics_get_HostErrors __x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_get_HostErrors
#endif /* WIDL_using_Windows_Security_Isolation */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CSecurity_CIsolation_CIIsolatedWindowsEnvironmentHostStatics_INTERFACE_DEFINED__ */
#endif /* WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION >= 0x10000 */

/*
 * Class Windows.Security.Isolation.IsolatedWindowsEnvironmentHost
 */
#if WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Isolation_IsolatedWindowsEnvironmentHost_DEFINED
#define RUNTIMECLASS_Windows_Security_Isolation_IsolatedWindowsEnvironmentHost_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_Security_Isolation_IsolatedWindowsEnvironmentHost[] = {'W','i','n','d','o','w','s','.','S','e','c','u','r','i','t','y','.','I','s','o','l','a','t','i','o','n','.','I','s','o','l','a','t','e','d','W','i','n','d','o','w','s','E','n','v','i','r','o','n','m','e','n','t','H','o','s','t',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Security_Isolation_IsolatedWindowsEnvironmentHost[] = L"Windows.Security.Isolation.IsolatedWindowsEnvironmentHost";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Security_Isolation_IsolatedWindowsEnvironmentHost[] = {'W','i','n','d','o','w','s','.','S','e','c','u','r','i','t','y','.','I','s','o','l','a','t','i','o','n','.','I','s','o','l','a','t','e','d','W','i','n','d','o','w','s','E','n','v','i','r','o','n','m','e','n','t','H','o','s','t',0};
#endif
#endif /* RUNTIMECLASS_Windows_Security_Isolation_IsolatedWindowsEnvironmentHost_DEFINED */
#endif /* WINDOWS_SECURITY_ISOLATION_ISOLATEDWINDOWSENVIRONMENTCONTRACT_VERSION >= 0x10000 */

/*****************************************************************************
 * IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError > interface
 */
#ifndef ____FIVectorView_1_IsolatedWindowsEnvironmentHostError_INTERFACE_DEFINED__
#define ____FIVectorView_1_IsolatedWindowsEnvironmentHostError_INTERFACE_DEFINED__

DEFINE_GUID(IID___FIVectorView_1_IsolatedWindowsEnvironmentHostError, 0xa830f621, 0xa4ae, 0x5f5c, 0xa0,0x03, 0x98,0x5f,0xe3,0xe0,0x1e,0x51);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template<>
                MIDL_INTERFACE("a830f621-a4ae-5f5c-a003-985fe3e01e51")
                IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError > : IVectorView_impl<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError >
                {
                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__FIVectorView_1_IsolatedWindowsEnvironmentHostError, 0xa830f621, 0xa4ae, 0x5f5c, 0xa0,0x03, 0x98,0x5f,0xe3,0xe0,0x1e,0x51)
#endif
#else
typedef struct __FIVectorView_1_IsolatedWindowsEnvironmentHostErrorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        TrustLevel *trustLevel);

    /*** IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError > methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAt)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        UINT32 index,
        enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError *value);

    HRESULT (STDMETHODCALLTYPE *get_Size)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *IndexOf)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError element,
        UINT32 *index,
        BOOLEAN *value);

    HRESULT (STDMETHODCALLTYPE *GetMany)(
        __FIVectorView_1_IsolatedWindowsEnvironmentHostError *This,
        UINT32 start_index,
        UINT32 items_size,
        enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError *items,
        UINT32 *value);

    END_INTERFACE
} __FIVectorView_1_IsolatedWindowsEnvironmentHostErrorVtbl;

interface __FIVectorView_1_IsolatedWindowsEnvironmentHostError {
    CONST_VTBL __FIVectorView_1_IsolatedWindowsEnvironmentHostErrorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError > methods ***/
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetAt(This,index,value) (This)->lpVtbl->GetAt(This,index,value)
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_get_Size(This,value) (This)->lpVtbl->get_Size(This,value)
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_IndexOf(This,element,index,value) (This)->lpVtbl->IndexOf(This,element,index,value)
#define __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetMany(This,start_index,items_size,items,value) (This)->lpVtbl->GetMany(This,start_index,items_size,items,value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_QueryInterface(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG __FIVectorView_1_IsolatedWindowsEnvironmentHostError_AddRef(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG __FIVectorView_1_IsolatedWindowsEnvironmentHostError_Release(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetIids(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetRuntimeClassName(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetTrustLevel(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IVectorView<ABI::Windows::Security::Isolation::IsolatedWindowsEnvironmentHostError > methods ***/
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetAt(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,UINT32 index,enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError *value) {
    return This->lpVtbl->GetAt(This,index,value);
}
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_get_Size(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,UINT32 *value) {
    return This->lpVtbl->get_Size(This,value);
}
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_IndexOf(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError element,UINT32 *index,BOOLEAN *value) {
    return This->lpVtbl->IndexOf(This,element,index,value);
}
static __WIDL_INLINE HRESULT __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetMany(__FIVectorView_1_IsolatedWindowsEnvironmentHostError* This,UINT32 start_index,UINT32 items_size,enum __x_ABI_CWindows_CSecurity_CIsolation_CIsolatedWindowsEnvironmentHostError *items,UINT32 *value) {
    return This->lpVtbl->GetMany(This,start_index,items_size,items,value);
}
#endif
#ifdef WIDL_using_Windows_Foundation_Collections
#define IID_IVectorView_IsolatedWindowsEnvironmentHostError IID___FIVectorView_1_IsolatedWindowsEnvironmentHostError
#define IVectorView_IsolatedWindowsEnvironmentHostErrorVtbl __FIVectorView_1_IsolatedWindowsEnvironmentHostErrorVtbl
#define IVectorView_IsolatedWindowsEnvironmentHostError __FIVectorView_1_IsolatedWindowsEnvironmentHostError
#define IVectorView_IsolatedWindowsEnvironmentHostError_QueryInterface __FIVectorView_1_IsolatedWindowsEnvironmentHostError_QueryInterface
#define IVectorView_IsolatedWindowsEnvironmentHostError_AddRef __FIVectorView_1_IsolatedWindowsEnvironmentHostError_AddRef
#define IVectorView_IsolatedWindowsEnvironmentHostError_Release __FIVectorView_1_IsolatedWindowsEnvironmentHostError_Release
#define IVectorView_IsolatedWindowsEnvironmentHostError_GetIids __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetIids
#define IVectorView_IsolatedWindowsEnvironmentHostError_GetRuntimeClassName __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetRuntimeClassName
#define IVectorView_IsolatedWindowsEnvironmentHostError_GetTrustLevel __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetTrustLevel
#define IVectorView_IsolatedWindowsEnvironmentHostError_GetAt __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetAt
#define IVectorView_IsolatedWindowsEnvironmentHostError_get_Size __FIVectorView_1_IsolatedWindowsEnvironmentHostError_get_Size
#define IVectorView_IsolatedWindowsEnvironmentHostError_IndexOf __FIVectorView_1_IsolatedWindowsEnvironmentHostError_IndexOf
#define IVectorView_IsolatedWindowsEnvironmentHostError_GetMany __FIVectorView_1_IsolatedWindowsEnvironmentHostError_GetMany
#endif /* WIDL_using_Windows_Foundation_Collections */
#endif

#endif

#endif  /* ____FIVectorView_1_IsolatedWindowsEnvironmentHostError_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_security_isolation_h__ */
