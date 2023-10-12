/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {
    id /* block */  _audioBufferCallback;
    unsigned int  _audioQueueFlags;
    unsigned int  _audioSessionID;
    bool  _audioSessionIDIsValid;
    NSArray * _channels;
    void * _clientContext;
    <TTSSpeechRequestDelegate> * _delegate;
    double  _dispatchTime;
    long long  _gender;
    double  _handledTime;
    NSString * _languageCode;
    double  _latency;
    id /* block */  _latencyCallback;
    bool  _maintainsInput;
    double  _pitch;
    double  _rate;
    bool  _sentSpeechDone;
    bool  _skipLuthorRules;
    NSString * _speechSource;
    TTSSpeechString * _speechString;
    bool  _supportsAccurateWordCallbacks;
    AVSpeechSynthesisProviderVoice * _synthesisProviderVoice;
    bool  _synthesizeSilently;
    unsigned long long  _synthesizerInstanceID;
    TTSSpeechString * _unescapedSpeechString;
    TTSSpeechVoice * _voice;
    double  _volume;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic, copy) id /* block */ audioBufferCallback;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) bool audioSessionIDIsValid;
@property (nonatomic, retain) NSArray *channels;
@property (nonatomic) void*clientContext;
@property (nonatomic) double dispatchTime;
@property (nonatomic) long long gender;
@property (nonatomic) double handledTime;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) double latency;
@property (nonatomic, copy) id /* block */ latencyCallback;
@property (nonatomic) bool maintainsInput;
@property (nonatomic) double pitch;
@property (nonatomic) double rate;
@property (nonatomic) bool sentSpeechDone;
@property (nonatomic) bool skipLuthorRules;
@property (nonatomic, retain) NSString *speechSource;
@property (nonatomic, retain) TTSSpeechString *speechString;
@property (nonatomic) bool supportsAccurateWordCallbacks;
@property (nonatomic, copy) AVSpeechSynthesisProviderVoice *synthesisProviderVoice;
@property (nonatomic) bool synthesizeSilently;
@property (nonatomic) unsigned long long synthesizerInstanceID;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, retain) TTSSpeechString *unescapedSpeechString;
@property (nonatomic, copy) TTSSpeechVoice *voice;
@property (nonatomic) double volume;
@property (nonatomic, retain) NSObject<OS_voucher> *voucher;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)audioBufferCallback;
- (unsigned int)audioQueueFlags;
- (unsigned int)audioSessionID;
- (bool)audioSessionIDIsValid;
- (id)channels;
- (void*)clientContext;
- (id)delegate;
- (id)description;
- (double)dispatchTime;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (double)handledTime;
- (id)initWithCoder:(id)arg1;
- (id)languageCode;
- (double)latency;
- (id /* block */)latencyCallback;
- (bool)maintainsInput;
- (double)pitch;
- (double)rate;
- (bool)sentSpeechDone;
- (void)setAudioBufferCallback:(id /* block */)arg1;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionIDIsValid:(bool)arg1;
- (void)setChannels:(id)arg1;
- (void)setClientContext:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchTime:(double)arg1;
- (void)setGender:(long long)arg1;
- (void)setHandledTime:(double)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLatency:(double)arg1;
- (void)setLatencyCallback:(id /* block */)arg1;
- (void)setMaintainsInput:(bool)arg1;
- (void)setPitch:(double)arg1;
- (void)setRate:(double)arg1;
- (void)setSentSpeechDone:(bool)arg1;
- (void)setSkipLuthorRules:(bool)arg1;
- (void)setSpeechSource:(id)arg1;
- (void)setSpeechString:(id)arg1;
- (void)setSupportsAccurateWordCallbacks:(bool)arg1;
- (void)setSynthesisProviderVoice:(id)arg1;
- (void)setSynthesizeSilently:(bool)arg1;
- (void)setSynthesizerInstanceID:(unsigned long long)arg1;
- (void)setUnescapedSpeechString:(id)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(double)arg1;
- (void)setVoucher:(id)arg1;
- (bool)skipLuthorRules;
- (void)speechRequestDidContinueForService:(id)arg1;
- (void)speechRequestDidPauseForService:(id)arg1;
- (void)speechRequestDidStartForService:(id)arg1;
- (void)speechRequestDidStopWithSuccess:(bool)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;
- (void)speechRequestMarker:(id)arg1 didStartForService:(id)arg2;
- (id)speechSource;
- (id)speechString;
- (bool)supportsAccurateWordCallbacks;
- (id)synthesisProviderVoice;
- (bool)synthesizeSilently;
- (unsigned long long)synthesizerInstanceID;
- (id)text;
- (id)unescapedSpeechString;
- (long long)vocalizerFootprint;
- (long long)vocalizerGender;
- (id)voice;
- (double)volume;
- (id)voucher;

@end
