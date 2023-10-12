/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    double  opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 opacity:(double)arg2;
- (bool)isOpacityStop;
- (double)opacity;
- (double)opacityLocation;

@end
