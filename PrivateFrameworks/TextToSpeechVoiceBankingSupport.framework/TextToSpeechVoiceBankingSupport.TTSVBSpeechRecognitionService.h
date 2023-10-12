/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeechVoiceBankingSupport.framework/TextToSpeechVoiceBankingSupport
 */

@interface TextToSpeechVoiceBankingSupport.TTSVBSpeechRecognitionService : NSObject <SFSpeechRecognitionTaskDelegate> {
    void delegate;
    void detectedSpeechText;
    void finishedListening;
    void isAssetDownloading;
    void phrase;
    void recognitionRequest;
    void recognitionTask;
    void recordingEnvironment;
    void speechRecognitionQueue;
    void speechRecognizer;
    void userFinishedSpeakingTimer;
}

- (void).cxx_destruct;
- (id)init;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;

@end