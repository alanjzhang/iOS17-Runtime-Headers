/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXElementVision__generated__Output : NSObject <MLFeatureProvider> {
    MLMultiArray * _confidence;
    MLMultiArray * _coordinates;
}

@property (nonatomic, retain) MLMultiArray *confidence;
@property (nonatomic, retain) MLMultiArray *coordinates;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)confidence;
- (id)coordinates;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithConfidence:(id)arg1 coordinates:(id)arg2;
- (void)setConfidence:(id)arg1;
- (void)setCoordinates:(id)arg1;

@end
