/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSSQLEntityMigrationDescription : NSObject {
    NSMutableArray * _addedManyToManys;
    NSSQLEntity * _dstEntity;
    NSEntityMapping * _entityMapping;
    int  _migrationType;
    NSMutableArray * _pendingTransforms;
    NSMutableArray * _processedTransforms;
    NSMutableArray * _removedManyToManys;
    NSMutableDictionary * _sourceEntitiesByToOneWithNewEntityKey;
    NSMutableDictionary * _sqlValuesByColumnName;
    NSSQLEntity * _srcEntity;
    NSMutableArray * _transformedManyToManys;
    bool  _updateUsingCopy;
}

@property (nonatomic, readonly) NSSQLEntity *sourceEntity;

- (void)dealloc;
- (id)description;
- (id)sourceEntity;
- (void)validateCloudKitEntityMigration;

@end
