/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetWriterHelper : NSObject {
    AVAssetWriterConfigurationState * _configurationState;
    AVWeakReference * _weakReferenceToAssetWriter;
}

@property (nonatomic, readonly) NSArray *availableMediaTypes;
@property (nonatomic, readonly) AVAssetWriterConfigurationState *configurationState;
@property (getter=_isDefunct, nonatomic, readonly) bool defunct;
@property <AVAssetWriterDelegate> *delegate;
@property (nonatomic, copy) NSURL *directoryForTemporaryFiles;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } initialMovieFragmentInterval;
@property (nonatomic) long long initialMovieFragmentSequenceNumber;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } initialSegmentStartTime;
@property (nonatomic, readonly) NSArray *inputGroups;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) AVMediaFileType *mediaFileType;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic) int movieTimeScale;
@property (nonatomic, copy) NSString *outputFileTypeProfile;
@property (nonatomic, readonly) NSURL *outputURL;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } overallDurationHint;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredOutputSegmentInterval;
@property (nonatomic) float preferredRate;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) bool producesCombinableFragments;
@property (nonatomic) bool requiresInProcessOperation;
@property (nonatomic) bool shouldOptimizeForNetworkUse;
@property (nonatomic) long long singlePassFileSize;
@property (nonatomic) long long singlePassMediaDataSize;
@property (nonatomic, readonly) long long status;
@property (nonatomic) bool usesVirtualCaptureCard;
@property (getter=isVirtualCaptureCardSupported, nonatomic, readonly) bool virtualCaptureCardSupported;
@property (retain) AVWeakReference *weakReferenceToAssetWriter;

- (bool)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription { }*)arg3 exceptionReason:(id*)arg4;
- (bool)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_isDefunct;
- (bool)_transitionToClientInitiatedTerminalStatus:(long long)arg1;
- (void)addInput:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (id)availableMediaTypes;
- (bool)canAddInput:(id)arg1;
- (bool)canAddInputGroup:(id)arg1;
- (bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (void)cancelWriting;
- (id)configurationState;
- (void)dealloc;
- (id)delegate;
- (id)directoryForTemporaryFiles;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)error;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg1;
- (void)flush;
- (void)flushSegment;
- (id)init;
- (id)initWithConfigurationState:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })initialMovieFragmentInterval;
- (long long)initialMovieFragmentSequenceNumber;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })initialSegmentStartTime;
- (id)inputGroups;
- (id)inputs;
- (bool)isVirtualCaptureCardSupported;
- (id)mediaFileType;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (id)outputFileTypeProfile;
- (id)outputURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredOutputSegmentInterval;
- (float)preferredRate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (bool)producesCombinableFragments;
- (bool)requiresInProcessOperation;
- (void)setDelegate:(id)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setInitialMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInitialMovieFragmentSequenceNumber:(long long)arg1;
- (void)setInitialSegmentStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setOutputFileTypeProfile:(id)arg1;
- (void)setOverallDurationHint:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredOutputSegmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setProducesCombinableFragments:(bool)arg1;
- (void)setRequiresInProcessOperation:(bool)arg1;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (void)setSinglePassFileSize:(long long)arg1;
- (void)setSinglePassMediaDataSize:(long long)arg1;
- (void)setUsesVirtualCaptureCard:(bool)arg1;
- (void)setWeakReferenceToAssetWriter:(id)arg1;
- (bool)shouldOptimizeForNetworkUse;
- (long long)singlePassFileSize;
- (long long)singlePassMediaDataSize;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)startWriting;
- (long long)status;
- (void)transitionToFailedStatusWithError:(id)arg1;
- (bool)usesVirtualCaptureCard;
- (id)weakReferenceToAssetWriter;

@end
