/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSenderIdentityClient : NSObject {
    <TUCoreTelephonyClient> * _client;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <TUCoreTelephonyClient> *client;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)client;
- (id)init;
- (id)queue;
- (void)setClient:(id)arg1;

// TUSenderIdentityClient (Emergency)

- (bool)inEmergencyMode;
- (bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (bool)isEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id*)arg3;
- (bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2;
- (bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 senderIdentityUUID:(id)arg2 error:(id*)arg3;
- (bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1;
- (bool)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)arg1 error:(id*)arg2;
- (id)testEmergencyHandleForAccountUUID:(id)arg1 error:(id*)arg2;

// TUSenderIdentityClient (TTY)

- (bool)isRTTAvailableForSenderIdentityUUID:(id)arg1;
- (bool)isRTTSupportedForSenderIdentityUUID:(id)arg1;
- (bool)isTTYAvailableForSenderIdentityUUID:(id)arg1;
- (bool)isTTYEnabledForSenderIdentityUUID:(id)arg1;
- (bool)isTTYHardwareAvailableForSenderIdentityUUID:(id)arg1;
- (bool)isTTYHardwareEnabledForSenderIdentityUUID:(id)arg1;
- (bool)isTTYHardwareSupportedForSenderIdentityUUID:(id)arg1;
- (bool)isTTYSoftwareAvailableForSenderIdentityUUID:(id)arg1;
- (bool)isTTYSoftwareEnabledForSenderIdentityUUID:(id)arg1;
- (bool)isTTYSoftwareSupportedForSenderIdentityUUID:(id)arg1;
- (bool)isTTYSupportedForSenderIdentityUUID:(id)arg1;

@end
