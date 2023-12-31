/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSocketPort : NSPort {
    NSMutableDictionary * _connectors;
    struct __CFDictionary { } * _data;
    id  _delegate;
    NSLock * _lock;
    struct __CFDictionary { } * _loops;
    struct __CFSocket { } * _receiver;
    unsigned long long  _retainCount;
    NSData * _signature;
    unsigned long long  _useCount;
}

@property (readonly, copy) NSData *address;
@property (readonly) int protocol;
@property (readonly) int protocolFamily;
@property (readonly) int socket;
@property (readonly) int socketType;

+ (void)_fixNSSocketPortLeak;
+ (void)initialize;
+ (bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;

- (void)_handleMessage:(struct __CFData { }*)arg1 from:(struct __CFData { }*)arg2 socket:(struct __CFSocket { }*)arg3;
- (void)_incrementUseCount;
- (id)_initRemoteWithSignature:(id)arg1;
- (id)_initWithRetainedCFSocket:(struct __CFSocket { }*)arg1 protocolFamily:(int)arg2 socketType:(int)arg3 protocol:(int)arg4;
- (bool)_isDeallocating;
- (struct __CFSocket { }*)_sendingSocketForPort:(id)arg1 beforeTime:(double)arg2;
- (bool)_tryRetain;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (id)address;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)handleConnDeath:(id)arg1;
- (void)handlePortMessage:(id)arg1;
- (id)init;
- (id)initRemoteWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)initRemoteWithTCPPort:(unsigned short)arg1 host:(id)arg2;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 address:(id)arg4;
- (id)initWithProtocolFamily:(int)arg1 socketType:(int)arg2 protocol:(int)arg3 socket:(int)arg4;
- (id)initWithTCPPort:(unsigned short)arg1;
- (void)invalidate;
- (bool)isValid;
- (int)protocol;
- (int)protocolFamily;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (bool)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;
- (id)signature;
- (int)socket;
- (int)socketType;

@end
