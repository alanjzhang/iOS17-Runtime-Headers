/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureDevice : NSObject {
    bool  _inUseByAnotherApplication;
    NSArray * _inputSources;
    AVCaptureDeviceInternal * _internal;
    NSArray * _linkedDevices;
    NSString * _manufacturer;
    int  _transportType;
}

@property (nonatomic, retain) AVCaptureDeviceFormat *activeFormat;
@property (nonatomic, retain) AVCaptureDeviceInputSource *activeInputSource;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMaxFrameDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMinFrameDuration;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (getter=isDockedTrackingActive, nonatomic, readonly) bool dockedTrackingActive;
@property (getter=isDockedTrackingEnabled, nonatomic) bool dockedTrackingEnabled;
@property (getter=isDockedTrackingSupported, nonatomic, readonly) bool dockedTrackingSupported;
@property (nonatomic, readonly) NSArray *formats;
@property (getter=isInUseByAnotherApplication, nonatomic, readonly) bool inUseByAnotherApplication;
@property (nonatomic, readonly) NSArray *inputSources;
@property (nonatomic, readonly) NSArray *linkedDevices;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelID;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) NSString *uniqueID;

+ (void)_activeMicrophoneModeChanged:(id)arg1;
+ (void)_backgroundBlurApertureChanged:(id)arg1;
+ (void)_backgroundBlurEnabledChanged:(id)arg1;
+ (id)_centerStageAllowList;
+ (void)_cinematicFramingEnabledChanged:(id)arg1;
+ (bool)_defaultCenterStageEnabled;
+ (id)_defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 prefersUnsuspendedAndAllowsAnyPosition:(bool)arg4;
+ (id)_devices;
+ (id)_devicesWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;
+ (id)_devicesWithPriorRegisteredDevices:(id)arg1;
+ (void)_filterConnectedDevices:(id)arg1 withDeviceTypes:(id)arg2 mediaType:(id)arg3 position:(long long)arg4;
+ (void)_filterConnectedLegacyDevices:(id)arg1;
+ (void)_gesturesEnabledChanged:(id)arg1;
+ (id)_legacyDevicesWithMediaType:(id)arg1;
+ (void)_preferredMicrophoneModeChanged:(id)arg1;
+ (void)_reactionTriggered:(id)arg1;
+ (void)_reactionsEnabledChanged:(id)arg1;
+ (void)_reactionsInProgressChangedByControlCenter:(id)arg1;
+ (void)_reconnectDevices:(id)arg1;
+ (void)_studioLightEnabledChanged:(id)arg1;
+ (void)_studioLightingEnabledChanged:(id)arg1;
+ (void)_studioLightingIntensityChanged:(id)arg1;
+ (long long)activeMicrophoneMode;
+ (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
+ (bool)allowsSuspendedPreferredCameras;
+ (long long)authorizationStatusForMediaType:(id)arg1;
+ (float)backgroundBlurAperture;
+ (float)backgroundBlurApertureDefault;
+ (struct AudioValueRange { double x1; double x2; })backgroundBlurApertureRange;
+ (long long)backgroundBlurControlMode;
+ (id)cameraInfoForCreatorID:(id)arg1 uniqueID:(id)arg2 specialDeviceType:(unsigned int)arg3 centerStageSupported:(bool)arg4;
+ (long long)centerStageControlMode;
+ (long long)centerStageFramingMode;
+ (long long)cinematicFramingControlMode;
+ (id)continuityCaptureCameraCapabilities;
+ (id)continuityCaptureLastUsedDate;
+ (bool)defaultCenterStageEnabledForBundleID:(id)arg1;
+ (id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
+ (void)didChangeValueForKey:(id)arg1;
+ (id)extrinsicMatrixFromDevice:(id)arg1 toDevice:(id)arg2;
+ (void)initialize;
+ (bool)isBackgroundBlurEnabled;
+ (bool)isCenterStageEnabled;
+ (bool)isCinematicFramingEnabled;
+ (bool)isEligibleForBackgroundBlur;
+ (bool)isEligibleForReactionEffects;
+ (bool)isEligibleForStudioLighting;
+ (bool)isPortraitEffectEnabled;
+ (bool)isStudioLightEnabled;
+ (bool)isStudioLightingEnabled;
+ (void)observeSuppressVideoEffectsForDeviceID:(id)arg1 handler:(id /* block */)arg2;
+ (long long)portraitEffectStudioLightQuality;
+ (long long)preferredMicrophoneMode;
+ (bool)reactionEffectGesturesEnabled;
+ (bool)reactionEffectGesturesEnabledDefault;
+ (bool)reactionEffectsEnabled;
+ (bool)reactionEffectsEnabledDefault;
+ (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
+ (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)setAllowsSuspendedPreferredCameras:(bool)arg1;
+ (void)setBackgroundBlurAperture:(float)arg1;
+ (void)setBackgroundBlurControlMode:(long long)arg1;
+ (void)setBackgroundBlurEnabled:(bool)arg1;
+ (void)setCenterStageControlMode:(long long)arg1;
+ (void)setCenterStageEnabled:(bool)arg1;
+ (void)setCenterStageFramingMode:(long long)arg1;
+ (void)setCinematicFramingControlMode:(long long)arg1;
+ (void)setCinematicFramingEnabled:(bool)arg1;
+ (void)setControlCenterVideoEffectUnavailableReasonsForVideoEffect:(id)arg1 reasons:(unsigned long long)arg2;
+ (void)setPortraitEffectStudioLightQuality:(long long)arg1;
+ (void)setReactionEffectGesturesEnabled:(bool)arg1;
+ (void)setReactionEffectsEnabled:(bool)arg1;
+ (void)setStudioLightingControlMode:(long long)arg1;
+ (void)setStudioLightingEnabled:(bool)arg1;
+ (void)setStudioLightingIntensity:(float)arg1;
+ (void)setUpBackgroundBlurStateOnce;
+ (void)setUpCenterStageStateOnce;
+ (void)setUpMicrophoneModeStateOnce;
+ (void)setUpReactionEffectsStateOnce;
+ (void)setUpStudioLightingStateOnce;
+ (void)setUserPreferredCamera:(id)arg1;
+ (void)setUserPreferredCamera:(id)arg1 forClientPreferenceDomain:(id)arg2;
+ (void)setupKVOLoggingOnce;
+ (void)showSystemUserInterface:(long long)arg1;
+ (long long)studioLightingControlMode;
+ (float)studioLightingIntensity;
+ (float)studioLightingIntensityDefault;
+ (id)systemPreferredCamera;
+ (void)updateUserPreferredCameraOverride:(bool)arg1 cameraInfo:(id)arg2;
+ (void)updateUserPreferredCameraOverrideHistoryWithDevice:(id)arg1 setOverride:(bool)arg2;
+ (id)userPreferredCamera;
+ (void)willChangeValueForKey:(id)arg1;

- (id)AVVideoSettingsForSessionPreset:(id)arg1;
- (float)ISO;
- (float)ISODigitalThreshold;
- (id)_digitalFlashExposureTimes;
- (long long)_digitalFlashStatus;
- (bool)_isDepthDataDeliveryEnabled;
- (bool)_isFlashScene;
- (void)_performReaction:(id)arg1;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setBackgroundBlurAllowed:(bool)arg1;
- (void)_setCameraCalibrationDataDeliveryEnabled:(bool)arg1;
- (void)_setCenterStageAllowed:(bool)arg1;
- (void)_setCinematicVideoEnabled:(bool)arg1;
- (void)_setConnected:(bool)arg1;
- (void)_setDepthDataDeliveryEnabled:(bool)arg1;
- (void)_setPhotoSettingsForSceneMonitoring:(id)arg1;
- (void)_setReactionsAllowed:(bool)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(bool)arg1;
- (void)_setStudioLightingAllowed:(bool)arg1;
- (void)_setVideoHDREnabled:(bool)arg1 forceResetVideoHDRSuspended:(bool)arg2;
- (bool)_startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (long long)activeColorSpace;
- (id)activeDepthDataFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeDepthDataMinFrameDuration;
- (id)activeFormat;
- (id)activeInputSource;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeMaxExposureDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeMaxExposureDurationClientOverride;
- (id)activePrimaryConstituentDevice;
- (unsigned long long)activePrimaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (long long)activePrimaryConstituentDeviceSwitchingBehavior;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (bool)addCMIOExtensionPropertyValueChangeHandler:(id /* block */)arg1;
- (bool)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
- (long long)autoFocusRangeRestriction;
- (bool)automaticallyAdjustsFaceDrivenAutoExposureEnabled;
- (bool)automaticallyAdjustsFaceDrivenAutoFocusEnabled;
- (bool)automaticallyAdjustsImageControlMode;
- (bool)automaticallyAdjustsVideoHDREnabled;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)availableBoxedMetadataFormatDescriptions;
- (id)availableReactionTypes;
- (id)bravoCameraSelectionBehavior;
- (bool)cachesFigCaptureSourceConfigurationChanges;
- (id)cameraPoseMatrix;
- (bool)canPerformReactionEffects;
- (void)cancelVideoZoomRamp;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerStageRectOfInterest;
- (struct { float x1; float x2; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (id)clientAudioClockDeviceUID;
- (void)close;
- (id)companionDeskViewCamera;
- (id)companionOverheadCamera;
- (id)constituentDeviceWithDeviceType:(id)arg1;
- (id)constituentDevices;
- (id)continuityDeviceUniqueID;
- (id)copyValueForCMIOExtensionProperty:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)degradedCaptureQualityFactors;
- (id)description;
- (long long)deskViewCameraMode;
- (struct OpaqueCMClock { }*)deviceClock;
- (id)deviceType;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x1; float x2; })arg1;
- (long long)digitalFlashMode;
- (id)digitalFlashSceneForPhotoOutput;
- (double)dualCameraSwitchOverVideoZoomFactor;
- (void)enumerateCMIOExtensionPropertiesWithBlock:(id /* block */)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (long long)exposureMode;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (bool)eyeClosedDetectionEnabled;
- (bool)eyeDetectionEnabled;
- (int)faceDrivenAEAFMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (int)faceRectangleAngle;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)arg1;
- (id)fallbackPrimaryConstituentDevices;
- (long long)flashMode;
- (float)focalLength;
- (long long)focusMode;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (id)formats;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (id)hardwareUniformType;
- (bool)hasFlash;
- (bool)hasMediaType:(id)arg1;
- (bool)hasTorch;
- (bool)hevcAllowBFramesForHighCTUCount;
- (int)hevcTurboModeVersion;
- (long long)imageControlMode;
- (id)init;
- (id)initSubclass;
- (id)inputSources;
- (bool)isActiveVideoMaxFrameDurationSet;
- (bool)isActiveVideoMinFrameDurationSet;
- (bool)isAdjustingExposure;
- (bool)isAdjustingFocus;
- (bool)isAdjustingWhiteBalance;
- (bool)isAudioCaptureModeSupported:(long long)arg1;
- (bool)isAutoFocusRangeRestrictionSupported;
- (bool)isAutoRedEyeReductionSupported;
- (bool)isBackgroundBlurActive;
- (bool)isCameraIntrinsicMatrixDeliverySupported;
- (bool)isCenterStageActive;
- (bool)isCenterStageFieldOfViewRestrictedToWide;
- (bool)isCenterStageRectOfInterestSupported;
- (bool)isCinematicFramingActive;
- (bool)isCinematicVideoFocusAtPointSupported;
- (bool)isConnected;
- (bool)isConstituentPhotoCalibrationDataSupported;
- (bool)isContinuityCamera;
- (bool)isContinuousZoomWithDepthEnabled;
- (bool)isContinuousZoomWithDepthSupported;
- (bool)isDeskViewCameraModeSupported:(long long)arg1;
- (bool)isExposureModeSupported:(long long)arg1;
- (bool)isExposurePointOfInterestSupported;
- (bool)isEyeClosedDetectionSupported;
- (bool)isEyeDetectionSupported;
- (bool)isFaceDetectionDrivenImageProcessingEnabled;
- (bool)isFaceDetectionDuringVideoPreviewSupported;
- (bool)isFaceDetectionSupported;
- (bool)isFaceDrivenAutoExposureEnabled;
- (bool)isFaceDrivenAutoFocusEnabled;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)isFlashModeSupported:(long long)arg1;
- (bool)isFlashSceneDetectedForPhotoOutput;
- (bool)isFocusModeSupported:(long long)arg1;
- (bool)isFocusPointOfInterestSupported;
- (bool)isFocusedAtMacro;
- (bool)isGazeSelectionEnabled;
- (bool)isGeometricDistortionCorrectionEnabled;
- (bool)isGeometricDistortionCorrectionSupported;
- (bool)isGlobalToneMappingEnabled;
- (bool)isHDRSceneDetectedForPhotoOutput;
- (bool)isHEIFSupported;
- (bool)isHEVCPreferred;
- (bool)isHEVCRelaxedAverageBitRateTargetSupported;
- (bool)isHEVCSupported;
- (bool)isHidden;
- (bool)isImageControlModeSupported:(long long)arg1;
- (bool)isInUseByAnotherApplication;
- (bool)isLensStabilizationSupported;
- (bool)isLockedForConfiguration;
- (bool)isLockingFocusWithCustomLensPositionSupported;
- (bool)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
- (bool)isLowLightBoostEnabled;
- (bool)isLowLightBoostSupported;
- (bool)isLowLightVideoCaptureEnabled;
- (bool)isMachineReadableCodeDetectionSupported;
- (bool)isManualFramingEnabled;
- (bool)isManualFramingSupported;
- (bool)isMotionCompensatedTemporalFilteringSupported;
- (bool)isNonDestructiveCropEnabled;
- (bool)isOpen;
- (bool)isOverheadCameraModeSupported:(long long)arg1;
- (bool)isPortraitEffectActive;
- (bool)isProResSupported;
- (bool)isRampingVideoZoom;
- (bool)isResponsiveCaptureWithDepthSupported;
- (bool)isSmileDetectionSupported;
- (bool)isSmoothAutoFocusEnabled;
- (bool)isSmoothAutoFocusSupported;
- (bool)isSoonToBeDisconnected;
- (bool)isSpatialOverCaptureEnabled;
- (bool)isStudioLightActive;
- (bool)isStudioLightingActive;
- (bool)isSubjectAreaChangeMonitoringEnabled;
- (bool)isSuspended;
- (bool)isTimeOfFlightProjectorModeSupported:(long long)arg1;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (bool)isTorchModeSupported:(long long)arg1;
- (bool)isVariableFrameRateVideoCaptureEnabled;
- (bool)isVideoHDREnabled;
- (bool)isVideoHDRSuspended;
- (bool)isVideoStabilizationSupported;
- (bool)isVideoZoomSmoothingSupported;
- (bool)isVirtualDevice;
- (bool)isWhiteBalanceModeSupported:(long long)arg1;
- (bool)isWideColorSupported;
- (float)lensAperture;
- (float)lensPosition;
- (id)linkedDevices;
- (id)localizedName;
- (bool)lockForConfiguration:(id*)arg1;
- (double)manualFramingDefaultZoomFactor;
- (double)manualFramingMaxZoomFactor;
- (double)manualFramingMinZoomFactor;
- (float)manualFramingPanningAngleX;
- (float)manualFramingPanningAngleY;
- (id)manufacturer;
- (double)maxAvailableVideoZoomFactor;
- (float)maxExposureTargetBias;
- (struct { int x1; int x2; })maxH264PhotoDimensions;
- (struct { int x1; int x2; })maxH264VideoDimensions;
- (float)maxWhiteBalanceGain;
- (double)minAvailableVideoZoomFactor;
- (float)minExposureTargetBias;
- (int)minMacroblocksForHighProfileAbove30fps;
- (int)minMacroblocksForHighProfileUpTo30fps;
- (long long)minimumFocusDistance;
- (id)modelID;
- (long long)nonDestructiveCropAspectRatio;
- (bool)open:(id*)arg1;
- (long long)overheadCameraMode;
- (void)panWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)performEffectForReaction:(id)arg1;
- (void)performOneShotFraming;
- (void)performReactionEffect:(id)arg1;
- (long long)position;
- (int)powerConsumptionAt30FPSForOISMode:(int)arg1;
- (id)preferredPrimaryConstituentDevice;
- (unsigned long long)primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
- (long long)primaryConstituentDeviceSwitchingBehavior;
- (bool)providesStortorgetMetadata;
- (void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (void)rampToVideoZoomFactor:(float)arg1 withTuning:(long long)arg2;
- (bool)reactionEffectsActive;
- (id)reactionEffectsAvailable;
- (id)reactionEffectsInProgress;
- (void)removeCMIOExtensionPropertyValueChangeHandler:(id /* block */)arg1;
- (void)resetFraming;
- (void)resetVideoMinFrameDurationOverrideForOwner:(id)arg1;
- (id)serializedProcessingSettings;
- (void)setActiveColorSpace:(long long)arg1;
- (void)setActiveDepthDataFormat:(id)arg1;
- (void)setActiveDepthDataMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveInputSource:(id)arg1;
- (void)setActiveMaxExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (void)setAutomaticallyAdjustsFaceDrivenAutoExposureEnabled:(bool)arg1;
- (void)setAutomaticallyAdjustsFaceDrivenAutoFocusEnabled:(bool)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setCachesFigCaptureSourceConfigurationChanges:(bool)arg1;
- (void)setCenterStageFieldOfViewRestrictedToWide:(bool)arg1;
- (void)setCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCinematicVideoFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1 objectID:(long long)arg2 isHardFocus:(bool)arg3 isFixedPlaneFocus:(bool)arg4;
- (void)setClientAudioClockDeviceUID:(id)arg1;
- (void)setContinuousZoomWithDepthEnabled:(bool)arg1;
- (void)setDeskViewCameraMode:(long long)arg1;
- (void)setDigitalFlashMode:(long long)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setExposureModeCustomWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setEyeClosedDetectionEnabled:(bool)arg1;
- (void)setEyeDetectionEnabled:(bool)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (void)setFaceDrivenAutoExposureEnabled:(bool)arg1;
- (void)setFaceDrivenAutoFocusEnabled:(bool)arg1;
- (void)setFallbackPrimaryConstituentDevices:(id)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGazeSelectionEnabled:(bool)arg1;
- (void)setGeometricDistortionCorrectionEnabled:(bool)arg1;
- (void)setGlobalToneMappingEnabled:(bool)arg1;
- (void)setImageControlMode:(long long)arg1;
- (void)setLowLightVideoCaptureEnabled:(bool)arg1;
- (void)setManualFramingEnabled:(bool)arg1;
- (void)setManualFramingPanningAngleX:(float)arg1;
- (void)setManualFramingPanningAngleY:(float)arg1;
- (void)setNonDestructiveCropAspectRatio:(long long)arg1;
- (void)setNonDestructiveCropEnabled:(bool)arg1;
- (void)setOverheadCameraMode:(long long)arg1;
- (void)setPrimaryConstituentDeviceSwitchingBehavior:(long long)arg1 restrictedSwitchingBehaviorConditions:(unsigned long long)arg2;
- (void)setProvidesStortorgetMetadata:(bool)arg1;
- (void)setSmileDetectionEnabled:(bool)arg1;
- (void)setSmoothAutoFocusEnabled:(bool)arg1;
- (void)setSpatialOverCaptureEnabled:(bool)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (void)setTimeLapseCaptureRate:(float)arg1;
- (void)setTimeOfFlightProjectorMode:(long long)arg1;
- (void)setTorchMode:(long long)arg1;
- (bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (bool)setValue:(id)arg1 forCMIOExtensionProperty:(id)arg2 error:(id*)arg3;
- (void)setVariableFrameRateVideoCaptureEnabled:(bool)arg1;
- (void)setVideoHDREnabled:(bool)arg1;
- (void)setVideoHDRSuspended:(bool)arg1;
- (void)setVideoMinFrameDurationOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forOwner:(id)arg2;
- (void)setVideoStabilizationStrength:(long long)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 completionHandler:(id /* block */)arg2;
- (long long)shallowDepthOfFieldEffectStatus;
- (bool)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)arg1;
- (bool)smileDetectionEnabled;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (id)supportedFallbackPrimaryConstituentDevices;
- (id)supportedMetadataObjectIdentifiers;
- (id)supportedVisionDataProperties;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (bool)supportsMultiCamCaptureWithDevice:(id)arg1;
- (id)systemPressureState;
- (struct { float x1; float x2; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (float)timeLapseCaptureRate;
- (long long)timeOfFlightBankCount;
- (long long)timeOfFlightProjectorMode;
- (float)torchLevel;
- (long long)torchMode;
- (int)transportType;
- (void)unhide;
- (id)uniqueID;
- (void)unlockForConfiguration;
- (void)updateReactionsInProgress:(id)arg1;
- (bool)usesQuantizationScalingMatrix_H264_Steep_16_48;
- (long long)videoStabilizationStrength;
- (double)videoZoomFactor;
- (id)virtualDeviceSwitchOverVideoZoomFactors;
- (long long)whiteBalanceMode;
- (bool)wideAngleCameraSourcesFromUltraWide;

// AVCaptureDevice (AVCaptureProprietaryDefaultsDomain)

+ (id)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x1[8]; })arg1;

// AVCaptureDevice (DeviceHistoryInternal)

+ (void)_initiateRefreshPreferredCameraProperties:(bool)arg1;
+ (void)_setUpCameraHistoryOnce;
+ (id)devicesForDefaultDeviceSupport:(bool)arg1 includeAudioDevices:(bool)arg2;

- (void)updateStreamingDeviceHistory;
- (void)updateUserPreferredCameraHistory;
- (void)updateUserPreferredCameraHistoryForKey:(id)arg1;
- (void)updateUserPreferredCameraOverride:(bool)arg1;

// AVCaptureDevice (DockKit)

- (bool)isDockedTrackingEnabled;
- (bool)isDockedTrackingSupported;
- (void)setDockedTrackingEnabled:(bool)arg1;

// AVCaptureDevice (ServerConnection)

+ (void)ensureServerConnection;

@end
