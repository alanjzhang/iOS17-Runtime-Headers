/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockOperation : NSOperation {
    id /* block */  _block;
    NSMutableArray * _executionBlocks;
}

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void)addExecutionBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)executionBlocks;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (void)main;

@end
