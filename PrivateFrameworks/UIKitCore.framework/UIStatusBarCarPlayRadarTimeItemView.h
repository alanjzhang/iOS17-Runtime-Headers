/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {
    bool  _currentlyGatheringLogs;
    bool  _isInternalInstall;
    bool  _radarItemEnabled;
}

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;
- (bool)_showRadarButtonForInternalInstalls;
- (id)_timeImageSet;
- (void)dealloc;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (bool)allowsUserInteraction;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (id)contentsImage;
- (id)highlightImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showsTouchWhenHighlighted;
- (bool)usesAdvancedActions;

@end
