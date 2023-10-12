/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryExtensionManager : NSObject {
    <CXCallDirectoryExtensionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    CXCallDirectoryManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
    int  _storeExtensionsChangedNotifyToken;
}

@property (nonatomic) <CXCallDirectoryExtensionManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) CXCallDirectoryManager *manager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int storeExtensionsChangedNotifyToken;

- (void).cxx_destruct;
- (void)_extensionsChanged;
- (void)beginObservingExtensions;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)extensionsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)manager;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setEnabled:(bool)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (void)setStoreExtensionsChangedNotifyToken:(int)arg1;
- (int)storeExtensionsChangedNotifyToken;

@end
