/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPEdgeDetector : NSObject {
    float * _edgeMap;
    struct DSPSplitComplex { 
        float *realp; 
        float *imagp; 
    }  _gradient;
    float * _gradientMag;
    float * _gradientX;
    float * _gradientY;
    unsigned long long  _height;
    int  _heightExt;
    unsigned long long  _heightPadded;
    float * _image;
    float * _imageFiltered;
    float * _nonMaxSuppressed;
    unsigned long long  _width;
    int  _widthExt;
    unsigned long long  _widthPadded;
}

- (void)dealloc;
- (int)detectWithSigma:(float)arg1 lowThreshold:(float)arg2 highThreshold:(float)arg3;
- (int)gradientEstimation:(float*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 gradient:(struct DSPSplitComplex { float *x1; float *x2; })arg4 gradientMag:(float*)arg5;
- (id)initWithImage:(float*)arg1 edgeMap:(float*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 widthExtension:(int)arg5 heightExtension:(int)arg6;
- (bool)isInImage:(int)arg1 width:(int)arg2 height:(int)arg3;
- (int)noiseReduction:(float*)arg1 sigma:(float)arg2 imageFiltered:(float*)arg3;

@end
