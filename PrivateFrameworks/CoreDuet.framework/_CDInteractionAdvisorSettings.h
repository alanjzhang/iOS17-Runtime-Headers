/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionAdvisorSettings : NSObject <NSCopying, NSSecureCoding> {
    bool  _aggregateByIdentifier;
    NSString * _callerBundleId;
    NSSet * _constrainAccounts;
    NSSet * _constrainBundleIds;
    NSSet * _constrainDirections;
    NSSet * _constrainDomainIdentifiers;
    NSSet * _constrainIdentifiers;
    NSSet * _constrainKeywords;
    NSSet * _constrainLocationUUIDs;
    long long  _constrainMaxRecipientCount;
    NSSet * _constrainMechanisms;
    NSSet * _constrainPersonIdType;
    NSSet * _constrainPersonIds;
    NSSet * _constrainRecipients;
    NSSet * _constrainSenders;
    NSString * _consumerIdentifier;
    NSString * _contactPrefix;
    NSSet * _ignoreContactIdentifiers;
    NSSet * _ignoreInteractionUUIDs;
    NSDate * _interactionDate;
    NSString * _interactionLocationUUID;
    NSString * _interactionTitle;
    bool  _requireOutgoingInteraction;
    unsigned long long  _resultLimit;
    NSSet * _seedIdentifiers;
    bool  _useFuture;
}

@property bool aggregateByIdentifier;
@property (retain) NSString *callerBundleId;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainDirections;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainIdentifiers;
@property (retain) NSSet *constrainKeywords;
@property (retain) NSSet *constrainLocationUUIDs;
@property long long constrainMaxRecipientCount;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainPersonIdType;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *constrainRecipients;
@property (retain) NSSet *constrainSenders;
@property (nonatomic, retain) NSString *consumerIdentifier;
@property (retain) NSString *contactPrefix;
@property (retain) NSSet *ignoreContactIdentifiers;
@property (retain) NSSet *ignoreInteractionUUIDs;
@property (retain) NSDate *interactionDate;
@property (retain) NSString *interactionLocationUUID;
@property (retain) NSString *interactionTitle;
@property bool requireOutgoingInteraction;
@property unsigned long long resultLimit;
@property (retain) NSSet *seedIdentifiers;
@property bool useFuture;

+ (id)extractContactIdentifiers:(id)arg1;
+ (id)interactionAdvisorSettingsDefault;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)aggregateByIdentifier;
- (id)callerBundleId;
- (id)constrainAccounts;
- (id)constrainBundleIds;
- (id)constrainDirections;
- (id)constrainDomainIdentifiers;
- (id)constrainIdentifiers;
- (id)constrainKeywords;
- (id)constrainLocationUUIDs;
- (long long)constrainMaxRecipientCount;
- (id)constrainMechanisms;
- (id)constrainPersonIdType;
- (id)constrainPersonIds;
- (id)constrainRecipients;
- (id)constrainSenders;
- (id)consumerIdentifier;
- (id)contactPredicate;
- (id)contactPrefix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)ignoreContactIdentifiers;
- (id)ignoreInteractionUUIDs;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interactionDate;
- (id)interactionLocationUUID;
- (id)interactionPredicate;
- (id)interactionTitle;
- (bool)requireOutgoingInteraction;
- (unsigned long long)resultLimit;
- (id)seedIdentifiers;
- (void)setAggregateByIdentifier:(bool)arg1;
- (void)setCallerBundleId:(id)arg1;
- (void)setConstrainAccounts:(id)arg1;
- (void)setConstrainBundleIds:(id)arg1;
- (void)setConstrainDirections:(id)arg1;
- (void)setConstrainDomainIdentifiers:(id)arg1;
- (void)setConstrainIdentifiers:(id)arg1;
- (void)setConstrainKeywords:(id)arg1;
- (void)setConstrainLocationUUIDs:(id)arg1;
- (void)setConstrainMaxRecipientCount:(long long)arg1;
- (void)setConstrainMechanisms:(id)arg1;
- (void)setConstrainPersonIdType:(id)arg1;
- (void)setConstrainPersonIds:(id)arg1;
- (void)setConstrainRecipients:(id)arg1;
- (void)setConstrainSenders:(id)arg1;
- (void)setConsumerIdentifier:(id)arg1;
- (void)setContactPrefix:(id)arg1;
- (void)setIgnoreContactIdentifiers:(id)arg1;
- (void)setIgnoreInteractionUUIDs:(id)arg1;
- (void)setInteractionDate:(id)arg1;
- (void)setInteractionLocationUUID:(id)arg1;
- (void)setInteractionTitle:(id)arg1;
- (void)setRequireOutgoingInteraction:(bool)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setSeedIdentifiers:(id)arg1;
- (void)setUseFuture:(bool)arg1;
- (bool)useFuture;

@end
