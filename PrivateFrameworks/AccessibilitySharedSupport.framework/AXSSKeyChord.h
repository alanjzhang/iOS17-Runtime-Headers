/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSKeyChord : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _cachedContainsModifier;
    NSNumber * _cachedIsFunctionKey;
    NSArray * _keys;
}

@property (nonatomic, readonly) AXAttributedString *accessibilitySpeakableDisplayValue;
@property (nonatomic, readonly) bool containsModifier;
@property (nonatomic, readonly) NSString *displayValue;
@property (nonatomic, readonly) AXAttributedString *fkaSpeakableDisplayValue;
@property (nonatomic, readonly) bool isArrowKeyChord;
@property (nonatomic, readonly) bool isFunctionKeyChord;
@property (nonatomic, readonly) bool isNull;
@property (nonatomic, readonly) bool isTextInputChord;
@property (nonatomic, readonly) bool isTextInputTabChord;
@property (nonatomic, retain) NSArray *keys;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

+ (id)keyChordWithKeys:(id)arg1;
+ (id)keyChordWithString:(id)arg1;
+ (id)keyFromKeyCode:(unsigned long long)arg1 unicodeCharacter:(id)arg2;
+ (id)nullKeyChord;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_displayValueWithSortedModifiers:(id)arg1 isUSKeyboard:(bool)arg2;
- (id)_initWithKeys:(id)arg1;
- (id)_normalizeKeys:(id)arg1;
- (bool)containsModifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayValue;
- (id)displayValueWithStyle:(long long)arg1;
- (id)displayValueWithStyle:(long long)arg1 isUSKeyboard:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isArrowKeyChord;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKeyChord:(id)arg1;
- (bool)isFunctionKeyChord;
- (bool)isNull;
- (bool)isTextInputChord;
- (bool)isTextInputTabChord;
- (id)keys;
- (void)setKeys:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

// AXSSKeyChord (AXEventRepresentation)

+ (id)keyChordWithEvent:(id)arg1;

- (id)keyChordByUpdatingModifiersFromEvent:(id)arg1;

// AXSSKeyChord (Speaking)

- (id)_accessibilitySpeakableDisplayValueWithStyle:(long long)arg1 isUSKeyboard:(bool)arg2;
- (id)accessibilitySpeakableDisplayValue;
- (id)accessibilitySpeakableDisplayValueWithStyle:(long long)arg1;
- (id)fkaSpeakableDisplayValue;

@end
