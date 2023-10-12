/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDeviceIdentityCertificateTask : AMSTask {
    <AMSBagProtocol> * _bag;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestQueue;

- (void).cxx_destruct;
- (id)bag;
- (id)initWithBag:(id)arg1;
- (id)performDeviceIdentityRequestWithBaaOptions:(id)arg1 ttlBagKey:(id)arg2 logInformation:(id)arg3;
- (id)requestQueue;
- (void)setBag:(id)arg1;
- (void)setRequestQueue:(id)arg1;

// AMSDeviceIdentityCertificateTask (AMSAbsinthe)

- (id)performDeviceIdentityRequestForAbsinthe;

// AMSDeviceIdentityCertificateTask (AMSFraudReport)

- (id)performDeviceIdentityRequestForFraudReport;

@end
