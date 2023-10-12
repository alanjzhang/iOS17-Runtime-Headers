/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSClockInterface : NSObject <TSClockClient> {
    TSClock * _clock;
    int (* _gptpGrandmasterCallback;
    int (* _gptpGrandmasterPortCallback;
    void * _gptpGrandmasterPortRefcon;
    void * _gptpGrandmasterRefcon;
    int (* _gptpLocalPortCallback;
    void * _gptpLocalPortRefcon;
    int (* _lockStateCallback;
    void * _lockStateRefcon;
    int (* _masterChangeCallback;
    void * _masterChangeRefcon;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    int (* _timeSyncTimeChangeCallback;
    void * _timeSyncTimeChangeRefcon;
}

@property (nonatomic, retain) TSClock *clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clock;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (void)setClock:(id)arg1;
- (void)setLockStateNotificationCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setMasterChangeNotificationCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setTimeSyncTimeChangeNotificationCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setgPTPGrandmasterIDAndPortNotificationCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setgPTPGrandmasterNotificationCallback:(int (*)arg1 refcon:(void*)arg2;
- (void)setgPTPLocalPortNotificationCallback:(int (*)arg1 refcon:(void*)arg2;

@end
