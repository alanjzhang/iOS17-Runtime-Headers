/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVVideoCompositionRenderContext : NSObject {
    AVVideoCompositionRenderContextInternal * _internal;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } edgeWidths;
@property (nonatomic, readonly) bool highQualityRendering;
@property (nonatomic, readonly) struct { long long x1; long long x2; } pixelAspectRatio;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } renderTransform;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (struct { double x1; double x2; double x3; double x4; })edgeWidths;
- (bool)highQualityRendering;
- (struct __CVBuffer { }*)newPixelBuffer;
- (struct { long long x1; long long x2; })pixelAspectRatio;
- (float)renderScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })renderTransform;
- (struct CGSize { double x1; double x2; })size;
- (id)videoComposition;

// AVVideoCompositionRenderContext (Internal)

+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;

- (bool)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1;
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor { }*)arg1 clientRequiredPixelBufferAttributes:(id)arg2 videoComposition:(id)arg3 pixelBufferPool:(struct __CVPixelBufferPool { }*)arg4;
- (bool)isBufferYCbCr:(struct __CVBuffer { }*)arg1;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;

@end
