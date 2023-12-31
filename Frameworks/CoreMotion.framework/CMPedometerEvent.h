/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerEvent : NSObject <NSCopying, NSSecureCoding> {
    NSDate * fDate;
    long long  fType;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long type;

+ (id)eventStringFromType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDate:(id)arg1 type:(long long)arg2;
- (long long)type;

@end
