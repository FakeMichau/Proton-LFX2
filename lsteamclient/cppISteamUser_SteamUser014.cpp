#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_112/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_112
#include "struct_converters.h"
#include "cppISteamUser_SteamUser014.h"
HSteamUser cppISteamUser_SteamUser014_GetHSteamUser(void *linux_side)
{
    HSteamUser _ret;
    _ret = ((ISteamUser*)linux_side)->GetHSteamUser();
    return (_ret);
}

bool cppISteamUser_SteamUser014_BLoggedOn(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BLoggedOn();
    return (_ret);
}

CSteamID cppISteamUser_SteamUser014_GetSteamID(void *linux_side)
{
    CSteamID _ret;
    _ret = ((ISteamUser*)linux_side)->GetSteamID();
    return (_ret);
}

int cppISteamUser_SteamUser014_InitiateGameConnection(void *linux_side, void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
    int _ret;
    _ret = ((ISteamUser*)linux_side)->InitiateGameConnection((void *)pAuthBlob, (int)cbMaxAuthBlob, (CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer, (bool)bSecure);
    return (_ret);
}

void cppISteamUser_SteamUser014_TerminateGameConnection(void *linux_side, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->TerminateGameConnection((uint32)unIPServer, (uint16)usPortServer);
}

void cppISteamUser_SteamUser014_TrackAppUsageEvent(void *linux_side, CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo)
{
    ((ISteamUser*)linux_side)->TrackAppUsageEvent((CGameID)gameID, (int)eAppUsageEvent, (const char *)pchExtraInfo);
}

bool cppISteamUser_SteamUser014_GetUserDataFolder(void *linux_side, char *pchBuffer, int cubBuffer)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->GetUserDataFolder((char *)pchBuffer, (int)cubBuffer);
    return (_ret);
}

void cppISteamUser_SteamUser014_StartVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StartVoiceRecording();
}

void cppISteamUser_SteamUser014_StopVoiceRecording(void *linux_side)
{
    ((ISteamUser*)linux_side)->StopVoiceRecording();
}

EVoiceResult cppISteamUser_SteamUser014_GetAvailableVoice(void *linux_side, uint32 *pcbCompressed, uint32 *pcbUncompressed)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->GetAvailableVoice((uint32 *)pcbCompressed, (uint32 *)pcbUncompressed);
    return (_ret);
}

EVoiceResult cppISteamUser_SteamUser014_GetVoice(void *linux_side, bool bWantCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten, bool bWantUncompressed, void *pUncompressedDestBuffer, uint32 cbUncompressedDestBufferSize, uint32 *nUncompressBytesWritten)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->GetVoice((bool)bWantCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten, (bool)bWantUncompressed, (void *)pUncompressedDestBuffer, (uint32)cbUncompressedDestBufferSize, (uint32 *)nUncompressBytesWritten);
    return (_ret);
}

EVoiceResult cppISteamUser_SteamUser014_DecompressVoice(void *linux_side, const void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten)
{
    EVoiceResult _ret;
    _ret = ((ISteamUser*)linux_side)->DecompressVoice((const void *)pCompressed, (uint32)cbCompressed, (void *)pDestBuffer, (uint32)cbDestBufferSize, (uint32 *)nBytesWritten);
    return (_ret);
}

HAuthTicket cppISteamUser_SteamUser014_GetAuthSessionTicket(void *linux_side, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    HAuthTicket _ret;
    _ret = ((ISteamUser*)linux_side)->GetAuthSessionTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket);
    return (_ret);
}

EBeginAuthSessionResult cppISteamUser_SteamUser014_BeginAuthSession(void *linux_side, const void *pAuthTicket, int cbAuthTicket, CSteamID steamID)
{
    EBeginAuthSessionResult _ret;
    _ret = ((ISteamUser*)linux_side)->BeginAuthSession((const void *)pAuthTicket, (int)cbAuthTicket, (CSteamID)steamID);
    return (_ret);
}

void cppISteamUser_SteamUser014_EndAuthSession(void *linux_side, CSteamID steamID)
{
    ((ISteamUser*)linux_side)->EndAuthSession((CSteamID)steamID);
}

void cppISteamUser_SteamUser014_CancelAuthTicket(void *linux_side, HAuthTicket hAuthTicket)
{
    ((ISteamUser*)linux_side)->CancelAuthTicket((HAuthTicket)hAuthTicket);
}

EUserHasLicenseForAppResult cppISteamUser_SteamUser014_UserHasLicenseForApp(void *linux_side, CSteamID steamID, AppId_t appID)
{
    EUserHasLicenseForAppResult _ret;
    _ret = ((ISteamUser*)linux_side)->UserHasLicenseForApp((CSteamID)steamID, (AppId_t)appID);
    return (_ret);
}

bool cppISteamUser_SteamUser014_BIsBehindNAT(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->BIsBehindNAT();
    return (_ret);
}

void cppISteamUser_SteamUser014_AdvertiseGame(void *linux_side, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
    ((ISteamUser*)linux_side)->AdvertiseGame((CSteamID)steamIDGameServer, (uint32)unIPServer, (uint16)usPortServer);
}

SteamAPICall_t cppISteamUser_SteamUser014_RequestEncryptedAppTicket(void *linux_side, void *pDataToInclude, int cbDataToInclude)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUser*)linux_side)->RequestEncryptedAppTicket((void *)pDataToInclude, (int)cbDataToInclude);
    return (_ret);
}

bool cppISteamUser_SteamUser014_GetEncryptedAppTicket(void *linux_side, void *pTicket, int cbMaxTicket, uint32 *pcbTicket)
{
    bool _ret;
    _ret = ((ISteamUser*)linux_side)->GetEncryptedAppTicket((void *)pTicket, (int)cbMaxTicket, (uint32 *)pcbTicket);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
