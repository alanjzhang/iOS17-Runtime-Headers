/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACTimedExpirer : NSObject {
    unsigned long long  _invalidationInterval;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationTimerLock;
}

+ (id)expirerWithTimeout:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_unsafeCancelTimer;
- (void)dealloc;
- (id)init;
- (void)scheduleExpiration:(id /* block */)arg1;

@end
