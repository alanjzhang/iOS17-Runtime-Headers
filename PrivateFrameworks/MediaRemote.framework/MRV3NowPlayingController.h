/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRV3NowPlayingController : NSObject <MRDestinationResolverDelegate, MRNowPlayingControllerImpl> {
    MRNowPlayingControllerConfiguration * _configuration;
    NSMutableArray * _deferredContentItemsToMerge;
    MRDestinationResolver * _destinationResolver;
    MRNowPlayingControllerHelper * _helper;
    bool  _isResolving;
    bool  _isUpdating;
    NSDate * _lastQueueRequestDate;
    MSVVariableIntervalTimer * _loadRetryTimer;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForNotifications;
    bool  _requestingQueue;
    MRNowPlayingPlayerResponse * _response;
}

@property (nonatomic, copy) MRNowPlayingControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deferredContentItemsToMerge;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) MRNowPlayingControllerDestination *destination;
@property (nonatomic, retain) MRDestinationResolver *destinationResolver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MRNowPlayingControllerHelper *helper;
@property (nonatomic) bool isResolving;
@property (nonatomic) bool isUpdating;
@property (nonatomic, retain) NSDate *lastQueueRequestDate;
@property (nonatomic, retain) MSVVariableIntervalTimer *loadRetryTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool registeredForNotifications;
@property (nonatomic) bool requestingQueue;
@property (nonatomic, copy) MRNowPlayingPlayerResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleClientPropertiesDidChange:(id)arg1;
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1;
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1;
- (void)_handlePlaybackStateChangedNotification:(id)arg1;
- (void)_handleSupportedCommandsChangedNotification:(id)arg1;
- (id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id*)arg2;
- (void)_notifyDelegateOfError:(id)arg1;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfNewResponse:(id)arg1;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)arg1;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)arg1;
- (void)_notifyDelegateOfPlayerPathChange:(id)arg1;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)arg1;
- (void)_notifyDelegateOfUpdatedArtwork:(id)arg1;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)arg1;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)arg1;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1;
- (void)_onQueue_clearStateForResolvedPlayerPath;
- (void)_registerNotificationHandlersForResolvedPlayerPath:(id)arg1;
- (void)_reloadWithReason:(id)arg1;
- (void)_requestClientPropertiesForPlayerPath:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_requestPlaybackQueueForPlayerPath:(id)arg1 request:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_unregisterNotificationHandlers;
- (void)beginLoadingUpdates;
- (void)beginResolving;
- (id)configuration;
- (void)dealloc;
- (id)debugDescription;
- (id)deferredContentItemsToMerge;
- (id)description;
- (id)destination;
- (id)destinationResolver;
- (void)destinationResolver:(id)arg1 didFailWithError:(id)arg2;
- (void)destinationResolver:(id)arg1 playerPathDidChange:(id)arg2;
- (void)destinationResolverDestinationDidInvalidate:(id)arg1;
- (void)destinationWithCompletion:(id /* block */)arg1;
- (void)endLoadingUpdates;
- (id)helper;
- (id)initWithConfiguration:(id)arg1;
- (bool)isResolving;
- (bool)isUpdating;
- (id)lastQueueRequestDate;
- (id)loadRetryTimer;
- (id)queue;
- (bool)registeredForNotifications;
- (bool)requestingQueue;
- (id)response;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 appOptions:(unsigned int)arg3 completion:(id /* block */)arg4;
- (void)setConfiguration:(id)arg1;
- (void)setDeferredContentItemsToMerge:(id)arg1;
- (void)setDestinationResolver:(id)arg1;
- (void)setHelper:(id)arg1;
- (void)setIsResolving:(bool)arg1;
- (void)setIsUpdating:(bool)arg1;
- (void)setLastQueueRequestDate:(id)arg1;
- (void)setLoadRetryTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegisteredForNotifications:(bool)arg1;
- (void)setRequestingQueue:(bool)arg1;
- (void)setResponse:(id)arg1;

@end
