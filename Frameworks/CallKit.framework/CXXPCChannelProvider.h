/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXXPCChannelProvider : CXChannelProvider {
    BSServiceConnection * _connection;
    CXChannelServiceDefinition * _definition;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) BSServiceConnection *connection;
@property (nonatomic, readonly) CXChannelServiceDefinition *definition;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)definition;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
- (id)queue;
- (bool)requiresProxyingAVAudioSessionState;
- (void)setConnection:(id)arg1;

@end
