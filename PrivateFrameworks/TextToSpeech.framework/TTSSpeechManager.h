/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechManager : NSObject <TTSSpeechSynthesizerDelegate> {
    AXDispatchTimer * _audioDeactivatorTimer;
    double  _audioInterruptionStartedTime;
    unsigned int  _audioQueueFlags;
    AVAudioSession * _audioSession;
    NSString * _audioSessionCategory;
    unsigned long long  _audioSessionCategoryOptions;
    double  _audioSessionInactiveTimeout;
    bool  _audioSessionObserversEnabled;
    bool  _didRequestPauseSpeakingDuringAudioInterruption;
    bool  _didRequestResumeSpeakingDuringAudioInterruption;
    bool  _didRequestStartSpeakingDuringAudioInterruption;
    bool  _isInAudioInterruption;
    bool  _isPaused;
    bool  _isSpeaking;
    NSNumber * _originalSpeechRateForJobOverride;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    id /* block */  _requestWillStart;
    TTSSpeechAction * _requestedActionDuringAudioInterruption;
    TTSSpeechThread * _runThread;
    unsigned long long  _setActiveOptions;
    bool  _shouldHandleAudioInterruptions;
    bool  _showControlCenterControls;
    bool  _skipLuthorRules;
    bool  _speechEnabled;
    NSMutableArray * _speechQueue;
    NSString * _speechSource;
    bool  _speechThreadFinished;
    NSLock * _speechThreadQueueLock;
    bool  _supportsAccurateWordCallbacks;
    TTSSpeechSynthesizer * _synthesizer;
    bool  _usesAuxiliarySession;
    bool  _wasSpeakingBeforeAudioInterruption;
}

@property (nonatomic, retain) AXDispatchTimer *audioDeactivatorTimer;
@property (nonatomic) double audioInterruptionStartedTime;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic, retain) AVAudioSession *audioSession;
@property (nonatomic, retain) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (nonatomic) double audioSessionInactiveTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRequestPauseSpeakingDuringAudioInterruption;
@property (nonatomic) bool didRequestResumeSpeakingDuringAudioInterruption;
@property (nonatomic) bool didRequestStartSpeakingDuringAudioInterruption;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInAudioInterruption;
@property (nonatomic) bool isPaused;
@property (nonatomic, readonly) bool isSpeaking;
@property (nonatomic, retain) NSNumber *originalSpeechRateForJobOverride;
@property (nonatomic, retain) NSArray *outputChannels;
@property (nonatomic, copy) id /* block */ requestWillStart;
@property (nonatomic, retain) TTSSpeechAction *requestedActionDuringAudioInterruption;
@property (nonatomic) unsigned long long setActiveOptions;
@property (nonatomic) bool shouldHandleAudioInterruptions;
@property (nonatomic, readonly) bool showControlCenterControls;
@property (nonatomic) bool skipLuthorRules;
@property (nonatomic) bool speechEnabled;
@property (nonatomic, retain) NSString *speechSource;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAccurateWordCallbacks;
@property (nonatomic) bool usesAuxiliarySession;
@property (nonatomic) bool wasSpeakingBeforeAudioInterruption;

+ (bool)_isCharacterNativelySpeakable:(unsigned short)arg1 languageCode:(id)arg2;
+ (id)_resetAvailableVoices;
+ (id)_resetAvailableVoices:(bool)arg1;
+ (id)audioFileSettingsForVoice:(id)arg1;
+ (id)avSpeechVoicesForTTSSpeechVoices:(id)arg1;
+ (id)availableLanguageCodes;
+ (id)availableSuperCompactVoices;
+ (id)availableVoices;
+ (id)availableVoices:(bool)arg1;
+ (struct URegularExpression { }*)createRegularExpressionFromString:(id)arg1;
+ (id)currentLanguageCode;
+ (bool)currentProcessAllowedToSaveVoiceInfo;
+ (id)languageCodeForVoiceIdentifier:(id)arg1;
+ (id)literalStringMarkup:(id)arg1 string:(id)arg2 speakCap:(bool)arg3;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression { }*)arg2;
+ (id)pauseMarkupString:(id)arg1;
+ (id)remapLanguageCode:(id)arg1;
+ (id)spellOutLetterCaseMarkupString:(id)arg1 string:(id)arg2;
+ (id)spellOutMarkupString:(id)arg1 string:(id)arg2;
+ (void)test_actionStartTap:(id /* block */)arg1;
+ (void)test_setAvailableVoices:(id)arg1;
+ (void)test_setUnitTestMode:(bool)arg1;

