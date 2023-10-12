/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNGroup : NSObject <ABSCNLegacyIdentifiable, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDate * _creationDate;
    NSString * _externalIdentifier;
    NSString * _externalModificationTag;
    NSData * _externalRepresentation;
    NSString * _externalUUID;
    int  _iOSLegacyIdentifier;
    NSString * _identifier;
    NSDate * _modificationDate;
    NSString * _name;
    CNGroup * _snapshot;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (nonatomic, readonly, copy) NSString *externalModificationTag;
@property (nonatomic, readonly, copy) NSData *externalRepresentation;
@property (nonatomic, readonly, copy) NSString *externalURI;
@property (nonatomic, readonly, copy) NSString *externalUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) CNGroup *snapshot;
@property (readonly) Class superclass;

+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalURI;
- (id)externalUUID;
- (unsigned long long)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 iOSLegacyIdentifier:(int)arg5;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)snapshot;

// CNGroup (Predicates)

+ (id)predicateForGroupsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForGroupsWithIdentifiers:(id)arg1;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1;

// CNGroup (Predicates_Private)

+ (id)predicateForGroupWithNameMatching:(id)arg1;
+ (id)predicateForGroupsWithMemberContact:(id)arg1 includeAllParentGroups:(bool)arg2;
+ (id)predicateForGroupsWithMemberGroup:(id)arg1 includeAllParentGroups:(bool)arg2;
+ (id)predicateForGroupsWithNameMatching:(id)arg1;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;

@end
