/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

@interface VideoFrameWriterQueue : NSObject {
    bool  _doneQueueing;
    NSConditionLock * _drainConditionLock;
    unsigned int  _drainMaximum;
    unsigned int  _drainMinimum;
    unsigned long long  _drainTarget;
    NSConditionLock * _writingDoneLock;
    bool  canceled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  endTime;
    NSMutableArray * frameArray;
    NSLock * frameArrayLock;
    NSObject<OS_dispatch_queue> * frameWriteQueue;
    <VideoFrameWriterProgressRecipient> * frameWriterUpdateCallback;
    AVAssetWriterInputPixelBufferAdaptor * inputAdaptor;
    unsigned long long  nextFrameIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  startTime;
    AVAssetWriter * videoWriter;
    NSError * writeError;
    bool  writeSuccess;
    AVAssetWriterInput * writerInput;
}

@property bool canceled;
@property bool doneQueueing;
@property (retain) NSConditionLock *drainConditionLock;
@property unsigned int drainMaximum;
@property unsigned int drainMinimum;
@property unsigned long long drainTarget;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } endTime;
@property (retain) NSMutableArray *frameArray;
@property (nonatomic, retain) NSLock *frameArrayLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *frameWriteQueue;
@property <VideoFrameWriterProgressRecipient> *frameWriterUpdateCallback;
@property (nonatomic, retain) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor;
@property unsigned long long nextFrameIndex;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;
@property (nonatomic, retain) AVAssetWriter *videoWriter;
@property (retain) NSError *writeError;
@property bool writeSuccess;
@property (nonatomic, retain) AVAssetWriterInput *writerInput;
@property (retain) NSConditionLock *writingDoneLock;

- (void).cxx_destruct;
- (void)AddAFrame:(id)arg1;
- (void)DrainIfAbove:(unsigned int)arg1 downTo:(unsigned int)arg2;
- (id)FindFrameWithIndex:(long long)arg1;
- (void)FrameRequestCallback;
- (unsigned long long)FramesInQueue;
- (void)StartWatchingForFrames;
- (bool)WaitForFinish;
- (bool)canceled;
- (void)dealloc;
- (bool)doneQueueing;
- (id)drainConditionLock;
- (unsigned int)drainMaximum;
- (unsigned int)drainMinimum;
- (unsigned long long)drainTarget;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endTime;
- (id)frameArray;
- (id)frameArrayLock;
- (id)frameWriteQueue;
- (id)frameWriterUpdateCallback;
- (id)initWithOutputURL:(id)arg1 forMovieDimensions:(struct CGSize { double x1; double x2; })arg2 outputTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (id)inputAdaptor;
- (unsigned long long)nextFrameIndex;
- (void)setCanceled:(bool)arg1;
- (void)setDoneQueueing:(bool)arg1;
- (void)setDrainConditionLock:(id)arg1;
- (void)setDrainMaximum:(unsigned int)arg1;
- (void)setDrainMinimum:(unsigned int)arg1;
- (void)setDrainTarget:(unsigned long long)arg1;
- (void)setEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFrameArray:(id)arg1;
- (void)setFrameArrayLock:(id)arg1;
- (void)setFrameWriteQueue:(id)arg1;
- (void)setFrameWriterUpdateCallback:(id)arg1;
- (void)setInputAdaptor:(id)arg1;
- (void)setNextFrameIndex:(unsigned long long)arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoWriter:(id)arg1;
- (void)setWriteError:(id)arg1;
- (void)setWriteSuccess:(bool)arg1;
- (void)setWriterInput:(id)arg1;
- (void)setWritingDoneLock:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (id)videoWriter;
- (id)writeError;
- (bool)writeSuccess;
- (id)writerInput;
- (id)writingDoneLock;

@end
