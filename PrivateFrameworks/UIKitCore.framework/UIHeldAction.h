/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHeldAction : UIDelayedAction {
    double  _baseDelay;
    NSDate * _holdBegan;
    bool  _holding;
    double  _timeBalance;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)hold;
- (bool)isHolding;
- (void)resume;
- (void)touchWithDelay:(double)arg1;
- (void)unschedule;

@end
