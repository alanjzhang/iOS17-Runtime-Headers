/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLModelMigrationAction_RepairSingletons : PLModelMigrationActionPreRepair <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

+ (void)_repairRootFolderFixedOrderKeysInStore:(id)arg1 context:(id)arg2 pathManager:(id)arg3;
+ (bool)repairSingletonObjectsInDatabaseUsingContext:(id)arg1 pathManager:(id)arg2 error:(id*)arg3;

- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;

@end
