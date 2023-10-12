/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareCopyDocumentURLForRecordID : BRShareOperation {
    id /* block */  _copyDocumentURLCompletionBlock;
    CKRecordID * _recordID;
    bool  _withServerLookup;
}

@property (copy) id /* block */ copyDocumentURLCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)copyDocumentURLCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithRecordID:(id)arg1 fileURL:(id)arg2 withServerLookup:(bool)arg3;
- (id)initWithRecordID:(id)arg1 withServerLookup:(bool)arg2;
- (void)main;
- (void)setCopyDocumentURLCompletionBlock:(id /* block */)arg1;

@end
