/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSAudioTimeErrorCalculator : NSObject {
    bool  _calculatedTimeError;
    const float * _channelASamples;
    const float * _channelBSamples;
    long long  _correlationLength;
    long long  _correlationType;
    long long  _interval;
    long long  _maxMeasurements;
    long long  _measurementsInBuffer;
    bool  _noCopy;
    long long  _numberOfSamples;
    double * _sampleTimestamps;
    double  _samplingRate;
    double * _timeErrors;
    long long  _upscaleFactor;
}

@property (nonatomic, readonly, copy) NSArray *audioTimeErrors;
@property (nonatomic, readonly, copy) NSArray *timeErrors;

- (void)_processTimeErrorFromStartOffset:(long long)arg1 atIndex:(long long)arg2 withCount:(long long)arg3;
- (id)audioTimeErrors;
- (void)calculateTimeError;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2 withThreadingOption:(long long)arg3;
- (void)calculateTimeErrorWithThreadingOption:(long long)arg1;
- (void)dealloc;
- (bool)exportTimeErrorToDirectoryURL:(id)arg1;
- (bool)exportTimeErrorToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (bool)exportTimeErrorToPath:(id)arg1;
- (id)initNoCopyWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;
- (id)initNoCopyWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;
- (id)initWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;
- (id)initWithChannelA:(const float*)arg1 andChannelB:(const float*)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;
- (id)timeErrors;

@end
