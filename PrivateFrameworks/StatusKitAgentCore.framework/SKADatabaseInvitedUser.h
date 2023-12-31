/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SKADatabaseInvitedUser : NSObject {
    NSDate * _dateInvitationPayloadCreated;
    NSData * _invitationPayloadData;
    NSString * _invitedHandle;
    NSString * _senderHandle;
}

@property (nonatomic, readonly) NSDate *dateInvitationPayloadCreated;
@property (nonatomic, readonly) SKInvitationPayload *invitationPayload;
@property (nonatomic, readonly) NSData *invitationPayloadData;
@property (nonatomic, readonly) NSString *invitedHandle;
@property (nonatomic, readonly) SKHandle *invitedSKHandle;
@property (nonatomic, readonly) NSString *senderHandle;
@property (nonatomic, readonly) SKHandle *senderSKHandle;

- (void).cxx_destruct;
- (id)dateInvitationPayloadCreated;
- (id)initWithInvitedHandle:(id)arg1 senderHande:(id)arg2 invitationPayloadData:(id)arg3 dateInvitationPayloadCreated:(id)arg4;
- (id)invitationPayloadData;
- (id)invitedHandle;
- (id)senderHandle;

// SKADatabaseInvitedUser (CoreData)

- (id)initWithCoreDataInvitedUser:(id)arg1;

// SKADatabaseInvitedUser (SKHandle)

- (id)invitationPayload;
- (id)invitedSKHandle;
- (id)senderSKHandle;

@end
