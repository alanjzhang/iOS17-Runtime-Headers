/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHealthServiceDiscoveryInfo : NSObject {
    bool  _alwaysNotify;
    id /* block */  _discoveryHandler;
    unsigned long long  _discoveryIdentifier;
    NSMutableSet * _peripheralsUUIDs;
    bool  _requiresActiveScan;
    CBUUID * _serviceUUID;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

- (void).cxx_destruct;

@end
