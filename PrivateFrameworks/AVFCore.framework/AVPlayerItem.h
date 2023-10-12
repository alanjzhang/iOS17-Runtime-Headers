/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerItem : NSObject <AVIntegrityChecking, NSCopying> {
    AVPlayerItemInternal * _playerItem;
}

@property (retain) <NSObject><NSCopying> *AVKitData;
@property (getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:, nonatomic) bool _externalProtectionRequiredForPlayback;
@property (getter=_isRental, nonatomic, readonly) bool _rental;
@property (nonatomic, readonly) NSDate *_rentalExpirationDate;
@property (nonatomic, readonly) NSDate *_rentalPlaybackExpirationDate;
@property (getter=_isRentalPlaybackStarted, nonatomic, readonly) bool _rentalPlaybackStarted;
@property (nonatomic, readonly) NSDate *_rentalPlaybackStartedDate;
@property (nonatomic, readonly) NSDate *_rentalStartDate;
@property (getter=isApplicationAuthorizedForPlayback, nonatomic, readonly) bool applicationAuthorizedForPlayback;
@property (getter=isAuthorizationRequiredForPlayback, nonatomic, readonly) bool authorizationRequiredForPlayback;
@property (nonatomic) bool automaticallyHandlesInterstitialEvents;
@property (nonatomic, readonly) NSString *avkitACMIdentifier;
@property (nonatomic, readonly) AVEditBehaviorContext *avkit_currentEditBehaviorContext;
@property (nonatomic, readonly) AVMusicAppBehaviorContext *avkit_musicAppBehaviorContext;
@property (getter=isContentAuthorizedForPlayback, nonatomic, readonly) bool contentAuthorizedForPlayback;
@property (nonatomic, retain) NSAttributedString *contentSubtitle;
@property (nonatomic, retain) NSAttributedString *contentTitle;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVMediaContentRating *mediaContentRating;
@property (nonatomic, readonly) NSArray *mediaDataCollectors;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVPlayerItem *templatePlayerItem;
@property (nonatomic, readonly) TLAlertQueuePlayerItemHapticTracks *tl_hapticTracks;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (struct OpaqueCMTimebase { }*)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
+ (int)_createFigPlaybackItemForFigPlayer:(struct OpaqueFigPlayer { }*)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned int)arg4 options:(struct __CFDictionary { }*)arg5 playbackItem:(struct OpaqueFigPlaybackItem {}**)arg6;
+ (bool)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (bool)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (bool)_hasOverrideForSelector:(SEL)arg1;
+ (bool)automaticallyNotifiesObserversOfAllowProgressiveResume;
+ (bool)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+ (bool)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (bool)automaticallyNotifiesObserversOfAsset;
+ (bool)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (bool)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (bool)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (bool)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (bool)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (bool)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (bool)automaticallyNotifiesObserversOfPresentationSize;
+ (bool)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (bool)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (bool)automaticallyNotifiesObserversOfStatus;
+ (bool)automaticallyNotifiesObserversOfTracks;
+ (bool)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+ (bool)automaticallyNotifiesObserversOfVariantIndex;
+ (void)initialize;
+ (id)playerItemWithAsset:(id)arg1;
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
+ (id)playerItemWithURL:(id)arg1;

