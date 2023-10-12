/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCardAuthorizationTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {
    AMSBinaryPromise * _authorizationPromise;
    long long  _confirmationStyle;
    NSString * _countryCode;
    NSString * _currencyCode;
    bool  _didBiometricsLockout;
    bool  _didCancelHomeButton;
    AMSMetricsEvent * _metricsEvent;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    PKPayment * _payment;
    NSDictionary * _paymentSession;
    NSMutableArray * _userActions;
}

@property (nonatomic, retain) AMSBinaryPromise *authorizationPromise;
@property (nonatomic) long long confirmationStyle;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didBiometricsLockout;
@property (nonatomic) bool didCancelHomeButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) AMSMetricsEvent *metricsEvent;
@property (nonatomic, retain) NSString *passSerialNumber;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) PKPayment *payment;
@property (nonatomic, readonly) NSDictionary *paymentSession;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *userActions;

- (void).cxx_destruct;
- (void)_metricsPost;
- (id)_metricsTimestamp;
- (id)_metricsUserActionDictionary;
- (id)_presentPaymentRequest:(id)arg1;
- (id)authorizationPromise;
- (long long)confirmationStyle;
- (id)countryCode;
- (id)currencyCode;
- (bool)didBiometricsLockout;
- (bool)didCancelHomeButton;
- (id)initWithPaymentSession:(id)arg1;
- (id)metricsEvent;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)payment;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (id)paymentSession;
- (id)performCardAuthorization;
- (void)setAuthorizationPromise:(id)arg1;
- (void)setConfirmationStyle:(long long)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDidBiometricsLockout:(bool)arg1;
- (void)setDidCancelHomeButton:(bool)arg1;
- (void)setMetricsEvent:(id)arg1;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPayment:(id)arg1;
- (void)setUserActions:(id)arg1;
- (id)userActions;

@end
