/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCPacketRelaySocketConnection : NSObject <AVCPacketRelayConnectionProtocol> {
    bool  _isConnectedSocket;
    bool  _isDemuxNeeded;
    AVCPacketFilter * _packetFilter;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _readHandler;
    struct sockaddr { 
        unsigned char sa_len; 
        unsigned char sa_family; 
        BOOL sa_data[14]; 
    }  _remoteIPPort;
    unsigned int  _remoteIPPortLength;
    unsigned char  _type;
    int  _unixSocket;
    char * dataBuffer;
}

@property bool isDemuxNeeded;
@property (retain) AVCPacketFilter *packetFilter;
@property (copy) id /* block */ readHandler;
@property (readonly) unsigned char type;

- (void)dealloc;
- (id)description;
- (id)initWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3;
- (bool)isDemuxNeeded;
- (id)packetFilter;
- (id /* block */)readHandler;
- (void)readyToRead;
- (void)receiveDataOnSocket:(unsigned short)arg1;
- (bool)sendData:(const void*)arg1 size:(unsigned int)arg2 error:(id*)arg3;
- (void)setIsDemuxNeeded:(bool)arg1;
- (void)setPacketFilter:(id)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (int)start;
- (int)stop;
- (unsigned char)type;

@end
