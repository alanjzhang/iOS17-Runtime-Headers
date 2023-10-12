/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRDetectedRecognizedRegionPair : NSObject {
    CRDetectedLineRegion * _detectedLineRegion;
    NSArray * _recognizedTextRegions;
}

@property (retain) CRDetectedLineRegion *detectedLineRegion;
@property (retain) NSArray *recognizedTextRegions;

- (void).cxx_destruct;
- (id)detectedLineRegion;
- (id)initWithDetectedRegion:(id)arg1 recognizedRegions:(id)arg2;
- (id)recognizedTextRegions;
- (void)setDetectedLineRegion:(id)arg1;
- (void)setRecognizedTextRegions:(id)arg1;

@end
