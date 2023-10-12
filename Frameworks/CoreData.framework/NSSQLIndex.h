/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLIndex : NSObject {
    NSMutableArray * _createStrings;
    NSMutableArray * _dropStrings;
    NSFetchIndexDescription * _indexDescription;
    NSSQLEntity * _sqlEntity;
    NSMutableArray * _updateStrings;
}

@property (nonatomic, readonly, retain) NSFetchIndexDescription *indexDescription;
@property (nonatomic, readonly) NSSQLEntity *sqlEntity;

- (id)bulkUpdateStatementsForStore:(id)arg1;
- (void)dealloc;
- (id)dropStatementsForStore:(id)arg1;
- (id)generateStatementsForStore:(id)arg1;
- (id)indexDescription;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isUnique;
- (id)sqlEntity;

@end
