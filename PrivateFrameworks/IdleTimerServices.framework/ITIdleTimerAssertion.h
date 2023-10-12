/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
 */

@interface ITIdleTimerAssertion : BSSimpleAssertion {
    ITIdleTimerConfiguration * _configuration;
}

@property (nonatomic, readonly, copy) ITIdleTimerConfiguration *configuration;
@property (getter=_uniqueReason, nonatomic, readonly, copy) NSString *uniqueReason;

- (void).cxx_destruct;
- (id)_initWithConfiguration:(id)arg1 forReason:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (id)_uniqueReason;
- (id)configuration;
- (id)succinctDescriptionBuilder;

@end
