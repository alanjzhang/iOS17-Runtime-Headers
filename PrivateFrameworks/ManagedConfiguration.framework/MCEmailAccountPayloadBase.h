/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEmailAccountPayloadBase : MCPayload <MCPerAccountVPNPayloadProtocol> {
    bool  _SMIMEEnabled;
    NSNumber * _SMIMEEnabledNum;
    bool  _SMIMEEncryptByDefaultUserOverrideable;
    NSNumber * _SMIMEEncryptionEnabled;
    NSData * _SMIMEEncryptionIdentityPersistentID;
    NSString * _SMIMEEncryptionIdentityUUID;
    bool  _SMIMEEncryptionIdentityUserOverrideable;
    bool  _SMIMEPerMessageSwitchEnabled;
    NSNumber * _SMIMEPerMessageSwitchEnabledNum;
    NSNumber * _SMIMESigningEnabled;
    NSData * _SMIMESigningIdentityPersistentID;
    NSString * _SMIMESigningIdentityUUID;
    bool  _SMIMESigningIdentityUserOverrideable;
    bool  _SMIMESigningUserOverrideable;
    NSString * _VPNUUID;
    bool  _isMailDropEnabled;
    NSNumber * _isMailDropEnabledNum;
    bool  _isRecentsSyncingDisabled;
    NSNumber * _isRecentsSyncingDisabledNum;
    bool  _preventAppSheet;
    NSNumber * _preventAppSheetNum;
    bool  _preventMove;
    NSNumber * _preventMoveNum;
}

@property (nonatomic) bool SMIMEEnabled;
@property (nonatomic, retain) NSNumber *SMIMEEnabledNum;
@property (nonatomic) bool SMIMEEncryptByDefaultUserOverrideable;
@property (nonatomic, retain) NSNumber *SMIMEEncryptionEnabled;
@property (nonatomic, retain) NSData *SMIMEEncryptionIdentityPersistentID;
@property (nonatomic, retain) NSString *SMIMEEncryptionIdentityUUID;
@property (nonatomic) bool SMIMEEncryptionIdentityUserOverrideable;
@property (nonatomic) bool SMIMEPerMessageSwitchEnabled;
@property (nonatomic, retain) NSNumber *SMIMEPerMessageSwitchEnabledNum;
@property (nonatomic, retain) NSNumber *SMIMESigningEnabled;
@property (nonatomic, retain) NSData *SMIMESigningIdentityPersistentID;
@property (nonatomic, retain) NSString *SMIMESigningIdentityUUID;
@property (nonatomic) bool SMIMESigningIdentityUserOverrideable;
@property (nonatomic) bool SMIMESigningUserOverrideable;
@property (nonatomic, readonly, retain) NSString *VPNUUID;
@property (nonatomic, readonly, retain) NSArray *calendarAccountIdentifiers;
@property (nonatomic, readonly, retain) NSArray *contactsAccountIdentifiers;
@property (nonatomic) bool isMailDropEnabled;
@property (nonatomic, retain) NSNumber *isMailDropEnabledNum;
@property (nonatomic) bool isRecentsSyncingDisabled;
@property (nonatomic, retain) NSNumber *isRecentsSyncingDisabledNum;
@property (nonatomic, readonly, retain) NSArray *mailAccountIdentifiers;
@property (nonatomic) bool preventAppSheet;
@property (nonatomic, retain) NSNumber *preventAppSheetNum;
@property (nonatomic) bool preventMove;
@property (nonatomic, retain) NSNumber *preventMoveNum;

- (void).cxx_destruct;
- (bool)SMIMEEnabled;
- (id)SMIMEEnabledNum;
- (bool)SMIMEEncryptByDefaultUserOverrideable;
- (id)SMIMEEncryptionEnabled;
- (id)SMIMEEncryptionIdentityPersistentID;
- (id)SMIMEEncryptionIdentityUUID;
- (bool)SMIMEEncryptionIdentityUserOverrideable;
- (bool)SMIMEPerMessageSwitchEnabled;
- (id)SMIMEPerMessageSwitchEnabledNum;
- (id)SMIMESigningEnabled;
- (id)SMIMESigningIdentityPersistentID;
- (id)SMIMESigningIdentityUUID;
- (bool)SMIMESigningIdentityUserOverrideable;
- (bool)SMIMESigningUserOverrideable;
- (id)VPNUUID;
- (void)addSMIMEEncryptionPayloadKeysTo:(id)arg1;
- (bool)containsSensitiveUserInformation;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isMailDropEnabled;
- (id)isMailDropEnabledNum;
- (bool)isRecentsSyncingDisabled;
- (id)isRecentsSyncingDisabledNum;
- (id)payloadDescriptionKeyValueSections;
- (bool)preventAppSheet;
- (id)preventAppSheetNum;
- (bool)preventMove;
- (id)preventMoveNum;
- (void)setIsMailDropEnabled:(bool)arg1;
- (void)setIsMailDropEnabledNum:(id)arg1;
- (void)setIsRecentsSyncingDisabled:(bool)arg1;
- (void)setIsRecentsSyncingDisabledNum:(id)arg1;
- (void)setPreventAppSheet:(bool)arg1;
- (void)setPreventAppSheetNum:(id)arg1;
- (void)setPreventMove:(bool)arg1;
- (void)setPreventMoveNum:(id)arg1;
- (void)setSMIMEEnabled:(bool)arg1;
- (void)setSMIMEEnabledNum:(id)arg1;
- (void)setSMIMEEncryptByDefaultUserOverrideable:(bool)arg1;
- (void)setSMIMEEncryptionEnabled:(id)arg1;
- (void)setSMIMEEncryptionIdentityPersistentID:(id)arg1;
- (void)setSMIMEEncryptionIdentityUUID:(id)arg1;
- (void)setSMIMEEncryptionIdentityUserOverrideable:(bool)arg1;
- (void)setSMIMEPerMessageSwitchEnabled:(bool)arg1;
- (void)setSMIMEPerMessageSwitchEnabledNum:(id)arg1;
- (void)setSMIMESigningEnabled:(id)arg1;
- (void)setSMIMESigningIdentityPersistentID:(id)arg1;
- (void)setSMIMESigningIdentityUUID:(id)arg1;
- (void)setSMIMESigningIdentityUserOverrideable:(bool)arg1;
- (void)setSMIMESigningUserOverrideable:(bool)arg1;
- (id)stubDictionary;
- (id)verboseDescription;

@end
