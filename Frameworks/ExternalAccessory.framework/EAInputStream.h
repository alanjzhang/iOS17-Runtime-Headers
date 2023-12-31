/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAInputStream : NSInputStream {
    EAAccessory * _accessory;
    id  _delegate;
    bool  _hasNewBytesAvailable;
    char * _inputFromAccBuffer;
    NSCondition * _inputFromAccCondition;
    NSMutableData * _inputFromAccData;
    NSObject<OS_dispatch_queue> * _inputFromAccQueue;
    bool  _isAtEndEventSent;
    bool  _isOpenCompletedEventSent;
    struct __CFRunLoop { } * _runLoop;
    struct __CFRunLoopSource { } * _runLoopSource;
    NSRecursiveLock * _runloopLock;
    EASession * _session;
    int  _sock;
    NSObject<OS_dispatch_source> * _sockListenSource;
    NSRecursiveLock * _statusLock;
    unsigned long long  _streamStatus;
    bool  _useSocket;
    int  _zeroBytesReadCount;
}

@property int zeroBytesReadCount;

- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_performAtEndOfStreamValidation;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (void)endStream;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;
- (id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2;
- (void)open;
- (void)openCompleted;
- (void)processIncomingAccessoryData:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setZeroBytesReadCount:(int)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (int)zeroBytesReadCount;

@end
