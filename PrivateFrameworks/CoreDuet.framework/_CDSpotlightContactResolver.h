/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightContactResolver : NSObject {
    NSObject<OS_dispatch_source> * _cacheInvalidationTimer;
    NSObject<OS_dispatch_queue> * _cacheInvalidationTimerQueue;
    _PASLock * _cachedContactsForHandle;
    NSObject<OS_os_transaction> * _transaction;
}

+ (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getCachedContactForHandle:(id)arg1;
- (void)_purge;
- (void)_setContact:(id)arg1 forHandle:(id)arg2;
- (void)_validateCache;
- (id)init;

@end
