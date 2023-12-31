/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKNetworkObserver : NSObject {
    NSMutableDictionary * _callbacksByObserver;
    bool  _isNetworkReachable;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
}

@property (nonatomic, readonly) bool isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_onqueue_networkReachabilityDidChange;
- (void)_startPathMonitor;
- (void)_stopPathMonitor;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (bool)isNetworkReachable;
- (void)removeNetworkReachableObserver:(id)arg1;

@end
