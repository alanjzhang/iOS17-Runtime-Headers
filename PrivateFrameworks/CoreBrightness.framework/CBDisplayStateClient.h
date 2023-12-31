/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBDisplayStateClient : NSObject {
    <CBDisplayStateClientDelegate> * _completionDelegate;
    bool  _supported;
}

@property (nonatomic, retain) <CBDisplayStateClientDelegate> *completionDelegate;
@property (nonatomic, readonly) long long displayMode;
@property (nonatomic, readonly) bool supported;

- (void)_displayModeChangeCompletionHandler:(long long)arg1;
- (void)_removeCompletionDelegate;
- (void)activate;
- (void)cancel;
- (id)completionDelegate;
- (void)dealloc;
- (long long)displayMode;
- (id)init;
- (void)setCompletionDelegate:(id)arg1;
- (bool)supported;
- (bool)switchToFlipbookState:(long long)arg1 error:(id*)arg2;
- (bool)transitionToDisplayMode:(long long)arg1 withDuration:(double)arg2 error:(id*)arg3;

@end
