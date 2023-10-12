/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingIdentity : NSObject <NSSecureCoding> {
    NSData * _altIRK;
    NSUUID * _identifier;
    NSData * _publicKey;
    NSData * _secretKey;
}

@property (nonatomic, copy) NSData *altIRK;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic, copy) NSData *secretKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altIRK;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)publicKey;
- (id)secretKey;
- (void)setAltIRK:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setSecretKey:(id)arg1;

@end
