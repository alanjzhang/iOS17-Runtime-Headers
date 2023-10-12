/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPPiggybackingPayloadProvider : NSObject <CDPKeychainCircleProxy> {
    KCJoiningRequestAccountCircleDelegate * _delegate;
    KCJoiningRequestCircleSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proxyWithSession:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)initiatingPayload:(id*)arg1;
- (bool)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id*)arg2;
- (bool)requiresInitialSync;
- (bool)supportsInteractiveAuth;

@end
