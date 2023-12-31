/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureMetadataOutputInternal * _internal;
}

@property (nonatomic, readonly) NSArray *availableMetadataObjectTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id delegateOverride;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *metadataObjectTypes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (nonatomic, readonly) <AVCaptureMetadataOutputObjectsDelegate> *metadataObjectsDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectOfInterest;
@property (readonly) Class superclass;

+ (id)_metadataConstantValueToName:(id)arg1;
+ (void)initialize;
+ (id)new;

- (id)_appClipCodesCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2;
- (id)_barcodeCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2;
- (id)_detectedObjectsCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2 facesArrayOut:(id*)arg3;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x1; union { struct { struct opaqueCMSampleBuffer {} *x_1_2_1; } x_2_1_1; struct { long long x_2_2_1; struct opaqueCMFormatDescription {} *x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_legacyFaceCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2;
- (id)_lumaHistogramDataCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2;
- (id)_metadataIdentifiers;
- (id)_offlineVISMotionCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_textRegionsCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2;
- (id)_trackedFacesCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 input:(id)arg2;
- (void)_updateLocalQueue:(struct localQueueOpaque { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableMetadataObjectTypes;
- (bool)canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)delegateOverride;
- (id)delegateOverrideCallbackQueue;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (long long)faceTrackingMaxFaces;
- (float)faceTrackingNetworkFailureThresholdMultiplier;
- (id)init;
- (bool)isAppClipCodeMetadataObjectTypeAvailable;
- (bool)isAppClipCodeMetadataSupported;
- (bool)isFaceTrackingMetadataObjectTypesAvailable;
- (bool)isFaceTrackingPlusEnabled;
- (bool)isFaceTrackingSupported;
- (bool)isFaceTrackingUsingFaceRecognition;
- (bool)isHeadMetadataObjectTypesAvailable;
- (bool)isHeadMetadataSupported;
- (bool)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
- (bool)isOfflineVideoStabilizationMotionMetadataSupported;
- (bool)isTextRegionMetadataObjectTypeAvailable;
- (bool)isTextRegionMetadataSupported;
- (bool)isVideoPreviewHistogramMetadataObjectTypesAvailable;
- (bool)isVideoPreviewHistogramMetadataSupported;
- (id)metadataObjectTypes;
- (id)metadataObjectsCallbackQueue;
- (id)metadataObjectsDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterest;
- (void)setAppClipCodeMetadataObjectTypeAvailable:(bool)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (void)setFaceTrackingMaxFaces:(long long)arg1;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(bool)arg1;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)arg1;
- (void)setFaceTrackingPlusEnabled:(bool)arg1;
- (void)setFaceTrackingUsesFaceRecognition:(bool)arg1;
- (void)setHeadMetadataObjectTypesAvailable:(bool)arg1;
- (void)setMetadataObjectTypes:(id)arg1;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(bool)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextRegionMetadataObjectTypeAvailable:(bool)arg1;
- (void)setVideoPreviewHistogramMetadataObjectTypesAvailable:(bool)arg1;

@end
