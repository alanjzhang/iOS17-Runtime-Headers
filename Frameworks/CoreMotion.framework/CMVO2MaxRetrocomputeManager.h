/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMVO2MaxRetrocomputeManager : NSObject {
    <CMVO2MaxRetrocomputeDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    bool  fStartedUpdates;
}

@property (nonatomic) <CMVO2MaxRetrocomputeDelegate> *delegate;

- (void).cxx_destruct;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (id)init;
- (void)retrocomputeStateWithHandler:(id /* block */)arg1;
- (void)retrocomputeStatusWithHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startRetrocomputeStatusUpdates;
- (void)stopRetrocomputeStatusUpdates;
- (void)triggerRetrocomputeWithHandler:(id /* block */)arg1;

@end
