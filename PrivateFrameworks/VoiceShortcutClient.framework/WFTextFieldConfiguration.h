/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFTextFieldConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsNegativeNumbers;
    bool  _autoPeriodsDisabled;
    NSString * _autocapitalizationType;
    NSString * _autocorrectionType;
    NSString * _clearButtonMode;
    unsigned long long  _dateFormatStyle;
    bool  _dateHintPrefersDateOnly;
    bool  _doesRelativeDateFormatting;
    bool  _focusImmediatelyWhenPresented;
    long long  _initialInsertionIndex;
    NSString * _keyboardType;
    NSString * _localizedIncompleteHintString;
    bool  _multiline;
    NSString * _placeholder;
    NSString * _prefix;
    NSString * _returnKeyType;
    bool  _secureTextEntry;
    bool  _showsDateFormattingHint;
    bool  _smartDashesDisabled;
    bool  _smartQuotesDisabled;
    NSString * _text;
    NSString * _textAlignment;
    NSString * _textContentType;
    bool  _textReplacementDisabled;
    unsigned long long  _timeFormatStyle;
}

@property (nonatomic) bool allowsNegativeNumbers;
@property (nonatomic) bool autoPeriodsDisabled;
@property (nonatomic, copy) NSString *autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionType;
@property (nonatomic, copy) NSString *clearButtonMode;
@property (nonatomic) unsigned long long dateFormatStyle;
@property (nonatomic) bool dateHintPrefersDateOnly;
@property (nonatomic) bool doesRelativeDateFormatting;
@property (nonatomic) bool focusImmediatelyWhenPresented;
@property (nonatomic) long long initialInsertionIndex;
@property (nonatomic, copy) NSString *keyboardType;
@property (nonatomic, copy) NSString *localizedIncompleteHintString;
@property (getter=isMultiline, nonatomic) bool multiline;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, copy) NSString *returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) bool showsDateFormattingHint;
@property (nonatomic) bool smartDashesDisabled;
@property (nonatomic) bool smartQuotesDisabled;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *textAlignment;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) bool textReplacementDisabled;
@property (nonatomic) unsigned long long timeFormatStyle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsNegativeNumbers;
- (bool)autoPeriodsDisabled;
- (id)autocapitalizationType;
- (id)autocorrectionType;
- (id)clearButtonMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dateFormatStyle;
- (bool)dateHintPrefersDateOnly;
- (bool)doesRelativeDateFormatting;
- (void)encodeWithCoder:(id)arg1;
- (bool)focusImmediatelyWhenPresented;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)initialInsertionIndex;
- (bool)isMultiline;
- (bool)isSecureTextEntry;
- (id)keyboardType;
- (id)localizedIncompleteHintString;
- (id)placeholder;
- (id)prefix;
- (id)returnKeyType;
- (void)setAllowsNegativeNumbers:(bool)arg1;
- (void)setAutoPeriodsDisabled:(bool)arg1;
- (void)setAutocapitalizationType:(id)arg1;
- (void)setAutocorrectionType:(id)arg1;
- (void)setClearButtonMode:(id)arg1;
- (void)setDateFormatStyle:(unsigned long long)arg1;
- (void)setDateHintPrefersDateOnly:(bool)arg1;
- (void)setDoesRelativeDateFormatting:(bool)arg1;
- (void)setFocusImmediatelyWhenPresented:(bool)arg1;
- (void)setInitialInsertionIndex:(long long)arg1;
- (void)setKeyboardType:(id)arg1;
- (void)setLocalizedIncompleteHintString:(id)arg1;
- (void)setMultiline:(bool)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setReturnKeyType:(id)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setShowsDateFormattingHint:(bool)arg1;
- (void)setSmartDashesDisabled:(bool)arg1;
- (void)setSmartQuotesDisabled:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(id)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTextReplacementDisabled:(bool)arg1;
- (void)setTimeFormatStyle:(unsigned long long)arg1;
- (bool)showsDateFormattingHint;
- (bool)smartDashesDisabled;
- (bool)smartQuotesDisabled;
- (id)text;
- (id)textAlignment;
- (id)textContentType;
- (bool)textReplacementDisabled;
- (unsigned long long)timeFormatStyle;

@end
