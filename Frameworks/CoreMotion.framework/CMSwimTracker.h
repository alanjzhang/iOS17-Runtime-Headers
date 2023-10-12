/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSwimTracker : NSObject {
    CMSwimTrackerInternal * _internal;
}

@property (nonatomic, readonly) CMSwimTrackerInternal *_internal;

+ (bool)isAvailable;
+ (unsigned long long)maxSwimDataEntries;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)querySWOLFSummaryWithSessionID:(id)arg1 handler:(id /* block */)arg2;
- (void)querySwimUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)stopUpdates;

@end
