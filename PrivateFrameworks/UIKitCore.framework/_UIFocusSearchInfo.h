/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusSearchInfo : NSObject {
    id /* block */  _evaluator;
    bool  _forceFocusToLeaveContainer;
    bool  _treatFocusableItemAsLeaf;
}

@property (nonatomic, copy) id /* block */ evaluator;
@property (nonatomic) bool forceFocusToLeaveContainer;
@property (nonatomic) bool treatFocusableItemAsLeaf;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)defaultInfo;

- (void).cxx_destruct;
- (id /* block */)evaluator;
- (bool)forceFocusToLeaveContainer;
- (id)initWithFocusEvaluator:(id /* block */)arg1;
- (void)setEvaluator:(id /* block */)arg1;
- (void)setForceFocusToLeaveContainer:(bool)arg1;
- (void)setTreatFocusableItemAsLeaf:(bool)arg1;
- (bool)treatFocusableItemAsLeaf;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (bool)shouldIncludeFocusItem:(id)arg1;

// _UIFocusSearchInfo (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
