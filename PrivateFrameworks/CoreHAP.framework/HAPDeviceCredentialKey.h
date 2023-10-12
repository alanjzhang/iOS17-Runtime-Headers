/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPDeviceCredentialKey : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _key;
    HAPNFCAccessKeyStateWrapper * _state;
    HAPNFCAccessKeyTypeWrapper * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *key;
@property (nonatomic, retain) HAPNFCAccessKeyStateWrapper *state;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPNFCAccessKeyTypeWrapper *type;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithType:(id)arg1 key:(id)arg2 state:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)key;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setKey:(id)arg1;
- (void)setState:(id)arg1;
- (void)setType:(id)arg1;
- (id)state;
- (id)type;

@end
