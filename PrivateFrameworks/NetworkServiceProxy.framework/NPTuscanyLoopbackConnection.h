/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTuscanyLoopbackConnection : NSObject {
    unsigned long long  _blobSizes;
    unsigned long long  _currentBlobSizeIndex;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  _currentInputFrames;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  _protocol;
    bool  _waitingForOutput;
}

@property unsigned long long currentBlobSizeIndex;
@property (readonly) struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*protocol;
@property bool waitingForOutput;

- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;
- (unsigned long long)currentBlobSizeIndex;
- (void)dealloc;
- (void)handleDetachedFromProtocol;
- (void)handleOutputFrame:(id)arg1;
- (id)init;
- (void)notifyInputHandler;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)protocol;
- (void)setCurrentBlobSizeIndex:(unsigned long long)arg1;
- (void)setWaitingForOutput:(bool)arg1;
- (bool)waitingForOutput;

@end
