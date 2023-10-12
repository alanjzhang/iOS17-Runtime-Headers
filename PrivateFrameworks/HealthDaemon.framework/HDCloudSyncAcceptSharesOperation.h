/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncAcceptSharesOperation : HDCloudSyncOperation {
    NSArray * _acceptedShares;
    NSDictionary * _invitationTokensByShareURLs;
    CKShareParticipant * _ownerParticipant;
    NSArray * _shareURLs;
}

@property (nonatomic, readonly, copy) NSArray *acceptedShares;
@property (nonatomic, readonly, copy) NSDictionary *invitationTokensByShareURLs;
@property (nonatomic, readonly, copy) CKShareParticipant *ownerParticipant;
@property (nonatomic, readonly, copy) NSArray *shareURLs;

- (void).cxx_destruct;
- (id)acceptedShares;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 shareURLs:(id)arg3 invitationTokensByShareURL:(id)arg4;
- (id)invitationTokensByShareURLs;
- (void)main;
- (id)ownerParticipant;
- (id)shareURLs;

@end
