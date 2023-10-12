/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger {
    NSString * _detail;
    CLCircularRegion * _region;
}

@property (nonatomic, readonly, copy) NSString *detail;
@property (nonatomic, readonly, copy) CLCircularRegion *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)detail;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSecureData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1 detail:(id)arg2 enabledSetting:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)region;

@end
