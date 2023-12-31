/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICalendarViewDataSourceController : NSObject {
    NSCalendar * _calendar;
    UICollectionViewDiffableDataSource * _dataSource;
    _UIDatePickerCalendarDaySet * _loadedDaySet;
    _UIDatePickerCalendarMonthSet * _loadedMonthSet;
}

- (void).cxx_destruct;
- (void)_reloadDataSourceWithScrollPosition:(id)arg1;
- (long long)cleanupDataSourceWithScrollPositionIfNecessary:(id)arg1;
- (id)initWithCalendar:(id)arg1 dataSource:(id)arg2;
- (long long)prepareDataSourceWithScrollPositionIfNecessary:(id)arg1;
- (void)reloadDataSourceAroundMonth:(id)arg1;

// _UICalendarViewDataSourceController (Testing)

- (id)_loadedDays;
- (id)_loadedMonths;

@end
