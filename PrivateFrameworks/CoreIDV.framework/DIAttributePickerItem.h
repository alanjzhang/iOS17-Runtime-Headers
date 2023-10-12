/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIAttributePickerItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizedDisplayName;
    NSString * _value;
}

@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)localizedDisplayName;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end