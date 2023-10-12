/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceUsagePlanMetrics : NSObject <NSSecureCoding> {
    bool  _currentUsedPlan;
    CTCarrierSpaceUsagePlanItemData * _dataUsage;
    NSDate * _lastUpdatedAt;
    CTCarrierSpaceUsagePlanItemMessages * _messages;
    long long  _planCategory;
    NSString * _planLabel;
    NSString * _remainingBalance;
    bool  _throttled;
    CTCarrierSpaceUsagePlanItemVoice * _voice;
}

@property (nonatomic) bool currentUsedPlan;
@property (nonatomic, retain) CTCarrierSpaceUsagePlanItemData *dataUsage;
@property (nonatomic, retain) NSDate *lastUpdatedAt;
@property (nonatomic, retain) CTCarrierSpaceUsagePlanItemMessages *messages;
@property (nonatomic) long long planCategory;
@property (nonatomic, retain) NSString *planLabel;
@property (nonatomic, retain) NSString *remainingBalance;
@property (nonatomic) bool throttled;
@property (nonatomic, retain) CTCarrierSpaceUsagePlanItemVoice *voice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)currentUsedPlan;
- (id)dataUsage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedAt;
- (id)messages;
- (long long)planCategory;
- (id)planLabel;
- (id)remainingBalance;
- (void)setCurrentUsedPlan:(bool)arg1;
- (void)setDataUsage:(id)arg1;
- (void)setLastUpdatedAt:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)setPlanCategory:(long long)arg1;
- (void)setPlanLabel:(id)arg1;
- (void)setRemainingBalance:(id)arg1;
- (void)setThrottled:(bool)arg1;
- (void)setVoice:(id)arg1;
- (bool)throttled;
- (id)voice;

@end
