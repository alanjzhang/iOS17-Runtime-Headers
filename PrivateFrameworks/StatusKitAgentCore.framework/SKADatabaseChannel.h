/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SKADatabaseChannel : NSObject {
    NSData * _channelToken;
    long long  _channelType;
    NSData * _currentOutgoingRatchetState;
    NSDate * _dateChannelCreated;
    bool  _decomissioned;
    NSString * _identifier;
    NSArray * _invitedUsers;
    bool  _personal;
    NSString * _presenceIdentifier;
    NSData * _presenceMembershipKey;
    NSData * _presencePeerKey;
    NSData * _presenceServerKey;
    NSString * _serviceIdentifier;
    NSString * _statusType;
}

@property (nonatomic, readonly) NSData *channelToken;
@property (nonatomic, readonly) long long channelType;
@property (nonatomic, readonly) MPStatusKitOutgoingRatchet *currentOutgoingRatchet;
@property (nonatomic, readonly) NSData *currentOutgoingRatchetState;
@property (nonatomic, retain) NSDate *dateChannelCreated;
@property (getter=isDecomissioned, nonatomic, readonly) bool decomissioned;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *invitedUsers;
@property (getter=isPersonal, nonatomic, readonly) bool personal;
@property (nonatomic, readonly, copy) NSString *presenceIdentifier;
@property (nonatomic, readonly) NSData *presenceMembershipKey;
@property (nonatomic, readonly) NSData *presencePeerKey;
@property (nonatomic, readonly) NSData *presenceServerKey;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly, copy) NSString *statusType;

+ (id)logger;

- (void).cxx_destruct;
- (id)channelToken;
- (long long)channelType;
- (id)currentOutgoingRatchetState;
- (id)dateChannelCreated;
- (id)description;
- (id)identifier;
- (id)initWithChannelToken:(id)arg1 channelType:(long long)arg2 identifier:(id)arg3 personal:(bool)arg4 decomissioned:(bool)arg5 currentOutgoingRatchetState:(id)arg6 dateCreated:(id)arg7 statusType:(id)arg8 presenceIdentifier:(id)arg9 serviceIdentifier:(id)arg10 invitedUsers:(id)arg11 presenceServerKey:(id)arg12 presencePeerKey:(id)arg13 presenceMembershipKey:(id)arg14;
- (id)invitedUsers;
- (bool)isDecomissioned;
- (bool)isPersonal;
- (id)presenceIdentifier;
- (id)presenceMembershipKey;
- (id)presencePeerKey;
- (id)presenceServerKey;
- (id)serviceIdentifier;
- (void)setDateChannelCreated:(id)arg1;
- (id)statusType;

// SKADatabaseChannel (CoreData)

- (id)initWithCoreDataChannels:(id)arg1;

// SKADatabaseChannel (CurrentOutgoingRatchet)

- (id)currentOutgoingRatchet;

@end
