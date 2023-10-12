/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPasscodeField : UIView <UIKeyInput> {
    NSMutableArray * _dashViews;
    <PSPasscodeFieldDelegate> * _delegate;
    NSMutableArray * _digitViews;
    NSMutableArray * _dotFullViews;
    NSMutableArray * _dotOutlineViews;
    bool  _enabled;
    NSArray * _fieldSpacing;
    UIColor * _foregroundColor;
    long long  _keyboardAppearance;
    unsigned long long  _numberOfEntryFields;
    bool  _securePasscodeEntry;
    bool  _shouldBecomeFirstResponderOnTap;
    NSMutableString * _stringValue;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSPasscodeFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, retain) NSArray *fieldSpacing;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) bool securePasscodeEntry;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) bool shouldBecomeFirstResponderOnTap;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (void).cxx_destruct;
- (void)_delegateEnteredPasscode:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)dashImage;
- (id)delegate;
- (void)deleteBackward;
- (id)digitFont;
- (id)dotFullImage;
- (struct CGSize { double x1; double x2; })dotFullSize;
- (id)dotOutlineImage;
- (id)fieldSpacing;
- (id)foregroundColor;
- (bool)hasText;
- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (bool)isEnabled;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (void)layoutSubviews;
- (unsigned long long)numberOfEntryFields;
- (void)passcodeFieldTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })promptSize;
- (bool)securePasscodeEntry;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFieldSpacing:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setNumberOfEntryFields:(unsigned long long)arg1;
- (void)setSecurePasscodeEntry:(bool)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setShouldBecomeFirstResponderOnTap:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (bool)shouldBecomeFirstResponderOnTap;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stringValue;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/PreferencesFramework.axbundle/PreferencesFramework

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

// PSPasscodeField (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
