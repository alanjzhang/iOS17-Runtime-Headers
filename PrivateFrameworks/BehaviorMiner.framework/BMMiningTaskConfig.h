/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

@interface BMMiningTaskConfig : NSObject {
    NSDictionary * _bmMiningTaskConfig;
    bool  _interactionExtractedTopicFromAttachmentFactorInUse;
    NSString * _trialID;
}

@property (retain) NSDictionary *bmMiningTaskConfig;
@property (nonatomic) bool interactionExtractedTopicFromAttachmentFactorInUse;
@property (nonatomic, retain) NSString *trialID;

- (void).cxx_destruct;
- (id)bmMiningTaskConfig;
- (id)init;
- (bool)interactionExtractedTopicFromAttachmentFactorInUse;
- (bool)loadBMMiningTaskConfig:(id)arg1;
- (void)loadDefaultConfig;
- (void)setBmMiningTaskConfig:(id)arg1;
- (void)setInteractionExtractedTopicFromAttachmentFactorInUse:(bool)arg1;
- (void)setTrialID:(id)arg1;
- (id)trialID;
- (void)updateFactorLevelsFromFilePath:(id)arg1;

@end
