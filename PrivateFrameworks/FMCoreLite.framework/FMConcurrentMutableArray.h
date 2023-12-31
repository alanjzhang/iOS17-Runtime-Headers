/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMConcurrentMutableArray : NSObject {
    FMReadWriteLock * _lock;
    NSMutableArray * _underlyingArray;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) FMReadWriteLock *lock;
@property (nonatomic, retain) NSMutableArray *underlyingArray;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)lock;
- (id)nativeArray;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setLock:(id)arg1;
- (void)setUnderlyingArray:(id)arg1;
- (id)underlyingArray;

@end
