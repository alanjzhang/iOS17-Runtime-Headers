/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCustomMigrationStage : NSMigrationStage {
    NSManagedObjectModelReference * _currentModel;
    id /* block */  _didMigrateHandler;
    NSManagedObjectModelReference * _nextModel;
    id /* block */  _willMigrateHandler;
}

@property (readonly) NSManagedObjectModelReference *currentModel;
@property (copy) id /* block */ didMigrateHandler;
@property (readonly) NSManagedObjectModelReference *nextModel;
@property (copy) id /* block */ willMigrateHandler;

- (id)currentModel;
- (void)dealloc;
- (id /* block */)didMigrateHandler;
- (id)initWithCurrentModelReference:(id)arg1 nextModelReference:(id)arg2;
- (id)nextModel;
- (void)setDidMigrateHandler:(id /* block */)arg1;
- (void)setWillMigrateHandler:(id /* block */)arg1;
- (id /* block */)willMigrateHandler;

@end
