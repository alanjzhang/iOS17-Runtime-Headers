/* Generated by RuntimeBrowser.
 */

@protocol BRProtocolLegacy <BRProtocolShared, BRShareOperationLegacyProtocol>

@required

- (void)boostFilePresenterAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)capabilityWhenTryingToReparentItemAtURL:(void *)arg1 toNewParent:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, NSError *, void*
- (void)checkIfItemIsShareableWithInode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)copyBulkShareIDsAtURLs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)copyCollaborationIdentifierForItemAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)evictItemAtURL:(void *)arg1 options:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchLatestVersionForFileAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)forceConflictForURL:(void *)arg1 bookmarkData:(void *)arg2 forcedEtag:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)gatherInformationForPath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getAttributeValues:(void *)arg1 forItemAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMutableDictionary *, NSError *, void*
- (void)getBackReferencingContainerIDsForURLs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getBookmarkDataForURL:(void *)arg1 onlyAllowItemKnowByServer:(void *)arg2 allowAccessByBundleID:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSURL *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)getCreatorNameComponentsForURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSPersonNameComponents *, NSError *, void*
- (void)getEvictableSpaceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getNonLocalVersionSenderWithReceiver:(void *)arg1 documentURL:(void *)arg2 includeCachedVersions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: <BRNonLocalVersionReceiving> *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BRNonLocalVersionSending> *, NSURL *, NSError *, void*
- (void)getPausedFilesList:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: BRGetPausedFileListUpdater *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getPublishedURLForItemAtURL:(void *)arg1 forStreaming:(void *)arg2 requestedTTL:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSURL *, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDate *, NSError *, void*
- (void)getQueryItemForURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BRQueryItem *, NSError *, void*
- (void)getURLForItemIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)getiWorkNeedsShareMigrateAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getiWorkPublishingBadgingStatusAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)getiWorkPublishingInfoAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSString *, NSError *, void*
- (void)launchItemCountMismatchChecksAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)listFilesIngested:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)moveBRSecurityBookmarkAtURL:(void *)arg1 toURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)overwriteAccessTimeForItemAtURL:(void *)arg1 atime:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)pauseSyncForFileAtURL:(void *)arg1 timeout:(void *)arg2 options:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)readerThrottleBackoffForDocumentAtPath:(void *)arg1 containerID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)removeItemFromDisk:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resolveConflictWithName:(void *)arg1 atURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resolveFileObjectIDToURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 11: BRFileObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSData *, NSURL *, NSData *, NSError *, void*
- (void)resumeSyncForFileAtURL:(void *)arg1 dropLocalChanges:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)scheduleDeepScanForContainer:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setiWorkPublishingInfoAtURL:(void *)arg1 publish:(void *)arg2 readonly:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startDownloadItemsAtURLs:(void *)arg1 options:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toDownloadItemAtURL:(void *)arg2 readingOptions:(void *)arg3 wantsCurrentVersion:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSObject<BROperationClient> *, NSURL *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toEvictItemAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)thumbnailChangedForItemAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)trashItemAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)updateItemFromURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BRQueryItem *, NSError *, void*
- (void)waitForFileSystemChangeProcessingWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
