/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface RMSSample : NSObject {
    double  _RMSScore;
    unsigned long long  _lastSampleCount;
}

@property (nonatomic) double RMSScore;
@property (nonatomic) unsigned long long lastSampleCount;

- (double)RMSScore;
- (long long)compareScoresDesc:(id)arg1;
- (id)initWithRMSScore:(double)arg1 lastSampleCount:(unsigned long long)arg2;
- (unsigned long long)lastSampleCount;
- (void)setLastSampleCount:(unsigned long long)arg1;
- (void)setRMSScore:(double)arg1;

@end
