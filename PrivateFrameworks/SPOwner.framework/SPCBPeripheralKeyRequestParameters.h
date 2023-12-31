/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPCBPeripheralKeyRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    SPCBPeripheralManagerSessionKey * _sessionKey;
    NSArray * _vendorIdentifierList;
}

@property (nonatomic, readonly, copy) SPCBPeripheralManagerSessionKey *sessionKey;
@property (nonatomic, readonly, copy) NSArray *vendorIdentifierList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionKey:(id)arg1 vendorIdentifierList:(id)arg2;
- (id)sessionKey;
- (id)vendorIdentifierList;

@end
