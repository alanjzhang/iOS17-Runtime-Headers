/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureAudioDataOutputInternal * _internal;
}

@property (nonatomic, copy) NSDictionary *audioSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id delegateOverride;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (nonatomic, readonly) <AVCaptureAudioDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)new;

- (void)_handleConfigurationLiveEventForID:(long long)arg1 updatedFormatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x1; union { struct { struct opaqueCMSampleBuffer {} *x_1_2_1; } x_2_1_1; struct { long long x_2_2_1; struct opaqueCMFormatDescription {} *x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleSampleBufferEventForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)audioSettings;
- (bool)canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)delegateOverride;
- (id)delegateOverrideCallbackQueue;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)init;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAudioSettings:(id)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;

@end