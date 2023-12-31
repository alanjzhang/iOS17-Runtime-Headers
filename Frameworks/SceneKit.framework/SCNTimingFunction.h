/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTimingFunction : NSObject <NSSecureCoding> {
    struct __C3DTimingFunction { } * _timingFunction;
}

+ (id)functionWithCAMediaTimingFunction:(id)arg1;
+ (id)functionWithTimingMode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (struct __C3DTimingFunction { }*)c3dTimingFunction;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction { }*)arg1;

@end
