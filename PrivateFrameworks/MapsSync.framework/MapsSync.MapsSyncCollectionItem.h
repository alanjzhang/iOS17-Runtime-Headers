/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MapsSync.MapsSyncCollectionItem : MapsSync.MapsSyncBaseItem {
    void _collections;
}

@property (nonatomic, readonly) NSSet *collections;
@property (nonatomic, readonly) bool requiresCollection;

+ (id)fetchCollectionItemForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)collections;
- (id)copyWithZone:(void*)arg1;
- (void)executeOnFirstSave:(id)arg1;
- (id)initWithCollection:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (bool)requiresCollection;
- (void)setPropertiesWithObject:(id)arg1;

@end
