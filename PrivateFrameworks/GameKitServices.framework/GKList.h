/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKList : NSObject {
    unsigned long long  _count;
    unsigned int * _items;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _size;
}

@property (readonly) unsigned long long count;

- (void)addID:(unsigned int)arg1;
- (void)addIDsFromList:(id)arg1;
- (id)allMatchingObjectsFromTable:(id)arg1;
- (void)copyItemsInto:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (bool)hasID:(unsigned int)arg1;
- (id)init;
- (id)initWithSize:(unsigned long long)arg1;
- (void)lock;
- (void)print;
- (void)removeAllIDs;
- (void)removeID:(unsigned int)arg1;
- (void)unlock;

@end
