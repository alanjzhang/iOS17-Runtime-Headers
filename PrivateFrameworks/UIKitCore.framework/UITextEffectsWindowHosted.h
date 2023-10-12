/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextEffectsWindowHosted : UITextEffectsWindow

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_isFullscreen;
- (bool)_isTextEffectsWindowHosting;
- (bool)_isTextEffectsWindowNotificationOwner;
- (bool)_isWindowServerHostingManaged;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;
- (long long)_orientationForViewTransform;
- (void)_sceneBoundsDidChange;
- (bool)_usesWindowServerHitTesting;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actualSceneBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actualSceneBoundsForLandscape:(bool)arg1;
- (void)adjustTextEffectsWindowSizeIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;

@end