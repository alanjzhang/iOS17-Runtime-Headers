/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMISaliencyModelFeatureProvider : NSObject <MLFeatureProvider> {
    MLMultiArray * _data;
    NSSet * _featureNames;
}

@property (nonatomic, retain) MLMultiArray *data;
@property (nonatomic, retain) NSSet *featureNames;

- (void).cxx_destruct;
- (id)data;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFeatureNames:(id)arg1;

@end
