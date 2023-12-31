/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailContextCleanupTimer : NSObject {
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_os_transaction> * _transaction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _transactionLock;
}

- (void).cxx_destruct;
- (void)_timerFired;
- (void)activate;
- (id)initWithHandler:(id /* block */)arg1;
- (void)invalidate;
- (void)startOrRestartTimer;

@end
