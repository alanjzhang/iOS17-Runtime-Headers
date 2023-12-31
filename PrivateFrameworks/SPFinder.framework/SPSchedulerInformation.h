/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

@interface SPSchedulerInformation : NSObject <NSSecureCoding> {
    long long  _advertisementCount;
    long long  _lowBatteryCount;
    long long  _priorityCount;
}

@property (nonatomic) long long advertisementCount;
@property (nonatomic) long long lowBatteryCount;
@property (nonatomic) long long priorityCount;

+ (bool)supportsSecureCoding;

- (long long)advertisementCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)lowBatteryCount;
- (long long)priorityCount;
- (void)setAdvertisementCount:(long long)arg1;
- (void)setLowBatteryCount:(long long)arg1;
- (void)setPriorityCount:(long long)arg1;

@end
