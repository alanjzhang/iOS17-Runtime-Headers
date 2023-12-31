/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMPredicateBase : CEMPayloadBase {
    NSString * _payloadType;
}

@property (nonatomic, copy) NSString *payloadType;

+ (id)predicateForPayload:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)evaluateWithOptions:(id)arg1 error:(id*)arg2;
- (id)payloadType;
- (void)setPayloadType:(id)arg1;

@end
