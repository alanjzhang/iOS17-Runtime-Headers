/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion {
    SBSLockScreenContentAssertion * _actualAssertion;
}

@property (nonatomic, retain) SBSLockScreenContentAssertion *actualAssertion;

+ (id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(id /* block */)arg2;
+ (id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 supportedOrientations:(unsigned long long)arg2 errorHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)_supportsReacquisition;
- (id)actualAssertion;
- (void)setActualAssertion:(id)arg1;

@end
