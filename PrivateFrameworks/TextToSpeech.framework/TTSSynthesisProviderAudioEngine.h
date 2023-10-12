/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSynthesisProviderAudioEngine : NSObject <TTSSynthesisProviderHandlerDelegate> {
    NSNumber * _audioUnitObservedToken;
    AVAudioUnit * _avAudioUnit;
    id /* block */  _bufferCallback;
    TTSSynthesisProviderRequestHandler * _currentRequestHandler;
    unsigned long long  _deferredPlayerState;
    id /* block */  _deferredReplyBlock;
    NSObject<OS_dispatch_queue> * _deferredStateChangeQueue;
    <TTSSynthesisProviderAudioEngineProtocol> * _delegate;
    bool  _didCustomizeParameters;
    AVAudioFile * _file;
    bool  _isSynthesizingSilently;
    id /* block */  _markerBlock;
    AVAudioEngine * _offlineEngine;
    bool  _offlineRenderingInProgress;
    NSObject<OS_dispatch_queue> * _offlineRenderingQueue;
    NSObject<TTSSynthesisProviderAudioOutput> * _offlineToRealtimePlayer;
    NSObject<OS_dispatch_queue> * _playbackQueue;
    unsigned long long  _playerState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestDispatchLock;
}

@property (nonatomic, retain) NSNumber *audioUnitObservedToken;
@property (readonly) AVAudioFormat *audioUnitOutputFormat;
@property (nonatomic, retain) AVAudioUnit *avAudioUnit;
@property (copy) id /* block */ bufferCallback;
@property (nonatomic, retain) TTSSynthesisProviderRequestHandler *currentRequestHandler;
@property (nonatomic) unsigned long long deferredPlayerState;
@property (nonatomic, copy) id /* block */ deferredReplyBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *deferredStateChangeQueue;
@property (nonatomic) <TTSSynthesisProviderAudioEngineProtocol> *delegate;
@property (nonatomic) bool didCustomizeParameters;
@property (nonatomic, retain) AVAudioFile *file;
@property (nonatomic) bool isSynthesizingSilently;
@property (nonatomic, copy) id /* block */ markerBlock;
@property (nonatomic, retain) AVAudioEngine *offlineEngine;
@property (nonatomic) bool offlineRenderingInProgress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *offlineRenderingQueue;
@property (nonatomic, retain) NSObject<TTSSynthesisProviderAudioOutput> *offlineToRealtimePlayer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *playbackQueue;
@property (nonatomic) unsigned long long playerState;

+ (void)safelyCallStartCompletionForRequest:(id)arg1 didStart:(bool)arg2;

- (void).cxx_destruct;
- (void)_finishRequestRendering;
- (void)_handleMarkerPlayback:(id)arg1 forRequest:(id)arg2;
- (void)_pausePlaying;
- (void)_safelyCallDeferredReplyBlock;
- (bool)_setupAudioUnitForVoice:(id)arg1;
- (bool)_setupAudioUnitForVoice:(id)arg1 speechSource:(id)arg2;
- (bool)_setupOfflineEngine;
- (bool)_startPlaying;
- (void)_stopPlaying;
- (id)audioUnit;
- (id)audioUnitObservedToken;
- (id)audioUnitOutputBus;
- (id)audioUnitOutputFormat;
- (id)avAudioUnit;
- (id /* block */)bufferCallback;
- (void)continueSpeechRequest:(id /* block */)arg1;
- (id)currentRequestHandler;
- (void)dealloc;
- (unsigned long long)deferredPlayerState;
- (id /* block */)deferredReplyBlock;
- (id)deferredStateChangeQueue;
- (id)delegate;
- (bool)didCustomizeParameters;
- (void)didGeneratePlayableBuffers:(id)arg1 forRequest:(id)arg2;
- (id)file;
- (id)init;
- (bool)isSpeechActive;
- (bool)isSynthesizingSilently;
- (id /* block */)markerBlock;
- (float)markerByteOffsetScalingFactor;
- (id)offlineEngine;
- (bool)offlineRenderingInProgress;
- (id)offlineRenderingQueue;
- (id)offlineToRealtimePlayer;
- (void)pauseAtMark:(long long)arg1 reply:(id /* block */)arg2;
- (void)pauseImmediately:(id /* block */)arg1;
- (void)playBuffers:(id)arg1 forRequest:(id)arg2;
- (id)playbackQueue;
- (unsigned long long)playerState;
- (void)prewarmAudioUnitForVoice:(id)arg1;
- (void)receivedMarkers:(id)arg1 forRequest:(id)arg2;
- (void)renderSpeechRequest:(id)arg1;
- (void)renderWithObserver:(id /* block */)arg1 renderChunkSize:(unsigned int)arg2;
- (void)setAudioUnitObservedToken:(id)arg1;
- (void)setAvAudioUnit:(id)arg1;
- (void)setBufferCallback:(id /* block */)arg1;
- (void)setCurrentRequestHandler:(id)arg1;
- (void)setDeferredPlayerState:(unsigned long long)arg1;
- (void)setDeferredReplyBlock:(id /* block */)arg1;
- (void)setDeferredStateChangeQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidCustomizeParameters:(bool)arg1;
- (void)setFile:(id)arg1;
- (void)setIsSynthesizingSilently:(bool)arg1;
- (void)setMarkerBlock:(id /* block */)arg1;
- (void)setOfflineEngine:(id)arg1;
- (void)setOfflineRenderingInProgress:(bool)arg1;
- (void)setOfflineRenderingQueue:(id)arg1;
- (void)setOfflineToRealtimePlayer:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlayerState:(unsigned long long)arg1;
- (void)startSynthesizingSpeechRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)startSynthesizingSpeechRequest:(id)arg1 withBufferCallback:(id /* block */)arg2 silently:(bool)arg3 reply:(id /* block */)arg4;
- (void)stopAtMark:(long long)arg1 reply:(id /* block */)arg2;
- (void)stopImmediately:(id /* block */)arg1;

@end
