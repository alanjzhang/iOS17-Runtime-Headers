/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate> {
    bool  _checkingTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _drawingOrigin;
    UIWindow * _inspectedWindow;
    bool  _isFullscreen;
    UIEvent * _lastTouch;
    bool  _touchCaptureEnabled;
    NSMutableArray * _touchObservers;
}

@property (nonatomic) bool checkingTouches;
@property (nonatomic) struct CGPoint { double x1; double x2; } drawingOrigin;
@property (nonatomic, retain) UIWindow *inspectedWindow;
@property (nonatomic) bool isFullscreen;
@property (nonatomic, retain) UIEvent *lastTouch;
@property (nonatomic, readonly) UIDebuggingInformationOverlayViewController *overlayViewController;
@property (nonatomic, retain) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) bool touchCaptureEnabled;
@property (nonatomic, retain) NSMutableArray *touchObservers;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)overlay;
+ (void)prepareDebuggingOverlay;

- (void).cxx_destruct;
- (void)_setHidden:(bool)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (bool)checkingTouches;
- (struct CGPoint { double x1; double x2; })drawingOrigin;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inspectedWindow;
- (bool)isFullscreen;
- (id)lastTouch;
- (id)overlayViewController;
- (id)rootTableViewController;
- (void)setCheckingTouches:(bool)arg1;
- (void)setDrawingOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInspectedWindow:(id)arg1;
- (void)setIsFullscreen:(bool)arg1;
- (void)setLastTouch:(id)arg1;
- (void)setRootTableViewController:(id)arg1;
- (void)setTouchCaptureEnabled:(bool)arg1;
- (void)setTouchObservers:(id)arg1;
- (void)toggleFullscreen;
- (void)toggleVisibility;
- (bool)touchCaptureEnabled;
- (id)touchObservers;

@end
