/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPPasscodeView : UIView {
    NSMutableString * _passcodeMutableString;
}

@property (retain) NSMutableString *passcodeMutableString;
@property (readonly) NSString *passcodeString;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (void).cxx_destruct;
- (void)appendCharacter:(id)arg1;
- (void)clear;
- (void)deleteLastCharacter;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)passcodeMutableString;
- (id)passcodeString;
- (void)setPasscodeMutableString:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/TelephonyUIFramework.axbundle/TelephonyUIFramework

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

// TPPasscodeView (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end