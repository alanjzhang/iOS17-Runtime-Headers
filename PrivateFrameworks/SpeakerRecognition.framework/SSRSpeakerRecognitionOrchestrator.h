/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SSRSpeakerRecognitionOrchestrator : NSObject <SSRSpeakerRecognizerDelegate, SSRVoiceActivityDetectorDelegate> {
    NSDictionary * _combinedScores;
    SSRSpeakerRecognitionContext * _context;
    NSString * _debugUtteranceAudioFilePath;
    NSString * _debugUtteranceJsonFilePath;
    <SSRSpeakerRecognitionOrchestratorDelegate> * _delegate;
    bool  _endAudioCalled;
    double  _lastScoreReportTimeStamp;
    double  _lastSegmentStartTime;
    unsigned long long  _myriadResult;
    unsigned long long  _numSamplesAddedToSpeakerRecognizers;
    NSDictionary * _psrFinalSpeakerInfo;
    NSDictionary * _psrLastSpeakerInfo;
    <SSRSpeakerRecognizer> * _psrRecognizer;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _satFinalSpeakerInfo;
    NSDictionary * _satLastSpeakerInfo;
    <SSRSpeakerRecognizer> * _satRecognizer;
    unsigned long long  _segmentCounter;
    <CSAudioFileWriter> * _ssrUttLogger;
    bool  _startPointReported;
    NSString * _transDesc;
    NSObject<OS_os_transaction> * _transaction;
    SSRVoiceActivityDetector * _vad;
}

@property (nonatomic, retain) NSDictionary *combinedScores;
@property (nonatomic, retain) SSRSpeakerRecognitionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugUtteranceAudioFilePath;
@property (nonatomic, retain) NSString *debugUtteranceJsonFilePath;
@property (nonatomic) <SSRSpeakerRecognitionOrchestratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long myriadResult;
@property (nonatomic, retain) NSDictionary *psrFinalSpeakerInfo;
@property (nonatomic, retain) NSDictionary *psrLastSpeakerInfo;
@property (nonatomic, retain) <SSRSpeakerRecognizer> *psrRecognizer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSDictionary *satFinalSpeakerInfo;
@property (nonatomic, retain) NSDictionary *satLastSpeakerInfo;
@property (nonatomic, retain) <SSRSpeakerRecognizer> *satRecognizer;
@property (nonatomic, retain) <CSAudioFileWriter> *ssrUttLogger;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *transDesc;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;
@property (nonatomic, retain) SSRVoiceActivityDetector *vad;

- (void).cxx_destruct;
- (void)SSRVoiceActivityDetector:(id)arg1 didDetectEndPointAt:(unsigned long long)arg2;
- (void)SSRVoiceActivityDetector:(id)arg1 didDetectStartPointAt:(unsigned long long)arg2;
- (void)_logSpeakerIdProcessorScoreDelayWithScoreInfo:(id)arg1 hasFinished:(bool)arg2;
- (void)_resetWithContext:(id)arg1;
- (id)combinedScores;
- (id)context;
- (void)dealloc;
- (id)debugUtteranceAudioFilePath;
- (id)debugUtteranceJsonFilePath;
- (id)delegate;
- (void)endAudio;
- (id)getLatestVoiceRecognitionInfo;
- (id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id*)arg3;
- (unsigned long long)myriadResult;
- (id)orchestratorScoresWithPSRScores:(id)arg1 withSATScores:(id)arg2 withSegmentStartTime:(double)arg3;
- (void)processAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)psrFinalSpeakerInfo;
- (id)psrLastSpeakerInfo;
- (id)psrRecognizer;
- (id)queue;
- (id)resetWithContext:(id)arg1;
- (id)satFinalSpeakerInfo;
- (id)satLastSpeakerInfo;
- (id)satRecognizer;
- (void)setCombinedScores:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDebugUtteranceAudioFilePath:(id)arg1;
- (void)setDebugUtteranceJsonFilePath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMyriadResult:(unsigned long long)arg1;
- (void)setPsrFinalSpeakerInfo:(id)arg1;
- (void)setPsrLastSpeakerInfo:(id)arg1;
- (void)setPsrRecognizer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSatFinalSpeakerInfo:(id)arg1;
- (void)setSatLastSpeakerInfo:(id)arg1;
- (void)setSatRecognizer:(id)arg1;
- (void)setSsrUttLogger:(id)arg1;
- (void)setTransDesc:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setVad:(id)arg1;
- (void)speakerRecognizer:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)speakerRecognizerFinishedProcessing:(id)arg1 withFinalSpeakerIdInfo:(id)arg2;
- (id)ssrUttLogger;
- (id)transDesc;
- (id)transaction;
- (void)updateDebugFilePathsForSegment:(unsigned long long)arg1;
- (id)vad;

@end
