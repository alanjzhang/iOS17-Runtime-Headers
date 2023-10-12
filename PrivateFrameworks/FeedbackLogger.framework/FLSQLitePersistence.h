/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger
 */

@interface FLSQLitePersistence : NSObject {
    double  _batchMaximumDuration;
    _Atomic bool  _configured;
    FLLoggingContext * _context;
    NSDate * _currentBatchCreationDate;
    NSString * _currentBatchIdentifier;
    unsigned long long  _currentBatchPayloadSize;
    NSString * _databasePath;
    struct sqlite3 { } * _db;
    FLSQLiteDatabaseConnection * _dbConnection;
    struct sqlite3_stmt { } * _insertRecordsStatement;
    struct sqlite3_stmt { } * _iteratePayloadStatement;
    NSObject<OS_os_log> * _log;
    unsigned long long  _maxAllowedDatabaseSizeInBytes;
    unsigned long long  _maxBatchPayloadInBytes;
    struct sqlite3_stmt { } * _maxRowIdStatement;
    NSString * _storeIdentifier;
}

@property (nonatomic) double batchMaximumDuration;
@property (nonatomic) _Atomic bool configured;
@property (nonatomic, retain) FLLoggingContext *context;
@property (nonatomic, copy) NSDate *currentBatchCreationDate;
@property (nonatomic, copy) NSString *currentBatchIdentifier;
@property (nonatomic) unsigned long long currentBatchPayloadSize;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic) struct sqlite3 { }*db;
@property (nonatomic, retain) FLSQLiteDatabaseConnection *dbConnection;
@property (nonatomic) struct sqlite3_stmt { }*insertRecordsStatement;
@property (nonatomic) struct sqlite3_stmt { }*iteratePayloadStatement;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long maxAllowedDatabaseSizeInBytes;
@property (nonatomic) unsigned long long maxBatchPayloadInBytes;
@property (nonatomic) struct sqlite3_stmt { }*maxRowIdStatement;
@property (nonatomic, readonly, copy) NSString *storeIdentifier;

- (void).cxx_destruct;
- (double)batchMaximumDuration;
- (void)closeDatabase;
- (bool)configured;
- (id)context;
- (bool)createDatabase;
- (id)currentBatchCreationDate;
- (id)currentBatchIdentifier;
- (unsigned long long)currentBatchPayloadSize;
- (id)databasePath;
- (struct sqlite3 { }*)db;
- (id)dbConnection;
- (void)dealloc;
- (bool)deleteDatabase;
- (bool)executeInTransactionMultipleSQLStatements:(id)arg1;
- (bool)executeSQLStatement:(const char *)arg1;
- (bool)executeSQLStatement:(const char *)arg1 usingTransaction:(bool)arg2;
- (bool)getIntValueForPragma:(id)arg1 into:(inout int*)arg2;
- (id)initWithStoreId:(id)arg1 dbConnection:(id)arg2 loggingContext:(id)arg3;
- (id)initWithStoreId:(id)arg1 loggingContext:(id)arg2;
- (bool)initializeConnectionForUseBy:(int)arg1;
- (struct sqlite3_stmt { }*)insertRecordsStatement;
- (bool)iteratePayloadForBatch:(id)arg1 codeblock:(id /* block */)arg2;
- (struct sqlite3_stmt { }*)iteratePayloadStatement;
- (id)log;
- (unsigned long long)maxAllowedDatabaseSizeInBytes;
- (unsigned long long)maxBatchPayloadInBytes;
- (struct sqlite3_stmt { }*)maxRowIdStatement;
- (bool)open;
- (id)persist:(id)arg1;
- (void)setBatchMaximumDuration:(double)arg1;
- (void)setConfigured:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentBatchCreationDate:(id)arg1;
- (void)setCurrentBatchIdentifier:(id)arg1;
- (void)setCurrentBatchPayloadSize:(unsigned long long)arg1;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setDbConnection:(id)arg1;
- (void)setInsertRecordsStatement:(struct sqlite3_stmt { }*)arg1;
- (void)setIteratePayloadStatement:(struct sqlite3_stmt { }*)arg1;
- (void)setLog:(id)arg1;
- (void)setMaxAllowedDatabaseSizeInBytes:(unsigned long long)arg1;
- (void)setMaxBatchPayloadInBytes:(unsigned long long)arg1;
- (void)setMaxRowIdStatement:(struct sqlite3_stmt { }*)arg1;
- (id)storeIdentifier;
- (bool)tryPrepare:(const char *)arg1 preparedStatement:(inout struct sqlite3_stmt {}**)arg2;
- (bool)tryRolloverBatchIfNecessary:(unsigned long long)arg1;

