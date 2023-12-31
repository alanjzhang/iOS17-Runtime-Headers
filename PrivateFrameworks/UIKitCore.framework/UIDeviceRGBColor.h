/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDeviceRGBColor : UIColor {
    _Atomic struct CGColor {} * _cachedColor;
    double  alphaComponent;
    double  blueComponent;
    double  greenComponent;
    double  redComponent;
}

- (struct CGColor { }*)CGColor;
- (struct CGColor { }*)_createCGColorWithAlpha:(double)arg1;
- (bool)_isDeepColor;
- (double)alphaComponent;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (unsigned long long)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (bool)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
