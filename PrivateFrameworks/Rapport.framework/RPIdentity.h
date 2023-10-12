/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPIdentity : NSObject <NSSecureCoding> {
    NSArray * _accessGroups;
    NSString * _accountID;
    NSDictionary * _acl;
    NSData * _btAddress;
    NSData * _btIRKData;
    NSString * _contactID;
    NSDate * _dateAcknowledged;
    NSDate * _dateAdded;
    NSDate * _dateRemoved;
    NSDate * _dateRequested;
    NSData * _deviceIRKData;
    bool  _disabled;
    NSData * _edPKData;
    NSData * _edSKData;
    unsigned long long  _featureFlags;
    NSUUID * _homeKitUserIdentifier;
    NSString * _identifier;
    NSString * _idsDeviceID;
    NSString * _mediaRemoteID;
    NSString * _mediaRouteID;
    NSString * _model;
    NSString * _name;
    bool  _present;
    unsigned int  _revisionID;
    NSString * _sendersKnownAlias;
    int  _type;
    bool  _userAdded;
}

@property (nonatomic, copy) NSArray *accessGroups;
@property (nonatomic, copy) NSString *accountID;
@property (nonatomic, copy) NSDictionary *acl;
@property (nonatomic, copy) NSData *btAddress;
@property (nonatomic, copy) NSData *btIRKData;
@property (nonatomic, copy) NSString *contactID;
@property (nonatomic, copy) NSDate *dateAcknowledged;
@property (nonatomic, copy) NSDate *dateAdded;
@property (nonatomic, copy) NSDate *dateRemoved;
@property (nonatomic, copy) NSDate *dateRequested;
@property (nonatomic, copy) NSData *deviceIRKData;
@property (nonatomic) bool disabled;
@property (nonatomic, copy) NSData *edPKData;
@property (nonatomic, copy) NSData *edSKData;
@property (nonatomic) unsigned long long featureFlags;
@property (nonatomic, copy) NSUUID *homeKitUserIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsDeviceID;
@property (nonatomic, copy) NSString *mediaRemoteID;
@property (nonatomic, copy) NSString *mediaRouteID;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool present;
@property (nonatomic) unsigned int revisionID;
@property (nonatomic, copy) NSString *sendersKnownAlias;
@property (nonatomic) int type;
@property (nonatomic) bool userAdded;

+ (id)nullIdentity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessGroups;
- (id)accountID;
- (id)acl;
- (id)authTagForData:(id)arg1 type:(int)arg2 error:(id*)arg3;
- (id)btAddress;
- (id)btIRKData;
- (unsigned int)compareWithRPIdentity:(id)arg1;
- (id)contactID;
- (id)dateAcknowledged;
- (id)dateAdded;
- (id)dateRemoved;
- (id)dateRequested;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceIRKData;
- (bool)disabled;
- (id)edPKData;
- (id)edSKData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureFlags;
- (id)homeKitUserIdentifier;
- (id)identifier;
- (id)idsDeviceID;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairedPeer:(id)arg1 type:(int)arg2;
- (id)initWithType:(int)arg1;
- (id)mediaRemoteID;
- (id)mediaRouteID;
- (id)model;
- (id)name;
- (bool)present;
- (unsigned int)revisionID;
- (id)sendersKnownAlias;
- (void)setAccessGroups:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setAcl:(id)arg1;
- (void)setBtAddress:(id)arg1;
- (void)setBtIRKData:(id)arg1;
- (void)setContactID:(id)arg1;
- (void)setDateAcknowledged:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setDateRemoved:(id)arg1;
- (void)setDateRequested:(id)arg1;
- (void)setDeviceIRKData:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEdPKData:(id)arg1;
- (void)setEdSKData:(id)arg1;
- (void)setFeatureFlags:(unsigned long long)arg1;
- (void)setHomeKitUserIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDeviceID:(id)arg1;
- (void)setMediaRemoteID:(id)arg1;
- (void)setMediaRouteID:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setRevisionID:(unsigned int)arg1;
- (void)setSendersKnownAlias:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserAdded:(bool)arg1;
- (id)signData:(id)arg1 error:(id*)arg2;
- (bool)signDataPtr:(const void*)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char)arg3 error:(id*)arg4;
- (int)type;
- (unsigned int)updateWithKeychainItem:(id)arg1 error:(id*)arg2;
- (unsigned int)updateWithRPMessage:(id)arg1 error:(id*)arg2;
- (bool)userAdded;
- (bool)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id*)arg4;
- (bool)verifyAuthTagPtr:(const void*)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id*)arg6;
- (bool)verifySignature:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)verifySignaturePtr:(const void*)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 error:(id*)arg5;

@end
