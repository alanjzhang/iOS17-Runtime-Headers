/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
 */

@interface AAProcessorManager : NSObject <AAFlushable> {
    void processorManager;
}

- (void).cxx_destruct;
- (void)addEventProcessor:(id)arg1;
- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)removeEventProcessor:(id)arg1;
- (void)resumeBackgroundProcessingForIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
