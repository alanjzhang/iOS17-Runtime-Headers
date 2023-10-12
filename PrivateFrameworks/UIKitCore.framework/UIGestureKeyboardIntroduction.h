/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGestureKeyboardIntroduction : NSObject {
    id /* block */  m_completionBlock;
    UIKBKeyView * m_firstKeyView;
    NSTimer * m_gestureKeyboardInfoTimer;
    bool  m_hasPeeked;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_initPoint;
    unsigned long long  m_insertedTextLength;
    bool  m_isInTransition;
    UIKeyboardLayoutStar * m_layout;
    UIKBKeyView * m_secondKeyView;
    double  m_start;
    UIView * m_view;
}

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)dismissGestureKeyboardIntroduction;
- (void)dismissGestureKeyboardIntroduction:(id)arg1;
- (id)initWithLayoutStar:(id)arg1 completion:(id /* block */)arg2;
- (void)insertText:(id)arg1 forKey:(id)arg2;
- (void)playGestureKeyboardIntroduction:(id)arg1;
- (void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (void)_accessibilityLoadAccessibilityInformation;
- (bool)showGestureKeyboardIntroduction;

// UIGestureKeyboardIntroduction (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end