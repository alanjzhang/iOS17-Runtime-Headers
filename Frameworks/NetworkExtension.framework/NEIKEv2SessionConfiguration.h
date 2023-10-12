/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2SessionConfiguration : NSObject <NEPrettyDescription, NSCopying> {
    NSString * _IMEI;
    NSString * _IMEISV;
    NSArray * _additionalMOBIKEAddresses;
    NEIKEv2AuthenticationProtocol * _authenticationProtocol;
    bool  _blackholeDetectionEnabled;
    NEIKEv2ConfigurationMessage * _configurationReply;
    NEIKEv2ConfigurationMessage * _configurationRequest;
    NSArray * _customIKEAuthPayloads;
    NSArray * _customIKEAuthPrivateNotifies;
    NSArray * _customIKEAuthVendorPayloads;
    bool  _deadPeerDetectionEnabled;
    unsigned long long  _deadPeerDetectionInterval;
    unsigned int  _deadPeerDetectionMaxRetryCount;
    unsigned int  _deadPeerDetectionMaxRetryCountBeforeReporting;
    unsigned long long  _deadPeerDetectionReceiveIntervalTriggerReporting;
    unsigned int  _deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
    unsigned long long  _deadPeerDetectionRetryIntervalMilliseconds;
    bool  _disableRemoteCertificateValidation;
    bool  _enableCertificateRevocationCheck;
    bool  _idleTimeoutEnabled;
    unsigned long long  _idleTimeoutSeconds;
    bool  _initialContactDisabled;
    bool  _localCertificateIsModernSystem;
    NSData * _localCertificateKeyReference;
    NSString * _localCertificateName;
    NSData * _localCertificateReference;
    NSData * _localEncryptedEAPIdentity;
    NEIKEv2Identifier * _localIdentifier;
    NSString * _localPrivateEAPIdentity;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _localPrivateKeyRef;
    bool  _natTraversalKeepaliveDisabled;
    bool  _natTraversalKeepaliveEnabled;
    unsigned long long  _natTraversalKeepaliveInterval;
    bool  _natTraversalKeepaliveOffloadEnabled;
    unsigned long long  _natTraversalKeepaliveOffloadInterval;
    bool  _negotiateMOBIKE;
    NSString * _password;
    NSData * _passwordReference;
    NSNumber * _pduSessionID;
    NEIKEv2AuthenticationProtocol * _remoteAuthentication;
    NSData * _remoteCertificateAuthorityHash;
    NSString * _remoteCertificateAuthorityName;
    NSArray * _remoteCertificateAuthorityReferences;
    NSString * _remoteCertificateHostname;
    NEIKEv2Identifier * _remoteIdentifier;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _remotePublicKeyRef;
    NSData * _sharedSecret;
    NSData * _sharedSecretReference;
    bool  _strictCertificateRevocationCheck;
    NSString * _tlsMaximumVersion;
    NSString * _tlsMinimumVersion;
    NSString * _username;
}

@property (retain) NSString *IMEI;
@property (retain) NSString *IMEISV;
@property (retain) NSArray *additionalMOBIKEAddresses;
@property (retain) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property bool blackholeDetectionEnabled;
@property (retain) NEIKEv2ConfigurationMessage *configurationReply;
@property (retain) NEIKEv2ConfigurationMessage *configurationRequest;
@property (retain) NSArray *customIKEAuthPayloads;
@property (nonatomic, retain) NSArray *customIKEAuthPrivateNotifies;
@property (retain) NSArray *customIKEAuthVendorPayloads;
@property bool deadPeerDetectionEnabled;
@property unsigned long long deadPeerDetectionInterval;
@property unsigned int deadPeerDetectionMaxRetryCount;
@property unsigned int deadPeerDetectionMaxRetryCountBeforeReporting;
@property unsigned long long deadPeerDetectionReceiveIntervalTriggerReporting;
@property unsigned int deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
@property unsigned long long deadPeerDetectionRetryIntervalMilliseconds;
@property bool disableRemoteCertificateValidation;
@property bool enableCertificateRevocationCheck;
@property bool idleTimeoutEnabled;
@property unsigned long long idleTimeoutSeconds;
@property bool initialContactDisabled;
@property bool localCertificateIsModernSystem;
@property (retain) NSData *localCertificateKeyReference;
@property (retain) NSString *localCertificateName;
@property (retain) NSData *localCertificateReference;
@property (retain) NSData *localEncryptedEAPIdentity;
@property (retain) NEIKEv2Identifier *localIdentifier;
@property (retain) NSString *localPrivateEAPIdentity;
@property (retain) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*localPrivateKeyRef;
@property bool natTraversalKeepaliveDisabled;
@property bool natTraversalKeepaliveEnabled;
@property unsigned long long natTraversalKeepaliveInterval;
@property bool natTraversalKeepaliveOffloadEnabled;
@property unsigned long long natTraversalKeepaliveOffloadInterval;
@property bool negotiateMOBIKE;
@property (retain) NSString *password;
@property (retain) NSData *passwordReference;
@property (retain) NSNumber *pduSessionID;
@property (retain) NEIKEv2AuthenticationProtocol *remoteAuthentication;
@property (retain) NSData *remoteCertificateAuthorityHash;
@property (retain) NSString *remoteCertificateAuthorityName;
@property (retain) NSArray *remoteCertificateAuthorityReferences;
@property (retain) NSString *remoteCertificateHostname;
@property (retain) NEIKEv2Identifier *remoteIdentifier;
@property (retain) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*remotePublicKeyRef;
@property (retain) NSData *sharedSecret;
@property (retain) NSData *sharedSecretReference;
@property bool strictCertificateRevocationCheck;
@property (retain) NSString *tlsMaximumVersion;
@property (retain) NSString *tlsMinimumVersion;
@property (retain) NSString *username;

