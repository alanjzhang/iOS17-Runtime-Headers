/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCoreMotionManager : NSObject {
    <VCCoreMotionManagerDelegate> * _coreMotionManagerDelegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

- (id)coreMotionManagerDelegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)setCoreMotionManagerDelegate:(id)arg1;
- (void)startMonitoringMotionActivity;
- (void)stopMonitoringMotionActivity;

@end
