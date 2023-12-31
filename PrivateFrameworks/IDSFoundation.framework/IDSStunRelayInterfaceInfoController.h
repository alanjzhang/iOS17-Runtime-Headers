/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSStunRelayInterfaceInfoController : NSObject {
    NSMutableDictionary * _tokenToRelayInterfaceInfoDeliveryStatus;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)candidatePairsFromRelayInterfaceInfo:(char *)arg1 bufferLength:(int)arg2 token:(id)arg3 sessionID:(id)arg4 error:(int*)arg5;
- (id)createRelayInterfaceInfoFromCandidatePairs:(id)arg1 token:(id)arg2;
- (unsigned long long)relayInterfaceInfoDeliveryStatus:(id)arg1;
- (void)removeCache:(id)arg1;
- (void)setRelayInterfaceInfoDeliveryStatus:(id)arg1 status:(unsigned long long)arg2;

@end
