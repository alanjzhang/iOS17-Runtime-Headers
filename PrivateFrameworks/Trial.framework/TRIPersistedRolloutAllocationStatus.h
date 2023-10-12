/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIPersistedRolloutAllocationStatus : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasRampId;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic, retain) NSMutableArray *namespaceFactorPackArray;
@property (nonatomic, readonly) unsigned long long namespaceFactorPackArray_Count;
@property (nonatomic, copy) NSString *rampId;
@property (nonatomic, copy) NSString *rolloutId;

+ (id)descriptor;

@end