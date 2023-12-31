/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SpeakerRecognition.CSVTUITwoPassKeywordDetectorHelper : NSObject <SpeakerRecognition.CSVTUIKeywordDetectorSwift> {
    void analyzerTrailingSamples;
    void audioBuffer;
    void extraSamplesAtStart;
    void keywordAnalyzer;
    void keywordThreshold;
    void phraseDetector;
    void supportsMph;
}

// SpeakerRecognition.CSVTUITwoPassKeywordDetectorHelper (null)

- (void).cxx_destruct;
- (id)analyzeWithBuffer:(id)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 supportMph:(bool)arg2;
- (void)reset;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)arg1;

@end
