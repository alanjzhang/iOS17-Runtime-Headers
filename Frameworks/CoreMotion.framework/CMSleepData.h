/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSleepData : NSObject <NSCopying, NSSecureCoding> {
    NSDate * fEventTime;
    long long  fEventType;
    unsigned long long  fRecordId;
    NSUUID * fSessionId;
    NSUUID * fSourceId;
}

@property (nonatomic, readonly) NSDate *eventTime;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSUUID *sourceId;

+ (id)eventTypeName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void)convertToSpringTrackerEntry:(struct CLSpringTrackerEntry { unsigned long long x1; unsigned char x2[16]; unsigned char x3[16]; double x4; long long x5; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTime;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 eventTime:(id)arg4 eventType:(long long)arg5;
- (id)initWithSessionId:(id)arg1;
- (id)initWithSpringEntry:(const struct CLSpringTrackerEntry { unsigned long long x1; unsigned char x2[16]; unsigned char x3[16]; double x4; long long x5; }*)arg1;
- (unsigned long long)recordId;
- (id)sessionId;
- (id)sourceId;

@end
