/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider> {
    NSDate * _birthday;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _phoneNumber;
    NSString * _rootPath;
    NSNumber * _secondFactorCode;
    bool  _termsAccepted;
    AKCommandLineUtilities * _utility;
    long long  _verificationType;
}

@property (nonatomic, copy) NSDate *birthday;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *rootPath;
@property (nonatomic, copy) NSNumber *secondFactorCode;
@property (nonatomic, retain) NSString *securityCode;
@property (readonly) Class superclass;
@property (nonatomic) bool termsAccepted;
@property (nonatomic, readonly) AKCommandLineUtilities *utility;
@property (nonatomic, readonly) long long verificationType;

- (void).cxx_destruct;
- (id)_accountCreationRequestBodyFromResponseDictionary:(id)arg1 shouldIncludePhoneNumber:(bool)arg2 shouldIncludeForSecurityCode:(bool)arg3;
- (id)_accountDictionary;
- (void)_beginDataTaskWithRequest:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)_capabilityForUIDisplay;
- (void)_collectAndHandleTermsAndConditionsWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_collectAndPostSecondFactorCodeWithRequestBody:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (id)_createContextDictionaryFromResponse:(id)arg1;
- (void)_handleServerUIBirthdayVerificationWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleServerUIPasswordVerificationWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleServerUIPhoneVerificationWithResponseDictionary:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleServerUISMSVerificationWithResponseDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleServerUISecondFactorWithObjectModel:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleServerUIWithDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(id /* block */)arg4;
- (id)_jsonPostbackDictionaryForCode:(id)arg1 numberId:(id)arg2;
- (id)_parseHeaderTitleForPasscodeView:(id)arg1;
- (id)_parseTrustedPhoneNumberFromResponseDictionary:(id)arg1;
- (void)_presentServerUISecondFactorWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)_promptForBirthday;
- (id)_promptForFirstName;
- (id)_promptForLastName;
- (id)_promptForPassword;
- (id)_promptForPhoneNumber;
- (id)_promptForUsername;
- (id)_promptForVerificationCodeWithSecureEntry:(bool)arg1 forTrustedNumber:(id)arg2;
- (id)_promptUserForSelectionWithTrustedNumbers:(id)arg1;
- (id)_promptUserForTermsWithResponseDictionary:(id)arg1;
- (id)_rootPath;
- (void)_verifySecondFactorCodeWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_xmlUIRequestForURL:(id)arg1 withPostbackDictionary:(id)arg2;
- (id)_xmlUIRequestForURL:(id)arg1 withServerInfo:(id)arg2;
- (id)birthday;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)arg1;
- (id)firstName;
- (id)init;
- (id)initWithVerificationType:(long long)arg1;
- (id)lastName;
- (id)phoneNumber;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)arg1;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)rootPath;
- (id)secondFactorCode;
- (void)setBirthday:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setNeedsNewAppleID:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSecondFactorCode:(id)arg1;
- (void)setTermsAccepted:(bool)arg1;
- (bool)termsAccepted;
- (id)utility;
- (long long)verificationType;

@end
