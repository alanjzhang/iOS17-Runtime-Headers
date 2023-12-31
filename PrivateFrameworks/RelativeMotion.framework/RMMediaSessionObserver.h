/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
 */

@interface RMMediaSessionObserver : NSObject {
    RMRelativeMotionManager * _manager;
}

@property (nonatomic, retain) RMRelativeMotionManager *manager;

- (void).cxx_destruct;
- (id)manager;
- (void)setManager:(id)arg1;
- (void)startSessionStatusUpdatesForClientMode:(long long)arg1 toQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)stopSessionStatusUpdates;

@end
