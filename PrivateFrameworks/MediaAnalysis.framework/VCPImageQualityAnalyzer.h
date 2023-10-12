/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPImageQualityAnalyzer : NSObject {
    float  _qualityScore;
}

@property (readonly) float qualityScore;

- (int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(id /* block */)arg3;
- (float)qualityScore;

@end