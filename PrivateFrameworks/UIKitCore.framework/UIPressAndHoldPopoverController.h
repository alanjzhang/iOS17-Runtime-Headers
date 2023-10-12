/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPressAndHoldPopoverController : UIKeyboardPopoverController <TUIPressAndHoldViewDelegate> {
    TUIPressAndHoldView * _pressAndHoldView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)canPresentPressAndHoldPopoverForEvent:(id)arg1;
+ (bool)canPresentPressAndHoldPopoverForKeyString:(id)arg1;

- (void).cxx_destruct;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (bool)handleHardwareKeyboardEvent:(id)arg1;
- (bool)handleKeyInputForAccentSelector:(id)arg1;
- (bool)handleKeyInputForPressAndHoldSelector:(id)arg1;
- (bool)handleSelectionEvent:(id)arg1;
- (bool)hasAccentVariantInForwardDirection:(bool)arg1;
- (id)initWithKeyString:(id)arg1;
- (void)insertSelectedAccentVariant:(id)arg1 shouldDismissPopover:(bool)arg2;
- (bool)isSamePressAndHoldPopoverForKeyString:(id)arg1;
- (void)pressAndHoldViewDidAcceptAccentVariant:(id)arg1 atIndexPath:(id)arg2;
- (void)showAccentVariantInForwardDirection:(bool)arg1;

@end