- (void).cxx_destruct;
- (id)IMEI;
- (id)IMEISV;
- (id)additionalMOBIKEAddresses;
- (id)authenticationProtocol;
- (bool)blackholeDetectionEnabled;
- (id)configurationReply;
- (id)configurationRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIKEAuthPayloads;
- (id)customIKEAuthPrivateNotifies;
- (id)customIKEAuthVendorPayloads;
- (bool)deadPeerDetectionEnabled;
- (unsigned long long)deadPeerDetectionInterval;
- (unsigned int)deadPeerDetectionMaxRetryCount;
- (unsigned int)deadPeerDetectionMaxRetryCountBeforeReporting;
- (unsigned long long)deadPeerDetectionReceiveIntervalTriggerReporting;
- (unsigned int)deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
- (unsigned long long)deadPeerDetectionRetryIntervalMilliseconds;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)disableRemoteCertificateValidation;
- (bool)enableCertificateRevocationCheck;
- (bool)idleTimeoutEnabled;
- (unsigned long long)idleTimeoutSeconds;
- (id)init;
- (bool)initialContactDisabled;
- (bool)localCertificateIsModernSystem;
- (id)localCertificateKeyReference;
- (id)localCertificateName;
- (id)localCertificateReference;
- (id)localEncryptedEAPIdentity;
- (id)localIdentifier;
- (id)localPrivateEAPIdentity;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)localPrivateKeyRef;
- (bool)natTraversalKeepaliveDisabled;
- (bool)natTraversalKeepaliveEnabled;
- (unsigned long long)natTraversalKeepaliveInterval;
- (bool)natTraversalKeepaliveOffloadEnabled;
- (unsigned long long)natTraversalKeepaliveOffloadInterval;
- (bool)negotiateMOBIKE;
- (id)password;
- (id)passwordReference;
- (id)pduSessionID;
- (id)remoteAuthentication;
- (id)remoteCertificateAuthorityHash;
- (id)remoteCertificateAuthorityName;
- (id)remoteCertificateAuthorityReferences;
- (id)remoteCertificateHostname;
- (id)remoteIdentifier;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)remotePublicKeyRef;
- (void)setAdditionalMOBIKEAddresses:(id)arg1;
- (void)setAuthenticationProtocol:(id)arg1;
- (void)setBlackholeDetectionEnabled:(bool)arg1;
- (void)setConfigurationReply:(id)arg1;
- (void)setConfigurationRequest:(id)arg1;
- (void)setCustomIKEAuthPayloads:(id)arg1;
- (void)setCustomIKEAuthPrivateNotifies:(id)arg1;
- (void)setCustomIKEAuthVendorPayloads:(id)arg1;
- (void)setDeadPeerDetectionEnabled:(bool)arg1;
- (void)setDeadPeerDetectionInterval:(unsigned long long)arg1;
- (void)setDeadPeerDetectionMaxRetryCount:(unsigned int)arg1;
- (void)setDeadPeerDetectionMaxRetryCountBeforeReporting:(unsigned int)arg1;
- (void)setDeadPeerDetectionReceiveIntervalTriggerReporting:(unsigned long long)arg1;
- (void)setDeadPeerDetectionReceiveMaxShortDPDBeforeReporting:(unsigned int)arg1;
- (void)setDeadPeerDetectionRetryIntervalMilliseconds:(unsigned long long)arg1;
- (void)setDisableRemoteCertificateValidation:(bool)arg1;
- (void)setEnableCertificateRevocationCheck:(bool)arg1;
- (void)setIMEI:(id)arg1;
- (void)setIMEISV:(id)arg1;
- (void)setIdleTimeoutEnabled:(bool)arg1;
- (void)setIdleTimeoutSeconds:(unsigned long long)arg1;
- (void)setInitialContactDisabled:(bool)arg1;
- (void)setLocalCertificateIsModernSystem:(bool)arg1;
- (void)setLocalCertificateKeyReference:(id)arg1;
- (void)setLocalCertificateName:(id)arg1;
- (void)setLocalCertificateReference:(id)arg1;
- (void)setLocalEncryptedEAPIdentity:(id)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setLocalPrivateEAPIdentity:(id)arg1;
- (void)setLocalPrivateKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setNatTraversalKeepaliveDisabled:(bool)arg1;
- (void)setNatTraversalKeepaliveEnabled:(bool)arg1;
- (void)setNatTraversalKeepaliveInterval:(unsigned long long)arg1;
- (void)setNatTraversalKeepaliveOffloadEnabled:(bool)arg1;
- (void)setNatTraversalKeepaliveOffloadInterval:(unsigned long long)arg1;
- (void)setNegotiateMOBIKE:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordReference:(id)arg1;
- (void)setPduSessionID:(id)arg1;
- (void)setRemoteAuthentication:(id)arg1;
- (void)setRemoteCertificateAuthorityHash:(id)arg1;
- (void)setRemoteCertificateAuthorityName:(id)arg1;
- (void)setRemoteCertificateAuthorityReferences:(id)arg1;
- (void)setRemoteCertificateHostname:(id)arg1;
- (void)setRemoteIdentifier:(id)arg1;
- (void)setRemotePublicKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setSharedSecret:(id)arg1;
- (void)setSharedSecretReference:(id)arg1;
- (void)setStrictCertificateRevocationCheck:(bool)arg1;
- (void)setTlsMaximumVersion:(id)arg1;
- (void)setTlsMinimumVersion:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)sharedSecret;
- (id)sharedSecretReference;
- (bool)strictCertificateRevocationCheck;
- (id)tlsMaximumVersion;
- (id)tlsMinimumVersion;
- (id)username;

@end
