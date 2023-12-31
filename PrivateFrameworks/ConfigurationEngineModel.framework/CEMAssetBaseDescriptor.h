/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMAssetBaseDescriptor : CEMPayloadBase {
    NSString * _payloadDescription;
    NSString * _payloadTitle;
}

@property (nonatomic, copy) NSString *payloadDescription;
@property (nonatomic, copy) NSString *payloadTitle;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithTitle:(id)arg1;
+ (id)buildWithTitle:(id)arg1 withDescription:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDescription;
- (id)payloadTitle;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPayloadTitle:(id)arg1;

@end
