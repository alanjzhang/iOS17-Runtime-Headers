/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CSITextureHelper : NSObject {
    struct _csibitmap { unsigned int x1; union { unsigned int x_2_1_1; struct _csibitmapflags { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 30; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; } * bmp;
    struct CGColorSpace { } * colorspaceHint;
    unsigned int  height;
    unsigned int  imageBytes;
    int  pixelFormat;
    unsigned long long  sourceRowbytes;
    unsigned int  width;
}

- (void)dealloc;

@end