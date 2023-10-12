/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueryOperation : CKDDatabaseOperation <CKDOperationPipelining> {
    NSDictionary * _assetTransferOptionsByKey;
    CKQueryCursor * _cursor;
    NSSet * _desiredKeySet;
    bool  _fetchAllResults;
    NSObject<OS_dispatch_group> * _fetchRecordsGroup;
    bool  _hasCalledQueryCursorUpdatedBlock;
    unsigned long long  _numRequestsSent;
    CKQuery * _query;
    id /* block */  _queryCursorUpdatedBlock;
    id /* block */  _recordFetchCompletionBlock;
    CKDRecordFetchAggregator * _recordFetcher;
    NSMutableArray * _requestInfos;
    CKQueryCursor * _resultsCursor;
    unsigned long long  _resultsLimit;
    bool  _shouldFetchAssetContent;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByKey;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) <CKQueryOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) CKQueryCursor *cursor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredKeySet;
@property (nonatomic) bool fetchAllResults;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) bool hasCalledQueryCursorUpdatedBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (nonatomic, readonly) CKQuery *query;
@property (nonatomic, copy) id /* block */ queryCursorUpdatedBlock;
@property (nonatomic, copy) id /* block */ recordFetchCompletionBlock;
@property (nonatomic, retain) CKDRecordFetchAggregator *recordFetcher;
@property (nonatomic, retain) NSMutableArray *requestInfos;
@property (nonatomic, retain) CKQueryCursor *resultsCursor;
@property (nonatomic, readonly) unsigned long long resultsLimit;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_handleRecordResponses:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (id)_wrapError:(id)arg1 format:(id)arg2;
- (id)activityCreate;
- (id)assetTransferOptionsByKey;
- (id)cursor;
- (id)desiredKeySet;
- (bool)fetchAllResults;
- (id)fetchRecordsGroup;
- (bool)hasCalledQueryCursorUpdatedBlock;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (unsigned long long)numRequestsSent;
- (int)operationType;
- (id)pipeliningDescription;
- (id)query;
- (id /* block */)queryCursorUpdatedBlock;
- (id /* block */)recordFetchCompletionBlock;
- (id)recordFetcher;
- (id)relevantZoneIDs;
- (id)requestInfos;
- (id)resultsCursor;
- (unsigned long long)resultsLimit;
- (void)setAssetTransferOptionsByKey:(id)arg1;
- (void)setDesiredKeySet:(id)arg1;
- (void)setFetchAllResults:(bool)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setHasCalledQueryCursorUpdatedBlock:(bool)arg1;
- (void)setNumRequestsSent:(unsigned long long)arg1;
- (void)setQueryCursorUpdatedBlock:(id /* block */)arg1;
- (void)setRecordFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordFetcher:(id)arg1;
- (void)setRequestInfos:(id)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneID;

@end
