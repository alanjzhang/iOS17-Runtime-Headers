/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AudioTransportCommon.framework/AudioTransportCommon
 */

@interface ATCIOA2Device : NSObject {
    NSArray * _availableSampleRates;
    unsigned int  _clockDomain;
    unsigned int  _inputLatency;
    unsigned int  _inputSafetyOffset;
    NSArray * _inputStreams;
    unsigned int  _ioBufferSize;
    NSString * _name;
    unsigned int  _outputLatency;
    unsigned int  _outputSafetyOffset;
    NSArray * _outputStreams;
    double  _sampleRate;
    NSString * _uid;
}

@property (nonatomic, copy) NSArray *availableSampleRates;
@property (nonatomic, readonly) unsigned int clockDomain;
@property (nonatomic, readonly) unsigned int inputLatency;
@property (nonatomic, readonly) unsigned int inputSafetyOffset;
@property (nonatomic, copy) NSArray *inputStreams;
@property (nonatomic, readonly) unsigned int ioBufferSize;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int outputLatency;
@property (nonatomic, readonly) unsigned int outputSafetyOffset;
@property (nonatomic, copy) NSArray *outputStreams;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly, copy) NSString *uid;

+ (id)iokitMatchingDictionary;

- (void).cxx_destruct;
- (id)availableSampleRates;
- (bool)changeToSampleRate:(double)arg1 error:(id*)arg2;
- (unsigned int)clockDomain;
- (id)initWithService:(id)arg1;
- (unsigned int)inputLatency;
- (unsigned int)inputSafetyOffset;
- (id)inputStreams;
- (unsigned int)ioBufferSize;
- (id)name;
- (unsigned int)outputLatency;
- (unsigned int)outputSafetyOffset;
- (id)outputStreams;
- (double)sampleRate;
- (void)setAvailableSampleRates:(id)arg1;
- (void)setInputStreams:(id)arg1;
- (void)setOutputStreams:(id)arg1;
- (bool)startIOError:(id*)arg1;
- (bool)stopIOError:(id*)arg1;
- (id)uid;

@end