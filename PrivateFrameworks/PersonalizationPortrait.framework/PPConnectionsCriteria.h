/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPConnectionsCriteria : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned char  _locationField;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) unsigned char locationField;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationField:(unsigned char)arg1 bundleIdentifier:(id)arg2;
- (unsigned char)locationField;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLocationField:(unsigned char)arg1;

@end
