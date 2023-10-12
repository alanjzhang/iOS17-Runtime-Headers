/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSHomeKitManager : NSObject <IDSDaemonListenerProtocol> {
    _IDSGenericCompletionHandler * _getAdminAccessTokensCompletion;
    _IDSGenericCompletionHandler * _getConsentTokensCompletion;
    _IDSGenericCompletionHandler * _getServiceUserIDsCompletion;
    _IDSGenericCompletionHandler * _getUserAccessTokensCompletion;
    _IDSGenericCompletionHandler * _refreshUserAccessTokensCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)adminAccessTokens:(id)arg1 error:(id)arg2;
- (void)consentTokens:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)getAdminAccessTokensWithWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 completionBlock:(id /* block */)arg4 queue:(id)arg5;
- (void)getConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 completionBlock:(id /* block */)arg4 queue:(id)arg5;
- (void)getServiceUserIDsWithCompletionBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)getUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 completionBlock:(id /* block */)arg5 queue:(id)arg6;
- (id)init;
- (void)refreshUserAccessTokens:(id)arg1 error:(id)arg2;
- (void)refreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 completionBlock:(id /* block */)arg4 queue:(id)arg5;
- (void)serviceUserIDs:(id)arg1 error:(id)arg2;
- (void)userAccessTokens:(id)arg1 error:(id)arg2;

@end
