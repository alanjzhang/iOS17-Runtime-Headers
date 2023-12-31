/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport {
    CUMessageSession * _actionMessageSession;
    CUMessageSession * _messageSession;
}

@property (retain) CUMessageSession *actionMessageSession;
@property (retain) CUMessageSession *messageSession;

- (void).cxx_destruct;
- (id)actionMessageSession;
- (void)activate;
- (id)initWithMessageSession:(id)arg1;
- (void)invalidate;
- (id)messageSession;
- (void)sendData:(id)arg1 response:(id /* block */)arg2;
- (void)setActionMessageSession:(id)arg1;
- (void)setMessageSession:(id)arg1;

@end
