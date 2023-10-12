/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAccessibilityElement : UIResponder <UIAccessibilityIdentification, UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _accessibilityFrameInContainerSpace;
    bool  _areChildrenFocused;
}

@property (nonatomic, readonly) bool _accessibilityUsesFrameInContainerSpace;
@property (nonatomic) id accessibilityContainer;
@property (nonatomic) id accessibilityDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrameInContainerSpace;
@property (nonatomic, retain) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, retain) NSString *accessibilityValue;
@property (nonatomic) bool areChildrenFocused;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (nonatomic, readonly, copy) UIFocusEffect *focusEffect;
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) long long focusGroupPriority;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic, readonly) bool isTransparentFocusItem;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_destroyFocusLayer;
- (id)_firstViewAncestor;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_updateFocusLayerFrame;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

// UIAccessibilityElement (UITableViewCellChildExtensions)

- (void)setTableCellYOffset:(float)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (bool)_isSerializableAccessibilityElement;

- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;
- (bool)_accessibilityIsFKARunningForFocusItem;
- (bool)_accessibilityProvidesOwnFrame;
- (bool)_accessibilitySetNativeFocus;
- (void)_accessibilitySetValue:(id)arg1;
- (bool)_accessibilitySupportsActivateAction;
- (bool)_accessibilitySupportsHandwriting;
- (id)_accessibilityUserTestingVisibleAncestor;
- (bool)_accessibilityUsesFrameInContainerSpace;
- (bool)_accessibilityViewHierarchyHasNativeFocus;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)accessibilityZoomInAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)accessibilityZoomOutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)focusGroupIdentifier;
- (id)init;
- (id)initWithAccessibilityContainer:(id)arg1;
- (bool)isAccessibilityElement;

// UIAccessibilityElement (Private)

- (id)_accessibilityProxyView;
- (bool)_accessibilityViewIsVisible;
- (id)accessibilityDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)dataForKey:(id)arg1;
- (void)delegateSpecificsForAttribute:(long long)arg1 delegate:(id*)arg2 selector:(SEL*)arg3;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1 forAttribute:(long long)arg2 withSelector:(SEL)arg3;
- (void)setTableCellYOffset:(float)arg1;

// UIAccessibilityElement (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameInContainerSpace;
- (bool)areChildrenFocused;
- (bool)canBecomeFocused;
- (id)coordinateSpace;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)nextResponder;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityFrameInContainerSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAreChildrenFocused:(bool)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
