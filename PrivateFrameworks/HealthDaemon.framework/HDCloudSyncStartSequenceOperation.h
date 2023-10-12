/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStartSequenceOperation : HDCloudSyncSynchronousOperation {
    HDCloudSyncSequenceRecord * _replacedSequenceRecord;
    HDCloudSyncSequenceRecord * _sequenceRecord;
    HDCloudSyncSequenceState * _sequenceState;
    bool  _shouldClearRebaselineDeadline;
    HDCloudSyncTarget * _target;
}

@property (nonatomic, readonly, copy) HDCloudSyncSequenceState *sequenceState;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 sequence:(id)arg4 replacingSequence:(id)arg5 shouldClearRebaselineDeadline:(bool)arg6;
- (bool)performWithError:(id*)arg1;
- (id)sequenceState;

@end