/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSystemStateListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener> {
    <MTSystemStateDelegate> * _delegate;
    bool  _restoreDoneHandled;
    <MTScheduler> * _serializer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTSystemStateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool restoreDoneHandled;
@property (nonatomic, retain) <MTScheduler> *serializer;
@property (readonly) Class superclass;

+ (id)_restoreNotification;
+ (bool)isSystemRestoreDone;

- (void).cxx_destruct;
- (bool)_checkIfRestoreDone;
- (void)_handleF5Reset;
- (void)_handleRestoreDone;
- (void)_verifyRestoreDone;
- (bool)checkSystemReady;
- (id)delegate;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)liveDarwinNotifications;
- (void)printDiagnostics;
- (bool)restoreDoneHandled;
- (id)serializer;
- (void)setDelegate:(id)arg1;
- (void)setRestoreDoneHandled:(bool)arg1;
- (void)setSerializer:(id)arg1;

@end
