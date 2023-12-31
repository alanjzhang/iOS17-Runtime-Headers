/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCrossPlatformShareURL : NSObject <NSSecureCoding> {
    NSString * _expectedPairedReaderIdentifier;
    NSString * _expectedProvisioningCredentialHash;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *expectedPairedReaderIdentifier;
@property (nonatomic, readonly) NSString *expectedProvisioningCredentialHash;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedPairedReaderIdentifier;
- (id)expectedProvisioningCredentialHash;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 expectedPairedReaderIdentifier:(id)arg2 expectedProvisioningCredentialHash:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCrossPlatformShareURL:(id)arg1;
- (id)url;

@end
