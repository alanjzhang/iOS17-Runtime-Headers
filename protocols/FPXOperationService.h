/* Generated by RuntimeBrowser.
 */

@protocol FPXOperationService

@required

- (void)attemptRecoveryFromError:(void *)arg1 optionIndex:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSError *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)bulkItemChanges:(void *)arg1 changedFields:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)deleteItemsWithIDs:(void *)arg1 baseVersions:(void *)arg2 options:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSProgress *)disconnectDomainID:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchDefaultContainerForBundleIdentifier:(void *)arg1 defaultName:(void *)arg2 inDomainIdentifier:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)fetchHierarchyForItemID:(void *)arg1 recursively:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: FPItemID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchItemID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (NSProgress *)fetchPublishingURLForItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchTrashIdentifiersWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSProgress *)performActionWithIdentifier:(void *)arg1 onItemsWithIdentifiers:(void *)arg2 domainIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)preflightReparentItemIDs:(void *)arg1 underParentID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)preflightTrashItemIDs:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)singleItemChange:(void *)arg1 changedFields:(void *)arg2 bounce:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: FPItem *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)startOperation:(void *)arg1 toFetchThumbnailsForItemIdentifiers:(void *)arg2 size:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: <FPOperationClient> *, NSArray *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toFetchThumbnailsWithDictionary:(void *)arg2 size:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: <FPOperationClient> *, NSDictionary *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateIgnoreStateOfItemWithIdentifiers:(void *)arg1 ignoreState:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)userCheckedSuppressionCheckboxForUserInteractionIdentifier:(void *)arg1 domainIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)userInteractionErrorsForPerformingAction:(void *)arg1 sourceItems:(void *)arg2 destinationItem:(void *)arg3 fpProviderDomainId:(void *)arg4 sourceItemKeysAllowList:(void *)arg5 destinationItemKeysAllowList:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 12: NSString *, NSArray *, FPItem *, NSString *, NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)wakeForSessionIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end