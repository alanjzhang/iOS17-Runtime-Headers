/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2AccessoryServerSecureTransportPairSetup : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultEncryptedSession;

- (id)initWithTransport:(id)arg1 operationQueue:(id)arg2 encryptedSession:(id)arg3;
- (void)transport:(id)arg1 didReceiveEvent:(id)arg2;

@end
