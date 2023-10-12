/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {
    id /* block */  _block;
    NSMutableArray * _items;
    NSDate * _lastNotify;
    NSObject<OS_dispatch_queue> * _queue;
    PHImportDeviceSource * _source;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)coalesceItems:(id)arg1;
- (id)initWithSource:(id)arg1 block:(id /* block */)arg2;

@end
