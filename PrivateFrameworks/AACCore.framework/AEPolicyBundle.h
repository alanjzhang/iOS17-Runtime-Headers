/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AACCore.framework/AACCore
 */

@interface AEPolicyBundle : NSObject {
    NSArray * _activations;
    <AEPerformancePrimitives> * _performancePrimitives;
    <AEPolicyStore> * _policyStore;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)activateSessionWithCompletion:(id /* block */)arg1;
- (id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 activations:(id)arg3 queue:(id)arg4;
- (id)recoverySession;

@end
