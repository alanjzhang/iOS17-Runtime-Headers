/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKBaseFollowupManager : NSObject {
    <AKFollowUpItemFactory> * _factory;
    <AKFollowUpProvider> * _provider;
}

- (void).cxx_destruct;
- (id)_alignedInsertionCandidates:(id)arg1 withExistingItems:(id)arg2;
- (id)initWithFollowUpFactory:(id)arg1 provider:(id)arg2;
- (bool)synchronizeFollowUpsWithServerPayload:(id)arg1 altDSID:(id)arg2 error:(id*)arg3;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
