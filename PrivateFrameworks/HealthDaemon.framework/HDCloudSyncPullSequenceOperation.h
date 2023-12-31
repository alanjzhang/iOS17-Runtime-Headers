/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncPullSequenceOperation : HDCloudSyncOperation {
    NSArray * _changeRecords;
    bool  _hasAppliedChange;
    HDCloudSyncSequenceRecord * _sequenceRecord;
    HDCloudSyncTarget * _target;
}

@property (nonatomic, readonly) bool hasAppliedChange;
@property (nonatomic, readonly) HDCloudSyncSequenceRecord *sequenceRecord;
@property (nonatomic, readonly) HDCloudSyncTarget *target;

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (bool)hasAppliedChange;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 changes:(id)arg5;
- (void)main;
- (id)sequenceRecord;
- (id)target;

@end
