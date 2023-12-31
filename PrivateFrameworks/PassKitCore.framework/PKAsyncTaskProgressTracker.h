/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAsyncTaskProgressTracker : NSObject {
    NSMutableSet * _completionHandlers;
    unsigned long long  _status;
}

@property (nonatomic, readonly) unsigned long long status;

- (void).cxx_destruct;
- (void)_executeCompletionHandlers;
- (id)init;
- (void)notifyOnCompletion:(id /* block */)arg1;
- (unsigned long long)status;
- (void)taskDidComplete;
- (void)taskDidStart;

@end
