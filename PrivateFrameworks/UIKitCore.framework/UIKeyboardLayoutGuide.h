/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardLayoutGuide : UITrackingLayoutGuide <_UIAssertionControllerSubject> {
    bool  _addsHeightWhenUndocked;
    _UIAssertionController * _assertionController;
    long long  _currentKeyboardVisualState;
    bool  _docked;
    long long  _followTypes;
    bool  _followsUndockedKeyboard;
    bool  _hasPausedEdges;
    bool  _ignoreKeyboardChanges;
    bool  _ignoresSafeArea;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _interactionResetOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _interactionResetSize;
    double  _keyboardDismissPadding;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _previousOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousSize;
    bool  _transitioning;
    bool  _usesBottomSafeArea;
    NSLayoutConstraint * _viewBottomConstraint;
    bool  _windowGuide;
}

@property (nonatomic, readonly) _UIAssertionController *_assertionController;
@property (nonatomic) bool addsHeightWhenUndocked;
@property (nonatomic) long long currentKeyboardVisualState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDocked, nonatomic) bool docked;
@property (nonatomic) long long followTypes;
@property (nonatomic) bool followsUndockedKeyboard;
@property (nonatomic) bool hasPausedEdges;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreKeyboardChanges;
@property (nonatomic) bool ignoresSafeArea;
@property (nonatomic) struct UIOffset { double x1; double x2; } interactionResetOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } interactionResetSize;
@property (nonatomic) double keyboardDismissPadding;
@property (nonatomic) struct UIOffset { double x1; double x2; } previousOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } previousSize;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;
@property (nonatomic) bool usesBottomSafeArea;
@property (nonatomic, retain) NSLayoutConstraint *viewBottomConstraint;
@property (getter=isWindowGuide, nonatomic) bool windowGuide;

- (void).cxx_destruct;
- (id)_assertionController;
- (bool)_changeOffsetConstants:(struct UIOffset { double x1; double x2; })arg1 force:(bool)arg2;
- (bool)_changeSizingConstants:(struct CGSize { double x1; double x2; })arg1 force:(bool)arg2;
- (void)_commonInit;
- (void)_detachGuideFromKeyboard:(bool)arg1;
- (bool)_moveGuideOffscreenAtEdge:(unsigned long long)arg1 force:(bool)arg2;
- (id)_obtainTransitionAssertionForReason:(id)arg1;
- (void)_setTransitioning:(bool)arg1;
- (bool)addsHeightWhenUndocked;
- (void)assertionActivationStateChangedToState:(bool)arg1 forType:(unsigned long long)arg2;
- (bool)assertionActivationStateForType:(unsigned long long)arg1;
- (bool)changeOffsetConstants:(struct UIOffset { double x1; double x2; })arg1;
- (bool)changeSizingConstants:(struct CGSize { double x1; double x2; })arg1;
- (void)constrainToReference:(id)arg1;
- (long long)currentKeyboardVisualState;
- (bool)currentStateIsDocked;
- (struct CGSize { double x1; double x2; })defaultKeyboardSizeForInputMode:(id)arg1 orientation:(long long)arg2 addingAssistant:(bool)arg3;
- (void)disableSynchronizingWithKeyboard;
- (void)encodeWithCoder:(id)arg1;
- (long long)followTypes;
- (void)followUndockedKeyboardOfTypes:(long long)arg1;
- (bool)followsUndockedKeyboard;
- (void)forceDismissGuideAnimated:(bool)arg1;
- (void)forceResizeGuideForInputMode:(id)arg1 orientation:(bool)arg2 showsAssistantBar:(bool)arg3 animated:(bool)arg4;
- (void)forceResizeGuideForOrientation:(long long)arg1 showsAssistantBar:(bool)arg2 animated:(bool)arg3;
- (bool)hasPausedEdges;
- (bool)ignoreKeyboardChanges;
- (bool)ignoresSafeArea;
- (void)inheritOptionsFromGuide:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct UIOffset { double x1; double x2; })interactionResetOffset;
- (struct CGSize { double x1; double x2; })interactionResetSize;
- (bool)isDocked;
- (bool)isTransitioning;
- (bool)isWindowGuide;
- (double)keyboardDismissPadding;
- (bool)keyboardStateIsDocked:(long long)arg1;
- (bool)moveGuideOffscreenAtEdge:(unsigned long long)arg1;
- (struct UIOffset { double x1; double x2; })previousOffset;
- (struct CGSize { double x1; double x2; })previousSize;
- (void)reenableSynchronizingWithKeyboard;
- (void)resetGuideForCancelledDismissInteraction;
- (void)setAddsHeightWhenUndocked:(bool)arg1;
- (void)setCurrentKeyboardVisualState:(long long)arg1;
- (void)setDocked:(bool)arg1;
- (void)setFollowTypes:(long long)arg1;
- (void)setFollowsUndockedKeyboard:(bool)arg1;
- (void)setHasPausedEdges:(bool)arg1;
- (void)setIgnoreKeyboardChanges:(bool)arg1;
- (void)setIgnoresSafeArea:(bool)arg1;
- (void)setInteractionResetOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setInteractionResetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setKeyboardDismissPadding:(double)arg1;
- (void)setPreviousOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setPreviousSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUsesBottomSafeArea:(bool)arg1;
- (void)setViewBottomConstraint:(id)arg1;
- (void)setWindowGuide:(bool)arg1;
- (bool)shouldFollowCurrentKeyboard;
- (bool)shouldPauseEdgesForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateBottomConstraint;
- (void)updateShouldPauseEdges:(bool)arg1;
- (void)updateSizeForInputMode:(id)arg1 orientation:(long long)arg2 showsAssistantBar:(bool)arg3 animated:(bool)arg4;
- (bool)usesBottomSafeArea;
- (id)viewBottomConstraint;

@end