// FLSQLitePersistence (BatchManager)

+ (id)batchStatusDescription:(int)arg1;

- (bool)__purgeStatementHelper:(const char *)arg1 forBatchId:(id)arg2;
- (id)_getBatchIdsHelper:(struct sqlite3_stmt { }*)arg1;
- (bool)_updateMetadataHelperForBatch:(id)arg1 query:(const char *)arg2;
- (bool)_updateStatusHelperForBatch:(id)arg1 toStatus:(int)arg2;
- (bool)closeAllBatches;
- (bool)closeOpenBatch;
- (bool)closeOrphanedBatches;
- (long long)doBatchesHousekeeping;
- (bool)forceCloseOpenBatches;
- (id)getBatchIdsWithAllStatuses;
- (id)getBatchIdsWithStatus:(int)arg1;
- (int)getDataVersion;
- (id)getPurgableBatchIds;
- (id)getRecordsRangeStart:(long long)arg1 end:(long long)arg2;
- (bool)initializeNewBatch;
- (bool)markBatchesforPurge;
- (id)metadataForBatch:(id)arg1;
- (bool)purgeAllBatches;
- (bool)purgeBatch:(id)arg1;
- (bool)recoverOrphanedProcessingBatches;
- (bool)updateStatusForBatch:(id)arg1 toStatus:(int)arg2;
- (bool)vacuum;

// FLSQLitePersistence (Observer)

- (void)finalizeObserver;
- (long long)maxRowId;
- (void)observeInsertionAtRow:(long long)arg1 observer:(id /* block */)arg2;
- (id)registerInsertionObserver:(id /* block */)arg1;

// FLSQLitePersistence (SchemaManager)

- (unsigned long long)getCurrentDatabaseSize;
- (int)getSchemaVersion;
- (bool)isSchemaReady;
- (bool)prepareSchema;
- (bool)setDatabaseSizeLimit;
- (bool)updateSchema;

// FLSQLitePersistence (UploadManager)

+ (id)uploadStatusDescription:(int)arg1;

- (bool)__deleteStatementHelper:(const char *)arg1 forUploadId:(id)arg2;
- (id)_getUploadIdsHelper:(struct sqlite3_stmt { }*)arg1;
- (bool)_updateMetadataHelperForUpload:(id)arg1 query:(const char *)arg2;
- (bool)_updateStatusHelperForUpload:(id)arg1 toStatus:(int)arg2;
- (long long)cleanupPurgableUploads;
- (bool)deleteAllUploads;
- (bool)deleteUploadWithIdentifier:(id)arg1;
- (long long)doUploadHousekeeping;
- (id)getPurgableUploadIds;
- (id)getUploadIdsWithAllStatuses;
- (id)getUploadIdsWithStatus:(int)arg1;
- (id)getUploadRecordWithId:(id)arg1;
- (id)getUploadsRangeStart:(long long)arg1 end:(long long)arg2;
- (bool)iterateUploadsWithCodeblock:(id /* block */)arg1;
- (bool)markUploadsForPurge;
- (id)persistUploadPayload:(id)arg1;
- (bool)recoverOrphanedProcessingUploads;
- (bool)updateStatusForUpload:(id)arg1 toStatus:(int)arg2;

@end
