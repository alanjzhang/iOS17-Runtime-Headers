/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {
    NSData * _pemData;
}

@property (nonatomic, readonly, retain) NSData *pemData;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isIdentity;
- (id)pemData;
- (id)verboseDescription;

@end