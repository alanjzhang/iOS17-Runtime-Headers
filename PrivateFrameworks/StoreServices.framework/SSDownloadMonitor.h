/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadMonitor : NSObject {
    SSXPCConnection * _connection;
    <SSDownloadMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property <SSDownloadMonitorDelegate> *delegate;

- (id)_connection;
- (id)_copyItemsWithReply:(id)arg1 error:(id*)arg2;
- (void)_reloadForChangeNotification;
- (void)dealloc;
- (id)delegate;
- (void)getMonitorItemsWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)pauseMonitorItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)prioritizeMonitorItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resumeMonitorItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
