/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBarCustomizationContainerView : UIView {
    <_UITraitEnvironmentInternal> * _parentTraitEnvironment;
    id /* block */  _traitChangeHandler;
}

@property (nonatomic) <_UITraitEnvironmentInternal> *parentTraitEnvironment;
@property (nonatomic, copy) id /* block */ traitChangeHandler;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x1; id x2; id x3; bool x4; struct _UITraitCollectionTraitChanges { bool x_5_1_1; bool x_5_1_2; } x5; }*)arg1;
- (id)initWithParentTraitEnvironment:(id)arg1;
- (id)parentTraitEnvironment;
- (void)setParentTraitEnvironment:(id)arg1;
- (void)setTraitChangeHandler:(id /* block */)arg1;
- (id /* block */)traitChangeHandler;
- (id)traitCollection;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (bool)accessibilityViewIsModal;

// _UIBarCustomizationContainerView (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
