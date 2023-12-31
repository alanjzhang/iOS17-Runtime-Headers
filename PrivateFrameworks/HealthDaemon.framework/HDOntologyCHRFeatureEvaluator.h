/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDOntologyCHRFeatureEvaluator : NSObject <HDHealthRecordsAccountExistenceObserver, HDOntologyFeatureEvaluator> {
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

- (void).cxx_destruct;
- (void)accountExistenceNotifier:(id)arg1 didChangeHealthRecordAccountExistence:(bool)arg2;
- (bool)canRequireShardWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (void)registerRequiredObserversForProfile:(id)arg1 queue:(id)arg2;
- (long long)requiresFeatureShardForProfile:(id)arg1;
- (id)updateCoordinator;

@end
