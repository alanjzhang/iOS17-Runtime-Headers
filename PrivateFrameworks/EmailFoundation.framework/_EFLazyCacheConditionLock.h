/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface _EFLazyCacheConditionLock : NSConditionLock {
    _Atomic long long  _waiterCount;
}

@property (readonly) long long waiterCount;

- (void)decrementWaiterCount;
- (void)incrementWaiterCount;
- (id)initWithCondition:(long long)arg1;
- (long long)waiterCount;

@end
