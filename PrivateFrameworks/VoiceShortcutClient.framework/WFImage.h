/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFImage : NSObject <NSCopying, NSSecureCoding> {
    struct CGImage { } * _CGImage;
    NSImage * _NSImage;
    UIImage * _UIImage;
    NSURL * _URL;
    bool  _allowsAnimated;
    NSBundle * _bundle;
    NSData * _data;
    unsigned long long  _displayStyle;
    id  _internalCGImage;
    id  _internalImageSource;
    NSString * _name;
    unsigned int  _orientation;
    unsigned long long  _renderingMode;
    long long  _representationType;
    double  _scale;
    WFImageSymbolConfiguration * _symbolConfiguration;
    NSString * _symbolName;
    WFColor * _tintColor;
    NSImage * _untintedNSImage;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } CGImageSize;
@property (nonatomic, readonly) NSImage *NSImage;
@property (nonatomic, readonly) NSData *PNGRepresentation;
@property (nonatomic, readonly) UIImage *UIImage;
@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) bool allowsAnimated;
@property (nonatomic, readonly, copy) NSBundle *bundle;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, readonly) bool hasValidImage;
@property (nonatomic, readonly) struct CGImage { }*internalCGImage;
@property (nonatomic, readonly) struct CGImageSource { }*internalImageSource;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) UIImage *platformImage;
@property (nonatomic, readonly) unsigned long long renderingMode;
@property (nonatomic, readonly) long long representationType;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPoints;
@property (nonatomic, readonly) WFImageSymbolConfiguration *symbolConfiguration;
@property (nonatomic, readonly, copy) NSString *symbolName;
@property (nonatomic, copy) WFColor *tintColor;
@property (nonatomic, readonly) NSImage *untintedNSImage;
@property (nonatomic, readonly) UIImage *untintedPlatformImage;
@property (nonatomic, readonly) UIImage *untintedUIImage;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct CGSize { double x1; double x2; })CGImageSize;
- (id)NSImage;
- (id)UIImage;
- (id)URL;
- (bool)allowsAnimated;
- (id)bundle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransformForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (unsigned long long)displayStyle;
- (void)drawInContext:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 blendMode:(int)arg3 alpha:(double)arg4;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidImage;
- (unsigned long long)hash;
- (id)imageByTintingBitmapWithTintColor:(id)arg1;
- (id)imageWithDisplayStyle:(unsigned long long)arg1;
- (id)imageWithRenderingMode:(unsigned long long)arg1;
- (id)imageWithTintColor:(id)arg1;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(unsigned int)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(unsigned int)arg3 renderingMode:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2 allowAnimated:(bool)arg3;
- (id)initWithName:(id)arg1 bundle:(id)arg2 scale:(double)arg3;
- (id)initWithPlatformImage:(id)arg1;
- (id)initWithPlatformImage:(id)arg1 scale:(double)arg2;
- (id)initWithRepresentationType:(long long)arg1;
- (id)initWithSymbolName:(id)arg1 configuration:(id)arg2 renderingMode:(unsigned long long)arg3;
- (struct CGImage { }*)internalCGImage;
- (struct CGImageSource { }*)internalImageSource;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned int)orientation;
- (id)platformImage;
- (unsigned long long)renderingMode;
- (long long)representationType;
- (double)scale;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (struct CGSize { double x1; double x2; })sizeInPoints;
- (id)symbolConfiguration;
- (id)symbolName;
- (id)tintColor;
- (id)untintedNSImage;
- (id)untintedPlatformImage;
- (id)untintedUIImage;

// WFImage (Convenience)

+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(unsigned int)arg3;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1 scale:(double)arg2 allowAnimated:(bool)arg3;
+ (id)imageWithDeviceScreenScaleImageData:(id)arg1;

- (void)drawInContext:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

// WFImage (Glyphs)

+ (id)glyphNamed:(id)arg1 pointSize:(double)arg2;
+ (id)glyphNamed:(id)arg1 pointSize:(double)arg2 inCatalogs:(id)arg3;
+ (id)glyphNamed:(id)arg1 pointSize:(double)arg2 symbolSize:(unsigned long long)arg3;
+ (id)glyphNamed:(id)arg1 pointSize:(double)arg2 symbolSize:(unsigned long long)arg3 scaleFactor:(double)arg4;
+ (id)glyphNamed:(id)arg1 pointSize:(double)arg2 symbolSize:(unsigned long long)arg3 scaleFactor:(double)arg4 rightToLeft:(bool)arg5 appearanceName:(id)arg6;
+ (id)glyphNamed:(id)arg1 pointSize:(double)arg2 symbolSize:(unsigned long long)arg3 symbolWeight:(long long)arg4 scaleFactor:(double)arg5 rightToLeft:(bool)arg6 appearanceName:(id)arg7 inCatalogs:(id)arg8;
+ (id)glyphNamed:(id)arg1 pointSize:(double)arg2 symbolWeight:(long long)arg3 scaleFactor:(double)arg4 inCatalogs:(id)arg5;

// WFImage (Icons)

+ (id)applicationIconImageForBundleIdentifier:(id)arg1;
+ (id)applicationIconImageForBundleIdentifier:(id)arg1 format:(unsigned long long)arg2;
+ (id)applicationIconImageForCalendarDate:(id)arg1 format:(unsigned long long)arg2;
+ (id)documentIconImageForFileType:(id)arg1;

- (id)applicationIconImageWithFormat:(unsigned long long)arg1;

// WFImage (Named)

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 scale:(double)arg3;

// WFImage (Representations)

- (id)PNGRepresentation;
- (struct CGImage { }*)createNonRotatedCGImageRepresentation;

// WFImage (Resizing)

- (id)resizedImageWithSizeInPoints:(struct CGSize { double x1; double x2; })arg1;
- (id)resizedImageWithSizeInPoints:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

// WFImage (Symbols)

+ (id)systemImageNamed:(id)arg1 configuration:(id)arg2 renderingMode:(unsigned long long)arg3;

// WFImage (Tinting)

- (id)tintedImageWithColor:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

// WFImage (IsScreenshot)

+ (bool)imageSizeIndicatesScreenshot:(struct CGSize { double x1; double x2; })arg1;

- (bool)isScreenshot;

@end
