#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_136/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_136
#include "struct_converters.h"
#include "cppISteamUser_SteamUser018.h"
void cppISteamUser_SteamUser018_GetHSteamUser( struct cppISteamUser_SteamUser018_GetHSteamUser_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetHSteamUser(  );
}

void cppISteamUser_SteamUser018_BLoggedOn( struct cppISteamUser_SteamUser018_BLoggedOn_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BLoggedOn(  );
}

void cppISteamUser_SteamUser018_GetSteamID( struct cppISteamUser_SteamUser018_GetSteamID_params *params )
{
    *params->_ret = ((ISteamUser*)params->linux_side)->GetSteamID(  );
}

void cppISteamUser_SteamUser018_InitiateGameConnection( struct cppISteamUser_SteamUser018_InitiateGameConnection_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->InitiateGameConnection( (void *)params->pAuthBlob, (int)params->cbMaxAuthBlob, (CSteamID)params->steamIDGameServer, (uint32)params->unIPServer, (uint16)params->usPortServer, (bool)params->bSecure );
}

void cppISteamUser_SteamUser018_TerminateGameConnection( struct cppISteamUser_SteamUser018_TerminateGameConnection_params *params )
{
    ((ISteamUser*)params->linux_side)->TerminateGameConnection( (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser018_TrackAppUsageEvent( struct cppISteamUser_SteamUser018_TrackAppUsageEvent_params *params )
{
    ((ISteamUser*)params->linux_side)->TrackAppUsageEvent( (CGameID)params->gameID, (int)params->eAppUsageEvent, (const char *)params->pchExtraInfo );
}

void cppISteamUser_SteamUser018_GetUserDataFolder( struct cppISteamUser_SteamUser018_GetUserDataFolder_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetUserDataFolder( (char *)params->pchBuffer, (int)params->cubBuffer );
}

void cppISteamUser_SteamUser018_StartVoiceRecording( struct cppISteamUser_SteamUser018_StartVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser018_StopVoiceRecording( struct cppISteamUser_SteamUser018_StopVoiceRecording_params *params )
{
    ((ISteamUser*)params->linux_side)->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser018_GetAvailableVoice( struct cppISteamUser_SteamUser018_GetAvailableVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetAvailableVoice( (uint32 *)params->pcbCompressed, (uint32 *)params->pcbUncompressed, (uint32)params->nUncompressedVoiceDesiredSampleRate );
}

void cppISteamUser_SteamUser018_GetVoice( struct cppISteamUser_SteamUser018_GetVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetVoice( (bool)params->bWantCompressed, (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten, (bool)params->bWantUncompressed, (void *)params->pUncompressedDestBuffer, (uint32)params->cbUncompressedDestBufferSize, (uint32 *)params->nUncompressBytesWritten, (uint32)params->nUncompressedVoiceDesiredSampleRate );
}

void cppISteamUser_SteamUser018_DecompressVoice( struct cppISteamUser_SteamUser018_DecompressVoice_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->DecompressVoice( (const void *)params->pCompressed, (uint32)params->cbCompressed, (void *)params->pDestBuffer, (uint32)params->cbDestBufferSize, (uint32 *)params->nBytesWritten, (uint32)params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser018_GetAuthSessionTicket( struct cppISteamUser_SteamUser018_GetAuthSessionTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetAuthSessionTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamUser_SteamUser018_BeginAuthSession( struct cppISteamUser_SteamUser018_BeginAuthSession_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BeginAuthSession( (const void *)params->pAuthTicket, (int)params->cbAuthTicket, (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser018_EndAuthSession( struct cppISteamUser_SteamUser018_EndAuthSession_params *params )
{
    ((ISteamUser*)params->linux_side)->EndAuthSession( (CSteamID)params->steamID );
}

void cppISteamUser_SteamUser018_CancelAuthTicket( struct cppISteamUser_SteamUser018_CancelAuthTicket_params *params )
{
    ((ISteamUser*)params->linux_side)->CancelAuthTicket( (HAuthTicket)params->hAuthTicket );
}

void cppISteamUser_SteamUser018_UserHasLicenseForApp( struct cppISteamUser_SteamUser018_UserHasLicenseForApp_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->UserHasLicenseForApp( (CSteamID)params->steamID, (AppId_t)params->appID );
}

void cppISteamUser_SteamUser018_BIsBehindNAT( struct cppISteamUser_SteamUser018_BIsBehindNAT_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser018_AdvertiseGame( struct cppISteamUser_SteamUser018_AdvertiseGame_params *params )
{
    ((ISteamUser*)params->linux_side)->AdvertiseGame( (CSteamID)params->steamIDGameServer, (uint32)params->unIPServer, (uint16)params->usPortServer );
}

void cppISteamUser_SteamUser018_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser018_RequestEncryptedAppTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RequestEncryptedAppTicket( (void *)params->pDataToInclude, (int)params->cbDataToInclude );
}

void cppISteamUser_SteamUser018_GetEncryptedAppTicket( struct cppISteamUser_SteamUser018_GetEncryptedAppTicket_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetEncryptedAppTicket( (void *)params->pTicket, (int)params->cbMaxTicket, (uint32 *)params->pcbTicket );
}

void cppISteamUser_SteamUser018_GetGameBadgeLevel( struct cppISteamUser_SteamUser018_GetGameBadgeLevel_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetGameBadgeLevel( (int)params->nSeries, (bool)params->bFoil );
}

void cppISteamUser_SteamUser018_GetPlayerSteamLevel( struct cppISteamUser_SteamUser018_GetPlayerSteamLevel_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser018_RequestStoreAuthURL( struct cppISteamUser_SteamUser018_RequestStoreAuthURL_params *params )
{
    params->_ret = ((ISteamUser*)params->linux_side)->RequestStoreAuthURL( (const char *)params->pchRedirectURL );
}

#ifdef __cplusplus
}
#endif
