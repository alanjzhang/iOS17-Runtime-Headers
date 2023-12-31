/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalAsyncBlockQueue : NSObject {
    <CalAsyncBlockPerformer> * _blockPerformer;
    NSMutableSet * _pendingBlocks;
}

@property (nonatomic, readonly) <CalAsyncBlockPerformer> *blockPerformer;
@property (nonatomic, readonly) NSMutableSet *pendingBlocks;

- (void).cxx_destruct;
- (id)blockPerformer;
- (void)cancelAllPendingBlocks;
- (id)initWithBlockPerformer:(id)arg1;
- (id)pendingBlocks;
- (void)performAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (void)performAsync:(id /* block */)arg1;

@end
