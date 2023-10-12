/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentWebServiceRequest : PKOverlayableWebServiceRequest {
    <PKPeerPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
}

@property (nonatomic, retain) <PKPeerPaymentWebServiceTargetDeviceProtocol> *targetDevice;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 odiAssessment:(id)arg5 deviceMetadata:(id)arg6;
- (void)setTargetDevice:(id)arg1;
- (id)targetDevice;

@end
