/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {
    NSSQLRowCache * _contextGenerationRowCache;
    NSString * _externalDataLinksDirectory;
    NSString * _externalDataReferencesDirectory;
    NSFaultHandler * _faultHandler;
    NSString * _fileBackedFuturesDirectory;
    NSDictionary * _metadataToWrite;
    NSArray * _objectIDsInsertUpdatedToPruneDATrigger;
    NSSet * _objectIDsToPruneTrigger;
    NSArray * _objectIDsUpdatedToPruneDATrigger;
    NSMutableDictionary * _originalCachedRows;
    NSSQLRowCache * _primaryRowCache;
    NSSQLSavePlan * _savePlan;
    NSMutableDictionary * _updateMasksForHistoryTracking;
}

- (void)dealloc;
- (void)executeEpilogue;
- (void)executePrologue;
- (bool)executeRequestCore:(id*)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)rowCache;

@end
