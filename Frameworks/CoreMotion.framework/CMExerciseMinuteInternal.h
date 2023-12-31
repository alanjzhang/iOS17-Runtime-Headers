/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMExerciseMinuteInternal : NSObject {
    NSObject<OS_dispatch_queue> * fAppQueue;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    CMExerciseMinuteData * fMostRecentRecord;
    bool  fStartedUpdates;
}

- (void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_startUpdatesWithHandler:(id /* block */)arg1;
- (void)_stopUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
