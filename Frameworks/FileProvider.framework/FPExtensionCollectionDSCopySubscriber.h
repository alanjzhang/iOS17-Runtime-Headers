/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPExtensionCollectionDSCopySubscriber : NSObject {
    bool  _dsCopyIsObserving;
    bool  _dsCopyShouldStopAccessingSubscriberURL;
    id  _dsCopySubscriber;
    NSObject<OS_dispatch_queue> * _dsCopySubscriberQueue;
    NSURL * _dsCopySubscriberURL;
}

- (void).cxx_destruct;
- (id)init;
- (void)markObserving;
- (void)startMonitoringWithURL:(id)arg1 publishingHandler:(id /* block */)arg2;
- (void)stopMonitoring;

@end
