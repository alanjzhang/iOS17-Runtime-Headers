/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBFocusGuide : UIFocusGuide {
    <UIKBFocusGuideDelegate> * _keyboardDelegate;
    unsigned long long  focusHeading;
}

@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) <UIKBFocusGuideDelegate> *keyboardDelegate;

- (void).cxx_destruct;
- (void)_didUpdateFocusToPreferredFocusedView;
- (float)_focusPriority;
- (bool)_ignoresSpeedBumpEdges;
- (bool)_isUnclippable;
- (bool)_isUnoccludable;
- (id)description;
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;
- (unsigned long long)focusHeading;
- (id)keyboardDelegate;
- (void)setFocusHeading:(unsigned long long)arg1;
- (void)setKeyboardDelegate:(id)arg1;

@end
