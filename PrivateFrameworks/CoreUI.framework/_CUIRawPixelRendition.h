/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIRawPixelRendition : CUIThemeRendition {
    struct CGImage {} * _image;
    unsigned int  _nimages;
    int  _pixelFormat;
    NSData * _rawData;
    CUIRenditionMetrics * _renditionMetrics;
    CUIRenditionSliceInformation * _sliceInformation;
    struct CGImage { } * _unslicedImage;
}

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 version:(unsigned int)arg2;
- (void)dealloc;
- (id)imageForSliceIndex:(long long)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 version:(unsigned int)arg3;
- (bool)isScaled;
- (id)maskForSliceIndex:(long long)arg1;
- (id)metrics;
- (int)pixelFormat;
- (id)sliceInformation;
- (struct CGImage { }*)unslicedImage;
- (struct CGSize { double x1; double x2; })unslicedSize;

@end
