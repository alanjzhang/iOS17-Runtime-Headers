/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MSHistoryTransitItem : MSHistoryItem {
    void _muid;
    void _transitLineStorage;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSData *transitLineStorage;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 muid:(unsigned long long)arg2 transitLineStorage:(id)arg3;
- (unsigned long long)muid;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setTransitLineStorage:(id)arg1;
- (id)transitLineStorage;

@end
