/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase {
    NSString * _payloadSecret;
}

@property (nonatomic, copy) NSString *payloadSecret;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithSecret:(id)arg1;
+ (id)buildWithSecret:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadSecret;
- (id)serializePayload;
- (void)setPayloadSecret:(id)arg1;

@end
