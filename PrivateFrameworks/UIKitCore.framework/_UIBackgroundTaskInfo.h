/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackgroundTaskInfo : NSObject {
    bool  _alreadyWarnedAboutExpiration;
    long long  _creationTime;
    id /* block */  _expireHandler;
    BKSProcessAssertion * _processAssertion;
    unsigned long long  _taskId;
    NSString * _taskName;
}

+ (id)backgroundTaskAssertionQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)fireExpirationHandler;
- (id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(id /* block */)arg3;
- (void)invalidate;

@end
