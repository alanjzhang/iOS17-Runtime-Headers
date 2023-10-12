/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKASCAssociatedReaderIDReaderCA : NSObject <NSSecureCoding> {
    NSData * _attestation;
    NSData * _publicKey;
}

@property (nonatomic, retain) NSData *attestation;
@property (nonatomic, retain) NSData *publicKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)attestation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToASCAssociatedReaderIDReaderCA:(id)arg1;
- (id)publicKey;
- (void)setAttestation:(id)arg1;
- (void)setPublicKey:(id)arg1;

@end
