/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _HTTPHeaders;
    unsigned long long  _allowPasswordGeneration;
    bool  _allowSecondaryCredentialSource;
    bool  _allowServerDialogs;
    NSString * _appProvidedContext;
    NSDictionary * _appProvidedData;
    unsigned long long  _authenticationType;
    bool  _canMakeAccountActive;
    NSString * _cancelButtonString;
    AMSProcessInfo * _clientInfo;
    NSString * _companionDeviceClientInfo;
    NSString * _companionDeviceUDID;
    NSDictionary * _createAccountQueryParams;
    unsigned long long  _credentialSource;
    NSString * _debugReason;
    NSString * _defaultButtonString;
    NSString * _delegateAuthChallenge;
    bool  _delegateAuthEnabled;
    bool  _demoAccountSetup;
    bool  _enableAccountCreation;
    bool  _ephemeral;
    bool  _forceSyncToPairedWatch;
    NSURL * _iconBundleURL;
    bool  _ignoreAccountConversion;
    NSString * _logKey;
    NSString * _passwordlessToken;
    NSString * _promptTitle;
    NSString * _proxyAppBundleID;
    NSString * _proxyAppName;
    NSString * _reason;
    bool  _remoteProxyAuthentication;
    NSString * _serviceIdentifier;
    long long  _serviceType;
    NSString * _userAgent;
    NSString * _userAgentSuffix;
    bool  _usernameEditable;
}

@property (nonatomic, retain) NSDictionary *HTTPHeaders;
@property (nonatomic) unsigned long long allowPasswordGeneration;
@property (nonatomic) bool allowSecondaryCredentialSource;
@property (nonatomic) bool allowServerDialogs;
@property (nonatomic, copy) NSString *appProvidedContext;
@property (nonatomic, copy) NSDictionary *appProvidedData;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) bool canMakeAccountActive;
@property (nonatomic, retain) NSString *cancelButtonString;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSString *companionDeviceClientInfo;
@property (nonatomic, retain) NSString *companionDeviceUDID;
@property (nonatomic, retain) NSDictionary *createAccountQueryParams;
@property (nonatomic) unsigned long long credentialSource;
@property (nonatomic, retain) NSString *debugReason;
@property (nonatomic, retain) NSString *defaultButtonString;
@property (nonatomic, retain) NSString *delegateAuthChallenge;
@property (nonatomic) bool delegateAuthEnabled;
@property (getter=isDemoAccountSetup, nonatomic) bool demoAccountSetup;
@property (nonatomic) bool enableAccountCreation;
@property (nonatomic) bool ephemeral;
@property (nonatomic) bool forceSyncToPairedWatch;
@property (nonatomic, retain) NSURL *iconBundleURL;
@property (nonatomic) bool ignoreAccountConversion;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, copy) NSString *passwordlessToken;
@property (nonatomic, retain) NSString *promptTitle;
@property (nonatomic, retain) NSString *proxyAppBundleID;
@property (nonatomic, retain) NSString *proxyAppName;
@property (nonatomic, retain) NSString *reason;
@property (getter=isRemoteProxyAuthentication, nonatomic, readonly) bool remoteProxyAuthentication;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) long long serviceType;
@property (nonatomic, retain) NSString *userAgent;
@property (nonatomic, retain) NSString *userAgentSuffix;
@property (nonatomic) bool usernameEditable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)HTTPHeaders;
- (unsigned long long)allowPasswordGeneration;
- (bool)allowSecondaryCredentialSource;
- (bool)allowServerDialogs;
- (id)appProvidedContext;
- (id)appProvidedData;
- (id)authKitData;
- (unsigned long long)authenticationType;
- (bool)canMakeAccountActive;
- (id)cancelButtonString;
- (id)clientInfo;
- (id)companionDeviceClientInfo;
- (id)companionDeviceUDID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAccountQueryParams;
- (unsigned long long)credentialSource;
- (id)debugReason;
- (id)defaultButtonString;
- (id)delegateAuthChallenge;
- (bool)delegateAuthEnabled;
- (id)description;
- (bool)enableAccountCreation;
- (void)encodeWithCoder:(id)arg1;
- (bool)ephemeral;
- (bool)forceSyncToPairedWatch;
- (id)iconBundleURL;
- (bool)ignoreAccountConversion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptionsDictionary:(id)arg1;
- (bool)isDemoAccountSetup;
- (bool)isEqual:(id)arg1;
- (bool)isRemoteProxyAuthentication;
- (id)logKey;
- (id)mediaType;
- (id)optionsDictionary;
- (id)optionsDictionaryForRemoteProxyAuthentication;
- (id)passwordlessToken;
- (id)presentingViewController;
- (id)promptTitle;
- (id)proxyAppBundleID;
- (id)proxyAppName;
- (id)reason;
- (id)serviceIdentifier;
- (long long)serviceType;
- (void)setAllowPasswordGeneration:(unsigned long long)arg1;
- (void)setAllowSecondaryCredentialSource:(bool)arg1;
- (void)setAllowServerDialogs:(bool)arg1;
- (void)setAppProvidedContext:(id)arg1;
- (void)setAppProvidedData:(id)arg1;
- (void)setAuthKitData:(id)arg1;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setCanMakeAccountActive:(bool)arg1;
- (void)setCancelButtonString:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setCompanionDeviceClientInfo:(id)arg1;
- (void)setCompanionDeviceUDID:(id)arg1;
- (void)setCreateAccountQueryParams:(id)arg1;
- (void)setCredentialSource:(unsigned long long)arg1;
- (void)setDebugReason:(id)arg1;
- (void)setDefaultButtonString:(id)arg1;
- (void)setDelegateAuthChallenge:(id)arg1;
- (void)setDelegateAuthEnabled:(bool)arg1;
- (void)setDemoAccountSetup:(bool)arg1;
- (void)setEnableAccountCreation:(bool)arg1;
- (void)setEphemeral:(bool)arg1;
- (void)setForceSyncToPairedWatch:(bool)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setIconBundleURL:(id)arg1;
- (void)setIgnoreAccountConversion:(bool)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setPasswordlessToken:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPromptTitle:(id)arg1;
- (void)setProxyAppBundleID:(id)arg1;
- (void)setProxyAppName:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUserAgentSuffix:(id)arg1;
- (void)setUsernameEditable:(bool)arg1;
- (id)userAgent;
- (id)userAgentSuffix;
- (bool)usernameEditable;

@end
