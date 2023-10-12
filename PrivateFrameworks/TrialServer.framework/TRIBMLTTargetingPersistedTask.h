/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIBMLTTargetingPersistedTask : TRIPBMessage

@property (nonatomic, copy) NSString *backgroundMlTaskId;
@property (nonatomic, copy) NSString *bmltBatchNotificationId;
@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasBackgroundMlTaskId;
@property (nonatomic) bool hasBmltBatchNotificationId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasIncludeDependencies;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool hasTriggerEvent;
@property (nonatomic) bool includeDependencies;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) int triggerEvent;

+ (id)descriptor;

@end
