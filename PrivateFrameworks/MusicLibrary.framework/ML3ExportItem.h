/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ExportItem : NSObject {
    Class  _entityClass;
    ML3MusicLibrary * _library;
    long long  _persistentId;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) long long persistentId;

+ (unsigned int*)allExportPropertyKeysForEntityClass:(Class)arg1 returnedCount:(unsigned int*)arg2;

- (void).cxx_destruct;
- (id)_allExportPropertyNames;
- (id)_propertyNameForKey:(unsigned int)arg1;
- (id)_propertyNamesFromKeys:(unsigned int*)arg1 numKeys:(unsigned int)arg2;
- (BOOL)charValueForProperty:(unsigned int)arg1;
- (id)dataValueForProperty:(unsigned int)arg1;
- (id)description;
- (Class)entityClass;
- (id)exportData;
- (bool)hasValueForProperty:(unsigned int)arg1;
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 library:(id)arg3;
- (id)initWithPersistentId:(long long)arg1 entityClass:(id)arg2 properties:(id)arg3 library:(id)arg4;
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 propertyKeysToExport:(unsigned int*)arg3 numKeys:(unsigned int)arg4 library:(id)arg5;
- (bool)isValid;
- (id)library;
- (int)longValueForProperty:(unsigned int)arg1;
- (long long)longlongValueForProperty:(unsigned int)arg1;
- (long long)persistentId;
- (unsigned int*)propertyKeysToExport:(unsigned int*)arg1;
- (short)shortValueForProperty:(unsigned int)arg1;
- (id)stringValueForProperty:(unsigned int)arg1;
- (id)valueForProperty:(unsigned int)arg1;

@end
