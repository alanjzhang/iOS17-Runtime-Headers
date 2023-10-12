/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActivitySummary : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _activeEnergyBurned;
    HKQuantity * _activeEnergyBurnedGoal;
    NSDate * _activeHoursGoalDate;
    long long  _activityMoveMode;
    long long  _activitySummaryIndex;
    HKQuantity * _appleExerciseTime;
    HKQuantity * _appleExerciseTimeGoal;
    HKQuantity * _appleMoveTime;
    HKQuantity * _appleMoveTimeGoal;
    HKQuantity * _appleStandHours;
    HKQuantity * _appleStandHoursGoal;
    NSDate * _briskMinutesGoalDate;
    NSDate * _creationDate;
    NSArray * _dailyBriskMinutesStatistics;
    NSArray * _dailyEnergyBurnedStatistics;
    NSArray * _dailyMoveMinuteStatistics;
    NSArray * _dailyMoveTimeStatistics;
    bool  _dataLoading;
    NSDateComponents * _dateComponents;
    HKQuantity * _deepBreathingDuration;
    HKQuantity * _distanceWalkingRunning;
    NSDate * _endDate;
    NSDate * _energyBurnedGoalDate;
    HKQuantity * _flightsClimbed;
    NSDate * _moveTimeGoalDate;
    HKQuantity * _pushCount;
    NSDate * _startDate;
    HKQuantity * _stepCount;
    long long  _wheelchairUse;
}

