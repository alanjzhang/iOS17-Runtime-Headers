/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigAlternateObjC : FigKVCInspectable {
    struct OpaqueFigAlternate { } * _alternate;
    FigAlternateObjCAudioAttributes * _audioAttributes;
    double  _averageBitRate;
    struct OpaqueFigSimpleMutex { } * _mutex;
    double  _peakBitRate;
    FigAlternateObjCVideoAttributes * _videoAttributes;
}

@property (nonatomic, readonly) FigAlternateObjCAudioAttributes *audioAttributes;
@property (nonatomic, readonly) double averageBitRate;
@property (nonatomic, readonly) struct OpaqueFigAlternate { }*figAlternate;
@property (nonatomic, readonly) double peakBitRate;
@property (nonatomic, readonly) FigAlternateObjCVideoAttributes *videoAttributes;

- (id)audioAttributes;
- (double)averageBitRate;
- (void)dealloc;
- (struct OpaqueFigAlternate { }*)figAlternate;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { }*)arg1;
- (double)peakBitRate;
- (id)videoAttributes;

// FigAlternateObjC (Internal)

+ (id)dummy;

@end
