/*** Autogenerated by WIDL 8.12 from include/windows.storage.idl - Do not edit ***/

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

#ifndef __windows_storage_h__
#define __windows_storage_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CStorage_CStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStorageFolder_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFolder;
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CStorage_CStorageFolder __x_ABI_CWindows_CStorage_CStorageFolder;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CStorage_CStorageFolder_FWD_DEFINED__ */

/* Headers for imported files */

#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
#ifdef __cplusplus
#define __x_ABI_CWindows_CStorage_CIStorageFolder ABI::Windows::Storage::IStorageFolder
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolder;
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolderStatics __x_ABI_CWindows_CStorage_CIStorageFolderStatics;
#ifdef __cplusplus
#define __x_ABI_CWindows_CStorage_CIStorageFolderStatics ABI::Windows::Storage::IStorageFolderStatics
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolderStatics;
        }
    }
}
#endif /* __cplusplus */
#endif

/*
 * Class Windows.Storage.StorageFolder
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_StorageFolder_DEFINED
#define RUNTIMECLASS_Windows_Storage_StorageFolder_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_Storage_StorageFolder[] = {'W','i','n','d','o','w','s','.','S','t','o','r','a','g','e','.','S','t','o','r','a','g','e','F','o','l','d','e','r',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Storage_StorageFolder[] = L"Windows.Storage.StorageFolder";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Storage_StorageFolder[] = {'W','i','n','d','o','w','s','.','S','t','o','r','a','g','e','.','S','t','o','r','a','g','e','F','o','l','d','e','r',0};
#endif
#endif /* RUNTIMECLASS_Windows_Storage_StorageFolder_DEFINED */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_storage_h__ */
