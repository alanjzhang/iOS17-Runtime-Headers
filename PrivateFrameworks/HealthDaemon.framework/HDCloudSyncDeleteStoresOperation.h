/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncDeleteStoresOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray * _storeRecordsToDelete;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *storeRecordsToDelete;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 storeRecordsToDelete:(id)arg3;
- (void)main;
- (id)storeRecordsToDelete;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end