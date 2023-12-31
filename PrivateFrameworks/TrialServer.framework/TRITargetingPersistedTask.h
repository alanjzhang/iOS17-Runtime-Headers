/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRITargetingPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasIncludeDependencies;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool includeDependencies;
@property (nonatomic) int retryCount;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
