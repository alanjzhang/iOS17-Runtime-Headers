/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWakeGestureEvent : CMLogItem {
    int  _orientation;
    long long  _state;
    long long  _type;
}

@property (nonatomic, readonly) int orientation;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 type:(long long)arg2 orientation:(int)arg3 timestamp:(double)arg4;
- (int)orientation;
- (long long)state;
- (long long)type;

@end
