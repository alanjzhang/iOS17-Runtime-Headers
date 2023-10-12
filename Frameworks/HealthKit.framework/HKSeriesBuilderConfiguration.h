/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration {
    HKDevice * _device;
    NSUUID * _workoutBuilderID;
}

@property (nonatomic, readonly, copy) HKDevice *device;
@property (nonatomic, readonly, copy) NSUUID *workoutBuilderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2;
- (id)workoutBuilderID;

@end