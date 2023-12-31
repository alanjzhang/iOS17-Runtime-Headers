/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSleepForAutoSu : NSObject {
    _CDAutoSuConfig * _autoSuConfig;
    bool  _enableCaching;
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (retain) _CDAutoSuConfig *autoSuConfig;
@property bool enableCaching;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;

+ (id)defaultTuningConfiguration;
+ (id)readConfigurationFromDefaults;
+ (id)sanitizeTuningConfiguration:(id)arg1;
+ (id)tuningDictionary;

- (void).cxx_destruct;
- (id)autoSuConfig;
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1;
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1 withConfig:(id)arg2;
- (bool)enableCaching;
- (id)getUnlockAndSoftwareUpdateTimes;
- (id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)arg1 referenceDate:(id)arg2;
- (id)init;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)knowledgeStore;
- (id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg1;
- (id)predicitLastUnlockForDay:(id)arg1;
- (id)predictForDate:(id)arg1 fromState:(id)arg2;
- (id)predictForDate:(id)arg1 fromState:(id)arg2 withConfig:(id)arg3;
- (id)predictNextDateForLastUnlockAttemptOfTheDay;
- (id)predictedSleepDictionaryForDate:(id)arg1;
- (id)predictedSleepDictionaryForDate:(id)arg1 usingKnowledge:(id)arg2;
- (id)proposeTimesFromRelativeOffsetsForDate:(id)arg1 lastUnlock:(int)arg2 suStart:(int)arg3 suEnd:(int)arg4 unrestrictedSleepEnd:(int)arg5 config:(id)arg6;
- (id)retrieveSleepProbabilities:(id)arg1;
- (void)setAutoSuConfig:(id)arg1;
- (void)setEnableCaching:(bool)arg1;
- (void)setKnowledgeStore:(id)arg1;

@end
