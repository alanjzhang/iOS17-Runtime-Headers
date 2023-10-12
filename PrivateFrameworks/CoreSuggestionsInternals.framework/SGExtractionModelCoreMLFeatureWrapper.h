/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGExtractionModelCoreMLFeatureWrapper : NSObject <MLFeatureProvider> {
    NSDictionary * _featureDict;
}

@property (nonatomic, readonly) NSDictionary *featureDict;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureDict;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithFeatureDict:(id)arg1;
- (id)initWithFeatureProvider:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
