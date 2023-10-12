/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding> {
    CAAnimation * _animation;
    bool  _enabled;
    NSString * _key;
    CALayer * _target;
}

@property (nonatomic, retain) CAAnimation *animation;
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;
@property (getter=isEnabled) bool enabled;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) CALayer *target;

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (id)animation;
- (double)beginTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (double)duration;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)key;
- (void)setAnimation:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
