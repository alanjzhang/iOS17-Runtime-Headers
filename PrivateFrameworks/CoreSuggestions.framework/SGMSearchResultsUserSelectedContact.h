/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMSearchResultsUserSelectedContact : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 wasSuggestedContact:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg2 wasKnownContact:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg3 app:(struct SGMContactDetailUsedApp_ { unsigned long long x1; })arg4;
- (id)tracker;

@end
