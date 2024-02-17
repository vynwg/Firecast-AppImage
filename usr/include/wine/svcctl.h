/*** Autogenerated by WIDL 9.2 from ../wine-9.2/include/wine/svcctl.idl - Do not edit ***/

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

#ifndef __svcctl_h__
#define __svcctl_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "winsvc.h"
#define SVCCTL_TRANSPORT {'n','c','a','c','n','_','n','p',0}
#define SVCCTL_TRANSPORTA "ncacn_np"
#define SVCCTL_ENDPOINT {'\\','p','i','p','e','\\','s','v','c','c','t','l',0}
#define SVCCTL_ENDPOINTA "\\pipe\\svcctl"
#define SVCCTL_STARTED_EVENT {'_','_','w','i','n','e','_','S','v','c','c','t','l','S','t','a','r','t','e','d',0}
#define SERVICE_PROTOCOL_MAGIC 0x57494e45
#define SERVICE_CONTROL_START 0
#define SERVICE_CONTROL_FORWARD_FLAG 0x80000000
typedef struct service_start_info_t {
    DWORD magic;
    DWORD total_size;
    DWORD name_size;
    DWORD control;
    BYTE data[1];
} service_start_info;
/*****************************************************************************
 * svcctl interface (v2.0)
 */
#ifndef __svcctl_INTERFACE_DEFINED__
#define __svcctl_INTERFACE_DEFINED__

