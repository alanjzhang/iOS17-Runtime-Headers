/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext {
    NSString * _localizedUserNotificationBodyKey;
}

@property (nonatomic, copy) NSString *localizedUserNotificationBodyKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedUserNotificationBodyKey;
- (id)notificationBundleIdentifier;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3;
- (void)setLocalizedUserNotificationBodyKey:(id)arg1;

@end
