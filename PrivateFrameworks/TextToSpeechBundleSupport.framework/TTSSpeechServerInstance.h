/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

@interface TTSSpeechServerInstance : NSObject {
    bool  _didTerminateThread;
    NSObject<OS_dispatch_queue> * _mobileAssetWorkQueue;
    bool  _newVoiceInstalled;
    TTSVoiceResourceAsset * _queuedSiriVoiceResourceToLoad;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    bool  _shouldTerminateThread;
    bool  _speechActive;
    ServerSpeechContext * _speechActiveContext;
    struct __CFRunLoopSource { } * _speechActivitySignal;
    NSLock * _speechLock;
    NSMutableArray * _speechRequestQueue;
    TTSSpeechServer * _speechService;
    NSObject<OS_dispatch_queue> * _speechTerminationQueue;
    unsigned char  _speechThreadActive;
    bool  _speechThreadPriorityIsHigh;
    struct __CFRunLoop { } * _speechThreadRunLoop;
    unsigned long long  _synthesizerId;
    id /* block */  _unitTestMarkerProcessingCallback;
    TTSVocalizer * _vocalizer;
    TTSTimer * _wordCallbackTimer;
}

@property (nonatomic) bool didTerminateThread;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mobileAssetWorkQueue;
@property (nonatomic) bool newVoiceInstalled;
@property (retain) TTSVoiceResourceAsset *queuedSiriVoiceResourceToLoad;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic) bool shouldTerminateThread;
@property (nonatomic) bool speechActive;
@property (nonatomic, retain) ServerSpeechContext *speechActiveContext;
@property (nonatomic) struct __CFRunLoopSource { }*speechActivitySignal;
@property (nonatomic, retain) NSLock *speechLock;
@property (nonatomic, retain) NSMutableArray *speechRequestQueue;
@property (nonatomic) TTSSpeechServer *speechService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *speechTerminationQueue;
@property (nonatomic) unsigned char speechThreadActive;
@property (nonatomic) bool speechThreadPriorityIsHigh;
@property (nonatomic) struct __CFRunLoop { }*speechThreadRunLoop;
@property (nonatomic) unsigned long long synthesizerId;
@property (nonatomic, copy) id /* block */ unitTestMarkerProcessingCallback;
@property (nonatomic, retain) TTSVocalizer *vocalizer;
@property (nonatomic, retain) TTSTimer *wordCallbackTimer;

- (void).cxx_destruct;
- (unsigned char)_activeRequestShouldContinue:(id)arg1;
- (unsigned char)_activeRequestShouldPauseImmediately:(id)arg1;
- (unsigned char)_activeRequestShouldStopAtAnyMark:(id)arg1;
- (unsigned char)_activeRequestShouldStopImmediately:(id)arg1;
- (void)_appendSpeechRequestAndStart:(id)arg1;
- (double)_computeMarkerDelayForByteOffset:(unsigned int)arg1 andContext:(id)arg2;
- (bool)_defaultVoiceIsFallback;
- (bool)_footprintOrVoiceNameHasChanged:(id)arg1;
- (void)_handleSpeechThread;
- (void)_initializeSpeech:(id)arg1;
- (void)_initializeSpeechEngine:(id)arg1;
- (bool)_languageCodeHasChanged:(id)arg1 oldLanguage:(id)arg2;
- (void)_loadVoiceResource:(id)arg1 voiceResource:(id)arg2;
- (unsigned char)_needsParameterChange:(id)arg1 lock:(unsigned char)arg2 rate:(float*)arg3 pitch:(float*)arg4 volume:(float*)arg5 footprint:(long long*)arg6 voiceType:(long long*)arg7;
- (void)_newVoiceInstalled;
- (void)_processCurrentRequest:(id)arg1;
- (unsigned char)_setActiveRequestActionForMark:(long long)arg1 clientRequest:(id)arg2 markType:(long long)arg3;
- (void)_setParameters:(id)arg1 rate:(float)arg2 pitch:(float)arg3 volume:(float)arg4 footprint:(long long)arg5;
- (unsigned char)_shouldContinueSpeechGivenMark:(id)arg1 markType:(long long)arg2 blockIfPaused:(unsigned char)arg3;
- (void)_speechThreadSignal;
- (id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)arg1 playback:(struct __TTSPlayback { }*)arg2 inContext:(void*)arg3;
- (void)_startSpeechThread;
- (void)_terminateThread;
- (id)_ttSSpeechServerCopyVoiceInfoForLanguage:(id)arg1 voiceType:(long long)arg2 queryingMobileAssets:(bool)arg3;
- (void)_uninitializeSpeech:(id)arg1;
- (bool)_voiceTypeHasChanged:(id)arg1;
- (oneway void)continueSpeechRequest:(id)arg1;
- (void)dealloc;
- (bool)didTerminateThread;
- (oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (struct __CFArray { }*)loadedVoiceResources;
- (id)mobileAssetWorkQueue;
- (bool)newVoiceInstalled;
- (oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (void)processGenericMarkerWithByteOffset:(unsigned int)arg1 name:(id)arg2 context:(id)arg3;
- (void)processPhonemeMarkerWithByteOffset:(unsigned int)arg1 phoneme:(id)arg2 alphabet:(long long)arg3 context:(id)arg4;
- (void)processWordMarkerWithByteOffset:(unsigned int)arg1 markerPosition:(unsigned int)arg2 markerLength:(unsigned int)arg3 context:(id)arg4 secondPass:(bool)arg5;
- (id)queuedSiriVoiceResourceToLoad;
- (id)serviceQueue;
- (void)setDidTerminateThread:(bool)arg1;
- (void)setMobileAssetWorkQueue:(id)arg1;
- (void)setNewVoiceInstalled:(bool)arg1;
- (void)setQueuedSiriVoiceResourceToLoad:(id)arg1;
- (void)setServiceQueue:(id)arg1;
- (void)setShouldTerminateThread:(bool)arg1;
- (void)setSpeechActive:(bool)arg1;
- (void)setSpeechActiveContext:(id)arg1;
- (void)setSpeechActivitySignal:(struct __CFRunLoopSource { }*)arg1;
- (void)setSpeechLock:(id)arg1;
- (void)setSpeechRequestQueue:(id)arg1;
- (void)setSpeechService:(id)arg1;
- (void)setSpeechTerminationQueue:(id)arg1;
- (void)setSpeechThreadActive:(unsigned char)arg1;
- (void)setSpeechThreadPriorityIsHigh:(bool)arg1;
- (void)setSpeechThreadRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)setSynthesizerId:(unsigned long long)arg1;
- (void)setUnitTestMarkerProcessingCallback:(id /* block */)arg1;
- (void)setVocalizer:(id)arg1;
- (void)setWordCallbackTimer:(id)arg1;
- (bool)shouldTerminateThread;
- (bool)speechActive;
- (id)speechActiveContext;
- (struct __CFRunLoopSource { }*)speechActivitySignal;
- (id)speechLock;
- (id)speechRequestQueue;
- (id)speechService;
- (id)speechTerminationQueue;
- (unsigned char)speechThreadActive;
- (bool)speechThreadPriorityIsHigh;
- (struct __CFRunLoop { }*)speechThreadRunLoop;
- (oneway void)startSpeechRequest:(id)arg1;
- (oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (unsigned long long)synthesizerId;
- (void)terminateSpeechThread;
- (id /* block */)unitTestMarkerProcessingCallback;
- (id)vocalizer;
- (id)wordCallbackTimer;

@end
