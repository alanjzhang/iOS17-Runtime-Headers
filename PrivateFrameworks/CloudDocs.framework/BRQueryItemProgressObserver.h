/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryItemProgressObserver : NSObject {
    bool  _isUpload;
    BRQueryItem * _item;
    NSProgress * _progress;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
    id  _subscriber;
}

@property (nonatomic, readonly) BRQueryItem *item;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_subscribe;
- (void)dealloc;
- (id)description;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)start;
- (void)stop;

@end