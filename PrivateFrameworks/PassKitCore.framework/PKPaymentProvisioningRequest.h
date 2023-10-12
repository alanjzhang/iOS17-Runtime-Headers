/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest {
    NSData * _activationData;
    NSString * _applicationIdentifier;
    NSArray * _authorizationKeyAttestation;
    NSString * _cardSecurityCode;
    NSString * _cardholderName;
    NSArray * _certChain;
    NSData * _challengeResponse;
    PKDSPContext * _context;
    NSData * _cryptogram;
    bool  _devSigned;
    PKPaymentDeviceMetadata * _deviceData;
    bool  _disableDeviceScore;
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSArray * _externalDestinationDevices;
    NSData * _fidoAttestation;
    NSData * _fidoKey;
    NSData * _fidoSignedChallenge;
    bool  _includeExternalDestinationDevices;
    NSArray * _isoDeviceEncryptionAttestation;
    NSData * _isoDeviceEncryptionAuthorization;
    NSData * _longTermPrivacyKey;
    NSString * _nonce;
    NSNumber * _primaryJSBLSequenceCounter;
    NSData * _progenitorKeyCASDAttestation;
    NSString * _referrerIdentifier;
    bool  _removeFromSourceDevice;
    NSData * _seBlobDeviceEncryptionCertificate;
    bool  _sendReducedDeviceData;
    NSData * _serverAttestedProvisioningData;
    long long  _style;
    NSString * _subCredentialIdentifier;
    NSData * _transactionKey;
    NSData * _transactionKeyAttestation;
    NSData * _transactionKeyAuthorization;
    NSArray * _transactionKeyCertificateChain;
    NSData * _transactionKeySignature;
    NSArray * _transactionKeys;
    NSString * _transferFromDevice;
}

@property (nonatomic, copy) NSData *activationData;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSArray *authorizationKeyAttestation;
@property (nonatomic, copy) NSString *cardSecurityCode;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, copy) NSData *challengeResponse;
@property (nonatomic, copy) PKDSPContext *context;
@property (nonatomic, copy) NSData *cryptogram;
@property (getter=isDeviceProvisioningDataExpected, nonatomic, readonly) bool deviceProvisioningDataExpected;
@property (nonatomic) bool disableDeviceScore;
@property (nonatomic, retain) PKPaymentEligibilityResponse *eligibilityResponse;
@property (nonatomic, copy) NSArray *externalDestinationDevices;
@property (nonatomic, copy) NSData *fidoAttestation;
@property (nonatomic, copy) NSData *fidoKey;
@property (nonatomic, copy) NSData *fidoSignedChallenge;
@property (nonatomic) bool includeExternalDestinationDevices;
@property (nonatomic, copy) NSArray *isoDeviceEncryptionAttestation;
@property (nonatomic, copy) NSData *isoDeviceEncryptionAuthorization;
@property (nonatomic, copy) NSData *longTermPrivacyKey;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, copy) NSData *progenitorKeyCASDAttestation;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic) bool removeFromSourceDevice;
@property (nonatomic, copy) NSData *seBlobDeviceEncryptionCertificate;
@property (nonatomic) bool sendReducedDeviceData;
@property (nonatomic, copy) NSData *serverAttestedProvisioningData;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *subCredentialIdentifier;
@property (nonatomic, copy) NSData *transactionKey;
@property (nonatomic, copy) NSData *transactionKeyAttestation;
@property (nonatomic, copy) NSData *transactionKeyAuthorization;
@property (nonatomic, copy) NSArray *transactionKeyCertificateChain;
@property (nonatomic, copy) NSData *transactionKeySignature;
@property (nonatomic, copy) NSArray *transactionKeys;
@property (nonatomic, copy) NSString *transferFromDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_deviceScoreWithCompletion:(id /* block */)arg1;
- (void)_encryptSecureDictionary:(id)arg1 intoDictionary:(id)arg2;
- (void)_requestBodyWithWebService:(id)arg1 completion:(id /* block */)arg2;
- (id)_secureParemters;
- (void)_updateContextUsingWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(id /* block */)arg8;
- (id)activationData;
- (id)applicationIdentifier;
- (id)authorizationKeyAttestation;
- (id)cardSecurityCode;
- (id)cardholderName;
- (id)challengeResponse;
- (id)context;
- (id)cryptogram;
- (bool)disableDeviceScore;
- (id)eligibilityResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)externalDestinationDevices;
- (id)fidoAttestation;
- (id)fidoKey;
- (id)fidoSignedChallenge;
- (bool)includeExternalDestinationDevices;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEligibilityResponse:(id)arg1;
- (id)initWithEligibilityResponse:(id)arg1 addRequestConfiguration:(id)arg2 addRequest:(id)arg3;
- (id)initWithEligibilityResponse:(id)arg1 style:(long long)arg2;
- (bool)isDeviceProvisioningDataExpected;
- (id)isoDeviceEncryptionAttestation;
- (id)isoDeviceEncryptionAuthorization;
- (id)longTermPrivacyKey;
- (id)nonce;
- (id)progenitorKeyCASDAttestation;
- (id)referrerIdentifier;
- (bool)removeFromSourceDevice;
- (id)seBlobDeviceEncryptionCertificate;
- (bool)sendReducedDeviceData;
- (id)serverAttestedProvisioningData;
- (void)setActivationData:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAuthorizationKeyAttestation:(id)arg1;
- (void)setCardSecurityCode:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setChallengeResponse:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCryptogram:(id)arg1;
- (void)setDisableDeviceScore:(bool)arg1;
- (void)setEligibilityResponse:(id)arg1;
- (void)setExternalDestinationDevices:(id)arg1;
- (void)setFidoAttestation:(id)arg1;
- (void)setFidoKey:(id)arg1;
- (void)setFidoSignedChallenge:(id)arg1;
- (void)setIncludeExternalDestinationDevices:(bool)arg1;
- (void)setIsoDeviceEncryptionAttestation:(id)arg1;
- (void)setIsoDeviceEncryptionAuthorization:(id)arg1;
- (void)setLongTermPrivacyKey:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setProgenitorKeyCASDAttestation:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setRemoveFromSourceDevice:(bool)arg1;
- (void)setSeBlobDeviceEncryptionCertificate:(id)arg1;
- (void)setSendReducedDeviceData:(bool)arg1;
- (void)setServerAttestedProvisioningData:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubCredentialIdentifier:(id)arg1;
- (void)setTransactionKey:(id)arg1;
- (void)setTransactionKeyAttestation:(id)arg1;
- (void)setTransactionKeyAuthorization:(id)arg1;
- (void)setTransactionKeyCertificateChain:(id)arg1;
- (void)setTransactionKeySignature:(id)arg1;
- (void)setTransactionKeys:(id)arg1;
- (void)setTransferFromDevice:(id)arg1;
- (long long)style;
- (id)subCredentialIdentifier;
- (id)transactionKey;
- (id)transactionKeyAttestation;
- (id)transactionKeyAuthorization;
- (id)transactionKeyCertificateChain;
- (id)transactionKeySignature;
- (id)transactionKeys;
- (id)transferFromDevice;

@end
