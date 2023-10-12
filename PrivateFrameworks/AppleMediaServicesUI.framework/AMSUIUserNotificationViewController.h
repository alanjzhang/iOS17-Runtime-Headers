/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIUserNotificationViewController : UIViewController <AMSUIUserNotificationContentDelegate, UNNotificationContentExtension> {
    AMSUIUserNotificationContentViewController * _contentViewController;
}

@property (nonatomic, retain) AMSUIUserNotificationContentViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mediaPlayPauseButtonFrame;
@property (nonatomic, readonly, copy) UIColor *mediaPlayPauseButtonTintColor;
@property (nonatomic, readonly) unsigned long long mediaPlayPauseButtonType;
@property (readonly) Class superclass;

+ (id)userNotificationFromNotification:(id)arg1;

- (void).cxx_destruct;
- (id)contentViewController;
- (void)didReceiveNotification:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openNotification;
- (void)renderUserNotification:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)viewController:(id)arg1 didUpdatePreferredContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
