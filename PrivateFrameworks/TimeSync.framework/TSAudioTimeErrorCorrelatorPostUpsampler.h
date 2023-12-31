/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSAudioTimeErrorCorrelatorPostUpsampler : TSAudioTimeErrorCorrelator {
    float * _channelABuffer;
    float * _correlationBuffer;
    float * _scratch1Buffer;
    float * _scratch2Buffer;
    float * _upsamplerFilterCoefficientsBuffer;
    long long  _upsamplerFilterCoefficientsLength;
}

- (void)_makeBlock;
- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;

@end
