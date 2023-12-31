/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface CSVTUIEndpointAnalyzer : NSObject {
    unsigned long long  _activeChannel;
    <CSVTUIEndpointAnalyzerDelegate> * _delegate;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) <CSVTUIEndpointAnalyzerDelegate> *delegate;

- (void).cxx_destruct;
- (unsigned long long)activeChannel;
- (id)delegate;
- (id)init;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)stopEndpointer;
- (double)trailingSilenceDurationAtEndpoint;

@end
