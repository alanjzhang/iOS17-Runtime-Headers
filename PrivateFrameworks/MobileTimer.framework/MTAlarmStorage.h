/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmStorage : NSObject <MTAlarmScheduleDelegate, MTAlarmStorage, MTApplicationWorkspaceObserverProtocol> {
    id /* block */  _currentDateProvider;
    NSDate * _lastModifiedDate;
    MTAlarmMigrator * _migrator;
    MTObserverStore * _observers;
    NSMutableArray * _orderedAlarms;
    <MTPersistence> * _persistence;
    MTAlarmScheduler * _scheduler;
    <NAScheduler> * _serializer;
    NSMutableArray * _sleepAlarms;
}

@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) NSArray *allAlarms;
@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) MTAlarmMigrator *migrator;
@property (nonatomic, readonly) MTAlarm *nextAlarm;
@property (nonatomic, retain) MTObserverStore *observers;
@property (nonatomic, retain) NSMutableArray *orderedAlarms;
@property (nonatomic, retain) <MTPersistence> *persistence;
@property (nonatomic) MTAlarmScheduler *scheduler;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic, retain) NSMutableArray *sleepAlarms;
@property (readonly) Class superclass;

+ (id)_diagnosticDictionaryForAlarm:(id)arg1;

- (void).cxx_destruct;
- (id)_applyNecessaryChangesFromExistingAlarm:(id)arg1 updatedAlarm:(id)arg2;
- (id)_cleanUpForInternalBuild:(id)arg1;
- (id)_cleanUpSleepAlarmRepeat:(id)arg1;
- (id)_cleanUpSnoozeFireDate:(id)arg1;
- (id)_convertSleepAlarmToRegular:(id)arg1;
- (id)_diagnosticDictionaryForAlarms:(id)arg1;
- (void)_loadAlarmsWithCompletion:(id /* block */)arg1;
- (void)_notifyObserversForAlarmAdd:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmChange:(id)arg1 previousAlarms:(id)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmDismiss:(id)arg1 dismissAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmFire:(id)arg1 triggerType:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForAlarmRemoval:(id)arg1 source:(id)arg2;
- (void)_notifyObserversForAlarmSnooze:(id)arg1 snoozeAction:(unsigned long long)arg2 source:(id)arg3;
- (void)_notifyObserversForNextAlarmChange:(id)arg1 source:(id)arg2;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_queuePersistAlarm:(id)arg1 replacingAlarm:(id)arg2;
- (void)_queue_actuallyRemoveAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_addAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id)_queue_alarmMatchingAlarm:(id)arg1;
- (id)_queue_alarmMatchingAlarmIdentifier:(id)arg1;
- (id)_queue_allAlarms;
- (id)_queue_allSleepAlarms;
- (void)_queue_dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (void)_queue_dismissMutableAlarm:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3;
- (bool)_queue_hasMatchingAlarm:(id)arg1;
- (void)_queue_persistAlarms;
- (void)_queue_removeAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_removeAlarmWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_removeAllAlarmsForSource:(id)arg1;
- (void)_queue_resetAlarmsTo:(id)arg1 sleepAlarms:(id)arg2;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3 persist:(bool)arg4 notify:(bool)arg5;
- (void)_queue_setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3 persist:(bool)arg4 notify:(bool)arg5 override:(bool)arg6;
- (void)_queue_snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (void)_queue_sortAlarms;
- (void)_queue_sortSleepAlarms;
- (id)_queue_updateAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(id /* block */)arg3 source:(id)arg4;
- (id)_queue_updateSleepAlarmsFromExistingAlarms:(id)arg1;
- (void)_removeAlarmDataIfNecessary:(id)arg1;
- (void)_resetCurrentToneIdentifier;
- (id)activeSleepAlarm;
- (void)addAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)alarmWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)alarms;
- (id)allAlarms;
- (id /* block */)currentDateProvider;
- (void)dealloc;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(id /* block */)arg3 source:(id)arg4;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissDate:(id)arg2 dismissAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (id)gatherDiagnostics;
- (void)getAlarmsWithCompletion:(id /* block */)arg1;
- (void)handleF5Reset;
- (void)handleMigrationFinish;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (id)lastModifiedDate;
- (void)loadAlarms;
- (void)loadAlarmsSync;
- (id)migrator;
- (id)nextAlarm;
- (void)observedApplicationDidUninstallForBundleIdentifier:(id)arg1;
- (id)observers;
- (id)orderedAlarms;
- (id)persistence;
- (void)printDiagnostics;
- (void)registerObserver:(id)arg1;
- (void)removeAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)removeAlarmWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)removeAllAlarmsForSource:(id)arg1;
- (id)scheduler;
- (void)scheduler:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)scheduler:(id)arg1 didFireAlarm:(id)arg2;
- (id)serializer;
- (void)setAllAlarms:(id)arg1 sleepAlarms:(id)arg2 source:(id)arg3;
- (void)setLastModifiedDate:(id)arg1;
- (void)setMigrator:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOrderedAlarms:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepAlarms:(id)arg1;
- (void)setupListeners;
- (id)sleepAlarm;
- (id)sleepAlarms;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(id /* block */)arg3 source:(id)arg4;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeDate:(id)arg2 snoozeAction:(unsigned long long)arg3 withCompletion:(id /* block */)arg4 source:(id)arg5;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(id /* block */)arg2;
- (id)transferMetadataForSleepAlarm:(id)arg1 fromPrevious:(id)arg2;
- (void)updateAlarm:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)updateAlarmWithIdentifier:(id)arg1 changeSet:(id)arg2 withCompletion:(id /* block */)arg3 source:(id)arg4;
- (void)updateSleepAlarms:(id)arg1 source:(id)arg2;
- (void)updateSleepAlarmsWithBlock:(id /* block */)arg1 source:(id)arg2;

@end
