/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPSearchCollection : FPQueryCollection <FPSearchQueryResultsProviding> {
    NSPredicate * _filterPredicate;
}

@property (nonatomic, copy) NSFileProviderSearchQuery *searchQuery;

- (void).cxx_destruct;
- (id)_createDescriptorWithSortDescriptors:(id)arg1;
- (id)_enumerationSettingsPredicate;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)init;
- (bool)isCollectionValidForItem:(id)arg1;
- (id)scopedSearchQuery;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;

@end
