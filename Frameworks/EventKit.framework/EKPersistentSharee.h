/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSharee : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (id)UUID;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (int)entityType;
- (id)externalID;
- (id)firstName;
- (id)lastName;
- (id)owner;
- (void)setAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setShareeAccessLevelRaw:(int)arg1;
- (void)setShareeMuteRemoval:(bool)arg1;
- (void)setShareeStatusRaw:(int)arg1;
- (void)setUUID:(id)arg1;
- (int)shareeAccessLevelRaw;
- (bool)shareeMuteRemoval;
- (int)shareeStatusRaw;

@end