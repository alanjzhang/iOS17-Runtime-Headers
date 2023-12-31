/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTEntitlementSupport : NSObject

@property (nonatomic, readonly) bool faceTimeNonWiFiEntitled;
@property (nonatomic, readonly) NSDictionary *registrationState;

+ (id)sharedInstance;

- (void)_cleanupMachInfo;
- (bool)_disconnectCTServerConnection;
- (void)_entitlementStatusChanged;
- (id)_rawEntitlementValue;
- (bool)_reconnectCTServerConnectionIfNecessary;
- (bool)_registerForCTEntitlementNotifications;
- (bool)_setupCTServerConnection;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { }*)arg1;
- (bool)faceTimeNonWiFiEntitled;
- (id)init;
- (id)registrationState;

@end
