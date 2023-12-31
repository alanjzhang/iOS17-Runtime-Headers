/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding> {
    NSDateComponents * _dateComponents;
}

@property (nonatomic, copy) NSDateComponents *dateComponents;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)dateComponents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponents:(id)arg1;
- (id)initWithObjectID:(id)arg1 dateComponents:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTemporal;
- (void)setDateComponents:(id)arg1;

@end
