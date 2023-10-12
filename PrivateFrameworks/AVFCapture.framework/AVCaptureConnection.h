/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureConnection : NSObject {
    AVCaptureConnectionInternal * _internal;
    bool  _supportsVideoFieldMode;
    long long  _videoFieldMode;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) long long activeVideoStabilizationMode;
@property (nonatomic, readonly) NSArray *audioChannels;
@property (nonatomic) bool automaticallyAdjustsVideoMirroring;
@property (getter=isCameraIntrinsicMatrixDeliveryEnabled, nonatomic) bool cameraIntrinsicMatrixDeliveryEnabled;
@property (getter=isCameraIntrinsicMatrixDeliverySupported, nonatomic, readonly) bool cameraIntrinsicMatrixDeliverySupported;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool enablesVideoStabilizationWhenAvailable;
@property (nonatomic, readonly) NSArray *inputPorts;
@property (nonatomic, readonly) AVCaptureOutput *output;
@property (nonatomic) long long preferredVideoStabilizationMode;
@property (getter=isVideoFieldModeSupported, nonatomic, readonly) bool supportsVideoFieldMode;
@property (getter=isVideoMaxFrameDurationSupported, nonatomic, readonly) bool supportsVideoMaxFrameDuration;
@property (getter=isVideoMinFrameDurationSupported, nonatomic, readonly) bool supportsVideoMinFrameDuration;
@property (getter=isVideoMirroringSupported, nonatomic, readonly) bool supportsVideoMirroring;
@property (getter=isVideoOrientationSupported, nonatomic, readonly) bool supportsVideoOrientation;
@property (getter=isVideoStabilizationSupported, nonatomic, readonly) bool supportsVideoStabilization;
@property (nonatomic) long long videoFieldMode;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoMaxFrameDuration;
@property (nonatomic, readonly) double videoMaxScaleAndCropFactor;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDuration;
@property (getter=isVideoMirrored, nonatomic) bool videoMirrored;
@property (nonatomic) long long videoOrientation;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic) double videoRotationAngle;
@property (nonatomic) double videoScaleAndCropFactor;
@property (getter=isVideoStabilizationEnabled, nonatomic, readonly) bool videoStabilizationEnabled;

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;

- (bool)_outputIsPreviewSizedVideoDataOutput;
- (long long)_resolveActiveVideoStabilizationMode:(long long)arg1 format:(id)arg2;
- (void)_setActive:(bool)arg1;
- (void)_setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoMirrored:(bool)arg1;
- (void)_setVideoOrientation:(long long)arg1;
- (void)_updateActiveVideoStabilizationMode:(long long)arg1 bumpChangeSeed:(bool)arg2;
- (bool)_updateCameraIntrinsicMatrixDeliverySupported;
- (void)_updateMaxScaleAndCropFactorForFormat:(id)arg1;
- (void)_updatePropertiesForFormat:(id)arg1;
- (void)_updateSupportedVideoMirroringMethodsForMovieRecording;
- (void)_updateVideoGreenGhostMitigationSupported;
- (void)_updateZoomSmoothingSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMinFrameDuration;
- (long long)_videoOrientation;
- (long long)activeVideoStabilizationMode;
- (id)audioChannels;
- (bool)automaticallyAdjustsVideoMirroring;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (unsigned int)clientRetainedBufferCount;
- (void)dealloc;
- (id)description;
- (bool)enablesVideoStabilizationWhenAvailable;
- (id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1 allConnections:(id)arg2;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)inputPorts;
- (bool)isActive;
- (bool)isCameraIntrinsicMatrixDeliveryEnabled;
- (bool)isCameraIntrinsicMatrixDeliverySupported;
- (bool)isDebugMetadataSidecarFileEnabled;
- (bool)isEnabled;
- (bool)isLive;
- (bool)isLivePhotoMetadataWritingSupported;
- (bool)isTrulyDisabled;
- (bool)isVideoDeviceOrientationCorrectionEnabled;
- (bool)isVideoDeviceOrientationCorrectionSupported;
- (bool)isVideoFieldModeSupported;
- (bool)isVideoGreenGhostMitigationEnabled;
- (bool)isVideoGreenGhostMitigationSupported;
- (bool)isVideoMaxFrameDurationSet;
- (bool)isVideoMaxFrameDurationSupported;
- (bool)isVideoMinFrameDurationSet;
- (bool)isVideoMinFrameDurationSupported;
- (bool)isVideoMirrored;
- (bool)isVideoMirroringSupported;
- (bool)isVideoOrientationSupported;
- (bool)isVideoRetainedBufferCountHintSupported;
- (bool)isVideoRotationAngleSupported:(double)arg1;
- (bool)isVideoStabilizationEnabled;
- (bool)isVideoStabilizationSupported;
- (bool)isVideoZoomSmoothingEnabled;
- (bool)isVideoZoomSmoothingSupported;
- (bool)livePhotoMetadataWritingEnabled;
- (id)mediaType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)output;
- (long long)preferredVideoStabilizationMode;
- (id)session;
- (void)setAutomaticallyAdjustsVideoMirroring:(bool)arg1;
- (void)setCameraIntrinsicMatrixDeliveryEnabled:(bool)arg1;
- (void)setDebugMetadataSidecarFileEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnablesVideoStabilizationWhenAvailable:(bool)arg1;
- (void)setLivePhotoMetadataWritingEnabled:(bool)arg1;
- (void)setPreferredVideoStabilizationMode:(long long)arg1;
- (void)setVideoDeviceOrientationCorrectionEnabled:(bool)arg1;
- (void)setVideoFieldMode:(long long)arg1;
- (void)setVideoGreenGhostMitigationEnabled:(bool)arg1;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoMirroringMethodForMovieRecording:(long long)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (void)setVideoRotationAngle:(double)arg1;
- (void)setVideoScaleAndCropFactor:(double)arg1;
- (void)setVideoZoomSmoothingEnabled:(bool)arg1;
- (void)setupInternalStorage;
- (void)setupObservers;
- (id)sourceDevice;
- (id)sourceDeviceInput;
- (bool)sourcesFromExternalCamera;
- (bool)sourcesFromFrontFacingCamera;
- (id)supportedVideoMirroringMethodsForMovieRecording;
- (void)teardownObservers;
- (void)updateAudioChannelsArray;
- (void)updateAudioLevelsArray;
- (long long)videoFieldMode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (double)videoMaxScaleAndCropFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (long long)videoMirroringMethodForMovieRecording;
- (long long)videoOrientation;
- (id)videoPreviewLayer;
- (int)videoRetainedBufferCountHint;
- (double)videoRotationAngle;
- (double)videoScaleAndCropFactor;

@end
