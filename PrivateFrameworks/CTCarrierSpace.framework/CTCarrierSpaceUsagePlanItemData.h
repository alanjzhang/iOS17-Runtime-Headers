/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceUsagePlanItemData : NSObject <NSSecureCoding> {
    NSString * _capacity;
    NSString * _maxDataBeforeThrottling;
    NSString * _sharedDataUsed;
    NSString * _sharedPlanIdentifier;
    NSString * _thisDeviceDataUsed;
    long long  _units;
}

@property (nonatomic, retain) NSString *capacity;
@property (nonatomic, retain) NSString *maxDataBeforeThrottling;
@property (nonatomic, retain) NSString *sharedDataUsed;
@property (nonatomic, retain) NSString *sharedPlanIdentifier;
@property (nonatomic, retain) NSString *thisDeviceDataUsed;
@property (nonatomic) long long units;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capacity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maxDataBeforeThrottling;
- (void)setCapacity:(id)arg1;
- (void)setMaxDataBeforeThrottling:(id)arg1;
- (void)setSharedDataUsed:(id)arg1;
- (void)setSharedPlanIdentifier:(id)arg1;
- (void)setThisDeviceDataUsed:(id)arg1;
- (void)setUnits:(long long)arg1;
- (id)sharedDataUsed;
- (id)sharedPlanIdentifier;
- (id)thisDeviceDataUsed;
- (long long)units;

@end
