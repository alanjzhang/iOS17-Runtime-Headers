/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSBoundedQueue : NSObject {
    struct dispatch_semaphore_s { } * _boundsExceeded;
    unsigned long long  _bytesErrorLevel;
    unsigned long long  _bytesUpperBound;
    NSMutableArray * _entries;
    bool  _isValid;
}

@property (nonatomic) struct dispatch_semaphore_s { }*boundsExceeded;
@property (nonatomic) unsigned long long bytesErrorLevel;
@property (nonatomic, readonly) unsigned long long bytesUpperBound;
@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic, readonly) bool isValid;

- (void).cxx_destruct;
- (unsigned long long)_sync_aggregateByteCount;
- (bool)_sync_isFull;
- (void)addData:(id)arg1;
- (struct dispatch_semaphore_s { }*)boundsExceeded;
- (unsigned long long)bytesErrorLevel;
- (unsigned long long)bytesUpperBound;
- (void)dealloc;
- (id)entries;
- (id)initWithUpperBound:(unsigned long long)arg1;
- (void)invalidate;
- (bool)isValid;
- (void)removeNextDataWithBlock:(id /* block */)arg1;
- (void)setBoundsExceeded:(struct dispatch_semaphore_s { }*)arg1;
- (void)setBytesErrorLevel:(unsigned long long)arg1;
- (void)setEntries:(id)arg1;

@end
