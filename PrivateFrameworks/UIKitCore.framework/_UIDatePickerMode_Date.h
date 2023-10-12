/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerMode_Date : _UIDatePickerMode {
    double  _dateDayWidth;
    double  _dateMonthWidth;
    double  _dateYearWidth;
    NSString * _dayFormat;
    NSString * _monthFormat;
    NSString * _yearFormat;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (void).cxx_destruct;
- (id)_dateForYearRow:(long long)arg1;
- (bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (void)_shouldReset:(id)arg1;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (long long)displayedCalendarUnits;
- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (void)resetComponentWidths;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;

@end
