/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUScanOverlay : NSObject {
    NSMutableArray * _rules;
}

@property (nonatomic, readonly) NSArray *refinementRules;

+ (id)defaultOverlay;
+ (id)defaultOverlayWithScanner:(id)arg1;
+ (bool)foundationHasNSSliceMemoryOptimization;

- (void).cxx_destruct;
- (void)addMetadataRefinementRule:(id /* block */)arg1;
- (id)initWithScanner:(id)arg1;
- (id)refinementRules;

@end
