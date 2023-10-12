/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STUsageCountedItem : NSManagedObject

@property (nonatomic, readonly) STUsageBlock *block;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long numberOfNotifications;
@property (nonatomic, readonly) long long numberOfPickups;
@property (nonatomic, readonly) bool usageTrusted;

+ (id)notificationItemsExcludingSystemHiddenApplications:(id)arg1;
+ (id)pickupItemsExcludingSystemHiddenApplications:(id)arg1;

@end
