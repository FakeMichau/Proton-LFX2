#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_149/steam_api.h"
#include "steamworks_sdk_149/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_149
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils009.h"
uint32 cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetSecondsSinceAppActive();
    return (_ret);
}

uint32 cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetSecondsSinceComputerActive();
    return (_ret);
}

EUniverse cppISteamUtils_SteamUtils009_GetConnectedUniverse(void *linux_side)
{
    EUniverse _ret;
    _ret = ((ISteamUtils*)linux_side)->GetConnectedUniverse();
    return (_ret);
}

uint32 cppISteamUtils_SteamUtils009_GetServerRealTime(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetServerRealTime();
    return (_ret);
}

const char * cppISteamUtils_SteamUtils009_GetIPCountry(void *linux_side)
{
    const char * _ret;
    _ret = ((ISteamUtils*)linux_side)->GetIPCountry();
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_GetImageSize(void *linux_side, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetImageSize((int)iImage, (uint32 *)pnWidth, (uint32 *)pnHeight);
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_GetImageRGBA(void *linux_side, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetImageRGBA((int)iImage, (uint8 *)pubDest, (int)nDestBufferSize);
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_GetCSERIPPort(void *linux_side, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetCSERIPPort((uint32 *)unIP, (uint16 *)usPort);
    return (_ret);
}

uint8 cppISteamUtils_SteamUtils009_GetCurrentBatteryPower(void *linux_side)
{
    uint8 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetCurrentBatteryPower();
    return (_ret);
}

uint32 cppISteamUtils_SteamUtils009_GetAppID(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetAppID();
    return (_ret);
}

void cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition(void *linux_side, ENotificationPosition eNotificationPosition)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationPosition((ENotificationPosition)eNotificationPosition);
}

bool cppISteamUtils_SteamUtils009_IsAPICallCompleted(void *linux_side, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->IsAPICallCompleted((SteamAPICall_t)hSteamAPICall, (bool *)pbFailed);
    return (_ret);
}

ESteamAPICallFailure cppISteamUtils_SteamUtils009_GetAPICallFailureReason(void *linux_side, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    _ret = ((ISteamUtils*)linux_side)->GetAPICallFailureReason((SteamAPICall_t)hSteamAPICall);
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_GetAPICallResult(void *linux_side, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetAPICallResult((SteamAPICall_t)hSteamAPICall, (void *)pCallback, (int)cubCallback, (int)iCallbackExpected, (bool *)pbFailed);
    return (_ret);
}

void cppISteamUtils_SteamUtils009_RunFrame(void *linux_side)
{
    ((ISteamUtils*)linux_side)->RunFrame();
}

uint32 cppISteamUtils_SteamUtils009_GetIPCCallCount(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetIPCCallCount();
    return (_ret);
}

void cppISteamUtils_SteamUtils009_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamUtils*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamUtils_SteamUtils009_IsOverlayEnabled(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->IsOverlayEnabled();
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_BOverlayNeedsPresent(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->BOverlayNeedsPresent();
    return (_ret);
}

SteamAPICall_t cppISteamUtils_SteamUtils009_CheckFileSignature(void *linux_side, const char *szFileName)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUtils*)linux_side)->CheckFileSignature((const char *)szFileName);
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_ShowGamepadTextInput(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32 unCharMax, const char *pchExistingText)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->ShowGamepadTextInput((EGamepadTextInputMode)eInputMode, (EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32)unCharMax, (const char *)pchExistingText);
    return (_ret);
}

uint32 cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetEnteredGamepadTextLength();
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput(void *linux_side, char *pchText, uint32 cchText)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetEnteredGamepadTextInput((char *)pchText, (uint32)cchText);
    return (_ret);
}

const char * cppISteamUtils_SteamUtils009_GetSteamUILanguage(void *linux_side)
{
    const char * _ret;
    _ret = ((ISteamUtils*)linux_side)->GetSteamUILanguage();
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_IsSteamRunningInVR(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->IsSteamRunningInVR();
    return (_ret);
}

void cppISteamUtils_SteamUtils009_SetOverlayNotificationInset(void *linux_side, int nHorizontalInset, int nVerticalInset)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationInset((int)nHorizontalInset, (int)nVerticalInset);
}

bool cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->IsSteamInBigPictureMode();
    return (_ret);
}

void cppISteamUtils_SteamUtils009_StartVRDashboard(void *linux_side)
{
    ((ISteamUtils*)linux_side)->StartVRDashboard();
}

bool cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->IsVRHeadsetStreamingEnabled();
    return (_ret);
}

void cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled(void *linux_side, bool bEnabled)
{
    ((ISteamUtils*)linux_side)->SetVRHeadsetStreamingEnabled((bool)bEnabled);
}

bool cppISteamUtils_SteamUtils009_IsSteamChinaLauncher(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->IsSteamChinaLauncher();
    return (_ret);
}

bool cppISteamUtils_SteamUtils009_InitFilterText(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->InitFilterText();
    return (_ret);
}

int cppISteamUtils_SteamUtils009_FilterText(void *linux_side, char *pchOutFilteredText, uint32 nByteSizeOutFilteredText, const char *pchInputMessage, bool bLegalOnly)
{
    int _ret;
    _ret = ((ISteamUtils*)linux_side)->FilterText((char *)pchOutFilteredText, (uint32)nByteSizeOutFilteredText, (const char *)pchInputMessage, (bool)bLegalOnly);
    return (_ret);
}

ESteamIPv6ConnectivityState cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState(void *linux_side, ESteamIPv6ConnectivityProtocol eProtocol)
{
    ESteamIPv6ConnectivityState _ret;
    _ret = ((ISteamUtils*)linux_side)->GetIPv6ConnectivityState((ESteamIPv6ConnectivityProtocol)eProtocol);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
