/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKCalendarModel : NSObject <CUIKEventLoaderDelegate, CUIKPasteboardManagerCalendarProvider, CUIKPasteboardManagerEventStoreProvider> {
    bool  _autoStartNotificationMonitor;
    long long  _cachedFakeTodayIndex;
    NSCalendar * _calendar;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSourceLock;
    NSArray * _delegateSources;
    bool  _disableFocusFiltering;
    NSMutableDictionary * _displayableAccountErrorCounts;
    CUIKEventLoader * _eventLoader;
    EKEventStore * _eventStore;
    NSLock * _filterLock;
    unsigned long long  _firstVisibleSecond;
    unsigned long long  _focusFilterMode;
    bool  _hasLoadedUnselectedCalendarsForFocusMode;
    long long  _initialAccountSyncCount;
    long long  _invitationBearingStoresExist;
    bool  _modelLocked;
    _EKNotificationMonitor * _notificationMonitor;
    bool  _notificationMonitorSetUp;
    <CUIKOccurrenceCacheDataSourceProtocol> * _occurrenceCacheDataSource;
    <CUIKOccurrenceCacheDataSourceProtocol> * _occurrenceCacheFilteredDataSource;
    CUIKPasteboardManager * _pasteboardManager;
    CUIKCalendarModelSceneState * _persistedSceneState;
    long long  _readWriteCalendarCount;
    NSString * _sceneIdentifier;
    NSString * _searchString;
    NSSet * _selectedCalendars;
    EKCalendarDate * _selectedDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _selectedDateLock;
    NSMutableArray * _selectedOccurrences;
    NSArray * _sortedEnabledDelegates;
    EKSource * _sourceForSelectedIdentity;
    bool  _suspendSelectedDateChanges;
    EKCalendarDate * _suspendedSelectedDate;
    CUIKUndoManager * _undoManager;
    NSSet * _unselectedCalendarsForFocusMode;
    NSArray * _visibleCalendars;
}

@property (nonatomic, readonly) long long accountsInInitialSyncCount;
@property (nonatomic) bool allowEventLocationPrediction;
@property (nonatomic) bool autoStartNotificationMonitor;
@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, readonly) bool containsDelegateSources;
@property (nonatomic, readonly) bool currentlyLocked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableFocusFiltering;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic) unsigned long long firstVisibleSecond;
@property (nonatomic) unsigned long long focusFilterMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CUIKPasteboardManager *pasteboardManager;
@property (nonatomic, readonly) long long readWriteCalendarCount;
@property (nonatomic, copy) NSString *sceneIdentifier;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSSet *selectedCalendars;
@property (nonatomic, readonly) NSSet *selectedCalendarsIgnoringFocus;
@property (nonatomic, copy) EKCalendarDate *selectedDate;
@property (nonatomic, readonly) EKCalendarDate *selectedDay;
@property (nonatomic, retain) EKEvent *selectedOccurrence;
@property (nonatomic, copy) NSArray *selectedOccurrences;
@property (nonatomic) bool showDayAsList;
@property (nonatomic) bool showMonthAsDivided;
@property (nonatomic, retain) NSArray *sortedEnabledDelegates;
@property (nonatomic, readonly, retain) EKSource *sourceForSelectedIdentity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CUIKUndoManager *undoManager;
@property (nonatomic, copy) NSSet *unselectedCalendars;
@property (nonatomic, readonly) NSSet *unselectedCalendarsForFocusMode;
@property (nonatomic, readonly) NSSet *unselectedCalendarsIgnoringFocus;

+ (unsigned long long)errorForSource:(id)arg1;
+ (unsigned long long)errorForSubscribedCalendarChildrenOfSource:(id)arg1;
+ (id)sortedEnabledDelegateSourcesFromStore:(id)arg1;
+ (void)temporarilyIgnoreInsecureConnectionErrorsForCalendars:(id)arg1;
+ (void)temporarilyIgnoreInvalidCredentialsErrorForSource:(id)arg1;

