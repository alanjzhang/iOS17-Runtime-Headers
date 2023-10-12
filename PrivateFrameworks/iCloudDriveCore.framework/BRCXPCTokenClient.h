/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(id /* block */)arg3;
- (id)description;
- (void)fetchContainerPathForCurrentPersonaWithReply:(id /* block */)arg1;
- (void)fetchGroupContainerPathForCurrentPersonaForFPFS:(bool)arg1 withReply:(id /* block */)arg2;
- (void)fetchGroupContainerPathForCurrentPersonaWithReply:(id /* block */)arg1;
- (void)getPrimaryiCloudAccountStatus:(id /* block */)arg1;
- (void)prepareFileProvidersWithReply:(id /* block */)arg1;

@end
