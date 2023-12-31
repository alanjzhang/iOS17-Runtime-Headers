/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCEffects : NSObject {
    VCVideoFrameBufferPool * _bufferPool;
    bool  _effectsApplied;
    int  _effectsMode;
    bool  _faceMeshTrackingEnabled;
}

@property (nonatomic) bool effectsApplied;
@property (nonatomic) int effectsMode;
@property (nonatomic) bool faceMeshTrackingEnabled;

- (bool)addFrame:(struct __CVBuffer { }*)arg1 time:(long long)arg2;
- (void)dealloc;
- (bool)effectsApplied;
- (int)effectsMode;
- (bool)faceMeshTrackingEnabled;
- (id)init;
- (bool)releaseFrameWithTime:(long long)arg1;
- (void)setEffectsApplied:(bool)arg1;
- (void)setEffectsMode:(int)arg1;
- (void)setFaceMeshTrackingEnabled:(bool)arg1;

@end
