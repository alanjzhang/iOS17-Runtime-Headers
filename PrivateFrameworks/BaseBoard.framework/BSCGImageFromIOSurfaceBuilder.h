/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    struct CGImage { } * _image;
    bool  _isDirty;
    bool  _isOpaque;
    IOSurface * _surface;
}

@property (getter=isOpaque, nonatomic, readonly) bool opaque;

- (void).cxx_destruct;
- (struct CGImage { }*)buildCGImage;
- (void)dealloc;
- (bool)isOpaque;
- (id)setOpaque:(bool)arg1;

@end
