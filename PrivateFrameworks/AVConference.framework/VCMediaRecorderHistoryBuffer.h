/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaRecorderHistoryBuffer : NSObject {
    unsigned int  _bufferLength;
    id  _delegate;
    unsigned int  _lastTimestamp;
    struct __CFDictionary { } * _sampleMap;
    struct __CFAllocator { } * _timestampAllocator;
    struct __CFArray { } * _timestampQueue;
}

- (void)dealloc;
- (id)delegate;
- (void)flushBuffer;
- (struct opaqueCMSampleBuffer { }*)getClosestSampleForTimestamp:(unsigned int)arg1;
- (int)getCount;
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;

@end
