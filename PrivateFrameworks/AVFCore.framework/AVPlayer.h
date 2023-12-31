/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayer : NSObject <AVAudioSessionParticipant, AVIntegrityChecking, RERemoteVideoPlayer> {
    AVPlayerInternal * _player;
}

@property (getter=_isPIPModePossible, nonatomic, readonly) bool PIPModePossible;
@property (getter=_STSLabel, setter=_setSTSLabel:, nonatomic, retain) NSString *STSLabel;
@property (setter=_setDisplaysUsedForPlayback:, nonatomic, copy) NSArray *_displaysUsedForPlayback;
@property (nonatomic, readonly) long long _externalProtectionStatus;
@property (getter=_supportsAdvanceTimeForOverlappedPlayback, setter=_setSupportsAdvanceTimeForOverlappedPlayback:, nonatomic) bool _supportsAdvanceTimeForOverlappedPlayback;
@property (nonatomic) bool allowsLegibleFallbackForAllAudibleMediaSelections;
@property bool allowsOutOfBandTextTrackRendering;
@property bool allowsPixelBufferPoolSharing;
@property bool appliesMediaSelectionCriteriaAutomatically;
@property (copy) NSString *audioOutputDeviceUniqueID;
@property (getter=isAudioPlaybackEnabledAtAllRates, nonatomic, readonly) bool audioPlaybackEnabledAtAllRates;
@property (retain) AVAudioSession *audioSession;
@property (nonatomic, copy) NSString *backgroundPIPAuthorizationToken;
@property (nonatomic, copy) NSString *captionPipelineStrategy;
@property (nonatomic, copy) NSString *captionRenderingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (readonly, copy) NSString *description;
@property bool disallowsAMRAudio;
@property (getter=_disallowsAutoPauseOnRouteRemovalIfNoAudio, setter=_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:, nonatomic) bool disallowsAutoPauseOnRouteRemovalIfNoAudio;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSilencedDueToConflictWithOtherPlayback;
@property (nonatomic, retain) AVPlayerMediaSelectionCriteria *legibleFallbackMediaSelectionCriteria;
@property (nonatomic, retain) <AVLoggingIdentifier> *loggingIdentifier;
@property float maxRateForAudioPlayback;
@property float minRateForAudioPlayback;
@property (copy) NSString *multichannelAudioStrategy;
@property (nonatomic, readonly) NSNumber *mxSessionID;
@property (getter=_participatesInAudioSession, setter=_setParticipatesInAudioSession:, nonatomic) bool participatesInAudioSession;
@property (readonly) AVPlayerPlaybackCoordinator *playbackCoordinator;
@property (nonatomic) unsigned long long preferredVideoDecoderGPURegistryID;
@property (nonatomic) bool prefersPlayingSilentlyWhenConflictingWithOtherPlayback;
@property (getter=_preservesAudioSessionSampleRate, setter=_setPreservesAudioSessionSampleRate:, nonatomic) bool preservesAudioSessionSampleRate;
@property (nonatomic) bool preventsAutomaticBackgroundingDuringVideoPlayback;
@property (nonatomic) bool preventsDisplaySleepDuringVideoPlayback;
@property (nonatomic) bool shouldWaitForVideoTarget;
@property (getter=_silencesOtherPlaybackDuringPIP, setter=_setSilencesOtherPlaybackDuringPIP:, nonatomic) bool silencesOtherPlaybackDuringPIP;
@property (readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *taggedBufferOutputs;
@property (nonatomic, readonly) NSArray *videoTargets;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (int)_createFigPlayerWithType:(long long)arg1 options:(struct __CFDictionary { }*)arg2 player:(struct OpaqueFigPlayer {}**)arg3;
+ (id)_makePlayerName;
+ (bool)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (bool)automaticallyNotifiesObserversOfCurrentItem;
+ (bool)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (bool)automaticallyNotifiesObserversOfRate;
+ (bool)automaticallyNotifiesObserversOfUserVolume;
+ (bool)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (bool)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (bool)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+ (bool)automaticallyNotifiesObserversOfVibrationPattern;
+ (long long)availableHDRModes;
+ (void)checkForAvailableHDRModesChanges;
+ (bool)eligibleForHDRPlayback;
+ (void)fireAvailableHDRModesDidChangeNotification;
+ (void)fireEligibleForHDRPlaybackDidChangeNotification;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)playerWithFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (void)registerForScreenConnectionChanges;
+ (bool)worksAroundConcurrentKVOCrash;

