/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *buildNumber;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *version;

+ (id)appIdentifyingInfo;
+ (id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)buildNumber;
- (id)bundleId;
- (id)clientIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setBuildNumber:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
