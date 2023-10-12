/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureScanner : NSObject {
    NSMutableArray * _bodyAllFeatures;
    NSMutableArray * _bodyDataDetectorsFeatures;
    NSMutableArray * _bodyKeywordFeatures;
    NSArray * _bodyMessageUnits;
    NSMutableArray * _bodySentenceFeatures;
    NSMutableArray * _detectedEvents;
    NSMutableSet * _extractedNotesStrings;
    NSArray * _filteredDetectedEvents;
    long long  _resultType;
    NSArray * _stitchedEvents;
}

@property (retain) NSMutableArray *bodyAllFeatures;
@property (retain) NSMutableArray *bodyDataDetectorsFeatures;
@property (retain) NSMutableArray *bodyKeywordFeatures;
@property (retain) NSArray *bodyMessageUnits;
@property (retain) NSMutableArray *bodySentenceFeatures;
@property (retain) NSMutableArray *detectedEvents;
@property (retain) NSMutableSet *extractedNotesStrings;
@property (retain) NSArray *filteredDetectedEvents;
@property long long resultType;
@property (retain) NSArray *stitchedEvents;

+ (id)dataDetectorsFeatureExtractor;
+ (id)descriptionForScanResultType:(long long)arg1;
+ (id)eventStore;
+ (bool)isNaturalLanguageEventDetectionEnabled;
+ (id)keywordFeatureExtractor;
+ (void)resetSharedCachesAndModels;
+ (id)sentenceFeatureExtractor;
+ (void)setEventStoreForTesting:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2;
- (id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
- (id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3;
- (id)_regroupEventsWithSpreadTimeAsAllDayEvents:(id)arg1;
- (id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_sortedFeaturesByRange:(id)arg1;
- (id)_stitchedEventsFromEvents:(id)arg1;
- (void)adjustTimeForEvent:(id)arg1;
- (void)adjustTimeForEvents:(id)arg1;
- (id)analyzeFeatures:(id)arg1 messageUnit:(id)arg2;
- (id)analyzeFeatures:(id)arg1 messageUnit:(id)arg2 checkPolarity:(bool)arg3 polarity:(unsigned long long)arg4;
- (id)artisNamesFromDataFeatures:(id)arg1;
- (void)augmentDetectedDatesWithEndDates:(id)arg1;
- (id)bestEventsFromEvents:(id)arg1;
- (id)bodyAllFeatures;
- (id)bodyDataDetectorsFeatures;
- (id)bodyKeywordFeatures;
- (id)bodyMessageUnits;
- (id)bodySentenceFeatures;
- (id)cleanedStringForFeatureData:(id)arg1;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (void)confidenceForEvents:(id)arg1;
- (unsigned long long)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2;
- (bool)dataFeatures:(id)arg1 containDateOlderThan:(id)arg2 preciseTimeOnly:(bool)arg3;
- (id)dataFeaturesInTheFutureFromDataFeatures:(id)arg1 messageUnitSentDate:(id)arg2;
- (id)decoratedTitle:(id)arg1 withSubtitles:(id)arg2;
- (id)decoratedTitleFromEventType:(id)arg1 title:(id)arg2 sender:(id)arg3 recipients:(id)arg4 isSent:(bool)arg5 isTitleSenderDecorated:(bool*)arg6;
- (id)detectedEvents;
- (void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(id)arg3 dataFeatures:(id)arg4;
- (id)entertainmentPOINamesFromDataFeatures:(id)arg1;
- (unsigned long long)eventStatusFromPolarity:(unsigned long long)arg1;
- (id)extractedNotesStrings;
- (unsigned long long)featureSentencePolarityForFeatureAtIndex:(unsigned long long)arg1 inFeatures:(id)arg2;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4;
- (id)filteredDetectedEvents;
- (id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2;
- (bool)isDateAroundNoon:(id)arg1;
- (bool)isDateRoundedTo5Minutes:(id)arg1;
- (bool)isEventProposalOrConfirmationFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 eventIsTenseDependent:(bool)arg4 extractedFromSubject:(bool)arg5 extractedPolarity:(unsigned long long*)arg6 polarityInfluencedByIpsosPlistRef:(bool*)arg7;
- (id)messageSenderName;
- (id)movieTitlesFromDataFeatures:(id)arg1;
- (id)normalizedAllDayDateFromDate:(id)arg1;
- (void)normalizedEvents:(id)arg1;
- (id)notesStringsFromDataFeatures:(id)arg1;
- (void)resetScanState;
- (id)restaurantAndBarPOINamesFromDataFeatures:(id)arg1;
- (long long)resultType;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setBodyAllFeatures:(id)arg1;
- (void)setBodyDataDetectorsFeatures:(id)arg1;
- (void)setBodyKeywordFeatures:(id)arg1;
- (void)setBodyMessageUnits:(id)arg1;
- (void)setBodySentenceFeatures:(id)arg1;
- (void)setDetectedEvents:(id)arg1;
- (void)setExtractedNotesStrings:(id)arg1;
- (void)setFilteredDetectedEvents:(id)arg1;
- (void)setResultType:(long long)arg1;
- (void)setStitchedEvents:(id)arg1;
- (id)shortNameForPerson:(id)arg1;
- (bool)shouldReplaceSendDateWithCurrentDate;
- (id)sportTeamNamesFromDataFeatures:(id)arg1;
- (id)stitchedEvents;
- (id)stitchedEventsFromEvents:(id)arg1;
- (id)stringsFromDataFeatures:(id)arg1 matchingTypes:(id)arg2;
- (id)subjectEventVocabularyIgnoreDateKeyword:(id)arg1;
- (id)subjectEventVocabularyRejectionKeyword:(id)arg1;

@end
