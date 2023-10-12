/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDeviceConnection : NSObject {
    _IDSDeviceConnection * _internal;
}

@property (nonatomic, readonly) _IDSDeviceConnection *_internal;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) unsigned long long mtu;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) int socket;

- (void).cxx_destruct;
- (id)_internal;
- (void)close;
- (void)dealloc;
- (id)description;
- (id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)inputStream;
- (id)metrics;
- (unsigned long long)mtu;
- (id)outputStream;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (int)socket;
- (bool)updateConnectionWithOptions:(id)arg1 error:(id*)arg2;

@end
