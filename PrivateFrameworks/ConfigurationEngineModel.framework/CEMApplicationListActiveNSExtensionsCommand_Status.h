/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMApplicationListActiveNSExtensionsCommand_Status : CEMPayloadBase {
    NSArray * _statusExtensions;
}

@property (nonatomic, copy) NSArray *statusExtensions;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithExtensions:(id)arg1;
+ (id)buildWithExtensions:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusExtensions:(id)arg1;
- (id)statusExtensions;

@end
