/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLModelMigrationHistory : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    NSArray * _migrationHistory;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)arg1;
- (bool)isLibraryOlderThanVersion:(unsigned short)arg1;
- (id)libraryVersionHistorySinceLastRebuildOnly:(bool)arg1;
- (bool)libraryWasEverRebuilt;

@end