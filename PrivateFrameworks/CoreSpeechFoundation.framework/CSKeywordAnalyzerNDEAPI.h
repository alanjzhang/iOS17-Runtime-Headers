/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSKeywordAnalyzerNDEAPI : NSObject {
    unsigned long long  _activeChannel;
    NSMutableData * _currentBlob;
    <CSKeywordAnalyzerNDEAPIScoreDelegate> * _delegate;
    CSKeywordAnalyzerNDEAPIResult * _lastResult;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) <CSKeywordAnalyzerNDEAPIScoreDelegate> *delegate;

- (void).cxx_destruct;
- (unsigned long long)activeChannel;
- (id)checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)getLastResult;
- (id)initWithBlob:(id)arg1;
- (id)processAudioBytes:(void*)arg1 withNumberOfSamples:(long long)arg2;
- (id)processAudioChunk:(id)arg1;
- (void)reset;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end