/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFAuthenticatedCiphertext : _SFCiphertext {
    id  _authenticatedCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) NSData *initializationVector;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationCode;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initializationVector;
- (bool)isEqual:(id)arg1;

@end
