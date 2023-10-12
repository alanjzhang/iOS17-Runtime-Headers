/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportAssetDataRequest : NSObject {
    PHImportAsset * _asset;
    id /* block */  _cancelBlock;
    PHImportCanceler * _canceler;
}

@property (nonatomic, retain) PHImportAsset *asset;
@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, readonly) PHImportAsset *requestAsset;

- (void).cxx_destruct;
- (id)asset;
- (void)cancel;
- (id /* block */)cancelBlock;
- (id)initWithAsset:(id)arg1;
- (bool)isCanceled;
- (id)requestAsset;
- (void)setAsset:(id)arg1;
- (void)setCancelBlock:(id /* block */)arg1;

@end
