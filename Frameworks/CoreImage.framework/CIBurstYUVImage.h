/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstYUVImage : NSObject {
    char * Cbuffer;
    char * Ybuffer;
    int  bytesPerRow;
    struct __CFData { } * dataPtr;
    int  height;
    struct __IOSurface { } * ioSurf;
    struct __CVBuffer { } * pixelBuffer;
    int  width;
}

@property char *Cbuffer;
@property char *Ybuffer;
@property int bytesPerRow;
@property int height;
@property int width;

- (char *)Cbuffer;
- (char *)Ybuffer;
- (int)bytesPerRow;
- (void)convertRGBAToYUV420:(char *)arg1 rgbaBytesPerRow:(int)arg2;
- (void)dealloc;
- (int)height;
- (id)initWithCGImage:(struct CGImage { }*)arg1 maxDimension:(int)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 maxDimension:(int)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setBytesPerRow:(int)arg1;
- (void)setCbuffer:(char *)arg1;
- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (void)setYbuffer:(char *)arg1;
- (int)width;

@end
