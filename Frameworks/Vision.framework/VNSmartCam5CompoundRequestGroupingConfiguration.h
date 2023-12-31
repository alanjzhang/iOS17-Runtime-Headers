/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject {
    NSMutableDictionary * _detectorConfigurationOptions;
    unsigned long long  _imageCropAndScaleOption;
    NSMutableSet * _originalRequests;
}

- (void).cxx_destruct;
- (void)addOriginalRequest:(id)arg1;
- (id)detectorConfigurationOptions;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithImageCropAndScaleOption:(unsigned long long)arg1;
- (id)originalRequests;
- (bool)preferBackgroundProcessing;
- (id)processingDevice;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;

@end
