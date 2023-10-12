/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangedRecordStorageView : CPLRecordStorageView {
    CPLRecordStorageView * _baseStorageView;
    CPLChangeStorage * _changeStorage;
}

@property (nonatomic, readonly) CPLRecordStorageView *baseStorageView;
@property (nonatomic, readonly) CPLChangeStorage *changeStorage;

- (void).cxx_destruct;
- (id)baseStorageView;
- (id)changeStorage;
- (id)description;
- (id)initWithChangeStorage:(id)arg1 overStorageView:(id)arg2;
- (id)recordViewWithScopedIdentifier:(id)arg1;
- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)redactedDescription;

// CPLChangedRecordStorageView (CPLClientCacheView)

- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class*)arg3 error:(id*)arg4;

@end