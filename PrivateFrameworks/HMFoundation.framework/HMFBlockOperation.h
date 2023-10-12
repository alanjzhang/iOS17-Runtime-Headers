/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFBlockOperation : HMFOperation {
    NSArray * _executionBlocks;
}

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)arg1;
- (id)executionBlocks;
- (id)initWithTimeout:(double)arg1;
- (void)main;

@end
