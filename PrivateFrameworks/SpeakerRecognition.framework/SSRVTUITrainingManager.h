/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SSRVTUITrainingManager : NSObject <CSVTUIAudioSessionDelegate, CSVTUIEndpointAnalyzerDelegate, CSVTUITrainingSessionDelegate> {
    CSVTUIEndpointAnalyzer * _audioAnalyzer;
    CSPlainAudioFileWriter * _audioFileWriter;
    <CSVTUIAudioSession> * _audioSession;
    CSAudioZeroCounter * _audioZeroCounter;
    id /* block */  _cleanupCompletion;
    CSAsset * _currentAsset;
    CSVTUITrainingSession * _currentTrainingSession;
    <SSRVTUITrainingManagerDelegate> * _delegate;
    CSDispatchGroup * _didStopWaitingGroup;
    CSVTUIKeywordDetector * _keywordDetector;
    NSString * _locale;
    NSUUID * _mhUUID;
    bool  _performRMS;
    SSRVoiceProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    float  _rms;
    long long  _sessionNumber;
    SFSpeechRecognizer * _speechRecognizer;
    bool  _speechRecognizerAvailable;
    bool  _suspendAudio;
    NSMutableArray * _trainingSessions;
}

@property (nonatomic, retain) CSPlainAudioFileWriter *audioFileWriter;
@property (readonly) unsigned long long audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSRVTUITrainingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property float rms;
@property (readonly) bool speechRecognizerAvailable;
@property (readonly) Class superclass;
@property bool suspendAudio;
@property (readonly) SSRVoiceProfile *voiceProfile;

+ (id)sharedtrainingSessionQueue;
+ (id)trainingManagerWithLocaleID:(id)arg1 withAppDomain:(id)arg2;

- (void).cxx_destruct;
- (bool)CSVTUITrainingSession:(id)arg1 hasTrainUtterance:(id)arg2 languageCode:(id)arg3 payload:(bool)arg4;
- (void)CSVTUITrainingSessionRMSAvailable:(float)arg1;
- (void)CSVTUITrainingSessionStopListen;
- (unsigned long long)_audioSource;
- (void)_beginOfSpeechDetected;
- (bool)_createAudioAnalyzer;
- (void)_destroyAudioSession;
- (void)_endOfSpeechDetected;
- (bool)_setupAudioSession;
- (bool)_shouldShowHeadsetDisconnectionMessage;
- (bool)_startAudioSession;
- (bool)_stopAudioSession;
- (id)audioFileWriter;
- (void)audioSessionDidStartRecording:(bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (unsigned long long)audioSource;
- (bool)cancelTrainingForID:(long long)arg1;
- (id)cleanupWithCompletion:(id /* block */)arg1;
- (void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(bool)arg2 completionWithResult:(id /* block */)arg3;
- (void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(bool)arg2 withCompletion:(id /* block */)arg3;
- (bool)createKeywordDetector;
- (void)createSpeechRecognizer;
- (id)delegate;
- (void)destroySpeakerTrainer;
- (void)didDetectForceEndPoint;
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2;
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (id)initWithLocaleIdentifier:(id)arg1 withAudioSession:(id)arg2 withAppDomain:(id)arg3;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)reset;
- (float)rms;
- (void)setAudioFileWriter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setRms:(float)arg1;
- (void)setSuspendAudio:(bool)arg1;
- (bool)shouldPerformRMS;
- (bool)speechRecognizerAvailable;
- (void)startRMS;
- (void)stopRMS;
- (bool)suspendAudio;
- (long long)trainUtterance:(long long)arg1 shouldUseASR:(bool)arg2 completion:(id /* block */)arg3;
- (long long)trainUtterance:(long long)arg1 shouldUseASR:(bool)arg2 mhUUID:(id)arg3 completionWithResult:(id /* block */)arg4;
- (id)updateTrainingManagerForDevice:(unsigned long long)arg1 trainingDeviceUUIDList:(id)arg2;
- (id)voiceProfile;

@end