/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject {
    AFOpportuneSpeakingModelFeedback * _feedback;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSMutableDictionary * _usageEventsBySpeakableId;
}

- (void).cxx_destruct;
- (void)fetchNotificationUsageForSpeakableId:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withHandler:(id /* block */)arg4;
- (id)init;
- (bool)interactionDetectedForSpeakableId:(id)arg1;
- (id)lastNegativeFeedbackForContact:(id)arg1;
- (void)loadIfNecessary;
- (void)save;
- (void)setLastNegativeFeedbackForContact:(id)arg1;

@end