- (void).cxx_destruct;
- (void)__speechJobFinished:(id)arg1;
- (void)_clearSpeechQueue;
- (void)_continueSpeaking;
- (void)_didBeginInterruption;
- (void)_didEndInterruption;
- (void)_dispatchSpeechAction:(id)arg1;
- (bool)_enqueueSelectorOnSpeechThread:(SEL)arg1 object:(id)arg2 waitUntilDone:(bool)arg3;
- (void)_handleAudioInterruption:(id)arg1;
- (void)_handleMediaServicesWereLost:(id)arg1;
- (void)_handleMediaServicesWereReset:(id)arg1;
- (void)_initialize;
- (void)_isSpeaking:(id)arg1;
- (void)_pauseSpeaking:(id)arg1;
- (id)_phonemeSubstitutionsForAction:(id)arg1;
- (void)_processAudioBufferCallback:(id)arg1;
- (void)_processDidContinueCallback:(id)arg1;
- (void)_processDidEncounterMarker:(id)arg1;
- (void)_processDidPauseCallback:(id)arg1;
- (void)_processDidStartCallback:(id)arg1;
- (void)_processWillSpeechRange:(id)arg1;
- (void)_resetInterruptionTracking;
- (void)_speechJobFinished:(bool)arg1 action:(id)arg2;
- (void)_startNextSpeechJob;
- (void)_stopSpeaking:(id)arg1;
- (void)_tearDown;
- (void)_updateAudioSessionProperties;
- (void)_updateAuxiliarySession;
- (void)_updateUserSubstitutions;
- (id)audioDeactivatorTimer;
- (double)audioInterruptionStartedTime;
- (unsigned int)audioQueueFlags;
- (id)audioSession;
- (id)audioSessionCategory;
- (unsigned long long)audioSessionCategoryOptions;
- (double)audioSessionInactiveTimeout;
- (void)clearSpeechQueue;
- (void)continueSpeaking;
- (void)dealloc;
- (bool)didRequestPauseSpeakingDuringAudioInterruption;
- (bool)didRequestResumeSpeakingDuringAudioInterruption;
- (bool)didRequestStartSpeakingDuringAudioInterruption;
- (void)dispatchSpeechAction:(id)arg1;
- (id)externalVoiceIdentifierUsedForLanguage:(id)arg1;
- (void)handleAudioSessionObservers:(bool)arg1;
- (id)init;
- (bool)isInAudioInterruption;
- (bool)isPaused;
- (bool)isSpeaking;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)originalSpeechRateForJobOverride;
- (id)outputChannels;
- (void)pauseSpeaking:(long long)arg1;
- (id /* block */)requestWillStart;
- (id)requestedActionDuringAudioInterruption;
- (unsigned long long)setActiveOptions;
- (void)setAudioDeactivatorTimer:(id)arg1;
- (void)setAudioInterruptionStartedTime:(double)arg1;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setAudioSessionCategory:(id)arg1;
- (void)setAudioSessionCategoryOptions:(unsigned long long)arg1;
- (void)setAudioSessionInactiveTimeout:(double)arg1;
- (void)setDidRequestPauseSpeakingDuringAudioInterruption:(bool)arg1;
- (void)setDidRequestResumeSpeakingDuringAudioInterruption:(bool)arg1;
- (void)setDidRequestStartSpeakingDuringAudioInterruption:(bool)arg1;
- (void)setIsInAudioInterruption:(bool)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setOriginalSpeechRateForJobOverride:(id)arg1;
- (void)setOutputChannels:(id)arg1;
- (void)setRequestWillStart:(id /* block */)arg1;
- (void)setRequestedActionDuringAudioInterruption:(id)arg1;
- (void)setSetActiveOptions:(unsigned long long)arg1;
- (void)setShouldHandleAudioInterruptions:(bool)arg1;
- (void)setSkipLuthorRules:(bool)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setSpeechSource:(id)arg1;
- (void)setSupportsAccurateWordCallbacks:(bool)arg1;
- (void)setUsesAuxiliarySession:(bool)arg1;
- (void)setWasSpeakingBeforeAudioInterruption:(bool)arg1;
- (bool)shouldHandleAudioInterruptions;
- (bool)showControlCenterControls;
- (bool)skipLuthorRules;
- (bool)speechEnabled;
- (id)speechSource;
- (void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didEncounterMarker:(id)arg2 forRequest:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)stopSpeaking;
- (void)stopSpeaking:(long long)arg1;
- (bool)supportsAccurateWordCallbacks;
- (void)tearDown;
- (bool)usesAuxiliarySession;
- (id)voiceIdentifierUsedForLanguage:(id)arg1;
- (bool)wasSpeakingBeforeAudioInterruption;

@end
