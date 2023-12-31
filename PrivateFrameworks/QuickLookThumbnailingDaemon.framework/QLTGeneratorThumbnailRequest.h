/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
 */

@interface QLTGeneratorThumbnailRequest : NSObject {
    NSObject<OS_os_activity> * _activity;
    unsigned long long  _badgeType;
    NSObject<OS_dispatch_group> * _batchDispatchGroup;
    bool  _cancelled;
    bool  _didCheckCache;
    QLDiskStore * _diskStore;
    id /* block */  _downloadCompletionHandler;
    NSError * _generationError;
    <QLIncrementalThumbnailGenerationHandler> * _generationHandler;
    QLPreviewThumbnailGenerator * _generator;
    unsigned long long  _handledRequestedTypes;
    bool  _isDownloaded;
    bool  _isDownloadedKnown;
    bool  _isUbiquitous;
    bool  _isUbiquitousKnown;
    FPItem * _item;
    QLThumbnailGenerationRequest * _request;
    NSNumber * _requestBadgeType;
    unsigned long long  _successfullyHandldedRequestedTypes;
    NSURL * _taggedLogicalURL;
    NSObject<OS_os_activity> * _topActivity;
}

@property (retain) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) unsigned long long badgeType;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *batchDispatchGroup;
@property (readonly) bool cacheEnabled;
@property bool cancelled;
@property bool didCheckCache;
@property (retain) QLDiskStore *diskStore;
@property (copy) id /* block */ downloadCompletionHandler;
@property (nonatomic, retain) NSError *generationError;
@property (nonatomic, readonly) <QLIncrementalThumbnailGenerationHandler> *generationHandler;
@property (nonatomic, retain) QLPreviewThumbnailGenerator *generator;
@property (nonatomic) unsigned long long handledRequestedTypes;
@property bool isDownloaded;
@property bool isDownloadedKnown;
@property bool isUbiquitous;
@property bool isUbiquitousKnown;
@property (retain) FPItem *item;
@property (nonatomic, readonly) QLThumbnailGenerationRequest *request;
@property (nonatomic, retain) NSNumber *requestBadgeType;
@property (nonatomic) unsigned long long successfullyHandldedRequestedTypes;
@property (retain) NSURL *taggedLogicalURL;
@property (retain) NSObject<OS_os_activity> *topActivity;
@property (nonatomic, readonly) unsigned long long unhandledRequestedTypes;

- (void).cxx_destruct;
- (void)_adjustRequestInformationIfNeeded;
- (unsigned long long)_requestedTypesForRepresentationType:(long long)arg1;
- (id)activity;
- (void)addTypeToHandledTypes:(long long)arg1;
- (void)addTypeToSuccessfullyHandledTypes:(long long)arg1;
- (unsigned long long)badgeType;
- (id)batchDispatchGroup;
- (bool)cacheEnabled;
- (void)cancel;
- (bool)cancelled;
- (long long)compare:(id)arg1;
- (void)computeUbiquitousnessWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (bool)didCheckCache;
- (id)diskStore;
- (id /* block */)downloadCompletionHandler;
- (void)fetchFPItemWithCompletionHandler:(id /* block */)arg1;
- (void)fetchURLWithCompletionHandler:(id /* block */)arg1;
- (id)generationError;
- (id)generationHandler;
- (id)generator;
- (unsigned long long)handledRequestedTypes;
- (bool)hasHandledAllRequestedTypesOrMostRepresentativeType;
- (id)initWithRequest:(id)arg1 generationHandler:(id)arg2 batchDispatchGroup:(id)arg3;
- (bool)isDownloaded;
- (bool)isDownloadedKnown;
- (bool)isUbiquitous;
- (bool)isUbiquitousKnown;
- (id)item;
- (bool)needsLowQualityThumbnailGeneration;
- (id)request;
- (id)requestBadgeType;
- (void)setActivity:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDidCheckCache:(bool)arg1;
- (void)setDiskStore:(id)arg1;
- (void)setDownloadCompletionHandler:(id /* block */)arg1;
- (void)setGenerationError:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setHandledRequestedTypes:(unsigned long long)arg1;
- (void)setIsDownloaded:(bool)arg1;
- (void)setIsDownloadedKnown:(bool)arg1;
- (void)setIsUbiquitous:(bool)arg1;
- (void)setIsUbiquitousKnown:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setRequestBadgeType:(id)arg1;
- (void)setSuccessfullyHandldedRequestedTypes:(unsigned long long)arg1;
- (void)setTaggedLogicalURL:(id)arg1;
- (void)setTopActivity:(id)arg1;
- (bool)shouldGenerateLowQualityThumbnailOnCacheMiss;
- (unsigned long long)successfullyHandldedRequestedTypes;
- (id)taggedLogicalURL;
- (id)topActivity;
- (unsigned long long)unhandledRequestedTypes;

@end
