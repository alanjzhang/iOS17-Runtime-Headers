/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (nonatomic, retain) TRIPBTimestamp *earliestTimestamp;
@property (nonatomic) bool hasEarliestTimestamp;
@property (nonatomic) bool hasLimitedCarryOnly;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasRollbacksOnly;
@property (nonatomic) bool hasTaskAttribution;
@property (nonatomic) bool limitedCarryOnly;
@property (nonatomic, retain) NSMutableArray *namespacesArray;
@property (nonatomic, readonly) unsigned long long namespacesArray_Count;
@property (nonatomic) int retryCount;
@property (nonatomic) bool rollbacksOnly;
@property (nonatomic, retain) TRIPersistedTaskAttribution *taskAttribution;

+ (id)descriptor;

@end
