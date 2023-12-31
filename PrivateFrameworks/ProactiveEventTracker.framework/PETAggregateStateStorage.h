/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETAggregateStateStorage : NSObject

+ (id)storageInMemory;
+ (id)storageOnDisk:(id)arg1;

- (void)expand:(unsigned long long)arg1 andRunWithLock:(id /* block */)arg2;
- (void)reset;
- (bool)resetLocked;
- (void)runWithLock:(id /* block */)arg1;
- (void)saveCorruptState;

@end
