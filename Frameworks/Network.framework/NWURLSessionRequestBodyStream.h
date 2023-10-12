/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWURLSessionRequestBodyStream : NSObject <NSStreamDelegate, NWURLSessionRequestBodyProvider> {
    long long  _bytesSent;
    unsigned long long  _offset;
    NSObject<OS_dispatch_queue> * _queue;
    NWURLSessionReadRequest * _readRequest;
    NSInputStream * _stream;
    bool  _streamIsSetup;
}

@property (nonatomic, readonly) long long countOfBytesSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (long long)countOfBytesSent;
- (void)readMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
