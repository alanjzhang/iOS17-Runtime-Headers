/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface _CPLEngineStoreBatchedTransaction : NSObject {
    id /* block */  _block;
    id /* block */  _completionHandler;
    CPLTransaction * _dirty;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_releaseDirty;
- (id /* block */)block;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)init;
- (void)setBlock:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
