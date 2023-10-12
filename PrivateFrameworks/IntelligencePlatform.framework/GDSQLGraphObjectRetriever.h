/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDSQLGraphObjectRetriever : NSObject <GDObjectRetriever> {
    _PASSqliteDatabase * _db;
    long long  _entityClassIdentifier;
    NSString * _entityClassIdentifierName;
    NSString * _tableName;
    Class  _triplesIteratorRenderer;
}

- (void).cxx_destruct;
- (void)enumerateIdentifiersWithBlock:(id /* block */)arg1;
- (void)enumerateIdentifiersWithQuery:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithQuery:(id)arg1 block:(id /* block */)arg2;
- (id)objectForIdentifier:(id)arg1;

@end