- (struct CGSize { double x1; double x2; })IFramePrefetchTargetDimensions;
- (unsigned int)RTCReportingFlags;
- (int)_CreateSeekID;
- (id)_URL;
- (void)_addFAListeners;
- (void)_addFPListeners;
- (void)_addFoldedTBListeners;
- (void)_addInterstitialEventCollector;
- (void)_addInterstitialEventCollectorLocked:(bool)arg1;
- (void)_addSyncLayer:(id)arg1;
- (bool)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2;
- (void)_applyCurrentAudioMix;
- (void)_applyCurrentVideoComposition;
- (void)_applyMediaSelectionOptions;
- (void)_attachToFigPlayer;
- (void)_attachToPlayer:(id)arg1;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (id)_cachedTracks;
- (bool)_canPlayFastForward;
- (bool)_canPlayFastReverse;
- (bool)_canPlayReverse;
- (bool)_canStepBackward;
- (bool)_canStepForward;
- (void)_cancelPendingSeekAndRegisterSeekID:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_clearCachedMediaSelectionGroup:(id)arg1;
- (bool)_configurePlaybackItemAndReturnError:(id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_configuredTimeOffsetFromLive;
- (struct OpaqueFigCPEProtector { }*)_copyFigCPEProtector;
- (struct OpaqueFigPlaybackItem { }*)_copyFigPlaybackItem;
- (struct OpaqueFigPlaybackItem { }*)_copyFigPlaybackItemLocked:(bool)arg1;
- (struct OpaqueCMTimebase { }*)_copyFoldedTimebase;
- (struct OpaqueCMTimebase { }*)_copyProxyFoldedTimebase;
- (struct OpaqueCMTimebase { }*)_copyProxyTimebase;
- (struct OpaqueCMTimebase { }*)_copyProxyUnfoldedTimebase;
- (id)_copyStateDispatchQueue;
- (struct OpaqueCMTimebase { }*)_copyUnfoldedFigTimebase;
- (id)_currentMediaSelectionFromFigSelectedMediaArray:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_currentTimeWithOptionalFoldedTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (double)_delayPreparingItemForTestingOnly;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_duration;
- (id)_enabledTrackFormatDescriptions;
- (id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1;
- (id)_figSelectedMediaArray;
- (id)_fpNotificationNames;
- (bool)_getCachedPresentationSize:(struct CGSize { double x1; double x2; }*)arg1;
- (void)_getVideoComposition:(id*)arg1 customVideoCompositorSession:(id*)arg2 figVideoCompositor:(struct OpaqueFigVideoCompositor {}**)arg3;
- (bool)_hasEnabledAudio;
- (bool)_hasEnabledVideo;
- (bool)_hasEnqueuedVideoFrame;
- (bool)_hasSelectionInCachedMediaSelectionGroup:(id)arg1;
- (void)_informObserversAboutAvailabilityOfCurrentMediaSelection;
- (void)_informObserversAboutAvailabilityOfDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks:(id)arg1;
- (void)_insertAfterItem:(id)arg1;
- (void)_invokeReadyForEnqueueingHandlers;
- (bool)_isAFileBasedItemThatsReadyToPlay;
- (bool)_isFigAssetReadyForInspectionOfMediaSelectionOptions;
- (bool)_isFigAssetReadyForInspectionOfMediaSelectionOptionsAndFigPlaybackItemIsReadyForInspection;
- (bool)_isNonForcedSubtitleDisplayEnabled;
- (bool)_isReadyForBasicInspection;
- (bool)_isReadyForInspectionOfDuration;
- (bool)_isReadyForInspectionOfPresentationSize;
- (bool)_isReadyForInspectionOfRecommendedTimeOffsetFromLive;
- (bool)_isReadyForInspectionOfTracks;
- (void)_kickAssetObserversIfAppropriate;
- (id)_loadedTimeRanges;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id /* block */)arg1;
- (void)_markAsNeedingNewAssetWithFigPlaybackItem;
- (void)_markAsReadyForBasicInspection;
- (void)_markAsReadyForInspectionOfDuration;
- (void)_markAsReadyForInspectionOfPresentationSize;
- (void)_markAsReadyForInspectionOfRecommendedTimeOffsetFromLive;
- (void)_markAsReadyForInspectionOfTracks;
- (void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
- (void)_markFigAssetAsReadyForInspectionOfMediaSelectionOptions;
- (id)_mediaOptionsSelectedByClient;
- (id)_mediaOptionsSelectedByClientForKey:(id)arg1;
- (id)_nameForLogging;
- (id)_nextItem;
- (id)_playbackCoordinator;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary { }*)arg1;
- (id)_playbackProperties;
- (id)_player;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (id)_playerConnection;
- (void)_postSeekCompletionNotificationWithSeekID:(int)arg1 andResult:(bool)arg2;
- (struct CGSize { double x1; double x2; })_presentationSize;
- (id)_previousItem;
- (id)_propertyListForMediaSelection:(id)arg1 forGroup:(id)arg2;
- (id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (void)_quietlySetVariantIndex:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_recommendedTimeOffsetFromLive;
- (void)_removeFAListeners;
- (void)_removeFPListeners;
- (void)_removeFoldedTBListeners;
- (void)_removeFromItems;
- (void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
- (void)_removeInterstitialEventCollector;
- (void)_removeInterstitialEventCollectorLocked:(bool)arg1;
- (void)_removeMediaOptionsSelectedByClient;
- (void)_removeSyncLayer:(id)arg1;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 seekID:(int)arg4 completionHandler:(id /* block */)arg5;
- (id)_seekableTimeRanges;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;
- (bool)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)_setAsset:(id)arg1;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1 forTrackID:(int)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;
- (void)_setCurrentMediaSelection:(id)arg1;
- (void)_setDelayPreparingItemForTestingOnly:(double)arg1;
- (void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2;
- (void)_setPlaybackCoordinator:(id)arg1;
- (void)_setSuppressesVideoLayers:(bool)arg1;
- (void)_setSyncLayersOnFigPlaybackItem;
- (void)_setTimeJumpedNotificationIncludesExtendedDiagnosticPayload:(bool)arg1;
- (void)_setTimedMetadata:(id)arg1;
- (void)_setURL:(id)arg1;
- (void)_setVideoCompositionColorPrimaries:(id)arg1;
- (void)_setVideoCompositionColorTransferFunction:(id)arg1;
- (void)_setVideoCompositionColorYCbCrMatrix:(id)arg1;
- (void)_setVideoCompositionFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoCompositionHDRDisplayMetadataPolicy:(id)arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVideoCompositionSourceSampleDataTrackIDs:(id)arg1;
- (void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1;
- (void)_setVideoCompositor:(void*)arg1;
- (unsigned char)_snapTimeToPausePlayback;
- (bool)_suppressesVideoLayers;
- (bool)_suppressionForOutputs:(id)arg1;
- (id)_syncLayers;
- (bool)_timeJumpedNotificationIncludesExtendedDiagnosticPayload;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_timeToPauseBuffering;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_timeToPausePlayback;
- (id)_trackWithTrackID:(int)arg1;
- (id)_tracks;
- (id)_tracksFromAssetTrackIDs;
- (id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(bool)arg2;
- (void)_updateAdjustCompressionProfileOnFigPlaybackItem;
- (void)_updateAdjustTargetLevelOnFigPlaybackItem;
- (void)_updateAdvanceTimeForOverlappedPlaybackOnFigPlaybackItem;
- (void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
- (void)_updateAllowedAudioSpatializationFormats;
- (void)_updateAllowedAudioSpatializationFormatsFromFigItem;
- (void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
- (void)_updateAppliesPerFrameHDRDisplayMetadataOnFigPlaybackItem;
- (void)_updateAudioSpatializationAllowed;
- (void)_updateAudioTapProcessorOnFigPlaybackItem;
- (void)_updateAutoSwitchAtmosStreamVariantsOnFigPlaybackItem;
- (void)_updateBlendsVideoFramesOnFigPlaybackItem;
- (void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1 updateStatusToReadyToPlay:(bool)arg2;
- (void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
- (void)_updateConfiguredTimeOffsetFromLiveOnFigPlaybackItem;
- (void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
- (void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
- (void)_updateDecodesAllFramesDuringOrdinaryPlaybackOnFigPlaybackItem;
- (void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
- (void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
- (void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
- (void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
- (void)_updateItemIdentifierForCoordinatedPlayback;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 basedOnOutputs:(id)arg2;
- (void)_updateLimitReadAheadOnFigPlaybackItem;
- (void)_updateLoopTimeRangeOnFigPlaybackItem;
- (void)_updateLoudnessInfoOnFigPlaybackItem;
- (void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
- (void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
- (void)_updateMediaKindOnFigPlaybackItem;
- (void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
- (void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
- (void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
- (void)_updatePlaybackPropertiesOnFigPlaybackItem;
- (void)_updatePreferredMaximumAudioSampleRateOnFigPlaybackItem;
- (void)_updatePreferredMaximumResolutionForExpensiveNetworksOnFigPlaybackItem;
- (void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
- (void)_updatePreferredMinimumResolutionOnFigPlaybackItem;
- (void)_updatePreferredPeakBitRateForExpensiveNetworksOnFigPlaybackItem;
- (void)_updatePreferredPeakBitRateOnFigPlaybackItem;
- (void)_updatePreservesTimeOffsetFromLive;
- (void)_updateRTCReportingCategoryOnFigPlaybackItem;
- (void)_updateRTCReportingFlagsOnFigPlaybackItem;
- (void)_updateRefreshesClosedCaptionsImmediatelyAfterSeekingOnFigPlaybackItem;
- (void)_updateRestrictionsOnFigPlaybackItem;
- (void)_updateRestrictsAutomaticMediaSelectionToAvailableOfflineOptions;
- (void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
- (void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
- (void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
- (void)_updateSnapTimeToPausePlaybackOnFigPlaybackItem;
- (void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;
- (void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
- (void)_updateStartsOnFirstEligibleVariantOnFigPlaybackItem;
- (void)_updateTextHighlightArrayOnFigPlaybackItem;
- (void)_updateTextStyleRulesOnFigPlaybackItem;
- (void)_updateTimeToPauseBufferingOnFigPlaybackItem;
- (void)_updateTimeToPausePlaybackOnFigPlaybackItem;
- (void)_updateTimebase;
- (void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
- (void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
- (void)_updateVariantPreferencesOnFigPlaybackItem;
- (void)_updateVideoApertureModeOnFigPlaybackItem;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 basedOnOutputs:(id)arg2;
- (void)_updateVolumeAdjustmentOnFigPlaybackItem;
- (void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
- (id)_weakReference;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (unsigned int)adjustCompressionProfile;
- (bool)adjustCompressionProfileWasSet;
- (float)adjustTargetLevel;
- (bool)adjustTargetLevelWasSet;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })advanceTimeForOverlappedPlayback;
- (bool)advanceTimeForOverlappedPlaybackWasSet;
- (bool)aggressivelyCachesVideoFrames;
- (bool)aggressivelyCachesVideoFramesWasSet;
- (bool)allowProgressiveResume;
- (bool)allowProgressiveStartup;
- (bool)allowProgressiveSwitchUp;
- (unsigned long long)allowedAudioSpatializationFormats;
- (bool)allowedAudioSpatializationFormatsWasSet;
- (bool)allowsExtendedReadAhead;
- (bool)alwaysMonitorsPlayability;
- (bool)appliesPerFrameHDRDisplayMetadata;
- (bool)appliesPerFrameHDRDisplayMetadataWasSet;
- (id)asset;
- (id)audioMix;
- (bool)audioSpatializationAllowedWasSet;
- (struct opaqueMTAudioProcessingTap { }*)audioTapProcessor;
- (id)audioTimePitchAlgorithm;
- (bool)autoSwitchAtmosStreamVariants;
- (id)automaticallyLoadedAssetKeys;
- (bool)automaticallyPreservesTimeOffsetFromLive;
- (bool)blendsVideoFrames;
- (bool)blendsVideoFramesWasSet;
- (bool)canPlayFastForward;
- (bool)canPlayFastReverse;
- (bool)canPlayReverse;
- (bool)canPlaySlowForward;
- (bool)canPlaySlowReverse;
- (bool)canStepBackward;
- (bool)canStepForward;
- (bool)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (void)cancelPendingSeeks;
- (id)configurationGroup;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })configuredTimeOffsetFromLive;
- (bool)continuesPlayingDuringPrerollForRateChange;
- (bool)continuesPlayingDuringPrerollForSeek;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 newAssetOptions:(id)arg2;
- (id)currentDate;
- (id)currentEstimatedDate;
- (id)currentMediaSelection;
- (id)currentStableVariantID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentUnfoldedTime;
- (id)customVideoCompositor;
- (void)dealloc;
- (bool)decodesAllFramesDuringOrdinaryPlayback;
- (bool)decodesAllFramesDuringOrdinaryPlaybackWasSet;
- (id)delegate;
- (id)description;
- (void)dispatchIVarWrite:(bool)arg1 locked:(bool)arg2 block:(id /* block */)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)error;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)gaplessInfo;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasVideo;
- (id)imageQueueInterpolationCurve;
- (bool)imageQueueInterpolationCurveWasSet;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initialDate;
- (id)initialEstimatedDate;
- (bool)isAudioSpatializationAllowed;
- (bool)isNonForcedSubtitleDisplayEnabled;
- (bool)isPlaybackBufferEmpty;
- (bool)isPlaybackBufferFull;
- (bool)isPlaybackLikelyToKeepUp;
- (bool)isRenderingSpatialAudio;
- (bool)limitReadAhead;
- (double)liveUpdateInterval;
- (id)loadedTimeRanges;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })loopTimeRange;
- (id)loudnessInfo;
- (int)makeSeekID;
- (float)maximumBitRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumForwardBufferDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumTimePlayedToDuringOverlappedPlayback;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumTimePlayedToSinceLastSeek;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumTrailingBufferDuration;
- (id)mediaKind;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumIntervalForIFrameOnlyPlayback;
- (bool)minimumIntervalForIFrameOnlyPlaybackWasSet;
- (id)nonForcedSubtitleDisplayEnabledPublisher;
- (id)playabilityMetrics;
- (long long)playbackLikelyToKeepUpTrigger;
- (bool)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1;
- (double)preferredForwardBufferDuration;
- (double)preferredMaximumAudioSampleRate;
- (struct CGSize { double x1; double x2; })preferredMaximumResolution;
- (struct CGSize { double x1; double x2; })preferredMaximumResolutionForExpensiveNetworks;
- (struct CGSize { double x1; double x2; })preferredMinimumResolution;
- (double)preferredPeakBitRate;
- (double)preferredPeakBitRateForExpensiveNetworks;
- (struct CGSize { double x1; double x2; })preferredPeakPresentationSize;
- (bool)prefersOfflinePlayableVariants;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)presentationSizePublisher;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })recommendedTimeOffsetFromLive;
- (bool)refreshesClosedCaptionsImmediatelyAfterSeeking;
- (id)reportingCategory;
- (bool)requiresAccessLog;
- (void)resetAudioBufferedAhead;
- (unsigned long long)restrictions;
- (bool)restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (bool)reversesMoreVideoFramesInMemory;
- (bool)reversesMoreVideoFramesInMemoryWasSet;
- (bool)savesDownloadedDataToDiskWhenDone;
- (bool)savesDownloadedDataToDiskWhenDoneWasSet;
- (bool)seekToDate:(id)arg1;
- (bool)seekToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 seekID:(int)arg4;
- (id)seekableTimeRanges;
- (double)seekableTimeRangesLastModifiedTime;
- (bool)seekingWaitsForVideoCompositionRendering;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (void)setAdjustCompressionProfile:(unsigned int)arg1;
- (void)setAdjustTargetLevel:(float)arg1;
- (void)setAdvanceTimeForOverlappedPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAggressivelyCachesVideoFrames:(bool)arg1;
- (void)setAllowProgressiveResume:(bool)arg1;
- (void)setAllowProgressiveStartup:(bool)arg1;
- (void)setAllowProgressiveSwitchUp:(bool)arg1;
- (void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1;
- (void)setAllowsExtendedReadAhead:(bool)arg1;
- (void)setAlwaysMonitorsPlayability:(bool)arg1;
- (void)setAppliesPerFrameHDRDisplayMetadata:(bool)arg1;
- (void)setAudioMix:(id)arg1;
- (void)setAudioSpatializationAllowed:(bool)arg1;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setAutoSwitchAtmosStreamVariants:(bool)arg1;
- (void)setAutomaticallyPreservesTimeOffsetFromLive:(bool)arg1;
- (void)setBlendsVideoFrames:(bool)arg1;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(bool)arg1;
- (void)setConfiguredTimeOffsetFromLive:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setContinuesPlayingDuringPrerollForRateChange:(bool)arg1;
- (void)setContinuesPlayingDuringPrerollForSeek:(bool)arg1;
- (void)setDecodesAllFramesDuringOrdinaryPlayback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setGaplessInfo:(id)arg1;
- (void)setIFramePrefetchTargetDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageQueueInterpolationCurve:(id)arg1;
- (void)setInitialDate:(id)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (void)setLimitReadAhead:(bool)arg1;
- (void)setLoopTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setLoudnessInfo:(id)arg1;
- (void)setMaximumBitRate:(float)arg1;
- (void)setMaximumForwardBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaximumTrailingBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMediaKind:(id)arg1;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNonForcedSubtitleDisplayEnabled:(bool)arg1;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (void)setPreferredMaximumAudioSampleRate:(double)arg1;
- (void)setPreferredMaximumResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredMaximumResolutionForExpensiveNetworks:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredMinimumResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPreferredPeakBitRateForExpensiveNetworks:(double)arg1;
- (void)setPreferredPeakPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrefersOfflinePlayableVariants:(bool)arg1;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (void)setRefreshesClosedCaptionsImmediatelyAfterSeeking:(bool)arg1;
- (void)setReportingCategory:(id)arg1;
- (void)setRequiresAccessLog:(bool)arg1;
- (void)setRestrictions:(unsigned long long)arg1;
- (void)setRestrictsAutomaticMediaSelectionToAvailableOfflineOptions:(bool)arg1;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setReversesMoreVideoFramesInMemory:(bool)arg1;
- (void)setSavesDownloadedDataToDiskWhenDone:(bool)arg1;
- (void)setSeekingWaitsForVideoCompositionRendering:(bool)arg1;
- (void)setSnapTimeToPausePlayback:(unsigned char)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)setStartsOnFirstEligibleVariant:(bool)arg1;
- (void)setSuppressesAudioOnlyVariants:(bool)arg1;
- (void)setTextHighlightArray:(id)arg1;
- (void)setTextStyleRules:(id)arg1;
- (void)setTimeToPauseBuffering:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimeToPausePlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(bool)arg1;
- (void)setUsesMinimalLatencyForVideoCompositionRendering:(bool)arg1;
- (void)setVariantIndex:(long long)arg1;
- (void)setVariantPreferences:(unsigned long long)arg1;
- (void)setVideoApertureMode:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVolumeAdjustment:(float)arg1;
- (void)setWillNeverSeekBackwardsHint:(bool)arg1;
- (unsigned char)snapTimeToPausePlayback;
- (float)soundCheckVolumeNormalization;
- (float)speedThresholdForIFrameOnlyPlayback;
- (bool)speedThresholdForIFrameOnlyPlaybackWasSet;
- (bool)startsOnFirstEligibleVariant;
- (long long)status;
- (void)stepByCount:(long long)arg1;
- (bool)suppressesAudioOnlyVariants;
- (id)textHighlightArray;
- (id)textStyleRules;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeToPauseBuffering;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeToPausePlayback;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)timedMetadata;
- (id)tracks;
- (id)tracksPublisher;
- (struct OpaqueCMTimebase { }*)unfoldedTimebase;
- (bool)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (bool)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
- (bool)usesMinimalLatencyForVideoCompositionRendering;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)variantIndex;
- (unsigned long long)variantPreferences;
- (id)videoApertureMode;
- (id)videoComposition;
- (float)volumeAdjustment;
- (bool)willNeverSeekBackwardsHint;

// AVPlayerItem (AVIntegrityChecking)

- (bool)isDefunct;

// AVPlayerItem (AVPlayerInterstitialSupport)

- (void)_setTemplatePlayerItem:(id)arg1;
- (bool)automaticallyHandlesInterstitialEvents;
- (void)setAutomaticallyHandlesInterstitialEvents:(bool)arg1;
- (id)templatePlayerItem;

// AVPlayerItem (AVPlayerItemAVKit)

- (id)AVKitData;
- (void)_setInterstitialEventID:(id)arg1;
- (id)interstitialEventID;
- (void)setAVKitData:(id)arg1;

// AVPlayerItem (AVPlayerItemLogging)

- (id)accessLog;
- (id)errorLog;

// AVPlayerItem (AVPlayerItemMediaDataCollectors)

- (void)_addMetadataCollector:(id)arg1;
- (void)_addMetadataCollector:(id)arg1 locked:(bool)arg2;
- (id)_metadataCollectors;
- (void)_removeMetadataCollector:(id)arg1;
- (void)_removeMetadataCollector:(id)arg1 locked:(bool)arg2;
- (void)_updateTaggedMetadataArray:(id)arg1;
- (void)addMediaDataCollector:(id)arg1;
- (void)addMediaDataCollector:(id)arg1 locked:(bool)arg2;
- (id)mediaDataCollectors;
- (void)removeMediaDataCollector:(id)arg1;
- (void)removeMediaDataCollector:(id)arg1 locked:(bool)arg2;

// AVPlayerItem (AVPlayerItemOutputs)

- (void)_addLegibleOutput:(id)arg1;
- (void)_addMetadataOutput:(id)arg1;
- (void)_addVideoOutput:(id)arg1;
- (void)_configureVideoCompositionColorProperties;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateVideoOutputs;
- (id)_legibleOutputsForKeys;
- (id)_metadataOutputsForKeys;
- (id)_preferredPixelBufferAttributes;
- (void)_removeLegibleOutput:(id)arg1;
- (void)_removeMetadataOutput:(id)arg1;
- (void)_removeVideoOutput:(id)arg1;
- (id)_videoOutputs;
- (void)addOutput:(id)arg1;
- (id)outputs;
- (void)removeOutput:(id)arg1;

// AVPlayerItem (AVPlayerItemProtectedContent)

- (bool)isApplicationAuthorizedForPlayback;
- (bool)isAuthorizationRequiredForPlayback;
- (bool)isContentAuthorizedForPlayback;

// AVPlayerItem (AVPlayerItemProtectedContentPrivate)

+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;

- (bool)_isExternalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (bool)_isRental;
- (bool)_isRentalPlaybackStarted;
- (id)_rentalExpirationDate;
- (id)_rentalPlaybackExpirationDate;
- (id)_rentalPlaybackStartedDate;
- (id)_rentalStartDate;
- (void)_setExternalProtectionRequiredForPlayback:(bool)arg1;

// AVPlayerItem (AVPlayerItemServiceIdentifier_Private)

- (void)_quietlySetServiceIdentifier;
- (id)serviceIdentifier;
- (void)setServiceIdentifier:(id)arg1;

// AVPlayerItem (AVPlayerItemSupportForMediaPlayer)

- (long long)_availableFileSize;
- (long long)_fileSize;
- (void)_quietlySetEQPreset:(int)arg1;
- (void)_setAudibleDRMInfo:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setRampInOutInfo:(id)arg1;

// AVPlayerItem (AVPlayerItemVideoEnhancement)

- (void)_updateVideoEnhancementModeOnFigPlaybackItem;
- (void)setVideoEnhancementMode:(id)arg1;
- (id)videoEnhancementMode;

// AVPlayerItem (LegibleOutputSupport)

- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (id)_legibleOutputForKey:(id)arg1;

// AVPlayerItem (MetadataOutputSupport)

- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;
- (id)_metadataOutputForKey:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVKit.framework/AVKit

// AVPlayerItem (AVAirMessage)

- (id)avkitACMIdentifier;

// AVPlayerItem (AVKitAdditionsPrivate)

- (void)avkit_airMessageSendExternalMetadata;
- (void)avkit_airMessageSendToAppleTV;
- (id)avkit_data;
- (id)avkit_dataOrNil;
- (void)avkit_setValue:(id)arg1 forAVKitProperty:(id)arg2;
- (id)avkit_valueForAVKitProperty:(id)arg1;
- (id)contentSubtitle;
- (id)contentTitle;
- (long long)defaultInterstitialPolicyEnforcement;
- (id)externalMetadata;
- (long long)interstitialPolicyEnforcement;
- (id)interstitialTimeRanges;
- (void)setContentSubtitle:(id)arg1;
- (void)setContentTitle:(id)arg1;
- (void)setExternalMetadata:(id)arg1;
- (void)setInterstitialTimeRanges:(id)arg1;
- (bool)translatesPlayerInterstitialEvents;

// AVPlayerItem (AVMediaContentRating)

- (id)mediaContentRating;

// AVPlayerItem (AVPlayerItem_AVEditBehaviorContextAdditions)

- (id)avkit_currentEditBehaviorContext;
- (void)avkit_setCurrentEditBehaviorContext:(id)arg1;

// AVPlayerItem (AVPlayerItem_AVMusicAppBehaviorContextAdditions)

- (id)avkit_musicAppBehaviorContext;
- (void)avkit_setMusicBehaviorData:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

// AVPlayerItem (TLExtensions)

- (id)tl_hapticTracks;

@end
