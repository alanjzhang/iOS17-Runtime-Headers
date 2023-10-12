/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration {
    long long  _category;
    NSString * _domainName;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly, copy) NSString *domainName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
