/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPInternalClient : NSObject {
    PPXPCClientHelper * _clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (bool)setTrialUseDefaultFiles:(bool)arg1 error:(id*)arg2;
- (id)sysdiagnoseInformationWithError:(id*)arg1;
- (bool)trialOverridePath:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 error:(id*)arg4;

@end
