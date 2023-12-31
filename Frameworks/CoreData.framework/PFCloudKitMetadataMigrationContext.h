/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitMetadataMigrationContext : NSObject {
    NSMutableSet * _constrainedEntitiesToPreflight;
    NSManagedObjectModel * _currentModel;
    bool  _hasWorkToDo;
    NSMutableArray * _migrationStatements;
    bool  _needsAnalyzedHistoryCheck;
    bool  _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
    bool  _needsCleanupFromNeedsNewShareInvitationBug;
    bool  _needsImportAfterClientMigration;
    bool  _needsMetdataMigrationToNSCKRecordMetadata;
    bool  _needsMirroredRelationshipsLinkedToZone;
    bool  _needsOldTableDrop;
    NSMutableArray * _sqlEntitiesToCreate;
    NSSQLModel * _sqlModel;
    NSManagedObjectModel * _storeMetadataModel;
    NSNumber * _storeMetadataVersion;
    NSDictionary * _storeMetadataVersionHashes;
    NSSQLModel * _storeSQLModel;
}

- (void)addConstrainedEntityToPreflight:(id)arg1;
- (void)dealloc;
- (id)init;

@end
