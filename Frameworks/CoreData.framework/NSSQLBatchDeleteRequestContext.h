/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBatchDeleteRequestContext : NSSQLBatchOperationRequestContext {
    NSArray * _deleteStatements;
    NSArray * _deletedObjectIDs;
    NSArray * _externalDataReferenceTriggerStatements;
    NSArray * _externalDataReferencesToDelete;
    NSSQLFetchRequestContext * _fetchContext;
    NSFetchRequest * _fetchRequestForObjectsToDelete;
    NSArray * _fileBackedFuturesToDelete;
}

@property (nonatomic, readonly) NSBatchDeleteRequest *request;

- (void)dealloc;
- (void)executePrologue;
- (bool)executeRequestCore:(id*)arg1;
- (bool)isWritingRequest;
- (id)request;

@end
