/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAutonomousSingleAppModeSession : NSObject {
    bool  _active;
    UIAutonomousSingleAppModeConfiguration * _effectiveConfiguration;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration;

+ (id)__gaxTrampoline_currentlyActiveSession;
+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (id)currentlyActiveSession;
+ (void)requestSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)__gaxTrampoline_endSessionWithCompletion:(id /* block */)arg1;
- (void)_guidedAccessStateDidChange:(id)arg1;
- (void)dealloc;
- (id)effectiveConfiguration;
- (void)endWithCompletion:(id /* block */)arg1;
- (id)initWithEffectiveConfiguration:(id)arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setEffectiveConfiguration:(id)arg1;

@end
