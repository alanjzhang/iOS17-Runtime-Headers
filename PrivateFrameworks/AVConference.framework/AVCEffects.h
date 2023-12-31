/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCEffects : NSObject {
    NSObject<OS_dispatch_queue> * _avConferenceEffectsQueue;
    AVConferenceXPCClient * _connection;
    id  _delegate;
    int  _effectType;
    bool  _isEffectsApplied;
    bool  _isFaceMeshTrackingEnabled;
    int  _mode;
}

@property (nonatomic) <AVCEffectsDelegate> *delegate;
@property (nonatomic) int effectType;
@property (nonatomic) int mode;

- (void)avcVideoFrameDidRelease:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (int)effectType;
- (void)encodeProcessedVideoFrame:(id)arg1;
- (bool)enqueueSampleBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithDelegate:(id)arg1;
- (int)mode;
- (void)registerBlocksForNotifications;
- (void)setDelegate:(id)arg1;
- (void)setEffectType:(int)arg1;
- (void)setMode:(int)arg1;
- (bool)setupRemoteReceiverQueueWithSenderQueue:(id)arg1;

@end