- (void)_addFPListeners;
- (void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2;
- (void)_addLayer:(id)arg1;
- (void)_addListenersToInterstitialCoordinator:(struct OpaqueFigPlayerInterstitialCoordinator { }*)arg1;
- (void)_addPlayerCaptionLayer:(id)arg1;
- (void)_advanceToNextItem;
- (bool)_airPlayVideoActive;
- (id)_ancillaryPerformanceInformationForDisplay;
- (void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(id /* block */)arg1;
- (void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(id /* block */)arg1;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (void)_attachVideoLayersToFigPlayer;
- (id)_avPlayerLayers;
- (bool)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
- (struct CGSize { double x1; double x2; })_cachedPresentationSizeOfCurrentItem;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id /* block */)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (id)_closedCaptionLayers;
- (struct __CVBuffer { }*)_copyDisplayedPixelBuffer;
- (struct OpaqueFigPlayer { }*)_copyFigPlayer;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_createAndConfigureFigPlayerWithType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (int)_createPrerollID;
- (void)_detachClosedCaptionLayersFromFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachVideoLayersFromFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)_evaluateDisplaySizeOfAllAttachedLayers;
- (bool)_externalPlaybackActive;
- (id)_externalPlaybackVideoGravity;
- (id)_fpNotificationNames;
- (bool)_getDisplayVideoRange:(id*)arg1 displaySize:(struct CGSize { double x1; double x2; }*)arg2 refreshRate:(id*)arg3;
- (bool)_hasForegroundLayers;
- (void)_insertItem:(id)arg1 afterItem:(id)arg2;
- (bool)_isAirPlayVideoActive;
- (bool)_isBufferedAirPlayActive;
- (bool)_isDisplayingClosedCaptions;
- (bool)_isMuted;
- (bool)_isVideoPlaybackAllowedWhileInBackground;
- (void)_itemIsReadyToPlay:(id)arg1;
- (id)_items;
- (id)_items_invokeOnIvarAccessQueue;
- (bool)_limitsBandwidthForCellularAccess;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (struct CGSize { double x1; double x2; })_maximumAVPlayerLayerDisplaySize;
- (id)_nameForLogging;
- (id)_nameForLogging_fromIvarAccessQueue;
- (void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1;
- (void)_noteNewPresentationSizeForPlayerItem:(id)arg1;
- (bool)_pausesAudioVisualPlaybackInBackground;
- (id)_pendingFigPlayerProperties;
- (id)_pendingFigPlayerPropertyForKey:(id)arg1;
- (id)_performanceDictionary;
- (id)_pixelBufferAttributeMediator;
- (void)_pixelBufferAttributesDidChangeForLayer:(id)arg1;
- (id)_playerCaptionLayers;
- (float)_playerVolume;
- (float)_rate;
- (bool)_rateDidChangeNotificationIncludesExtendedDiagnosticPayload;
- (id)_rateDidChangeNotificationPayloadForAVFRateChangeReason:(id)arg1 reasonIsExtendedDiagnostic:(bool)arg2 rateChangeIdentifier:(id)arg3 rateChangeOriginator:(id)arg4;
- (id)_rateDidChangeNotificationPayloadForFigRateChangeReason:(int)arg1 rateChangeIdentifier:(id)arg2 rateChangeOriginator:(id)arg3;
- (id)_rateState;
- (void)_removeAllItems;
- (void)_removeAllLayers;
- (void)_removeFPListeners;
- (void)_removeItem:(id)arg1;
- (void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_removeLayer:(id)arg1 videoLayer:(id)arg2 closedCaptionLayer:(id)arg3 subtitleLayer:(id)arg4 interstitialLayer:(id)arg5;
- (void)_removeListenersFromInterstitialCoordinator:(struct OpaqueFigPlayerInterstitialCoordinator { }*)arg1;
- (void)_removePlayerCaptionLayer:(id)arg1;
- (void)_removePropertyObserversOfCurrentItemCalledOnStateDispatchQueueChecked:(id)arg1;
- (bool)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(id /* block */)arg1 modificationBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(bool)arg2;
- (void)_setAncillaryPerformanceInformationForDisplay:(id)arg1;
- (void)_setCurrentItem:(id)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_setLimitsBandwidthForCellularAccess:(bool)arg1;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_setOptions:(id)arg1 onClosedCaptionLayer:(id)arg2;
- (void)_setPausesAudioVisualPlaybackInBackground:(bool)arg1;
- (void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2;
- (void)_setPrimaryPlayerNameForInterstitial:(id)arg1;
- (bool)_setRate:(float)arg1 rateChangeReason:(int)arg2 figPlayerSetRateHandler:(id /* block */)arg3;
- (void)_setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 playImmediately:(bool)arg3 rateChangeReason:(int)arg4 affectsCoordinatedPlayback:(bool)arg5;
- (void)_setRateDidChangeNotificationIncludesExtendedDiagnosticPayload:(bool)arg1;
- (void)_setSeparated:(bool)arg1 onClosedCaptionLayer:(id)arg2;
- (void)_setSuppressesAudioRendering:(bool)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setUsesLegacyAutomaticWaitingBehavior:(bool)arg1;
- (bool)_shouldLogPerformanceData;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_stateDispatchQueue;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_subtitleLayers;
- (bool)_suppressesAudioRendering;
- (id)_synchronizeWithNewCurrentItem;
- (id /* block */)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (id)_updateAudioSessionOnFigPlayer;
- (void)_updateAutomaticallyWaitsToMinimizeStallingOnFigPlayer;
- (void)_updateClosedCaptionLayerBounds:(id)arg1 videoRelativeToViewport:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 captionsAvoidanceMargins:(const struct NSEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer { }*)arg2;
- (void)_updatePixelBufferAttributesForLayer:(id)arg1;
- (void)_updateProxyTimebaseFromNewCurrentItem;
- (float)_userVolume;
- (bool)_usesLegacyAutomaticWaitingBehavior;
- (id)_videoLayers;
- (id)_weakReference;
- (long long)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)allowsAirPlayVideo;
- (bool)allowsExternalPlayback;
- (long long)audiovisualBackgroundPlaybackPolicy;
- (bool)automaticallyWaitsToMinimizeStalling;
- (void)cancelPendingPrerolls;
- (id)closedCaptionsDisplayPublisher;
- (id)currentItem;
- (id)currentItemPublisher;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentUnfoldedTime;
- (void)dealloc;
- (float)defaultRate;
- (id)dispatchQueue;
- (id)error;
- (id)expectedAssetTypes;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (struct __CFString { }*)figPlayerActionForActionAtItemEnd:(long long)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isAirPlayVideoActive;
- (bool)isClosedCaptionDisplayEnabled;
- (bool)isDisplayingClosedCaptions;
- (bool)isExternalPlaybackActive;
- (bool)isMuted;
- (struct OpaqueCMClock { }*)masterClock;
- (id)outputContext;
- (void)pause;
- (void)pauseWithoutAffectingCoordinatedPlayback;
- (void)play;
- (void)playImmediatelyAtRate:(float)arg1;
- (id)playerRole;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prerollAtRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)prerollOperationDidComplete:(bool)arg1 notificationPayload:(struct __CFDictionary { }*)arg2;
- (float)rate;
- (id)reasonForWaitingToPlay;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (long long)resourceConservationLevelWhilePaused;
- (void)seekToDate:(id)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsAirPlayVideo:(bool)arg1;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAudiovisualBackgroundPlaybackPolicy:(long long)arg1;
- (void)setAutomaticallyWaitsToMinimizeStalling:(bool)arg1;
- (void)setClosedCaptionDisplayEnabled:(bool)arg1;
- (void)setDefaultRate:(float)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOutputContext:(id)arg1;
- (void)setPlayerRole:(id)arg1;
- (void)setPlayerRole:(id)arg1 synchronously:(bool)arg2;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 options:(id)arg4;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setResourceConservationLevelWhilePaused:(long long)arg1;
- (void)setShouldReduceResourceUsage:(bool)arg1;
- (void)setSourceClock:(struct OpaqueCMClock { }*)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(bool)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVibrationPattern:(id)arg1;
- (void)setVolume:(float)arg1;
- (bool)shouldReduceResourceUsage;
- (struct OpaqueCMClock { }*)sourceClock;
- (long long)status;
- (long long)timeControlStatus;
- (bool)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (bool)usesAudioOnlyModeForExternalPlayback;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vibrationPattern;
- (float)volume;

// AVPlayer (AVIntegrityChecking)

- (bool)isDefunct;

// AVPlayer (AVPlayerAdvanceWithOverlap)

- (void)_setSupportsAdvanceTimeForOverlappedPlayback:(bool)arg1;
- (bool)_supportsAdvanceTimeForOverlappedPlayback;

// AVPlayer (AVPlayerAudioDeviceSupport)

+ (bool)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;

- (id)audioOutputDeviceUniqueID;
- (bool)autoSwitchStreamVariants;
- (bool)preparesItemsForPlaybackAsynchronously;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (void)setAutoSwitchStreamVariants:(bool)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(bool)arg1;

// AVPlayer (AVPlayerAudioPlaybackRateLimits)

- (bool)isAudioPlaybackEnabledAtAllRates;
- (float)maxRateForAudioPlayback;
- (float)minRateForAudioPlayback;
- (void)removeAudioPlaybackRateLimits;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (void)setMinRateForAudioPlayback:(float)arg1;

// AVPlayer (AVPlayerAudioSessionParticipant)

- (bool)_participatesInAudioSession;
- (bool)_preservesAudioSessionSampleRate;
- (void)_setParticipatesInAudioSession:(bool)arg1;
- (void)_setPreservesAudioSessionSampleRate:(bool)arg1;
- (id)audioSession;
- (void)setAudioSession:(id)arg1;

// AVPlayer (AVPlayerAutoPauseOnRouteRemoval)

- (bool)_disallowsAutoPauseOnRouteRemovalIfNoAudio;
- (void)_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:(bool)arg1;

// AVPlayer (AVPlayerAutomaticBackgroundPrevention)

- (bool)preventsAutomaticBackgroundingDuringVideoPlayback;
- (void)setPreventsAutomaticBackgroundingDuringVideoPlayback:(bool)arg1;

// AVPlayer (AVPlayerAutomaticMediaSelection)

- (id)_cachedMediaSelectionCriteria;
- (bool)appliesMediaSelectionCriteriaAutomatically;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)setAppliesMediaSelectionCriteriaAutomatically:(bool)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;

// AVPlayer (AVPlayerAutomaticMediaSelectionPrivate)

- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;

// AVPlayer (AVPlayerCaptionStrategySelection)

- (id)captionPipelineStrategy;
- (id)captionRenderingStrategy;
- (void)setCaptionPipelineStrategy:(id)arg1;
- (void)setCaptionRenderingStrategy:(id)arg1;

// AVPlayer (AVPlayerFormatRestrictions)

- (bool)disallowsAMRAudio;
- (bool)disallowsHardwareAcceleratedVideoDecoder;
- (void)setDisallowsAMRAudio:(bool)arg1;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(bool)arg1;

// AVPlayer (AVPlayerImplicitInterruption)

- (bool)_ensuresActiveAudioSessionWhenStartingPlayback;
- (void)_setEnsuresActiveAudioSessionWhenStartingPlayback:(bool)arg1;

// AVPlayer (AVPlayerInterstitialSupport_Internal)

- (struct OpaqueFigPlayerInterstitialCoordinator { }*)_copyInterstitialCoordinator;
- (struct OpaqueFigPlayerInterstitialCoordinator { }*)_copyInterstitialCoordinatorIfCreated;
- (struct OpaqueFigPlayerInterstitialCoordinator { }*)_copyInterstitialEventCoordinatorEnsuringItIsRemote:(bool)arg1 forceCreate:(bool)arg2;
- (bool)_hasCurrentInterstitialEvent;
- (id)_interstitialPlayerIfCreated;
- (bool)_isInterstitialPlayer;
- (void)_linkAndSyncAudioSessionWithInterstitialPlayer:(id)arg1;
- (void)_noteCurrentRemoteInterstitialEvent:(id)arg1;
- (void)_noteRemoteInterstitialEvents:(id)arg1 forItem:(id)arg2;
- (void)_setInterstitialEventCoordinator:(struct OpaqueFigPlayerInterstitialCoordinator { }*)arg1;
- (void)_setInterstitialEventCoordinator_invokeOnIvarAccessQueue:(struct OpaqueFigPlayerInterstitialCoordinator { }*)arg1;
- (void)_setInterstitialPlayer:(id)arg1;
- (void)_setInterstitialPlayerGuts_invokeOnIvarAccessQueue:(id)arg1;
- (void)_setIsInterstitialPlayer:(bool)arg1;
- (id)interstitialPlayer;
- (void)syncAudioSessionToInterstitialPlayer:(id)arg1;

// AVPlayer (AVPlayerLegibleFallback)

- (bool)allowsLegibleFallbackForAllAudibleMediaSelections;
- (id)legibleFallbackMediaSelectionCriteria;
- (void)setAllowsLegibleFallbackForAllAudibleMediaSelections:(bool)arg1;
- (void)setLegibleFallbackMediaSelectionCriteria:(id)arg1;

// AVPlayer (AVPlayerLoggingIdentifier)

+ (id)makePlayerLoggingIdentifier;

- (id)loggingIdentifier;
- (void)setLoggingIdentifier:(id)arg1;

// AVPlayer (AVPlayerMultichannelAudioStrategy)

- (id)multichannelAudioStrategy;
- (void)setMultichannelAudioStrategy:(id)arg1;

// AVPlayer (AVPlayerMultitaskSupport)

+ (bool)isIAPDExtendedModeActive;

- (id)_acquireBackgroundAssertion;
- (bool)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (bool)_canContinuePlaybackInBackgrounBasedOnAudiovisualBackgroundPlaybackPolicy:(long long)arg1;
- (bool)_carplayIsActive;
- (void)_detachVideoLayersForSuspension;
- (void)_didEnterBackground:(id)arg1;
- (void)_didFinishSuspension:(id)arg1;
- (void)_ensureVideoLayersAreAttached;
- (bool)_hasAssociatedAVPlayerLayerInPIPMode;
- (bool)_hasAssociatedOnscreenAVPlayerLayer;
- (bool)_isIAPDExtendedModeActive;
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (void)_layerForegroundStateChanged:(id)arg1;
- (bool)_rateUpdateDuringTransitionDecided;
- (bool)_shouldDetachVideoLayersFromFigPlayer;
- (void)_willEnterForeground:(id)arg1;

// AVPlayer (AVPlayerOutOfBandTextTrackRendering)

- (bool)allowsOutOfBandTextTrackRendering;
- (void)setAllowsOutOfBandTextTrackRendering:(bool)arg1;

// AVPlayer (AVPlayerPIPSupport)

- (void)_setSilencesOtherPlaybackDuringPIP:(bool)arg1;
- (bool)_silencesOtherPlaybackDuringPIP;
- (id)backgroundPIPAuthorizationToken;
- (bool)isSilencedDueToConflictWithOtherPlayback;
- (id)mxSessionID;
- (bool)prefersPlayingSilentlyWhenConflictingWithOtherPlayback;
- (void)setBackgroundPIPAuthorizationToken:(id)arg1;
- (void)setPrefersPlayingSilentlyWhenConflictingWithOtherPlayback:(bool)arg1;

// AVPlayer (AVPlayerPixelBufferPoolSharing)

- (bool)allowsPixelBufferPoolSharing;
- (void)setAllowsPixelBufferPoolSharing:(bool)arg1;

// AVPlayer (AVPlayerProtectedContentPrivate)

- (id)_displaysUsedForPlayback;
- (long long)_externalProtectionStatus;
- (long long)_externalProtectionStatusCopiedFromFig;
- (long long)_extractFPExternalProtectionStatus:(id)arg1;
- (id)_playbackDisplaysForFigPlayer;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (bool)outputObscuredDueToInsufficientExternalProtection;

// AVPlayer (AVPlayerSTSLabel)

- (id)_STSLabel;
- (void)_setSTSLabel:(id)arg1;

// AVPlayer (AVPlayerSupportForMediaPlayer)

- (bool)_CALayerDestinationIsTVOut;
- (id)_clientName;
- (long long)_clientPriority;
- (bool)_disallowsVideoLayerDisplayCompositing;
- (bool)_isConnectedToPhysicalSecondScreen;
- (bool)_preventsSleepDuringVideoPlayback;
- (bool)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setCALayerDestinationIsTVOut:(bool)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setClientPriority:(long long)arg1;
- (void)_setDisallowsVideoLayerDisplayCompositing:(bool)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setPreventsSleepDuringVideoPlayback:(bool)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(bool)arg1;
- (void)_updateConnectionToSecondScreen;

// AVPlayer (AVPlayerTaggedBufferOutputSupport)

- (void)addTaggedBufferOutput:(id)arg1;
- (void)removeTaggedBufferOutput:(id)arg1;
- (id)taggedBufferOutputs;

// AVPlayer (AVPlayerVideoDecoderGPUSupport)

- (unsigned long long)preferredVideoDecoderGPURegistryID;
- (void)setPreferredVideoDecoderGPURegistryID:(unsigned long long)arg1;

// AVPlayer (AVPlayerVideoDisplaySleepPrevention)

- (bool)preventsDisplaySleepDuringVideoPlayback;
- (void)setPreventsDisplaySleepDuringVideoPlayback:(bool)arg1;

// AVPlayer (AVPlayer_PIPSupport)

- (bool)_isPIPModePossible;

// AVPlayer (FigVideoTargetSupport)

- (struct OpaqueFigVideoTarget { }*)_interstitialVideoTargetForPrimaryVideoTarget:(struct OpaqueFigVideoTarget { }*)arg1;
- (void)_updateVideoTargetOnFigPlayer:(id)arg1 synchronously:(bool)arg2;
- (void)addVideoTarget:(struct OpaqueFigVideoTarget { }*)arg1;
- (void)removeVideoTarget:(struct OpaqueFigVideoTarget { }*)arg1;
- (void)setActiveVideoTargetsForInterstitials:(unsigned char)arg1;
- (void)setShouldWaitForVideoTarget:(bool)arg1;
- (bool)shouldWaitForVideoTarget;
- (id)videoTargets;

// AVPlayer (FigVideoTargetSupport_Internal)

- (void)removeVideoTarget:(struct OpaqueFigVideoTarget { }*)arg1 synchronously:(bool)arg2;

// AVPlayer (PlaybackCoordination)

- (bool)_clientRequestedPlaybackCoordinator;
- (void)_ensureFigPlaybackCoordinatorIsConnected;
- (id)_playbackCoordinatorWithoutTriggeringFullSetup;
- (id)playbackCoordinator;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/AVFoundation.axbundle/AVFoundation

- (void)_accessibilityAsyncObserveAVPlayerIfNeeded;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (id)init;
- (void)willChangeValueForKey:(id)arg1;

// AVPlayer (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreRE.framework/CoreRE

// AVPlayer (RE)

- (id)addEndpoint:(id)arg1;
- (bool)hasMediaCharacteristicAudible;
- (void)removeEndpoint:(id)arg1;
- (void)setSTSLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })videoTrackNaturalSize;

@end
