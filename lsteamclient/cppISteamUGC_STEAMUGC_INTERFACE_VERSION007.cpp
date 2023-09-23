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
#include "cppISteamUGC_STEAMUGC_INTERFACE_VERSION007.h"
UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUserUGCRequest(void *linux_side, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    _ret = ((ISteamUGC*)linux_side)->CreateQueryUserUGCRequest((AccountID_t)unAccountID, (EUserUGCList)eListType, (EUGCMatchingUGCType)eMatchingUGCType, (EUserUGCListSortOrder)eSortOrder, (AppId_t)nCreatorAppID, (AppId_t)nConsumerAppID, (uint32)unPage);
    return (_ret);
}

UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryAllUGCRequest(void *linux_side, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
    UGCQueryHandle_t _ret;
    _ret = ((ISteamUGC*)linux_side)->CreateQueryAllUGCRequest((EUGCQuery)eQueryType, (EUGCMatchingUGCType)eMatchingeMatchingUGCTypeFileType, (AppId_t)nCreatorAppID, (AppId_t)nConsumerAppID, (uint32)unPage);
    return (_ret);
}

UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateQueryUGCDetailsRequest(void *linux_side, PublishedFileId_t *pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
    UGCQueryHandle_t _ret;
    _ret = ((ISteamUGC*)linux_side)->CreateQueryUGCDetailsRequest((PublishedFileId_t *)pvecPublishedFileID, (uint32)unNumPublishedFileIDs);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SendQueryUGCRequest(void *linux_side, UGCQueryHandle_t handle)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->SendQueryUGCRequest((UGCQueryHandle_t)handle);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCResult(void *linux_side, UGCQueryHandle_t handle, uint32 index, winSteamUGCDetails_t_136 *pDetails)
{
    bool _ret;
    SteamUGCDetails_t lin_pDetails;
    win_to_lin_struct_SteamUGCDetails_t_136(pDetails, &lin_pDetails);
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCResult((UGCQueryHandle_t)handle, (uint32)index, &lin_pDetails);
    lin_to_win_struct_SteamUGCDetails_t_136(&lin_pDetails, pDetails);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCPreviewURL(void *linux_side, UGCQueryHandle_t handle, uint32 index, char *pchURL, uint32 cchURLSize)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCPreviewURL((UGCQueryHandle_t)handle, (uint32)index, (char *)pchURL, (uint32)cchURLSize);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCMetadata(void *linux_side, UGCQueryHandle_t handle, uint32 index, char *pchMetadata, uint32 cchMetadatasize)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCMetadata((UGCQueryHandle_t)handle, (uint32)index, (char *)pchMetadata, (uint32)cchMetadatasize);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCChildren(void *linux_side, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCChildren((UGCQueryHandle_t)handle, (uint32)index, (PublishedFileId_t *)pvecPublishedFileID, (uint32)cMaxEntries);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCStatistic(void *linux_side, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint32 *pStatValue)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCStatistic((UGCQueryHandle_t)handle, (uint32)index, (EItemStatistic)eStatType, (uint32 *)pStatValue);
    return (_ret);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumAdditionalPreviews(void *linux_side, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCNumAdditionalPreviews((UGCQueryHandle_t)handle, (uint32)index);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCAdditionalPreview(void *linux_side, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char *pchURLOrVideoID, uint32 cchURLSize, bool *pbIsImage)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCAdditionalPreview((UGCQueryHandle_t)handle, (uint32)index, (uint32)previewIndex, (char *)pchURLOrVideoID, (uint32)cchURLSize, (bool *)pbIsImage);
    return (_ret);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCNumKeyValueTags(void *linux_side, UGCQueryHandle_t handle, uint32 index)
{
    uint32 _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCNumKeyValueTags((UGCQueryHandle_t)handle, (uint32)index);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetQueryUGCKeyValueTag(void *linux_side, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char *pchKey, uint32 cchKeySize, char *pchValue, uint32 cchValueSize)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetQueryUGCKeyValueTag((UGCQueryHandle_t)handle, (uint32)index, (uint32)keyValueTagIndex, (char *)pchKey, (uint32)cchKeySize, (char *)pchValue, (uint32)cchValueSize);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_ReleaseQueryUGCRequest(void *linux_side, UGCQueryHandle_t handle)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->ReleaseQueryUGCRequest((UGCQueryHandle_t)handle);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredTag(void *linux_side, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->AddRequiredTag((UGCQueryHandle_t)handle, (const char *)pTagName);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddExcludedTag(void *linux_side, UGCQueryHandle_t handle, const char *pTagName)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->AddExcludedTag((UGCQueryHandle_t)handle, (const char *)pTagName);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnKeyValueTags(void *linux_side, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnKeyValueTags((UGCQueryHandle_t)handle, (bool)bReturnKeyValueTags);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnLongDescription(void *linux_side, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnLongDescription((UGCQueryHandle_t)handle, (bool)bReturnLongDescription);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnMetadata(void *linux_side, UGCQueryHandle_t handle, bool bReturnMetadata)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnMetadata((UGCQueryHandle_t)handle, (bool)bReturnMetadata);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnChildren(void *linux_side, UGCQueryHandle_t handle, bool bReturnChildren)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnChildren((UGCQueryHandle_t)handle, (bool)bReturnChildren);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnAdditionalPreviews(void *linux_side, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnAdditionalPreviews((UGCQueryHandle_t)handle, (bool)bReturnAdditionalPreviews);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetReturnTotalOnly(void *linux_side, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetReturnTotalOnly((UGCQueryHandle_t)handle, (bool)bReturnTotalOnly);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetLanguage(void *linux_side, UGCQueryHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetLanguage((UGCQueryHandle_t)handle, (const char *)pchLanguage);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetAllowCachedResponse(void *linux_side, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetAllowCachedResponse((UGCQueryHandle_t)handle, (uint32)unMaxAgeSeconds);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetCloudFileNameFilter(void *linux_side, UGCQueryHandle_t handle, const char *pMatchCloudFileName)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetCloudFileNameFilter((UGCQueryHandle_t)handle, (const char *)pMatchCloudFileName);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetMatchAnyTag(void *linux_side, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetMatchAnyTag((UGCQueryHandle_t)handle, (bool)bMatchAnyTag);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetSearchText(void *linux_side, UGCQueryHandle_t handle, const char *pSearchText)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetSearchText((UGCQueryHandle_t)handle, (const char *)pSearchText);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetRankedByTrendDays(void *linux_side, UGCQueryHandle_t handle, uint32 unDays)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetRankedByTrendDays((UGCQueryHandle_t)handle, (uint32)unDays);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddRequiredKeyValueTag(void *linux_side, UGCQueryHandle_t handle, const char *pKey, const char *pValue)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->AddRequiredKeyValueTag((UGCQueryHandle_t)handle, (const char *)pKey, (const char *)pValue);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RequestUGCDetails(void *linux_side, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->RequestUGCDetails((PublishedFileId_t)nPublishedFileID, (uint32)unMaxAgeSeconds);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_CreateItem(void *linux_side, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->CreateItem((AppId_t)nConsumerAppId, (EWorkshopFileType)eFileType);
    return (_ret);
}

UGCUpdateHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_StartItemUpdate(void *linux_side, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
    UGCUpdateHandle_t _ret;
    _ret = ((ISteamUGC*)linux_side)->StartItemUpdate((AppId_t)nConsumerAppId, (PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTitle(void *linux_side, UGCUpdateHandle_t handle, const char *pchTitle)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemTitle((UGCUpdateHandle_t)handle, (const char *)pchTitle);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemDescription(void *linux_side, UGCUpdateHandle_t handle, const char *pchDescription)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemDescription((UGCUpdateHandle_t)handle, (const char *)pchDescription);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemUpdateLanguage(void *linux_side, UGCUpdateHandle_t handle, const char *pchLanguage)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemUpdateLanguage((UGCUpdateHandle_t)handle, (const char *)pchLanguage);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemMetadata(void *linux_side, UGCUpdateHandle_t handle, const char *pchMetaData)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemMetadata((UGCUpdateHandle_t)handle, (const char *)pchMetaData);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemVisibility(void *linux_side, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemVisibility((UGCUpdateHandle_t)handle, (ERemoteStoragePublishedFileVisibility)eVisibility);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemTags(void *linux_side, UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t *pTags)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemTags((UGCUpdateHandle_t)updateHandle, (const SteamParamStringArray_t *)pTags);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemContent(void *linux_side, UGCUpdateHandle_t handle, const char *pszContentFolder)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemContent((UGCUpdateHandle_t)handle, (const char *)pszContentFolder);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetItemPreview(void *linux_side, UGCUpdateHandle_t handle, const char *pszPreviewFile)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->SetItemPreview((UGCUpdateHandle_t)handle, (const char *)pszPreviewFile);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemKeyValueTags(void *linux_side, UGCUpdateHandle_t handle, const char *pchKey)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->RemoveItemKeyValueTags((UGCUpdateHandle_t)handle, (const char *)pchKey);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemKeyValueTag(void *linux_side, UGCUpdateHandle_t handle, const char *pchKey, const char *pchValue)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->AddItemKeyValueTag((UGCUpdateHandle_t)handle, (const char *)pchKey, (const char *)pchValue);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubmitItemUpdate(void *linux_side, UGCUpdateHandle_t handle, const char *pchChangeNote)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->SubmitItemUpdate((UGCUpdateHandle_t)handle, (const char *)pchChangeNote);
    return (_ret);
}

EItemUpdateStatus cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemUpdateProgress(void *linux_side, UGCUpdateHandle_t handle, uint64 *punBytesProcessed, uint64 *punBytesTotal)
{
    EItemUpdateStatus _ret;
    _ret = ((ISteamUGC*)linux_side)->GetItemUpdateProgress((UGCUpdateHandle_t)handle, (uint64 *)punBytesProcessed, (uint64 *)punBytesTotal);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SetUserItemVote(void *linux_side, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->SetUserItemVote((PublishedFileId_t)nPublishedFileID, (bool)bVoteUp);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetUserItemVote(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->GetUserItemVote((PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_AddItemToFavorites(void *linux_side, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->AddItemToFavorites((AppId_t)nAppId, (PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_RemoveItemFromFavorites(void *linux_side, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->RemoveItemFromFavorites((AppId_t)nAppId, (PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SubscribeItem(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->SubscribeItem((PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_UnsubscribeItem(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUGC*)linux_side)->UnsubscribeItem((PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetNumSubscribedItems(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUGC*)linux_side)->GetNumSubscribedItems();
    return (_ret);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetSubscribedItems(void *linux_side, PublishedFileId_t *pvecPublishedFileID, uint32 cMaxEntries)
{
    uint32 _ret;
    _ret = ((ISteamUGC*)linux_side)->GetSubscribedItems((PublishedFileId_t *)pvecPublishedFileID, (uint32)cMaxEntries);
    return (_ret);
}

uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemState(void *linux_side, PublishedFileId_t nPublishedFileID)
{
    uint32 _ret;
    _ret = ((ISteamUGC*)linux_side)->GetItemState((PublishedFileId_t)nPublishedFileID);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemInstallInfo(void *linux_side, PublishedFileId_t nPublishedFileID, uint64 *punSizeOnDisk, char *pchFolder, uint32 cchFolderSize, uint32 *punTimeStamp)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetItemInstallInfo((PublishedFileId_t)nPublishedFileID, (uint64 *)punSizeOnDisk, (char *)pchFolder, (uint32)cchFolderSize, (uint32 *)punTimeStamp);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_GetItemDownloadInfo(void *linux_side, PublishedFileId_t nPublishedFileID, uint64 *punBytesDownloaded, uint64 *punBytesTotal)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->GetItemDownloadInfo((PublishedFileId_t)nPublishedFileID, (uint64 *)punBytesDownloaded, (uint64 *)punBytesTotal);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_DownloadItem(void *linux_side, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->DownloadItem((PublishedFileId_t)nPublishedFileID, (bool)bHighPriority);
    return (_ret);
}

bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_BInitWorkshopForGameServer(void *linux_side, DepotId_t unWorkshopDepotID, const char *pszFolder)
{
    bool _ret;
    _ret = ((ISteamUGC*)linux_side)->BInitWorkshopForGameServer((DepotId_t)unWorkshopDepotID, (const char *)pszFolder);
    return (_ret);
}

void cppISteamUGC_STEAMUGC_INTERFACE_VERSION007_SuspendDownloads(void *linux_side, bool bSuspend)
{
    ((ISteamUGC*)linux_side)->SuspendDownloads((bool)bSuspend);
}

#ifdef __cplusplus
}
#endif
