/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFScheduler : NSObject

+ (id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)dispatchQueueSchedulerWithQueue:(id)arg1;
+ (id)globalAsyncScheduler;
+ (id)globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)onScheduler:(id)arg1 performWithObject:(id)arg2;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2;

@end
