/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusBehavior_FKA : NSObject <_UIFocusBehavior>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)autoDismissesPopoverControllersOnFocusIntersection;
- (long long)buttonSelectionMode;
- (long long)cellFocusability;
- (bool)controlCanBecomeFocused:(id)arg1;
- (unsigned long long)defaultFocusScrollOffsetResolver;
- (bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;
- (bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;
- (long long)deliverKeyEventsToFocusEngine;
- (bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (long long)focusCastingMode;
- (long long)focusDeferral;
- (unsigned long long)focusGroupContainmentBehavior;
- (unsigned long long)focusGroupMovementBehavior;
- (long long)focusRingVisibility;
- (long long)focusSystemDeactivationMode;
- (bool)honorsFocusSystemEnabledInfoPlistKey;
- (bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (bool)includesContentScrollViewInPreferredFocusEnvironments;
- (long long)indirectMovementPriority;
- (bool)isContainerEligibleForFocusUpdateSearchRoot:(id)arg1;
- (long long)pageButtonScrollingStyle;
- (bool)preventsCellFocusabilityWhileEditing;
- (bool)refinesIndexBarTargetContentOffset;
- (long long)requiredInputDevices;
- (long long)scrollingMode;
- (bool)searchBarTextFieldCanBecomeFocused;
- (bool)shouldCallAccessibilityOverrides;
- (bool)shouldConvertIndirectTapsIntoArrowKeys;
- (bool)shouldEnableFocusOnSelect;
- (bool)shouldSupressIndirectMovementOnSelect;
- (bool)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (bool)shouldUseAccessibilityCompareForItemGeometry;
- (bool)showsFocusRingForItem:(id)arg1;
- (long long)skipKeyCommandsForKeyEvents;
- (double)stabilizedLinearFocusMovementTimeout;
- (bool)supportViewTransparencyAndMultipleWindows;
- (bool)supportsArrowKeys;
- (bool)supportsClipToBounds;
- (bool)supportsGameControllers;
- (bool)supportsIndirectPanningMovement;
- (bool)supportsIndirectRotaryMovement;
- (bool)supportsLinearMovementDebugOverlay;
- (bool)supportsParentFocusRings;
- (bool)supportsTabKey;
- (bool)syncsFocusAndResponder;
- (bool)tabBarButtonCanBecomeFocused;
- (bool)tabBarCanBecomeFocused;
- (bool)tabBasedMovementLoops;
- (bool)textViewCanBecomeFocused:(id)arg1;
- (bool)throttlesProgrammaticFocusUpdates;
- (bool)treatFirstAndLastHeadingsAsGlobal;
- (bool)wantsFocusSystemForScene:(id)arg1;
- (bool)wantsTreeLocking;

@end
