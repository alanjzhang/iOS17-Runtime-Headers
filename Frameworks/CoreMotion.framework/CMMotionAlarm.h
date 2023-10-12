/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionAlarm : NSObject <NSSecureCoding> {
    unsigned long long  _alarmId;
    NSString * _bundleId;
    unsigned int  _duration;
    CMMotionAlarmManager * _manager;
    NSString * _name;
    bool  _repeats;
    int  _state;
    unsigned int  _type;
}

@property (nonatomic) unsigned long long alarmId;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, retain) CMMotionAlarmManager *manager;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) bool repeats;
@property (nonatomic) int state;
@property (nonatomic, readonly) unsigned int type;

+ (bool)supportsSecureCoding;

- (bool)acknowledgeWithError:(id*)arg1;
- (unsigned long long)alarmId;
- (id)bundleId;
- (void)copyPropertiesFromAlarm:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(bool)arg4;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(bool)arg4 alarmId:(unsigned long long)arg5 bundleId:(id)arg6 state:(int)arg7;
- (bool)isValid;
- (id)manager;
- (id)name;
- (bool)repeats;
- (void)setAlarmId:(unsigned long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (unsigned int)type;
- (bool)unregisterWithError:(id*)arg1;

@end
