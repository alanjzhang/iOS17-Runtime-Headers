/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMIFeatureStore : NSObject <_PASDatabaseMigrationProtocol> {
    id /* block */  _dbGetter;
    NSString * _journalPath;
    _PASLock * _lock;
    id  _lockStateRegistration;
    _PASDatabaseMigrator * _migrator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)nsDataFromSignature:(id)arg1;
+ (id)shouldExposeWarningGivenPositiveFeedbackCount:(id)arg1 negativeFeedbackCount:(id)arg2;
+ (id)storeInMemory;
+ (id)storeWithFilename:(id)arg1;

- (void).cxx_destruct;
- (bool)_applyCappingPolicy:(id)arg1 shouldContinue:(id /* block */)arg2 usingDatabase:(id)arg3;
- (bool)_areSubmodelsEmptyUsingDatabase:(id)arg1;
- (void)_clearBucketForColumn:(id)arg1;
- (void)_clearBucketForColumn:(id)arg1 usingDatabase:(id)arg2;
- (void)_clearKVStoreUsingDatabase:(id)arg1;
- (void)_clearSignatureStatsTableUsingDatabase:(id)arg1;
- (void)_clearSubModelsTablesUsingDatabase:(id)arg1;
- (id)_columnFromDate:(id)arg1;
- (void)_commitNaiveBayesModel:(id)arg1 probabilityFeatureName:(long long)arg2 updateDate:(id)arg3 usingDatabase:(id)arg4;
- (id)_dateFormatter;
- (id)_dateFromColumn:(id)arg1;
- (id)_db;
- (void)_deleteNaiveBayesModelForProbabilityFeatureName:(long long)arg1 usingDatabase:(id)arg2;
- (void)_deleteTokensForDeletedEmailAddresses:(id)arg1 usingDatabase:(id)arg2;
- (int)_effectiveLockState;
- (long long)_featureNameForString:(id)arg1;
- (id)_featuresForDatabase:(id)arg1;
- (id)_getSGMIStoredAddressesUsingDatabase:(id)arg1;
- (void)_handleDeviceLockStateEvent:(int)arg1;
- (id)_highlyDiscriminantTokensForFeature:(long long)arg1 minCount:(unsigned long long)arg2 minRatio:(double)arg3 domains:(id)arg4 limit:(id)arg5 usingDatabase:(id)arg6;
- (id)_journalQueue;
- (id)_keyForField:(long long)arg1;
- (id)_naiveBayesModelQueryResultForFeature:(long long)arg1 unigramTokens:(id)arg2 bigramTokens:(id)arg3 usingDatabase:(id)arg4;
- (bool)_purgeTokensWhichLastUpdateWasBefore:(id)arg1 shouldContinue:(id /* block */)arg2 usingDatabase:(id)arg3;
- (void)_runJournal;
- (id)_stringForFeatureName:(long long)arg1;
- (id)_subModelsStatsWithShouldContinueBlock:(id /* block */)arg1 usingDatabase:(id)arg2;
- (bool)_writeJournalCommand:(unsigned char)arg1 blob:(id)arg2;
- (bool)applyCappingPolicy:(id)arg1 shouldContinue:(id /* block */)arg2;
- (bool)areSubmodelsEmpty;
- (void)clearBucketForDate:(id)arg1;
- (void)clearBucketsForDates:(id)arg1;
- (void)clearKVStoreTable;
- (void)clearMailIntelligenceSaliencyDetection;
- (void)clearNicknameMappingTable;
- (void)clearSignatureStatsTable;
- (void)clearSubModelsTables;
- (void)commitNaiveBayesModel:(id)arg1 probabilityFeatureName:(long long)arg2;
- (void)commitNaiveBayesModel:(id)arg1 probabilityFeatureName:(long long)arg2 updateDate:(id)arg3;
- (id)databaseHandle;
- (void)dealloc;
- (void)deleteNaiveBayesModelForProbabilityFeatureName:(long long)arg1;
- (void)deleteTokensForDeletedEmailAddresses:(id)arg1;
- (void)deleteValueForKey:(id)arg1;
- (id)followUpWarningStats;
- (id)getDoubleNSNumberForKey:(id)arg1;
- (id)getForKey:(id)arg1 binder:(id /* block */)arg2;
- (id)getInt64NSNumberForKey:(id)arg1;
- (id)getNSDateForKey:(id)arg1;
- (id)getNSStringForKey:(id)arg1;
- (id)getSGMIStoredAddresses;
- (id)getUnsubscriptionOpportunitiesSuggestionsDenyListForField:(long long)arg1;
- (id)highlyDiscriminantTokensForFeature:(long long)arg1 minCount:(unsigned long long)arg2 minRatio:(double)arg3;
- (void)incrementInt64NSNumber:(id)arg1 forKey:(id)arg2;
- (void)incrementUserEngagement:(bool)arg1 forFollowUpWarning:(id)arg2;
- (id)incrementUserEngagement:(bool)arg1 forWarning:(id)arg2;
- (id)init;
- (id)initWithDatabaseGetter:(id /* block */)arg1 journalPath:(id)arg2;
- (void)insertToken:(id)arg1 forFeatureName:(long long)arg2 salientCount:(long long)arg3 regularCount:(long long)arg4 time:(id)arg5;
- (id)knownEmailAddressesForNickname:(id)arg1;
- (unsigned char)migration_createFeaturesTable;
- (unsigned char)migration_createFollowUpTable;
- (unsigned char)migration_createFollowUpTableWithAppleMailMessageIdAsPrimaryKey;
- (unsigned char)migration_createKVTable;
- (unsigned char)migration_createSignatureStatsTable;
- (id)migrations;
- (id)naiveBayesModelQueryResultForFeature:(long long)arg1 unigramTokens:(id)arg2 bigramTokens:(id)arg3;
- (bool)performMaintenanceWithShouldContinueBlock:(id /* block */)arg1;
- (void)purgeOldNicknameMappingRecords;
- (bool)purgeTokensWhichLastUpdateWasBefore:(id)arg1 shouldContinue:(id /* block */)arg2;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;
- (void)recordMappingFromNickname:(id)arg1 toEmailAddress:(id)arg2;
- (void)recordMappingFromNickname:(id)arg1 toEmailAddress:(id)arg2 withDateOfMatch:(id)arg3;
- (void)reset;
- (void)setDoubleNSNumber:(id)arg1 forKey:(id)arg2;
- (void)setInt64NSNumber:(id)arg1 forKey:(id)arg2;
- (void)setNSDate:(id)arg1 forKey:(id)arg2;
- (void)setNSString:(id)arg1 forKey:(id)arg2;
- (void)setUnsubscriptionOpportunitiesSuggestionsDenyListForField:(long long)arg1 toValues:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 binder:(id /* block */)arg3;
- (id)shouldExposeWarning:(id)arg1;
- (id)shouldExposeWarning:(id)arg1 updateAction:(long long)arg2;
- (id)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 minCount:(unsigned long long)arg2 minScore:(double)arg3 limit:(unsigned long long)arg4;
- (id)subModelsStats;
- (id)subModelsStatsWithShouldContinueBlock:(id /* block */)arg1;
- (id)submodelsAgesInDays;
- (void)updateAttachmentDetectionStatsOnMailWithTextContent:(id)arg1 attachments:(id)arg2 warningRaised:(bool)arg3 attachmentPredicted:(bool)arg4 isIncomingMail:(bool)arg5;
- (void)updateFollowUpDetectionStatsWithWarning:(id)arg1;
- (void)updateRecipientDetectionStatsWarningRaised:(bool)arg1;
- (long long)warningStatsCount;
- (id)warningStatsForLogging:(bool)arg1;

@end
