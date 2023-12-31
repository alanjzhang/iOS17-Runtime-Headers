/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPendingProvisioningChange : NSObject <NSSecureCoding> {
    PKPendingProvisioning * _pendingProvisioning;
    unsigned long long  _type;
}

@property (nonatomic, readonly) PKPendingProvisioning *pendingProvisioning;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 pendingProvisioning:(id)arg2;
- (id)pendingProvisioning;
- (unsigned long long)type;

@end
