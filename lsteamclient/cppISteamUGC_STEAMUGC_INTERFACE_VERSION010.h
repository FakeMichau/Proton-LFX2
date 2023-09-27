struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    AccountID_t unAccountID;
    EUserUGCList eListType;
    EUGCMatchingUGCType eMatchingUGCType;
    EUserUGCListSortOrder eSortOrder;
    AppId_t nCreatorAppID;
    AppId_t nConsumerAppID;
    uint32 unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    EUGCQuery eQueryType;
    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType;
    AppId_t nCreatorAppID;
    AppId_t nConsumerAppID;
    uint32 unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest_params
{
    void *linux_side;
    UGCQueryHandle_t _ret;
    PublishedFileId_t *pvecPublishedFileID;
    uint32 unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateQueryUGCDetailsRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCQueryHandle_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    winSteamUGCDetails_t_142 *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    char *pchURL;
    uint32 cchURLSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCPreviewURL_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    char *pchMetadata;
    uint32 cchMetadatasize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    PublishedFileId_t *pvecPublishedFileID;
    uint32 cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    EItemStatistic eStatType;
    uint64 *pStatValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCStatistic_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews_params
{
    void *linux_side;
    uint32 _ret;
    UGCQueryHandle_t handle;
    uint32 index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    uint32 previewIndex;
    char *pchURLOrVideoID;
    uint32 cchURLSize;
    char *pchOriginalFileName;
    uint32 cchOriginalFileNameSize;
    EItemPreviewType *pPreviewType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCAdditionalPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags_params
{
    void *linux_side;
    uint32 _ret;
    UGCQueryHandle_t handle;
    uint32 index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCNumKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 index;
    uint32 keyValueTagIndex;
    char *pchKey;
    uint32 cchKeySize;
    char *pchValue;
    uint32 cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetQueryUGCKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnOnlyIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnOnlyIDs_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnKeyValueTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnMetadata;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnChildren;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnAdditionalPreviews;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetReturnPlaytimeStats_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    uint32 unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    UGCQueryHandle_t handle;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddRequiredKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
    uint32 unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    AppId_t nConsumerAppId;
    EWorkshopFileType eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate_params
{
    void *linux_side;
    UGCUpdateHandle_t _ret;
    AppId_t nConsumerAppId;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemUpdateLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchMetaData;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    ERemoteStoragePublishedFileVisibility eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t updateHandle;
    const SteamParamStringArray_t *pTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchKey;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszPreviewFile;
    EItemPreviewType type;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    uint32 index;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    uint32 index;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UpdateItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview_params
{
    void *linux_side;
    bool _ret;
    UGCUpdateHandle_t handle;
    uint32 index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    UGCUpdateHandle_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress_params
{
    void *linux_side;
    EItemUpdateStatus _ret;
    UGCUpdateHandle_t handle;
    uint64 *punBytesProcessed;
    uint64 *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
    bool bVoteUp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    AppId_t nAppId;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddItemToFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    AppId_t nAppId;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveItemFromFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems_params
{
    void *linux_side;
    uint32 _ret;
    PublishedFileId_t *pvecPublishedFileID;
    uint32 cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState_params
{
    void *linux_side;
    uint32 _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    uint64 *punSizeOnDisk;
    char *pchFolder;
    uint32 cchFolderSize;
    uint32 *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    uint64 *punBytesDownloaded;
    uint64 *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    PublishedFileId_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DownloadItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer_params
{
    void *linux_side;
    bool _ret;
    DepotId_t unWorkshopDepotID;
    const char *pszFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_BInitWorkshopForGameServer_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_SuspendDownloads_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t *pvecPublishedFileID;
    uint32 unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StartPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t *pvecPublishedFileID;
    uint32 unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_StopPlaytimeTrackingForAllItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nParentPublishedFileID;
    PublishedFileId_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nParentPublishedFileID;
    PublishedFileId_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
    AppId_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_AddAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
    AppId_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_RemoveAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_GetAppDependencies_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PublishedFileId_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION010_DeleteItem_params *params );

