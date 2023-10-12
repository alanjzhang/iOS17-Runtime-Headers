/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivitySummaryQueryServer : HDQueryServer {
    bool  _deliversUpdates;
    HDSQLitePredicate * _filterPredicate;
    bool  _hasSentInitialResults;
    long long  _lastProcessedAnchor;
    HDActivitySummaryQueryHelper * _queryHelper;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
