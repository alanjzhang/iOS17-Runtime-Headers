/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPUpdateIgnoreStateOperation : FPActionOperation {
    bool  _ignoreState;
    NSArray * _items;
}

- (void).cxx_destruct;
- (void)actionMain;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 ignoreState:(bool)arg2 action:(id)arg3;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end
