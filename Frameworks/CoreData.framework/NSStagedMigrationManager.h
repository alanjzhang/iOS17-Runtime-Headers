/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStagedMigrationManager : NSObject {
    NSPersistentContainer * _container;
    NSArray * _stages;
}

@property (retain) NSPersistentContainer *container;
@property (readonly) NSArray *stages;

- (long long)_findCurrentMigrationStageFromModelChecksum:(id)arg1;
- (bool)_shouldAttemptStagedMigrationWithStoreModelVersionChecksum:(id)arg1 coordinatorModelVersionChecksum:(id)arg2 error:(id*)arg3;
- (id)container;
- (void)dealloc;
- (id)initWithMigrationStages:(id)arg1;
- (void)setContainer:(id)arg1;
- (id)stages;

@end