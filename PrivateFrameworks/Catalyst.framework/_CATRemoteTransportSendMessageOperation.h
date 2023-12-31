/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATRemoteTransportSendMessageOperation : CATOperation {
    CATMessage * _message;
    CATRemoteTransport * _transport;
}

@property (nonatomic, retain) CATMessage *message;
@property (nonatomic) CATRemoteTransport *transport;

- (void).cxx_destruct;
- (void)didEncodeData:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didSendData;
- (bool)isAsynchronous;
- (void)main;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
