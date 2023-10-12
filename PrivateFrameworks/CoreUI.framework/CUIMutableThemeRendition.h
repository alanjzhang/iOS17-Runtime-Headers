/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableThemeRendition : CUIThemeRendition {
    struct CGImage { } * _image;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * _renditionKey;
    CUIRenditionMetrics * _renditionMetrics;
    CUIRenditionSliceInformation * _sliceInformation;
}

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg3;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)metrics;
- (void)setName:(id)arg1;
- (id)sliceInformation;
- (struct CGImage { }*)unslicedImage;

@end
