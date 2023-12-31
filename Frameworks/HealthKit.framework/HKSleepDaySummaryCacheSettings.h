/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSleepDaySummaryCacheSettings : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _mode;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long mode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 mode:(long long)arg2;
- (long long)mode;

@end
