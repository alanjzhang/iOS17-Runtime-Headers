/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTDateFormatting : NSObject {
    NSString * _amString;
    NSDateFormatter * _dateOnlyFormatter;
    NSString * _pmString;
    bool  _timeDesignatorAppearsBeforeTime;
    NSDateFormatter * _timeOnlyFormatter;
    bool  _use24HourTime;
}

@property (nonatomic, readonly) NSString *amString;
@property (nonatomic, readonly) NSString *pmString;
@property (nonatomic, readonly) bool timeDesignatorAppearsBeforeTime;
@property (nonatomic, readonly) bool use24HourTime;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearLocaleDependentState;
- (id)_dateOnlyFormatter;
- (void)_loadLocaleInfo;
- (void)_reloadLocaleInfo;
- (id)_timeOnlyFormatter;
- (id)amString;
- (void)dealloc;
- (id)init;
- (id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id*)arg3;
- (id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id*)arg2;
- (id)pmString;
- (bool)timeDesignatorAppearsBeforeTime;
- (id)timeDesignatorForDate:(id)arg1;
- (id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2;
- (bool)use24HourTime;

@end
