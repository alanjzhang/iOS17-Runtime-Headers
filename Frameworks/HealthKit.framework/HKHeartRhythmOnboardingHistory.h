/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRhythmOnboardingHistory : NSObject {
    long long  _count;
    NSDictionary * _dataSource;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSDictionary *dataSource;
@property (nonatomic, readonly) long long maxOnboardedVersion;

- (void).cxx_destruct;
- (id)_emptyHistory;
- (id)_filterLessThanOrEqualToVersion:(long long)arg1;
- (id)_filterOnlyLessThanVersion:(long long)arg1;
- (bool)containsOnboardedVersion:(long long)arg1;
- (long long)count;
- (id)dataSource;
- (id)description;
- (id)filteredHistoryByVersion:(long long)arg1 filterType:(long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (long long)maxOnboardedVersion;

@end