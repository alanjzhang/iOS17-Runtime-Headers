/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISlider : UIControl <DebugHierarchyObject_Fallback, NSCoding> {
    UISliderDataModel * _data;
    NSArray * _dummyViews;
    unsigned long long  _preferredBehavioralStyle;
    <_UISliderConfiguration> * _sliderConfiguration;
    unsigned long long  _sliderStyle;
    UIView<_UISliderVisualElement> * _visualElement;
    struct { 
        unsigned int visualElementIsFluid : 1; 
        unsigned int visualElementRespondsToDidUpdateConfiguration : 1; 
        unsigned int visualElementRespondsToDidSetUserInteractionEnabled : 1; 
        unsigned int visualElementRespondsToOverriddenTrackingState : 1; 
    }  _visualElementFlags;
}

@property (setter=_setMaximumEnabledValue:, nonatomic) float _maximumEnabledValue;
@property (setter=_setMinimumEnabledValue:, nonatomic) float _minimumEnabledValue;
@property (setter=_setSliderStyle:, nonatomic) unsigned long long _sliderStyle;
@property (setter=_setTrackEnabled:, nonatomic) bool _trackEnabled;
@property (nonatomic, readonly) unsigned long long behavioralStyle;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (nonatomic, readonly) UIImage *currentMaximumTrackImage;
@property (nonatomic, readonly) UIImage *currentMinimumTrackImage;
@property (nonatomic, readonly) UIImage *currentThumbImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_edgeFeedbackBehavior, setter=_setEdgeFeedbackBehavior:, nonatomic, retain) _UIEdgeFeedbackGenerator *edgeFeedbackBehavior;
@property (getter=_edgeFeedbackGenerator, setter=_setEdgeFeedbackGenerator:, nonatomic, retain) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *maximumTrackTintColor;
@property (nonatomic) float maximumValue;
@property (nonatomic, retain) UIImage *maximumValueImage;
@property (nonatomic, retain) UIColor *minimumTrackTintColor;
@property (nonatomic) float minimumValue;
@property (nonatomic, retain) UIImage *minimumValueImage;
@property (getter=_modulationFeedbackGenerator, setter=_setModulationFeedbackGenerator:, nonatomic, retain) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (nonatomic) unsigned long long preferredBehavioralStyle;
@property (getter=_sliderConfiguration, setter=_setSliderConfiguration:, nonatomic, copy) <_UISliderConfiguration> *sliderConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic) float value;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_allowActionsToQueue;

- (void).cxx_destruct;
- (id)__distributionStatisticsForUserInteractionDuration;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (id)_edgeFeedbackBehavior;
- (id)_edgeFeedbackGenerator;
- (void)_installVisualElement;
- (void)_installVisualElement:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_modulationFeedbackGenerator;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_registerForTraitChanges;
- (void)_setEdgeFeedbackBehavior:(id)arg1;
- (void)_setEdgeFeedbackGenerator:(id)arg1;
- (void)_setMaxValue:(float)arg1;
- (void)_setMinValue:(float)arg1;
- (void)_setModulationFeedbackGenerator:(id)arg1;
- (id)description;

// UISlider (UICatalystMacIdiomUnsupported_Internal)

+ (bool)_allowsUnsupportedMacIdiomBehavior;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(bool)arg1;

// UISlider (UISliderPrivate)

- (bool)_alwaysHandleScrollerMouseEvent;
- (bool)_fluidTrackHidden;
- (unsigned long long)_fluidUpdateSource;
- (bool)_isThumbEnabled;
- (id)_maxTrackView;
- (id)_maxValueView;
- (float)_maximumEnabledValue;
- (id)_minTrackView;
- (id)_minValueView;
- (float)_minimumEnabledValue;
- (void)_setFluidTrackHidden:(bool)arg1;
- (void)_setMaximumEnabledValue:(float)arg1;
- (void)_setMinimumEnabledValue:(float)arg1;
- (void)_setMinimumTrackVisible:(bool)arg1 withDuration:(double)arg2;
- (void)_setSliderConfiguration:(id)arg1;
- (void)_setSliderStyle:(unsigned long long)arg1;
- (void)_setThumbEnabled:(bool)arg1;
- (void)_setTrackEnabled:(bool)arg1;
- (void)_setUseLookNeue:(bool)arg1;
- (id)_sliderConfiguration;
- (unsigned long long)_sliderStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_thumbHitEdgeInsets;
- (id)_thumbView;
- (id)_thumbViewNeue;
- (bool)_trackEnabled;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (id)_accessibilityAbsoluteValue;
- (void)_accessibilityAnnounceNewValue;
- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilityBumpValue:(bool)arg1;
- (double)_accessibilityIncreaseAmount:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityMaxScrubberPosition;
- (double)_accessibilityMaxValue;
- (struct CGPoint { double x1; double x2; })_accessibilityMinScrubberPosition;
- (double)_accessibilityMinValue;
- (double)_accessibilityNumberValue;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_viewToAddFocusLayer;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;

// UISlider (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)behavioralStyle;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (id)createThumbView;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (id)currentThumbImage;
- (void)encodeWithCoder:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElementByDefault;
- (bool)isAnimatingValueChange;
- (bool)isContinuous;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isTracking;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (id)maximumTrackTintColor;
- (float)maximumValue;
- (id)maximumValueImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (id)minimumTrackTintColor;
- (float)minimumValue;
- (id)minimumValueImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)preferredBehavioralStyle;
- (void)setContinuous:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)setMaximumValue:(float)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setPreferredBehavioralStyle:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setThumbTintColor:(id)arg1;
- (void)setTracking:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)thumbTintColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)value;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libViewDebuggerSupport.dylib

// UISlider (DebugHierarchyAdditionsFallback)

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

@end