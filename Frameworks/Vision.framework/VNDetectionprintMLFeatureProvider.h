/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectionprintMLFeatureProvider : NSObject <MLFeatureProvider> {
    VNDetectionprint * _detectionprint;
    NSDictionary * _detectionprintFeatureDescriptions;
    <MLFeatureProvider> * _originalFeatureProvider;
}

@property (nonatomic, readonly) NSSet *featureNames;

+ (id)VNDetectionprintTensorKeyForFeatureName:(id)arg1;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithDetectionprint:(id)arg1 featureDescriptions:(id)arg2 originalFeatureProvider:(id)arg3;

@end
