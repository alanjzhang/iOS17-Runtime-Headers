/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFSpotlightResultWorkflowRunnerClient : WFWorkflowRunnerClient {
    <WFSpotlightResultRunnable> * _runnable;
}

- (void).cxx_destruct;
- (void)handleWorkflowRunResult:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 executionContext:(long long)arg2;
- (id)initWithRunnable:(id)arg1 surface:(unsigned long long)arg2;
- (bool)runnableRequiresSpotlightRefresh:(id)arg1;
- (void)start;

@end
