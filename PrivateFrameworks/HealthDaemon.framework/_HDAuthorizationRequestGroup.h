/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAuthorizationRequestGroup : NSObject {
    NSMutableArray * _completions;
    bool  _inTransaction;
    id /* block */  _promptHandler;
    NSUUID * _promptSessionIdentifier;
    NSMutableArray * _requests;
    NSObject<OS_dispatch_source> * _sessionTimeoutSource;
    HKSource * _source;
    NSMutableSet * _typesToRead;
    NSMutableSet * _typesToWrite;
}

- (void).cxx_destruct;
- (id)description;

@end
