/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSLocalizedString : NSString <CSCoderEncoder> {
    NSString * _defaultString;
    bool  _didTrySettingDefaultString;
    NSDictionary * _localizedStrings;
}

@property (nonatomic, readonly) NSString *defaultString;
@property (nonatomic) bool didTrySettingDefaultString;
@property (nonatomic, readonly) NSDictionary *localizedStrings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultString;
- (bool)didTrySettingDefaultString;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedStrings:(id)arg1;
- (unsigned long long)length;
- (id)localizedString;
- (id)localizedStrings;
- (void)setDidTrySettingDefaultString:(bool)arg1;

// CSLocalizedString (CSCoderAdditions)

- (void)encodeWithCSCoder:(id)arg1;

@end
