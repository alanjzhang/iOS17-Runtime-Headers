/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationGroupSystemImposedInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _expectedReceiveSize;
    long long  _expectedSendSize;
    NSDictionary * _networkServiceTypePerConfig;
}

@property long long expectedReceiveSize;
@property long long expectedSendSize;
@property (copy) NSDictionary *networkServiceTypePerConfig;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedReceiveSize;
- (long long)expectedSendSize;
- (id)initWithCoder:(id)arg1;
- (id)networkServiceTypePerConfig;
- (void)setExpectedReceiveSize:(long long)arg1;
- (void)setExpectedSendSize:(long long)arg1;
- (void)setNetworkServiceTypePerConfig:(id)arg1;

@end