/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

@interface DESDediscoKey : NSObject {
    NSString * _environment;
    NSString * _privacyID;
    NSString * _recipeID;
}

@property (nonatomic, readonly, copy) NSString *environment;
@property (nonatomic, readonly, copy) NSString *privacyID;
@property (nonatomic, readonly, copy) NSString *recipeID;

- (void).cxx_destruct;
- (id)environment;
- (id)initWithPrivacyID:(id)arg1 environment:(id)arg2 recipeID:(id)arg3;
- (id)metadataEncodedMetricsKeyString;
- (id)metadataKeyString;
- (id)metricsKeyString;
- (id)privacyID;
- (id)recipeID;
- (id)resultsKeyString;
- (id)resultsKeyStringForChunk:(id)arg1;

@end
