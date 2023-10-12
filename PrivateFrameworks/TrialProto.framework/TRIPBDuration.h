/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRIPBDuration : TRIPBMessage

@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;
@property (nonatomic) double timeInterval;
@property (nonatomic) double timeIntervalSince1970;

+ (id)descriptor;

// TRIPBDuration (GBPWellKnownTypes)

- (id)initWithTimeInterval:(double)arg1;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (double)timeInterval;
- (double)timeIntervalSince1970;

@end
