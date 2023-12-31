/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOperation : NSOperation {
    NSError * _error;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    long long  _status;
}

@property (readonly) NSError *error;
@property (readonly) long long status;

+ (void)initialize;

- (bool)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4;
- (void)dealloc;
- (void)didEnterTerminalState;
- (id)error;
- (bool)evaluateDependenciesAndMarkAsExecuting;
- (id)init;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)markAsCancelled;
- (void)markAsCompleted;
- (void)markAsFailedWithError:(id)arg1;
- (long long)status;

// AVOperation (ArrayOfOperations)

+ (long long)statusOfOperations:(id)arg1 error:(id*)arg2;

@end
