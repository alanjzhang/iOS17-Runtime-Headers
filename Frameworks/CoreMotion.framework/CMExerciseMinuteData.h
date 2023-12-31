/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMExerciseMinuteData : NSObject <NSCopying, NSSecureCoding> {
    long long  fRecordId;
    NSUUID * fSourceId;
    double  fStartDate;
}

@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

// CMExerciseMinuteData (null)

+ (id)maxExerciseMinuteDataEntries;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 sourceId:(id)arg3;
- (long long)recordId;
- (id)sourceId;
- (id)startDate;

@end
