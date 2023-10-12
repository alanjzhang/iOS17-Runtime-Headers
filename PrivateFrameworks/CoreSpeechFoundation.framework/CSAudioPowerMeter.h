/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSAudioPowerMeter : NSObject {
    double  _averagePowerF;
    int  _averagePowerI;
    double  _averagePowerPeak;
    CSAudioUnitMeterClipping * _clipping;
    double  _decay;
    double  _decay1;
    bool  _instantaneousMode;
    double  _maxPeak;
    double  _peak;
    double  _peakDecay;
    double  _peakDecay1;
    int  _peakHoldCount;
    int  _previousBlockSize;
    double  _sampleRate;
}

- (void).cxx_destruct;
- (double)_ampToDB:(double)arg1;
- (double)_linearToDB:(double)arg1;
- (void)_reset;
- (void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3;
- (void)_scaleDecayConstants:(int)arg1;
- (void)_zapgremlins:(double*)arg1;
- (double)getAveragePowerDB;
- (double)getPeakPowerDB;
- (id)initWithSampleRate:(float)arg1;
- (void)processFloatBuffer:(const float*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3;
- (void)processShortBuffer:(const short*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3;
- (void)reset;

@end
