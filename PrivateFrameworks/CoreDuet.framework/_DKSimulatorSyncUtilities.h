/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSimulatorSyncUtilities : NSObject

+ (void)_triggerInsertAndTombstoneNotificationsInKnowledgeStorage:(id)arg1 forNonLocalNewEventsFromBeginDate:(id)arg2 toEndDate:(id)arg3;
+ (void)addLocalDeviceIDSourceOnObjects:(id)arg1;
+ (id)deviceID;
+ (id)predicateForEventsWithLocalSourceDeviceID;
+ (void)registerSimulatedSyncNotificationsWithKnowledgeStorage:(id)arg1;
+ (void)removeSourceDeviceIDFromLocalObjects:(id)arg1;
+ (id)streamNamesToSync;

@end
