/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareUnshareOperation : BRShareOperation {
    CKShare * _share;
    id /* block */  _unshareCompletionBlock;
}

@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ unshareCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;
- (id)initWithShare:(id)arg1 fileURL:(id)arg2;
- (void)main;
- (void)setShare:(id)arg1;
- (void)setUnshareCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)unshareCompletionBlock;

@end
