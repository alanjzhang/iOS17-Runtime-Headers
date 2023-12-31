/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLSchema : NSObject {
    NSDictionary * _tablesByName;
}

@property (nonatomic, readonly, copy) NSArray *tables;

- (void).cxx_destruct;
- (id)definitionWithDatabaseName:(id)arg1;
- (id)definitionWithDatabaseName:(id)arg1 includeIndexes:(bool)arg2;
- (id)description;
- (id)indexDefinitionsWithDatabaseName:(id)arg1;
- (id)initWithTables:(id)arg1;
- (id)tableForName:(id)arg1;
- (id)tables;

@end
