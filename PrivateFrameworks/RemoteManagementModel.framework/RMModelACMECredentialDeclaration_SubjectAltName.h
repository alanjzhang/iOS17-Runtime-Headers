/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelACMECredentialDeclaration_SubjectAltName : RMModelPayloadBase {
    NSString * _payloadDNSName;
    NSString * _payloadNtPrincipalName;
    NSString * _payloadRfc822Name;
    NSString * _payloadUniformResourceIdentifier;
}

@property (nonatomic, copy) NSString *payloadDNSName;
@property (nonatomic, copy) NSString *payloadNtPrincipalName;
@property (nonatomic, copy) NSString *payloadRfc822Name;
@property (nonatomic, copy) NSString *payloadUniformResourceIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:(id)arg1 dnsName:(id)arg2 uniformResourceIdentifier:(id)arg3 ntPrincipalName:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadDNSName;
- (id)payloadNtPrincipalName;
- (id)payloadRfc822Name;
- (id)payloadUniformResourceIdentifier;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadDNSName:(id)arg1;
- (void)setPayloadNtPrincipalName:(id)arg1;
- (void)setPayloadRfc822Name:(id)arg1;
- (void)setPayloadUniformResourceIdentifier:(id)arg1;

@end
