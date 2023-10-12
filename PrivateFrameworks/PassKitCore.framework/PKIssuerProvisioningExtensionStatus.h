/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding> {
    bool  _passEntriesAvailable;
    bool  _remotePassEntriesAvailable;
    bool  _requiresAuthentication;
}

@property (nonatomic) bool passEntriesAvailable;
@property (nonatomic) bool remotePassEntriesAvailable;
@property (nonatomic) bool requiresAuthentication;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)passEntriesAvailable;
- (bool)remotePassEntriesAvailable;
- (bool)requiresAuthentication;
- (void)setPassEntriesAvailable:(bool)arg1;
- (void)setRemotePassEntriesAvailable:(bool)arg1;
- (void)setRequiresAuthentication:(bool)arg1;

@end
