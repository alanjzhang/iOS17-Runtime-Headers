/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangeBatchChangeStorage : CPLChangeStorage {
    CPLChangeBatch * _batch;
    NSDictionary * _changesPerScopedIdentifier;
    NSString * _storageDescription;
}

@property (nonatomic, readonly) CPLChangeBatch *batch;

- (void).cxx_destruct;
- (id)batch;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)initWithBatch:(id)arg1 name:(id)arg2;
- (id)storageDescription;

@end
