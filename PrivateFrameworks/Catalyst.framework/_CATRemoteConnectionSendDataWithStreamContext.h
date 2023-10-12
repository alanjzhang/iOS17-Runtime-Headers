/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext> {
    unsigned long long  _bufferSize;
    unsigned long long  _bytesWritten;
    unsigned long long  _dataLength;
    NSInputStream * _stream;
    id  _userInfo;
    NSMutableData * mBuffer;
    unsigned long long  mBytesRead;
    NSData * mHeaderData;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic) unsigned long long bytesWritten;
@property (nonatomic, readonly) unsigned long long clientBytesWritten;
@property (nonatomic, readonly) unsigned long long dataLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBytesRemaining;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSInputStream *stream;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (unsigned long long)bufferSize;
- (id)bufferedDataWithError:(id*)arg1;
- (unsigned long long)bytesWritten;
- (unsigned long long)clientBytesWritten;
- (unsigned long long)dataLength;
- (void)dealloc;
- (bool)hasBytesRemaining;
- (id)initWithStream:(id)arg1 length:(unsigned long long)arg2 bufferSize:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)setBytesWritten:(unsigned long long)arg1;
- (id)stream;
- (id)userInfo;

@end
