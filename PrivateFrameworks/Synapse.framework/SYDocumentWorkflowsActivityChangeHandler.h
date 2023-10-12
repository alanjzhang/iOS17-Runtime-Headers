/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Synapse.framework/Synapse
 */

@interface SYDocumentWorkflowsActivityChangeHandler : NSObject {
    SYDocumentWorkflowsClient * _client;
    NSObject<OS_dispatch_queue> * _retryQueue;
}

+ (id)_indexKeyFromUserActivity:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchAttributesForItemsWithIndexKeys:(id)arg1 maxRetryCount:(long long)arg2 completion:(id /* block */)arg3;
- (bool)canHandleUserActivityChange:(id)arg1 appStateObserver:(id)arg2;
- (void)handleActiveUserActivityChange:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;

@end