@property (nonatomic, retain) HKQuantity *activeEnergyBurned;
@property (nonatomic, retain) HKQuantity *activeEnergyBurnedGoal;
@property (getter=_activeEnergyCompletionPercentage, nonatomic, readonly) double activeEnergyCompletionPercentage;
@property (getter=_activeHoursGoalDate, setter=_setActiveHoursGoalDate:, nonatomic, retain) NSDate *activeHoursGoalDate;
@property (nonatomic) long long activityMoveMode;
@property (getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:, nonatomic) long long activitySummaryIndex;
@property (nonatomic, retain) HKQuantity *appleExerciseTime;
@property (nonatomic, retain) HKQuantity *appleExerciseTimeGoal;
@property (nonatomic, retain) HKQuantity *appleMoveMinutes;
@property (nonatomic, retain) HKQuantity *appleMoveMinutesGoal;
@property (nonatomic, retain) HKQuantity *appleMoveTime;
@property (nonatomic, retain) HKQuantity *appleMoveTimeGoal;
@property (nonatomic, retain) HKQuantity *appleStandHours;
@property (nonatomic, retain) HKQuantity *appleStandHoursGoal;
@property (getter=_briskMinutesGoalDate, setter=_setBriskMinutesGoalDate:, nonatomic, retain) NSDate *briskMinutesGoalDate;
@property (getter=_creationDate, setter=_setCreationDate:, nonatomic, retain) NSDate *creationDate;
@property (getter=_dailyBriskMinutesStatistics, setter=_setDailyBriskMinutesStatistics:, nonatomic, retain) NSArray *dailyBriskMinutesStatistics;
@property (getter=_dailyEnergyBurnedStatistics, setter=_setDailyEnergyBurnedStatistics:, nonatomic, retain) NSArray *dailyEnergyBurnedStatistics;
@property (getter=_dailyMoveMinutesStatistics, setter=_setDailyMoveMinutesStatistics:, nonatomic, retain) NSArray *dailyMoveMinuteStatistics;
@property (getter=_dailyMoveTimeStatistics, setter=_setDailyMoveTimeStatistics:, nonatomic, retain) NSArray *dailyMoveTimeStatistics;
@property (getter=_isDataLoading, setter=_setDataLoading:, nonatomic) bool dataLoading;
@property (getter=_deepBreathingDuration, setter=_setDeepBreathingDuration:, nonatomic, retain) HKQuantity *deepBreathingDuration;
@property (nonatomic, retain) HKQuantity *distanceWalkingRunning;
@property (getter=_endDate, setter=_setEndDate:, nonatomic, retain) NSDate *endDate;
@property (getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:, nonatomic, retain) NSDate *energyBurnedGoalDate;
@property (getter=_exerciseTimeCompletionPercentage, nonatomic, readonly) double exerciseTimeCompletionPercentage;
@property (nonatomic, retain) HKQuantity *exerciseTimeGoal;
@property (getter=_flightsClimbed, setter=_setFlightsClimbed:, nonatomic, retain) HKQuantity *flightsClimbed;
@property (getter=_gregorianDateComponents, setter=_setGregorianDateComponents:, nonatomic, copy) NSDateComponents *gregorianDateComponents;
@property (getter=_hasAppleMoveMinutesGoal, nonatomic, readonly) bool hasAppleMoveMinutesGoal;
@property (getter=_hasEnergyBurnedGoal, nonatomic, readonly) bool hasEnergyBurnedGoal;
@property (getter=_hasMoveGoal, nonatomic, readonly) bool hasMoveGoal;
@property (getter=_isStandalonePhoneSummary, nonatomic, readonly) bool isStandalonePhoneSummary;
@property (getter=_moveMinutesCompletionPercentage, nonatomic, readonly) double moveMinutesCompletionPercentage;
@property (getter=_moveTimeGoalDate, setter=_setMoveTimeGoalDate:, nonatomic, retain) NSDate *moveTimeGoalDate;
@property (getter=_pushCount, setter=_setPushCount:, nonatomic, retain) HKQuantity *pushCount;
@property (getter=_standHoursCompletionPercentage, nonatomic, readonly) double standHoursCompletionPercentage;
@property (nonatomic, retain) HKQuantity *standHoursGoal;
@property (getter=_startDate, setter=_setStartDate:, nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) HKQuantity *stepCount;
@property (getter=_wheelchairUse, setter=_setWheelchairUse:, nonatomic) long long wheelchairUse;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_mostRecentlyCreatedCacheAmongCaches:(id)arg1;
+ (id)_mostSignificantCacheAmongCaches:(id)arg1;
+ (bool)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id*)arg2;
+ (bool)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_activeEnergyCompletionPercentage;
- (id)_activeHoursGoalDate;
- (long long)_activityMoveMode;
- (long long)_activitySummaryIndex;
- (bool)_allFieldsAreEqual:(id)arg1;
- (id)_briskMinutesGoalDate;
- (id)_creationDate;
- (id)_dailyBriskMinutesStatistics;
- (id)_dailyEnergyBurnedStatistics;
- (id)_dailyMoveMinutesStatistics;
- (id)_dailyMoveTimeStatistics;
- (id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3;
- (id)_deepBreathingDuration;
- (void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4;
- (id)_endDate;
- (id)_energyBurnedGoalDate;
- (double)_exerciseTimeCompletionPercentage;
- (id)_flightsClimbed;
- (id)_gregorianDateComponents;
- (bool)_hasAppleMoveMinutesGoal;
- (bool)_hasAppleMoveTimeGoal;
- (bool)_hasEnergyBurnedGoal;
- (bool)_hasExerciseGoal;
- (bool)_hasMoveGoal;
- (bool)_hasStandHoursGoal;
- (id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(bool)arg2;
- (bool)_isDataLoading;
- (bool)_isStandalonePhoneSummary;
- (double)_moveMinutesCompletionPercentage;
- (id)_moveTimeGoalDate;
- (double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3;
- (id)_pushCount;
- (void)_setActiveHoursGoalDate:(id)arg1;
- (void)_setActivityMoveMode:(long long)arg1;
- (void)_setActivitySummaryIndex:(long long)arg1;
- (void)_setBriskMinutesGoalDate:(id)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setDailyBriskMinutesStatistics:(id)arg1;
- (void)_setDailyEnergyBurnedStatistics:(id)arg1;
- (void)_setDailyMoveMinutesStatistics:(id)arg1;
- (void)_setDailyMoveTimeStatistics:(id)arg1;
- (void)_setDataLoading:(bool)arg1;
- (void)_setDeepBreathingDuration:(id)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setEnergyBurnedGoalDate:(id)arg1;
- (void)_setFlightsClimbed:(id)arg1;
- (void)_setGregorianDateComponents:(id)arg1;
- (void)_setMoveTimeGoalDate:(id)arg1;
- (void)_setPushCount:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setWheelchairUse:(long long)arg1;
- (double)_standHoursCompletionPercentage;
- (id)_startDate;
- (bool)_useHourlyGoalComparison;
- (void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3;
- (long long)_wheelchairUse;
- (id)activeEnergyBurned;
- (id)activeEnergyBurnedGoal;
- (long long)activityMoveMode;
- (id)appleExerciseTime;
- (id)appleExerciseTimeGoal;
- (id)appleMoveMinutes;
- (id)appleMoveMinutesGoal;
- (id)appleMoveTime;
- (id)appleMoveTimeGoal;
- (id)appleStandHours;
- (id)appleStandHoursGoal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsForCalendar:(id)arg1;
- (id)description;
- (id)distanceWalkingRunning;
- (void)encodeWithCoder:(id)arg1;
- (id)exerciseTimeGoal;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActiveEnergyBurned:(id)arg1;
- (void)setActiveEnergyBurnedGoal:(id)arg1;
- (void)setActivityMoveMode:(long long)arg1;
- (void)setAppleExerciseTime:(id)arg1;
- (void)setAppleExerciseTimeGoal:(id)arg1;
- (void)setAppleMoveMinutes:(id)arg1;
- (void)setAppleMoveMinutesGoal:(id)arg1;
- (void)setAppleMoveTime:(id)arg1;
- (void)setAppleMoveTimeGoal:(id)arg1;
- (void)setAppleStandHours:(id)arg1;
- (void)setAppleStandHoursGoal:(id)arg1;
- (void)setDistanceWalkingRunning:(id)arg1;
- (void)setExerciseTimeGoal:(id)arg1;
- (void)setStandHoursGoal:(id)arg1;
- (void)setStepCount:(id)arg1;
- (id)standHoursGoal;
- (id)stepCount;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/HealthKit.axbundle/HealthKit

- (id)accessibilityLabel;

// HKActivitySummary (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
