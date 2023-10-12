/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreDataTaggedObjectIDFactory : NSObject {
    int  _cd_rc;
    id  _fallbackFactories;
    unsigned int  _taggedPoolIndex;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)_fallbackFactory;
- (void)_setStoreInfo1:(id)arg1;
- (void)_storeDeallocated;
- (id)_storeInfo1;
- (id)alloc;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)allocateBatch:(id*)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithPK64:(long long)arg1;
- (id)managedObjectIDFromURIRepresentation:(id)arg1;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setObjectStoreIdentifier:(id)arg1;

@end