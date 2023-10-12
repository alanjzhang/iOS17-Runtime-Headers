/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximityHandshakeAction : SASProximityAction {
    SASProximityHandshake * _handshake;
}

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (void).cxx_destruct;
- (id)handshake;
- (bool)hasResponse;
- (id)init;
- (id)responsePayload;
- (void)setHandshake:(id)arg1;
- (void)setResponseFromData:(id)arg1;

@end
