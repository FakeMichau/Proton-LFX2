#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRApplications_IVRApplications_003_AddApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
    bool bTemporary;
};
extern void cppIVRApplications_IVRApplications_003_AddApplicationManifest( struct cppIVRApplications_IVRApplications_003_AddApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_003_RemoveApplicationManifest_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchApplicationManifestFullPath;
};
extern void cppIVRApplications_IVRApplications_003_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_003_RemoveApplicationManifest_params *params );

struct cppIVRApplications_IVRApplications_003_IsApplicationInstalled_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_003_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_003_IsApplicationInstalled_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationCount( struct cppIVRApplications_IVRApplications_003_GetApplicationCount_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unApplicationIndex;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId_params *params );

struct cppIVRApplications_IVRApplications_003_LaunchApplication_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_003_LaunchApplication( struct cppIVRApplications_IVRApplications_003_LaunchApplication_params *params );

struct cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay_params *params );

struct cppIVRApplications_IVRApplications_003_IdentifyApplication_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unProcessId;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_003_IdentifyApplication( struct cppIVRApplications_IVRApplications_003_IdentifyApplication_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationProcessId_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_003_GetApplicationProcessId_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyString_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    char *pchPropertyValueBuffer;
    uint32_t unPropertyValueBufferLen;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyString_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchAppKey;
    uint32_t eProperty;
    uint32_t *peError;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64_params *params );

struct cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
    bool bAutoLaunch;
};
extern void cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch_params
{
    void *linux_side;
    bool _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch_params *params );

struct cppIVRApplications_IVRApplications_003_GetStartingApplication_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchAppKeyBuffer;
    uint32_t unAppKeyBufferLen;
};
extern void cppIVRApplications_IVRApplications_003_GetStartingApplication( struct cppIVRApplications_IVRApplications_003_GetStartingApplication_params *params );

struct cppIVRApplications_IVRApplications_003_GetTransitionState_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRApplications_IVRApplications_003_GetTransitionState( struct cppIVRApplications_IVRApplications_003_GetTransitionState_params *params );

struct cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchAppKey;
};
extern void cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck_params *params );

struct cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t state;
};
extern void cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum_params *params );

struct cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested_params *params );

#ifdef __cplusplus
}
#endif