- (void).cxx_destruct;
- (id)_calendarsEnabledInFocus:(id)arg1;
- (id)_calendarsForCurrentIdentityFromCalendars:(id)arg1 lock:(bool)arg2;
- (void)_checkSources;
- (void)_createOccurrenceCacheDataSources;
- (id)_dataSourceUsingFilter:(bool)arg1;
- (void)_deselectOccurrence:(id)arg1 notify:(bool)arg2;
- (bool)_eventBelongsToCurrentIdentity:(id)arg1;
- (unsigned long long)_eventNotificationCountForCurrentIdentityIgnoringFilter:(bool)arg1;
- (id)_eventNotificationsForCurrentIdentityIgnoringFilter:(bool)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)_executeBlockWithOccurrenceCacheDataSources:(id /* block */)arg1;
- (void)_finishedFirstLoad;
- (void)_focusModeConfigurationChanged:(id)arg1;
- (void)_ignoredErrorsChanged;
- (void)_invalidateCachedOccurrences;
- (void)_invalidateOccurrenceCacheDataSources;
- (void)_loadVisibleCalendarsIfNeeded;
- (void)_localeChanged:(id)arg1;
- (void)_notificationBlacklisted;
- (id)_notificationMonitor;
- (void)_notificationsExpired:(id)arg1;
- (void)_notificationsLoaded:(id)arg1;
- (void)_occurrenceCacheChanged;
- (void)_occurrenceCacheChangedNotificationHandler;
- (void)_performCommonInitializationWithPasteboardManager:(id)arg1;
- (void)_processReloadForCacheOnly:(bool)arg1 includingCalendars:(bool)arg2 checkCalendarsValid:(bool)arg3 checkSources:(bool)arg4;
- (void)_recreateOccurrenceCacheDataSources;
- (void)_reloadIfTodayDetermined;
- (void)_sceneEnteredBackground:(id)arg1;
- (void)_sceneEnteredForeground:(id)arg1;
- (void)_searchResultsAvailable:(id)arg1;
- (void)_selectOccurrence:(id)arg1 notify:(bool)arg2;
- (void)_setFocusFilterMode:(unsigned long long)arg1 force:(bool)arg2;
- (bool)_setSelectedCalendars:(id)arg1;
- (void)_setSelectedOccurrences:(id)arg1 forceChange:(bool)arg2;
- (void)_setupUndoManager;
- (bool)_shouldShowNotification:(id)arg1;
- (void)_significantTimeChange;
- (void)_systemWake;
- (void)_timeZoneChanged:(id)arg1;
- (double)_tomorrow;
- (void)_tzSupportTodayRolledOver;
- (id)_unselectedCalendarsForFocusMode;
- (long long)accountsInInitialSyncCount;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (void)addRespondedNotificationObjectID:(id)arg1;
- (id)allCalendarsForCurrentIdentity;
- (id)allEventNotificationReferences;
- (unsigned long long)allEventNotificationsCount;
- (bool)allowEventLocationPrediction;
- (bool)autoStartNotificationMonitor;
- (long long)cachedFakeTodayIndex;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(bool)arg2;
- (bool)cachedOccurrencesAreLoaded;
- (id)cachedSpecialDayDataForSection:(long long)arg1;
- (id)calendar;
- (void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 generation:(int)arg4 wasEmptyLoad:(bool)arg5;
- (id)calendarsForCurrentIdentityFromCalendars:(id)arg1;
- (void)checkLocationAuthorizationAndAllowEventLocationPrediction;
- (id)closestOccurrenceToTomorrowForEventObjectID:(id)arg1;
- (id)closestOccurrenceToTomorrowForEventUID:(int)arg1;
- (bool)containsDelegateSources;
- (long long)countAccountsInInitialSync;
- (bool)countSourcesWithErrors;
- (bool)currentlyLocked;
- (id)dateForCachedOccurrencesInSection:(long long)arg1;
- (id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(bool)arg2;
- (void)dealloc;
- (id)defaultCalendarForNewEvents;
- (void)deselectOccurrence:(id)arg1;
- (bool)disableFocusFiltering;
- (long long)displayableAccountErrorsForSource:(id)arg1;
- (void)ensureCalendarVisibleWithId:(id)arg1;
- (id)eventNotificationReferencesForCurrentIdentity;
- (id)eventNotificationReferencesForCurrentIdentityIgnoringFilter;
- (id)eventNotificationReferencesForIdentity:(id)arg1;
- (id)eventNotificationReferencesForIdentity:(id)arg1 ignoringFilter:(bool)arg2;
- (unsigned long long)eventNotificationsForCurrentIdentityCount;
- (unsigned long long)eventNotificationsForCurrentIdentityIgnoringFilterCount;
- (id)eventStore;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(bool)arg2;
- (void)fetchDaysStartingFromSection:(long long)arg1 sectionsToLoadInBothDirections:(long long)arg2;
- (unsigned long long)firstVisibleSecond;
- (unsigned long long)focusFilterMode;
- (id)indexPathsForOccurrence:(id)arg1 usingFilter:(bool)arg2;
- (id)initWithDataPath:(id)arg1 pasteboardManager:(id)arg2;
- (id)initWithEventStore:(id)arg1 pasteboardManager:(id)arg2;
- (id)initWithPasteboardManager:(id)arg1;
- (bool)invitationBearingStoresExistForEvents;
- (bool)isCalendarVisibleWithID:(id)arg1;
- (void)locationPrecisionDeterminedNotification:(id)arg1;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1;
- (long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(bool)arg2;
- (long long)numberOfDaysWithCachedOccurrences;
- (long long)numberOfDaysWithCachedOccurrencesUsingFilter:(bool)arg1;
- (id)occurrencesForDay:(id)arg1 waitForLoad:(bool)arg2;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (id)pasteboardManager;
- (id)persistedSceneState;
- (void)postSelectedCalendarsChanged;
- (void)prepareForAppSuspend;
- (long long)readWriteCalendarCount;
- (id)refreshAccountListIfNeeded:(bool)arg1;
- (id)refreshCalendarDataIfNeeded:(bool)arg1;
- (bool)removeEvent:(id)arg1 withSpan:(long long)arg2 error:(id*)arg3;
- (id)sceneIdentifier;
- (id)searchString;
- (bool)searchingOccurrences;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(bool*)arg2;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(bool*)arg2 usingFilter:(bool)arg3;
- (long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(bool)arg2;
- (void)selectOccurrence:(id)arg1;
- (id)selectedCalendars;
- (id)selectedCalendarsIgnoringFocus;
- (id)selectedDate;
- (id)selectedDateOccurrences:(bool)arg1 loadIsComplete:(bool*)arg2;
- (id)selectedDay;
- (id)selectedOccurrence;
- (bool)selectedOccurrenceIsSearchMatch;
- (id)selectedOccurrences;
- (void)setAllowEventLocationPrediction:(bool)arg1;
- (void)setAutoStartNotificationMonitor:(bool)arg1;
- (void)setCalendar:(id)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setDesiredPaddingDays:(unsigned int)arg1;
- (void)setDisableFocusFiltering:(bool)arg1;
- (void)setFirstVisibleSecond:(unsigned long long)arg1;
- (void)setFocusFilterMode:(unsigned long long)arg1;
- (void)setFocusFilterMode:(unsigned long long)arg1 force:(bool)arg2;
- (void)setMaxCachedDays:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSelectedCalendars:(id)arg1;
- (void)setSelectedCalendarsAndRequestPreferenceSave:(id)arg1 reason:(id)arg2;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedDateChangesDelayedUntilAfterTransition:(bool)arg1;
- (void)setSelectedOccurrence:(id)arg1;
- (void)setSelectedOccurrence:(id)arg1 forceChange:(bool)arg2;
- (void)setSelectedOccurrences:(id)arg1;
- (void)setShowDayAsList:(bool)arg1;
- (void)setShowMonthAsDivided:(bool)arg1;
- (void)setSortedEnabledDelegates:(id)arg1;
- (void)setSourceForSelectedIdentity:(id)arg1;
- (void)setUnselectedCalendars:(id)arg1;
- (bool)showDayAsList;
- (bool)showMonthAsDivided;
- (void)simulateFirstLoadFinished;
- (id)sortedEnabledDelegates;
- (id)sourceForSelectedIdentity;
- (void)startNotificationMonitor;
- (id)undoManager;
- (id)unselectedCalendars;
- (id)unselectedCalendarsForFocusMode;
- (id)unselectedCalendarsIgnoringFocus;
- (void)updateAfterAppResume;
- (void)updateSelectedDateTimeZone;
- (void)updateSourceForSelectedIdentity:(id)arg1 selectedCalendars:(id)arg2;

@end
