/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRConfidenceThresholds : NSObject {
    float  _highConfidenceThreshold;
    float  _mediumConfidenceThreshold;
}

@property (readonly) float highConfidenceThreshold;
@property (readonly) float mediumConfidenceThreshold;

+ (id)defaultConfidenceThresholds;

- (float)highConfidenceThreshold;
- (id)initWithMediumThreshold:(float)arg1 highThreshold:(float)arg2;
- (float)mediumConfidenceThreshold;

@end