extern RPC_IF_HANDLE svcctl_v2_0_c_ifspec;
extern RPC_IF_HANDLE svcctl_v2_0_s_ifspec;
typedef LPCWSTR MACHINE_HANDLEW;
typedef LPCSTR MACHINE_HANDLEA;
typedef LPCWSTR SVCCTL_HANDLEW;
typedef void *SC_RPC_HANDLE;
typedef void *SC_RPC_LOCK;
typedef void *SC_NOTIFY_RPC_HANDLE;
#define SERVICE_SET_STATUS   0x8000
#if 0 /* already defined in winsvc.h / winnt.h */
typedef DWORD SECURITY_INFORMATION;
typedef struct _QUERY_SERVICE_CONFIGA {
    DWORD dwServiceType;
    DWORD dwStartType;
    DWORD dwErrorControl;
    LPSTR lpBinaryPathName;
    LPSTR lpLoadOrderGroup;
    DWORD dwTagId;
    LPSTR lpDependencies;
    LPSTR lpServiceStartName;
    LPSTR lpDisplayName;
} QUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGA *LPQUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGW {
    DWORD dwServiceType;
    DWORD dwStartType;
    DWORD dwErrorControl;
    LPWSTR lpBinaryPathName;
    LPWSTR lpLoadOrderGroup;
    DWORD dwTagId;
    LPWSTR lpDependencies;
    LPWSTR lpServiceStartName;
    LPWSTR lpDisplayName;
} QUERY_SERVICE_CONFIGW;
typedef struct _QUERY_SERVICE_CONFIGW *LPQUERY_SERVICE_CONFIGW;
typedef struct _SERVICE_STATUS {
    DWORD dwServiceType;
    DWORD dwCurrentState;
    DWORD dwControlsAccepted;
    DWORD dwWin32ExitCode;
    DWORD dwServiceSpecificExitCode;
    DWORD dwCheckPoint;
    DWORD dwWaitHint;
} SERVICE_STATUS;
typedef struct _SERVICE_STATUS *LPSERVICE_STATUS;
typedef enum _SC_STATUS_TYPE {
    SC_STATUS_PROCESS_INFO = 0
} SC_STATUS_TYPE;
typedef struct _SERVICE_DESCRIPTIONA {
    LPSTR lpDescription;
} SERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONA *LPSERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONW {
    LPWSTR lpDescription;
} SERVICE_DESCRIPTIONW;
typedef struct _SERVICE_DESCRIPTIONW *LPSERVICE_DESCRIPTIONW;
typedef enum _SC_ACTION_TYPE {
    SC_ACTION_NONE = 0,
    SC_ACTION_RESTART = 1,
    SC_ACTION_REBOOT = 2,
    SC_ACTION_RUN_COMMAND = 3
} SC_ACTION_TYPE;
typedef struct _SC_ACTION {
    SC_ACTION_TYPE Type;
    DWORD Delay;
} SC_ACTION;
typedef struct _SC_ACTION *LPSC_ACTION;
typedef struct _SERVICE_FAILURE_ACTIONSA {
    DWORD dwResetPeriod;
    LPSTR lpRebootMsg;
    LPSTR lpCommand;
    DWORD cActions;
    SC_ACTION *lpsaActions;
} SERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSA *LPSERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSW {
    DWORD dwResetPeriod;
    LPWSTR lpRebootMsg;
    LPWSTR lpCommand;
    DWORD cActions;
    SC_ACTION *lpsaActions;
} SERVICE_FAILURE_ACTIONSW;
typedef struct _SERVICE_FAILURE_ACTIONSW *LPSERVICE_FAILURE_ACTIONSW;
typedef struct _SERVICE_DELAYED_AUTO_START_INFO {
    BOOL fDelayedAutostart;
} SERVICE_DELAYED_AUTO_START_INFO;
typedef struct _SERVICE_FAILURE_ACTIONS_FLAG {
    BOOL fFailureActionsOnNonCrashFailures;
} SERVICE_FAILURE_ACTIONS_FLAG;
typedef struct _SERVICE_SID_INFO {
    DWORD dwServiceSidType;
} SERVICE_SID_INFO;
typedef struct _SERVICE_PRESHUTDOWN_INFO {
    DWORD dwPreshutdownTimeout;
} SERVICE_PRESHUTDOWN_INFO;
typedef struct _SERVICE_PRESHUTDOWN_INFO *LPSERVICE_PRESHUTDOWN_INFO;
typedef struct _ENUM_SERVICE_STATUSW {
    LPWSTR lpServiceName;
    LPWSTR lpDisplayName;
    SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSW;
typedef struct _ENUM_SERVICE_STATUSW *LPENUM_SERVICE_STATUSW;
typedef struct _QUERY_SERVICE_LOCK_STATUSA {
    DWORD fIsLocked;
    LPSTR lpLockOwner;
    DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSA *LPQUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSW {
    DWORD fIsLocked;
    LPWSTR lpLockOwner;
    DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW;
typedef struct _QUERY_SERVICE_LOCK_STATUSW *LPQUERY_SERVICE_LOCK_STATUSW;
typedef struct _SERVICE_STATUS_PROCESS {
    DWORD dwServiceType;
    DWORD dwCurrentState;
    DWORD dwControlsAccepted;
    DWORD dwWin32ExitCode;
    DWORD dwServiceSpecificExitCode;
    DWORD dwCheckPoint;
    DWORD dwWaitHint;
    DWORD dwProcessId;
    DWORD dwServiceFlags;
} SERVICE_STATUS_PROCESS;
typedef struct _SERVICE_STATUS_PROCESS *LPSERVICE_STATUS_PROCESS;
typedef enum _SC_ENUM_TYPE {
    SC_ENUM_PROCESS_INFO = 0
} SC_ENUM_TYPE;
#endif
struct enum_service_status {
    DWORD service_name;
    DWORD display_name;
    SERVICE_STATUS service_status;
};
struct enum_service_status_process {
    DWORD service_name;
    DWORD display_name;
    SERVICE_STATUS_PROCESS service_status_process;
};
struct service_description {
    USHORT size;
    WCHAR description[1];
};
typedef struct _SERVICE_RPC_REQUIRED_PRIVILEGES_INFO {
    DWORD cbRequiredPrivileges;
    BYTE *pRequiredPrivileges;
} SERVICE_RPC_REQUIRED_PRIVILEGES_INFO;
typedef struct _SC_RPC_CONFIG_INFOW {
    DWORD dwInfoLevel;
    __C89_NAMELESS union {
        SERVICE_DESCRIPTIONW *descr;
        SERVICE_FAILURE_ACTIONSW *actions;
        SERVICE_DELAYED_AUTO_START_INFO *delayedstart;
        SERVICE_FAILURE_ACTIONS_FLAG *actionsflag;
        SERVICE_SID_INFO *sid;
        SERVICE_RPC_REQUIRED_PRIVILEGES_INFO *privinfo;
        SERVICE_PRESHUTDOWN_INFO *preshutdown;
    } __C89_NAMELESSUNIONNAME;
} SC_RPC_CONFIG_INFOW;
typedef struct _SC_RPC_CONFIG_INFOA {
    DWORD dwInfoLevel;
    __C89_NAMELESS union {
        SERVICE_DESCRIPTIONA *descr;
        SERVICE_FAILURE_ACTIONSA *actions;
        SERVICE_DELAYED_AUTO_START_INFO *delayedstart;
        SERVICE_FAILURE_ACTIONS_FLAG *actionsflag;
        SERVICE_SID_INFO *sid;
        SERVICE_RPC_REQUIRED_PRIVILEGES_INFO *privinfo;
        SERVICE_PRESHUTDOWN_INFO *preshutdown;
    } __C89_NAMELESSUNIONNAME;
} SC_RPC_CONFIG_INFOA;
typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1 {
    ULONGLONG ullThreadId;
    DWORD dwNotifyMask;
    UCHAR CallbackAddressArray[16];
    UCHAR CallbackParamAddressArray[16];
    SERVICE_STATUS_PROCESS ServiceStatus;
    DWORD dwNotificationStatus;
    DWORD dwSequence;
} SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1;
typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1 *PSERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1;
typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 {
    ULONGLONG ullThreadId;
    DWORD dwNotifyMask;
    UCHAR CallbackAddressArray[16];
    UCHAR CallbackParamAddressArray[16];
    SERVICE_STATUS_PROCESS ServiceStatus;
    DWORD dwNotificationStatus;
    DWORD dwSequence;
    DWORD dwNotificationTriggered;
    LPWSTR pszServiceNames;
} SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2;
typedef struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 *PSERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2;
typedef struct _SC_RPC_NOTIFY_PARAMS {
    DWORD dwInfoLevel;
    __C89_NAMELESS union {
        SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1 *params1;
        SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2 *params;
    } __C89_NAMELESSUNIONNAME;
} SC_RPC_NOTIFY_PARAMS;
typedef struct _SC_RPC_NOTIFY_PARAMS_LIST {
    DWORD cElements;
    SC_RPC_NOTIFY_PARAMS NotifyParamsArray[1];
} SC_RPC_NOTIFY_PARAMS_LIST;
typedef struct _SC_RPC_NOTIFY_PARAMS_LIST *PSC_RPC_NOTIFY_PARAMS_LIST;
typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSA {
    DWORD dwReason;
    LPSTR pszComment;
} SERVICE_CONTROL_STATUS_REASON_IN_PARAMSA;
typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSA *PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSA;
typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSW {
    DWORD dwReason;
    LPWSTR pszComment;
} SERVICE_CONTROL_STATUS_REASON_IN_PARAMSW;
typedef struct _SERVICE_CONTROL_STATUS_REASON_IN_PARAMSW *PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSW;
typedef union _SC_RPC_SERVICE_CONTROL_IN_PARAMSA {
    PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSA psrInParams;
} SC_RPC_SERVICE_CONTROL_IN_PARAMSA;
typedef union _SC_RPC_SERVICE_CONTROL_IN_PARAMSA *PSC_RPC_SERVICE_CONTROL_IN_PARAMSA;
typedef union _SC_RPC_SERVICE_CONTROL_IN_PARAMSW {
    PSERVICE_CONTROL_STATUS_REASON_IN_PARAMSW psrInParams;
} SC_RPC_SERVICE_CONTROL_IN_PARAMSW;
typedef union _SC_RPC_SERVICE_CONTROL_IN_PARAMSW *PSC_RPC_SERVICE_CONTROL_IN_PARAMSW;
typedef struct _SERVICE_CONTROL_STATUS_REASON_OUT_PARAMS {
    SERVICE_STATUS_PROCESS ServiceStatus;
} SERVICE_CONTROL_STATUS_REASON_OUT_PARAMS;
typedef struct _SERVICE_CONTROL_STATUS_REASON_OUT_PARAMS *PSERVICE_CONTROL_STATUS_REASON_OUT_PARAMS;
typedef union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSA {
    PSERVICE_CONTROL_STATUS_REASON_OUT_PARAMS psrOutParams;
} SC_RPC_SERVICE_CONTROL_OUT_PARAMSA;
typedef union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSA *PSC_RPC_SERVICE_CONTROL_OUT_PARAMSA;
typedef union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSW {
    PSERVICE_CONTROL_STATUS_REASON_OUT_PARAMS psrOutParams;
} SC_RPC_SERVICE_CONTROL_OUT_PARAMSW;
typedef union _SC_RPC_SERVICE_CONTROL_OUT_PARAMSW *PSC_RPC_SERVICE_CONTROL_OUT_PARAMSW;
DWORD __cdecl svcctl_CloseServiceHandle(
    SC_RPC_HANDLE *handle);

DWORD __cdecl svcctl_ControlService(
    SC_RPC_HANDLE hService,
    DWORD dwControl,
    SERVICE_STATUS *lpServiceStatus);

DWORD __cdecl svcctl_DeleteService(
    SC_RPC_HANDLE hService);

DWORD __cdecl svcctl_LockServiceDatabase(
    SC_RPC_HANDLE hSCManager,
    SC_RPC_LOCK *phLock);

DWORD __cdecl svcctl_QueryServiceObjectSecurity(
    SC_RPC_HANDLE service,
    SECURITY_INFORMATION info,
    BYTE *descriptor,
    DWORD buf_size,
    DWORD *needed_size);

DWORD __cdecl svcctl_SetServiceObjectSecurity(
    SC_RPC_HANDLE service,
    SECURITY_INFORMATION info,
    BYTE *descriptor,
    DWORD buf_size);

DWORD __cdecl svcctl_QueryServiceStatus(
    SC_RPC_HANDLE service,
    SERVICE_STATUS *status);

DWORD __cdecl svcctl_SetServiceStatus(
    SC_RPC_HANDLE hServiceStatus,
    LPSERVICE_STATUS lpServiceStatus);

DWORD __cdecl svcctl_UnlockServiceDatabase(
    SC_RPC_LOCK *phLock);

DWORD __cdecl svcctl_NotifyBootConfigStatus(
    SVCCTL_HANDLEW machinename,
    DWORD boot_acceptable);

DWORD __cdecl svcctl_SCSetServiceBitsW(
    void);

DWORD __cdecl svcctl_ChangeServiceConfigW(
    SC_RPC_HANDLE hService,
    DWORD dwServiceType,
    DWORD dwStartType,
    DWORD dwErrorControl,
    LPCWSTR lpBinaryPathName,
    LPCWSTR lpLoadOrderGroupKey,
    DWORD *lpdwTagId,
    const BYTE *lpDependencies,
    DWORD dwDependenciesSize,
    LPCWSTR lpServiceStartName,
    const BYTE *lpPassword,
    DWORD dwPasswordSize,
    LPCWSTR lpDisplayName);

DWORD __cdecl svcctl_CreateServiceW(
    SC_RPC_HANDLE hSCManager,
    LPCWSTR lpServiceName,
    LPCWSTR lpDisplayName,
    DWORD dwDesiredAccess,
    DWORD dwServiceType,
    DWORD dwStartType,
    DWORD dwErrorControl,
    LPCWSTR lpBinaryPathName,
    LPCWSTR lpLoadOrderGroup,
    DWORD *lpdwTagId,
    const BYTE *lpDependencies,
    DWORD dwDependenciesSize,
    LPCWSTR lpServiceStartName,
    const BYTE *lpPassword,
    DWORD dwPasswordSize,
    SC_RPC_HANDLE *phService);

DWORD __cdecl svcctl_EnumDependentServicesW(
    SC_RPC_HANDLE service,
    DWORD state,
    BYTE *services,
    DWORD buf_size,
    DWORD *needed_size,
    DWORD *services_ret);

DWORD __cdecl svcctl_EnumServicesStatusW(
    SC_RPC_HANDLE hmngr,
    DWORD type,
    DWORD state,
    BYTE *buffer,
    DWORD size,
    LPDWORD needed,
    LPDWORD returned,
    LPDWORD resume);

DWORD __cdecl svcctl_OpenSCManagerW(
    MACHINE_HANDLEW MachineName,
    LPCWSTR DatabaseName,
    DWORD dwAccessMask,
    SC_RPC_HANDLE *handle);

DWORD __cdecl svcctl_OpenServiceW(
    SC_RPC_HANDLE hSCManager,
    LPCWSTR lpServiceName,
    DWORD dwDesiredAccess,
    SC_RPC_HANDLE *phService);

DWORD __cdecl svcctl_QueryServiceConfigW(
    SC_RPC_HANDLE hService,
    QUERY_SERVICE_CONFIGW *config,
    DWORD buf_size,
    DWORD *needed_size);

DWORD __cdecl svcctl_QueryServiceLockStatusW(
    SC_RPC_HANDLE scmanager,
    QUERY_SERVICE_LOCK_STATUSW *status,
    DWORD buf_size,
    DWORD *needed_size);

DWORD __cdecl svcctl_StartServiceW(
    SC_RPC_HANDLE hService,
    DWORD dwNumServiceArgs,
    LPCWSTR *lpServiceArgVectors);

DWORD __cdecl svcctl_GetServiceDisplayNameW(
    SC_RPC_HANDLE hSCManager,
    LPCWSTR lpServiceName,
    WCHAR lpBuffer[],
    DWORD *cchBufSize);

DWORD __cdecl svcctl_GetServiceKeyNameW(
    SC_RPC_HANDLE hSCManager,
    LPCWSTR lpServiceDisplayName,
    WCHAR lpBuffer[],
    DWORD *cchBufSize);

DWORD __cdecl svcctl_SCSetServiceBitsA(
    void);

DWORD __cdecl svcctl_ChangeServiceConfigA(
    SC_RPC_HANDLE service,
    DWORD service_type,
    DWORD start_type,
    DWORD error_control,
    LPSTR binarypath,
    LPSTR loadordergroup,
    DWORD *tagid,
    BYTE *dependencies,
    DWORD depend_size,
    LPSTR startname,
    BYTE *password,
    DWORD password_size,
    LPSTR displayname);

DWORD __cdecl svcctl_CreateServiceA(
    SC_RPC_HANDLE scmanager,
    LPCSTR servicename,
    LPCSTR displayname,
    DWORD desiredaccess,
    DWORD service_type,
    DWORD start_type,
    DWORD error_control,
    LPCSTR binarypath,
    LPCSTR loadordergroup,
    DWORD *tagid,
    const BYTE *dependencies,
    DWORD depend_size,
    LPCSTR startname,
    const BYTE *password,
    DWORD password_size,
    SC_RPC_HANDLE *service);

DWORD __cdecl svcctl_EnumDependentServicesA(
    SC_RPC_HANDLE service,
    DWORD state,
    BYTE *services,
    DWORD buf_size,
    DWORD *needed_size,
    DWORD *services_ret);

DWORD __cdecl svcctl_EnumServicesStatusA(
    SC_RPC_HANDLE hmngr,
    DWORD type,
    DWORD state,
    BYTE *buffer,
    DWORD size,
    DWORD *needed,
    DWORD *returned,
    DWORD *resume);

DWORD __cdecl svcctl_OpenSCManagerA(
    MACHINE_HANDLEA MachineName,
    LPCSTR DatabaseName,
    DWORD dwAccessMask,
    SC_RPC_HANDLE *handle);

DWORD __cdecl svcctl_OpenServiceA(
    SC_RPC_HANDLE hSCManager,
    LPCSTR lpServiceName,
    DWORD dwDesiredAccess,
    SC_RPC_HANDLE *phService);

DWORD __cdecl svcctl_QueryServiceConfigA(
    SC_RPC_HANDLE hService,
    QUERY_SERVICE_CONFIGA *config,
    DWORD buf_size,
    DWORD *needed_size);

DWORD __cdecl svcctl_QueryServiceLockStatusA(
    SC_RPC_HANDLE scmanager,
    QUERY_SERVICE_LOCK_STATUSA *status,
    DWORD buf_size,
    DWORD *needed_size);

DWORD __cdecl svcctl_StartServiceA(
    SC_RPC_HANDLE service,
    DWORD argc,
    LPCSTR *args);

DWORD __cdecl svcctl_GetServiceDisplayNameA(
    SC_RPC_HANDLE hSCManager,
    LPCSTR servicename,
    CHAR buffer[],
    DWORD *buf_size);

DWORD __cdecl svcctl_GetServiceKeyNameA(
    SC_RPC_HANDLE hSCManager,
    LPCSTR servicename,
    CHAR buffer[],
    DWORD *buf_size);

DWORD __cdecl svcctl_GetCurrentGroupStateW(
    void);

DWORD __cdecl svcctl_EnumServiceGroupW(
    SC_RPC_HANDLE scmanager,
    DWORD service_type,
    DWORD service_state,
    BYTE *buffer,
    DWORD buf_size,
    DWORD *needed_size,
    DWORD *returned_size,
    DWORD *resume_index,
    LPCWSTR groupname);

DWORD __cdecl svcctl_ChangeServiceConfig2A(
    SC_RPC_HANDLE service,
    SC_RPC_CONFIG_INFOA info);

DWORD __cdecl svcctl_ChangeServiceConfig2W(
    SC_RPC_HANDLE service,
    SC_RPC_CONFIG_INFOW info);

DWORD __cdecl svcctl_QueryServiceConfig2A(
    SC_RPC_HANDLE service,
    DWORD info_level,
    BYTE *buffer,
    DWORD buf_size,
    DWORD *needed_size);

DWORD __cdecl svcctl_QueryServiceConfig2W(
    SC_RPC_HANDLE hService,
    DWORD InfoLevel,
    BYTE lpBuffer[],
    DWORD cbBufSize,
    LPDWORD pcbBytesNeeded);

DWORD __cdecl svcctl_QueryServiceStatusEx(
    SC_RPC_HANDLE hService,
    SC_STATUS_TYPE InfoLevel,
    BYTE *lpBuffer,
    DWORD cbBufSize,
    LPDWORD pcbBytesNeeded);

DWORD __cdecl svcctl_EnumServicesStatusExA(
    SC_RPC_HANDLE scmanager,
    SC_ENUM_TYPE info_level,
    DWORD service_type,
    DWORD service_state,
    BYTE *buffer,
    DWORD buf_size,
    DWORD *needed_size,
    DWORD *services_count,
    DWORD *resume_index,
    LPCSTR groupname);

DWORD __cdecl svcctl_EnumServicesStatusExW(
    SC_RPC_HANDLE scmanager,
    SC_ENUM_TYPE info_level,
    DWORD service_type,
    DWORD service_state,
    BYTE *buffer,
    DWORD buf_size,
    DWORD *needed_size,
    DWORD *services_count,
    DWORD *resume_index,
    LPCWSTR groupname);

DWORD __cdecl svcctl_unknown43(
    void);

DWORD __cdecl svcctl_CreateServiceWOW64A(
    SC_RPC_HANDLE scmanager,
    LPCSTR servicename,
    LPCSTR displayname,
    DWORD accessmask,
    DWORD service_type,
    DWORD start_type,
    DWORD error_control,
    LPCSTR imagepath,
    LPCSTR loadordergroup,
    DWORD *tagid,
    const BYTE *dependencies,
    DWORD depend_size,
    LPCSTR start_name,
    const BYTE *password,
    DWORD password_size,
    SC_RPC_HANDLE *service);

DWORD __cdecl svcctl_CreateServiceWOW64W(
    SC_RPC_HANDLE scmanager,
    LPCWSTR servicename,
    LPCWSTR displayname,
    DWORD accessmask,
    DWORD service_type,
    DWORD start_type,
    DWORD error_control,
    LPCWSTR imagepath,
    LPCWSTR loadordergroup,
    DWORD *tagid,
    const BYTE *dependencies,
    DWORD depend_size,
    LPCWSTR start_name,
    const BYTE *password,
    DWORD password_size,
    SC_RPC_HANDLE *service);

DWORD __cdecl svcctl_unknown46(
    void);

DWORD __cdecl svcctl_NotifyServiceStatusChange(
    SC_RPC_HANDLE service,
    SC_RPC_NOTIFY_PARAMS params,
    GUID *clientprocessguid,
    GUID *scmprocessguid,
    BOOL *createremotequeue,
    SC_NOTIFY_RPC_HANDLE *notify);

DWORD __cdecl svcctl_GetNotifyResults(
    SC_NOTIFY_RPC_HANDLE notify,
    SC_RPC_NOTIFY_PARAMS_LIST **params);

DWORD __cdecl svcctl_CloseNotifyHandle(
    SC_NOTIFY_RPC_HANDLE *notify,
    BOOL *apc_fired);

DWORD __cdecl svcctl_ControlServiceExA(
    SC_RPC_HANDLE service,
    DWORD control,
    DWORD info_level,
    SC_RPC_SERVICE_CONTROL_IN_PARAMSA *in_params,
    SC_RPC_SERVICE_CONTROL_OUT_PARAMSA *out_params);

DWORD __cdecl svcctl_ControlServiceExW(
    SC_RPC_HANDLE service,
    DWORD control,
    DWORD info_level,
    SC_RPC_SERVICE_CONTROL_IN_PARAMSW *in_params,
    SC_RPC_SERVICE_CONTROL_OUT_PARAMSW *out_params);

DWORD __cdecl svcctl_unknown52(
    void);

DWORD __cdecl svcctl_unknown53(
    void);

DWORD __cdecl svcctl_unknown54(
    void);

DWORD __cdecl svcctl_unknown55(
    void);

DWORD __cdecl svcctl_QueryServiceConfigEx(
    SC_RPC_HANDLE service,
    DWORD info_level,
    SC_RPC_CONFIG_INFOW *info);


#endif  /* __svcctl_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

handle_t __RPC_USER SVCCTL_HANDLEW_bind(SVCCTL_HANDLEW);
void __RPC_USER SVCCTL_HANDLEW_unbind(SVCCTL_HANDLEW, handle_t);
handle_t __RPC_USER MACHINE_HANDLEW_bind(MACHINE_HANDLEW);
void __RPC_USER MACHINE_HANDLEW_unbind(MACHINE_HANDLEW, handle_t);
handle_t __RPC_USER MACHINE_HANDLEA_bind(MACHINE_HANDLEA);
void __RPC_USER MACHINE_HANDLEA_unbind(MACHINE_HANDLEA, handle_t);
void __RPC_USER SC_RPC_HANDLE_rundown(SC_RPC_HANDLE);
void __RPC_USER SC_RPC_LOCK_rundown(SC_RPC_LOCK);
void __RPC_USER SC_NOTIFY_RPC_HANDLE_rundown(SC_NOTIFY_RPC_HANDLE);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __svcctl_h__ */
