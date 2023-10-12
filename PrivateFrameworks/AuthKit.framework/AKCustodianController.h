/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKCustodianController : NSObject <AKCustodianDaemonProtocol> {
    AKCustodianDaemonConnection * _daemonConnection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchCustodianDataRecoveryKeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCustodianRecoveryCodeConfigurationWithCompletion:(id /* block */)arg1;
- (void)fetchCustodianRecoveryTokenWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)finalizeCustodianSetupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)initiateCustodianSetupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performTrustedContactsDataSync:(id)arg1 completion:(id /* block */)arg2;
- (void)revokeCustodianWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)sendEmbargoEndNotificationFeedbackWithContext:(id)arg1 urlKey:(id)arg2 completion:(id /* block */)arg3;
- (void)startCustodianRecoveryRequestWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)startCustodianRecoveryTransactionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCustodianRecoveryKeyWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
