/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase {
    NSString * _statusActivationLockBypassCode;
}

@property (nonatomic, copy) NSString *statusActivationLockBypassCode;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithActivationLockBypassCode:(id)arg1;
+ (id)buildWithActivationLockBypassCode:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusActivationLockBypassCode:(id)arg1;
- (id)statusActivationLockBypassCode;

@end
