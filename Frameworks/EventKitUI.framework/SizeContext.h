/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface SizeContext : NSObject {
    NSMutableArray * _windowContextStack;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)hasViewHierarchyForCurrentContext;
- (id)init;
- (void)popContextFromViewHierarchy:(id)arg1;
- (void)pushContextWithViewHierarchy:(id)arg1;
- (id)viewHierarchyForCurrentContext;

@end
