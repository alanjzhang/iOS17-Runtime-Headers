/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCloudConfiguration : NSObject

@property (nonatomic, copy) NSDictionary *details;
@property (nonatomic, copy) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (id)MAIDUsername;
- (bool)alreadySignedIntoFaceTime;
- (id)details;
- (id)diagnosticsUploadURL;
- (bool)hasMAIDCredential;
- (bool)isAwaitingConfiguration;
- (bool)isProvisionallyEnrolled;
- (bool)isSupervised;
- (bool)isTeslaEnrolled;
- (id)language;
- (id)languageScript;
- (id)mdmVersionProtocol;
- (id)provisionalEnrollmentExpirationDate;
- (void)refreshDetailsFromDisk;
- (id)region;
- (id)setAsideDetails;
- (void)setDetails:(id)arg1;
- (void)setSetAsideDetails:(id)arg1;
- (id)skipSetupKeys;
- (id)tvProviderUserToken;

@end