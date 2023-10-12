/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelManagementStatusSubscriptionsDeclaration_StatusItem : RMModelPayloadBase {
    NSString * _payloadName;
}

@property (nonatomic, copy) NSString *payloadName;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithName:(id)arg1;
+ (id)buildWithName:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadName;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadName:(id)arg1;

@end
