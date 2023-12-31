/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShare : PHAssetCollection <PHShare> {
    unsigned long long  _assetCount;
    NSDate * _creationDate;
    NSDate * _expiryDate;
    unsigned long long  _photosCount;
    PHMomentSharePreview * _preview;
    NSData * _previewData;
    short  _publicPermission;
    short  _publishState;
    NSString * _scopeIdentifier;
    NSURL * _shareURL;
    bool  _shouldIgnoreBudgets;
    bool  _shouldNotifyOnUploadCompletion;
    unsigned short  _status;
    NSData * _thumbnailImageData;
    unsigned short  _trashedState;
    unsigned long long  _uploadedPhotosCount;
    unsigned long long  _uploadedVideosCount;
    unsigned long long  _videosCount;
}

@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) PHMomentSharePreview *preview;
@property (nonatomic, readonly) NSData *previewData;
@property (nonatomic, readonly) short publicPermission;
@property (nonatomic, readonly) short publishState;
@property (nonatomic, readonly) NSString *scopeIdentifier;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) bool shouldIgnoreBudgets;
@property (nonatomic, readonly) bool shouldNotifyOnUploadCompletion;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned short status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *thumbnailImageData;
@property (nonatomic, readonly) unsigned short trashedState;
@property (nonatomic, readonly) unsigned long long uploadedPhotosCount;
@property (nonatomic, readonly) unsigned long long uploadedVideosCount;
@property (nonatomic, readonly) unsigned long long videosCount;

+ (id)_fetchLocalMomentShareWithUUID:(id)arg1 error:(id*)arg2;
+ (id)entityKeyMap;
+ (id)fetchLocalMomentShareFromShareURL:(id)arg1 error:(id*)arg2 options:(id)arg3;
+ (void)fetchMomentShareFromShareURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)fetchMomentSharesOverlappingAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsShareExpiredState;
+ (bool)managedObjectSupportsShareTrashedState;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (void)acceptMomentShareWithCompletion:(id /* block */)arg1;
- (unsigned long long)assetCount;
- (Class)changeRequestClass;
- (id)creationDate;
- (id)description;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (id)expiryDate;
- (void)forceSyncMomentShareWithCompletion:(id /* block */)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (unsigned long long)photosCount;
- (id)preview;
- (id)previewData;
- (short)publicPermission;
- (void)publishMomentShareWithCompletionHandler:(id /* block */)arg1;
- (short)publishState;
- (id)scopeIdentifier;
- (id)shareURL;
- (bool)shouldIgnoreBudgets;
- (bool)shouldNotifyOnUploadCompletion;
- (bool)shouldPromptUserToIgnoreBudgets;
- (bool)shouldSuggestShareBack;
- (unsigned short)status;
- (id)thumbnailImageData;
- (unsigned short)trashedState;
- (unsigned long long)uploadedPhotosCount;
- (unsigned long long)uploadedVideosCount;
- (unsigned long long)videosCount;

// PHMomentShare (PHDebugUtilities)

+ (id)invitedMomentSharesExpiringInDays:(unsigned long long)arg1;

@end
