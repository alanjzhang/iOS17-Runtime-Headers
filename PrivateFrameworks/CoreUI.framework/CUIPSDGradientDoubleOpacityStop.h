/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {
    double  leadOutOpacity;
}

+ (id)doubleOpacityStopWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3;
- (bool)isDoubleStop;
- (double)leadInOpacity;
- (double)leadOutOpacity;

@end
