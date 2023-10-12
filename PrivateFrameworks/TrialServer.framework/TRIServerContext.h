/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIServerContext : NSObject {
    TRIActivationEventDatabase * _activationEventDatabase;
    TRIBackgroundMLTaskDatabase * _bmltDatabase;
    TRIBackgroundMLTaskHistoryDatabase * _bmltHistoryDatabase;
    TRIClient * _client;
    TRIContentTracker * _contentTracker;
    TRIMLRuntimeEvaluationHistoryDatabase * _evaluationHistoryDatabase;
    TRIExperimentDatabase * _experimentDatabase;
    TRIExperimentHistoryDatabase * _experimentHistoryDatabase;
    TRISQLiteCKDatabaseFailureInjectionDelegate * _failureInjectionDelegate;
    TRISQLiteCKDatabase * _fakeCKDatabase;
    TRIKVStore * _keyValueStore;
    TRILimitedCarryProfileManager * _limitedCarryManager;
    TRINamespaceDatabase * _namespaceDatabase;
    <TRIPaths> * _paths;
    <TRIPushServiceConnectionMultiplexing> * _pushServiceMuxer;
    TRIRolloutDatabase * _rolloutDatabase;
    TRIRolloutHistoryDatabase * _rolloutHistoryDatabase;
    TRITaskDatabase * _taskDatabase;
    <TRITaskQueuing> * _taskQueue;
    TRIDatabase * _underlyingDatabase;
    bool  _useCKNative;
    <TRIXPCActivityManagementProtocol> * _xpcActivityManager;
}

@property (nonatomic, readonly) TRIActivationEventDatabase *activationEventDatabase;
@property (nonatomic, readonly) TRIBackgroundMLTaskDatabase *bmltDatabase;
@property (nonatomic, readonly) TRIBackgroundMLTaskHistoryDatabase *bmltHistoryDatabase;
@property (nonatomic, readonly) TRIClient *client;
@property (nonatomic, readonly) TRIContentTracker *contentTracker;
@property (nonatomic, readonly) TRIMLRuntimeEvaluationHistoryDatabase *evaluationHistoryDatabase;
@property (nonatomic, readonly) TRIExperimentDatabase *experimentDatabase;
@property (nonatomic, readonly) TRIExperimentHistoryDatabase *experimentHistoryDatabase;
@property (nonatomic, retain) TRISQLiteCKDatabaseFailureInjectionDelegate *failureInjectionDelegate;
@property (retain) TRISQLiteCKDatabase *fakeCKDatabase;
@property (nonatomic, readonly) TRIKVStore *keyValueStore;
@property (nonatomic, retain) TRILimitedCarryProfileManager *limitedCarryManager;
@property (nonatomic, readonly) TRINamespaceDatabase *namespaceDatabase;
@property (nonatomic, readonly) <TRIPaths> *paths;
@property (nonatomic, retain) <TRIPushServiceConnectionMultiplexing> *pushServiceMuxer;
@property (nonatomic, readonly) TRIRolloutDatabase *rolloutDatabase;
@property (nonatomic, readonly) TRIRolloutHistoryDatabase *rolloutHistoryDatabase;
@property (nonatomic, readonly) TRITaskDatabase *taskDatabase;
@property (nonatomic, retain) <TRITaskQueuing> *taskQueue;
@property (nonatomic, readonly) TRIDatabase *underlyingDatabase;
@property (nonatomic) bool useCKNative;
@property (nonatomic, readonly) <TRIXPCActivityManagementProtocol> *xpcActivityManager;

- (void).cxx_destruct;
- (void)_logInitErrorWithClient:(id)arg1 message:(id)arg2;
- (id)activationEventDatabase;
- (id)bmltDatabase;
- (id)bmltHistoryDatabase;
- (id)client;
- (id)contentTracker;
- (id)ensureFakeCKDatabase;
- (id)evaluationHistoryDatabase;
- (id)experimentDatabase;
- (id)experimentHistoryDatabase;
- (id)failureInjectionDelegate;
- (id)fakeCKDatabase;
- (id)init;
- (id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3;
- (id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3 xpcActivityManagement:(id)arg4;
- (id)keyValueStore;
- (id)limitedCarryManager;
- (void)logErrorMetric:(id)arg1;
- (id)namespaceDatabase;
- (id)paths;
- (id)pushServiceMuxer;
- (id)rolloutDatabase;
- (id)rolloutHistoryDatabase;
- (void)setFailureInjectionDelegate:(id)arg1;
- (void)setFakeCKDatabase:(id)arg1;
- (void)setLimitedCarryManager:(id)arg1;
- (void)setPushServiceMuxer:(id)arg1;
- (void)setTaskQueue:(id)arg1;
- (void)setUseCKNative:(bool)arg1;
- (void)setXpcActivityManager:(id)arg1;
- (id)taskDatabase;
- (id)taskQueue;
- (id)underlyingDatabase;
- (bool)useCKNative;
- (id)xpcActivityManager;

@end
