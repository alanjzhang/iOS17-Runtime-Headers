/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDeviceRequestHandlingRecord : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    unsigned long long  _deviceRoles;
    NSString * _requestID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceRoles;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *requestID;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceRoles;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithRequestID:(id)arg1 deviceRoles:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)requestID;

// AFDeviceRequestHandlingRecord (AFDeviceRequestHandlingRecordMutability)

- (id)mutatedCopyWithMutator:(id /* block */)arg1;

// AFDeviceRequestHandlingRecord (ContextSnapshot)

- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

@end
