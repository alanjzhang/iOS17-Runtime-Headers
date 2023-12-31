/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    bool  _shouldPerformAnotherBatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldPerformAnotherBatch;
@property (readonly) Class superclass;

- (id)createActivity;
- (id)initWithSession:(id)arg1;
- (void)main;
- (void)performAfterSavingRecords:(id /* block */)arg1;
- (bool)shouldPerformAnotherBatch;
- (bool)shouldRetryForError:(id)arg1;

@end
