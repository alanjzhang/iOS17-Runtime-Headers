/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage {
    CPLEngineStore * _store;
}

@property (nonatomic, readonly) CPLEngineStore *store;

- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)initWithStore:(id)arg1;
- (id)storageDescription;
- (id)store;

@end
