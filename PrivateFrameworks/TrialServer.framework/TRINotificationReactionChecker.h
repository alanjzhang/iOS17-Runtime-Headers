/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRINotificationReactionChecker : NSObject <TRINotificationReactionCheckerProtocol> {
    <TRIDateProviding> * _dateProvider;
    TRIExperimentDatabase * _experimentDb;
    TRIRolloutDatabase * _rolloutDb;
}

- (void).cxx_destruct;
- (bool)_isExistingDeployment:(id)arg1;
- (bool)_isOutdatedDeploymentDate:(id)arg1;
- (id)initWithDateProvider:(id)arg1 rolloutDatabase:(id)arg2 experimentDatabase:(id)arg3;
- (struct { unsigned char x1; })reactionForHotfixDeployment:(id)arg1 hotfixDeploymentDate:(id)arg2;
- (struct { unsigned char x1; })reactionForRollbackExperimentId:(id)arg1;

@end
