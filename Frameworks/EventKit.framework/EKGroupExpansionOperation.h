/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKGroupExpansionOperation : NSOperation {
    NSString * _accountID;
    id /* block */  _completionBlock;
    EKDirectoryGroup * _group;
    bool  _isExecuting;
    bool  _isFinished;
    EKDirectorySearchResultSet * _resultsSet;
}

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_processResults:(id)arg1;
- (id)_processResults:(id)arg1 class:(Class)arg2;
- (id)initWithSource:(id)arg1 group:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)start;

@end
