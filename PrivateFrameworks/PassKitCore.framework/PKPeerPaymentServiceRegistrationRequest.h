/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest {
    PKPeerPaymentDeviceRegistrationData * _deviceData;
    NSString * _pushToken;
}

@property (nonatomic, retain) PKPeerPaymentDeviceRegistrationData *deviceData;
@property (nonatomic, copy) NSString *pushToken;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 odiAssessment:(id)arg5 deviceMetadata:(id)arg6;
- (id)deviceData;
- (id)pushToken;
- (void)setDeviceData:(id)arg1;
- (void)setPushToken:(id)arg1;

@end
