/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSubscriptionManager : NSObject {
    PSSSSubscriptionManager * _internal;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2;
- (void)unregisterAllSubscriptions;
- (void)unregisterSubscriptionWithInfo:(id)arg1;

@end
