/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmServer : NSObject <MTAgentDiagnosticDelegate, MTAlarmObserver, MTAlarmServer> {
    MTXPCConnectionListenerProvider * _connectionListenerProvider;
    <NAScheduler> * _serializer;
    MTAlarmStorage * _storage;
    bool  _systemReady;
}

@property (nonatomic, readonly) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTAlarmStorage *storage;
@property (readonly) Class superclass;
@property (getter=isSystemReady, nonatomic, readonly) bool systemReady;

+ (bool)_notifyClientsForTriggerType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_isSystemReady;
- (id)_systemNotReadyError;
- (void)addAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)checkIn;
- (id)connectionListenerProvider;
- (void)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)gatherDiagnostics;
- (void)getAlarmsWithCompletion:(id /* block */)arg1;
- (void)handleSystemReady;
- (id)initWithStorage:(id)arg1;
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;
- (bool)isSystemReady;
- (void)nextSleepAlarmWithCompletion:(id /* block */)arg1;
- (void)printDiagnostics;
- (void)removeAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resetSleepAlarmSnoozeStateWithCompletion:(id /* block */)arg1;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)startListening;
- (void)stopListening;
- (id)storage;
- (void)updateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateSleepAlarmsWithCompletion:(id /* block */)arg1;

@end
