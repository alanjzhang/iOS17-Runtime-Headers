/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceListRestrictionsCommand_StatusProfileRestrictions : CEMPayloadBase {
    NSDictionary * _statusANY;
}

@property (nonatomic, copy) NSDictionary *statusANY;

+ (id)allowedStatusKeys;
+ (id)build;
+ (id)buildRequiredOnly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusANY:(id)arg1;
- (id)statusANY;

@end
