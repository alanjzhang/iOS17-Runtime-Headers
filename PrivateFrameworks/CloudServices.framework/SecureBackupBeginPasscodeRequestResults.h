/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding> {
    NSData * _cert;
    NSString * _dsid;
    NSString * _escrowFederation;
    NSString * _iCloudEnvironment;
    NSString * _uuid;
}

@property (readonly) NSData *cert;
@property (readonly) NSString *dsid;
@property (readonly) NSString *escrowFederation;
@property (readonly) NSString *iCloudEnvironment;
@property (readonly) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cert;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)escrowFederation;
- (id)iCloudEnvironment;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoredCertificate:(id)arg1 uuid:(id)arg2;
- (id)uuid;

@end
