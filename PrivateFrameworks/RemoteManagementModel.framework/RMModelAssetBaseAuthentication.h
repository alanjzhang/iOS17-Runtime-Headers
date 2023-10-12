/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelAssetBaseAuthentication : RMModelPayloadBase {
    NSString * _payloadType;
}

@property (nonatomic, copy) NSString *payloadType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithType:(id)arg1;
+ (id)buildWithType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadType;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadType:(id)arg1;

@end
