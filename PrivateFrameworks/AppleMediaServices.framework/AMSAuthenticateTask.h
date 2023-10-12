/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer> {
    NSNumber * _DSID;
    NSString * _altDSID;
    <AMSBagProtocol> * _bag;
    <AMSAuthenticateTaskDelegate> * _delegate;
    NSMutableArray * _errors;
    NSUUID * _homeIdentifier;
    NSUUID * _homeUserIdentifier;
    NSDictionary * _initialAuthenticationResults;
    NSString * _multiUserToken;
    AMSAuthenticateOptions * _options;
    NSString * _password;
    NSString * _rawPassword;
    AMSPromise * _resultPromise;
    NSString * _username;
}

@property (nonatomic, retain) NSNumber *DSID;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSAuthenticateTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *errors;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *homeIdentifier;
@property (nonatomic, retain) NSUUID *homeUserIdentifier;
@property (nonatomic, readonly) NSDictionary *initialAuthenticationResults;
@property (nonatomic, copy) NSString *multiUserToken;
@property (nonatomic, readonly) AMSAuthenticateOptions *options;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *rawPassword;
@property (nonatomic, retain) AMSPromise *resultPromise;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

+ (id)_createFallbackBag;
+ (void)_updateAccountPasswordUsingSecondaryAccounts:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (bool)loadCreateAppleIDWithClientInfo:(id)arg1 bag:(id)arg2 error:(id*)arg3;
+ (id)loadCreateAppleIDWithClientInfo:(id)arg1 url:(id)arg2 bag:(id)arg3;

- (void).cxx_destruct;
- (id)DSID;
- (id)_accountForAuthenticationWithError:(id*)arg1;
- (id)_accountStoreForAuthentication;
- (id)_attemptCompanionAuthenticationForAccount:(id)arg1;
- (void)_attemptMultiUserTokenAuthenticationForAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)_attemptPasswordReuseAuthenticationForAccount:(id)arg1;
- (id)_createAuthKitUpdateTaskForAccount:(id)arg1;
- (void)_finishWithVerifiedAccount:(id)arg1 andAuthKitUpdateResult:(id)arg2;
- (id)_handleDialogFromError:(id)arg1;
- (void)_performAuthenticationAndGeneratePasswordWithAccount:(id)arg1;
- (id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2;
- (void)_performAuthenticationWithInitialResultsAndAccount:(id)arg1;
- (void)_postFollowUpForFailedAuthenticationWithAccount:(id)arg1;
- (void)_processAuthKitUpdateResult:(id)arg1;
- (id)_runCreateAccountDialog;
- (id)_runCreateAccountDialogWithBag:(id)arg1;
- (id)_runDialogRequest:(id)arg1;
- (id)_sanitizeError:(id)arg1;
- (void)_updateAccountWithProvidedInformation:(id)arg1;
- (id)altDSID;
- (id)bag;
- (id)delegate;
- (id)errors;
- (id)homeID;
- (id)homeIdentifier;
- (id)homeUserIdentifier;
- (id)init;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)initWithAccount:(id)arg1 options:(id)arg2 bag:(id)arg3;
- (id)initWithAuthenticationResults:(id)arg1 options:(id)arg2;
- (id)initWithAuthenticationResults:(id)arg1 options:(id)arg2 bag:(id)arg3;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (id)initialAuthenticationResults;
- (id)multiUserToken;
- (id)options;
- (id)password;
- (id)performAuthentication;
- (id)rawPassword;
- (id)resultPromise;
- (void)setAltDSID:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setHomeID:(id)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setHomeUserIdentifier:(id)arg1;
- (void)setMultiUserToken:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setResultPromise:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end