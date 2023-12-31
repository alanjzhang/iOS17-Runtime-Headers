/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRFormDetectorModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _anchors;
    MLMultiArray * _boundingBoxes;
    MLMultiArray * _classLogits;
}

@property (nonatomic, retain) MLMultiArray *anchors;
@property (nonatomic, retain) MLMultiArray *boundingBoxes;
@property (nonatomic, retain) MLMultiArray *classLogits;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)anchors;
- (id)boundingBoxes;
- (id)classLogits;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithBoundingBoxes:(id)arg1 classLogits:(id)arg2 anchors:(id)arg3;
- (void)setAnchors:(id)arg1;
- (void)setBoundingBoxes:(id)arg1;
- (void)setClassLogits:(id)arg1;

@end
