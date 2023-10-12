/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabasePruningCoordinator : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDProfileReadyObserver> {
    HDPeriodicActivity * _activity;
    HDDaemon * _daemon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithDaemon:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;

@end
