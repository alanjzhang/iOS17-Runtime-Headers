/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMHashtag : NSObject <NSCopying, NSSecureCoding, REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, REMHashtagProtocol, REMObjectIDProviding, _REMDAChangeTrackableModel> {
    REMObjectID * _accountID;
    NSDate * _creationDate;
    NSString * _name;
    REMObjectID * _objectID;
    REMObjectID * _reminderID;
    long long  _type;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMObjectID *reminderID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 type:(long long)arg4 name:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 type:(long long)arg4 name:(id)arg5 creationDate:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHashtag:(id)arg1;
- (id)name;
- (id)objectID;
- (id)objectIdentifier;
- (id)remObjectID;
- (id)reminderID;
- (long long)type;

// REMHashtag (REMDAChangeTrackingHelper_Additions)

+ (bool)isChangeTrackableFetchableModel;
+ (bool)isChangeTrackableModel;

// REMHashtag (REMDAChangeTrackingHelper_PrivateAdditions)

+ (id /* block */)rem_DA_deletedKeyFromConcealedModelObjectBlock;
+ (id /* block */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* block */)rem_DA_fetchByObjectIDBlock;
+ (id /* block */)rem_DA_fetchByObjectIDsBlock;
+ (id)rem_DA_propertiesAffectingIsConcealed;
+ (bool)rem_DA_supportsConcealedObjects;
+ (bool)rem_DA_supportsFetching;

@end
