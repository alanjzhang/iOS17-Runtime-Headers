/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufAccount : PBCodable <NSCopying> {
    NSString * _accountDescription;
    ACProtobufAccountType * _accountType;
    bool  _active;
    bool  _authenticated;
    NSString * _authenticationType;
    ACProtobufAccountCredential * _credential;
    NSString * _credentialType;
    NSMutableArray * _dataclassProperties;
    ACProtobufDate * _date;
    NSMutableArray * _dirtyAccountProperties;
    NSMutableArray * _dirtyDataclassProperties;
    NSMutableArray * _dirtyProperties;
    NSMutableArray * _enabledDataclasses;
    struct { 
        unsigned int warmingUp : 1; 
    }  _has;
    NSString * _identifier;
    ACProtobufDate * _lastCredentialRenewalRejectionDate;
    NSString * _modificationID;
    ACProtobufURL * _objectID;
    NSString * _owningBundleID;
    ACProtobufAccount * _parentAccount;
    NSMutableArray * _properties;
    NSMutableArray * _provisionedDataclasses;
    bool  _supportsAuthentication;
    NSString * _username;
    bool  _visible;
    bool  _warmingUp;
}

@property (nonatomic, retain) NSString *accountDescription;
@property (nonatomic, retain) ACProtobufAccountType *accountType;
@property (nonatomic) bool active;
@property (nonatomic) bool authenticated;
@property (nonatomic, retain) NSString *authenticationType;
@property (nonatomic, retain) ACProtobufAccountCredential *credential;
@property (nonatomic, retain) NSString *credentialType;
@property (nonatomic, retain) NSMutableArray *dataclassProperties;
@property (nonatomic, copy) NSDictionary *dataclassPropertiesDictionary;
@property (nonatomic, retain) ACProtobufDate *date;
@property (nonatomic, retain) NSMutableArray *dirtyAccountProperties;
@property (nonatomic, retain) NSMutableArray *dirtyDataclassProperties;
@property (nonatomic, retain) NSMutableArray *dirtyProperties;
@property (nonatomic, retain) NSMutableArray *enabledDataclasses;
@property (nonatomic, readonly) bool hasAccountDescription;
@property (nonatomic, readonly) bool hasAuthenticationType;
@property (nonatomic, readonly) bool hasCredential;
@property (nonatomic, readonly) bool hasCredentialType;
@property (nonatomic, readonly) bool hasDate;
@property (nonatomic, readonly) bool hasLastCredentialRenewalRejectionDate;
@property (nonatomic, readonly) bool hasModificationID;
@property (nonatomic, readonly) bool hasObjectID;
@property (nonatomic, readonly) bool hasOwningBundleID;
@property (nonatomic, readonly) bool hasParentAccount;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic) bool hasWarmingUp;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) ACProtobufDate *lastCredentialRenewalRejectionDate;
@property (nonatomic, retain) NSString *modificationID;
@property (nonatomic, retain) ACProtobufURL *objectID;
@property (nonatomic, retain) NSString *owningBundleID;
@property (nonatomic, retain) ACProtobufAccount *parentAccount;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic, copy) NSDictionary *propertiesDictionary;
@property (nonatomic, retain) NSMutableArray *provisionedDataclasses;
@property (nonatomic) bool supportsAuthentication;
@property (nonatomic, retain) NSString *username;
@property (nonatomic) bool visible;
@property (nonatomic) bool warmingUp;

+ (Class)dataclassPropertiesType;
+ (Class)dirtyAccountPropertiesType;
+ (Class)dirtyDataclassPropertiesType;
+ (Class)dirtyPropertiesType;
+ (Class)enabledDataclassesType;
+ (Class)propertiesType;
+ (Class)provisionedDataclassesType;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountType;
- (bool)active;
- (void)addDataclassProperties:(id)arg1;
- (void)addDirtyAccountProperties:(id)arg1;
- (void)addDirtyDataclassProperties:(id)arg1;
- (void)addDirtyProperties:(id)arg1;
- (void)addEnabledDataclasses:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)addProvisionedDataclasses:(id)arg1;
- (bool)authenticated;
- (id)authenticationType;
- (void)clearDataclassProperties;
- (void)clearDirtyAccountProperties;
- (void)clearDirtyDataclassProperties;
- (void)clearDirtyProperties;
- (void)clearEnabledDataclasses;
- (void)clearProperties;
- (void)clearProvisionedDataclasses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)credentialType;
- (id)dataclassProperties;
- (id)dataclassPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataclassPropertiesCount;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dirtyAccountProperties;
- (id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyAccountPropertiesCount;
- (id)dirtyDataclassProperties;
- (id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyDataclassPropertiesCount;
- (id)dirtyProperties;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (id)enabledDataclasses;
- (id)enabledDataclassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledDataclassesCount;
- (bool)hasAccountDescription;
- (bool)hasAuthenticationType;
- (bool)hasCredential;
- (bool)hasCredentialType;
- (bool)hasDate;
- (bool)hasLastCredentialRenewalRejectionDate;
- (bool)hasModificationID;
- (bool)hasObjectID;
- (bool)hasOwningBundleID;
- (bool)hasParentAccount;
- (bool)hasUsername;
- (bool)hasWarmingUp;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)lastCredentialRenewalRejectionDate;
- (void)mergeFrom:(id)arg1;
- (id)modificationID;
- (id)objectID;
- (id)owningBundleID;
- (id)parentAccount;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (id)provisionedDataclasses;
- (id)provisionedDataclassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)provisionedDataclassesCount;
- (bool)readFrom:(id)arg1;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationType:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDirtyAccountProperties:(id)arg1;
- (void)setDirtyDataclassProperties:(id)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setEnabledDataclasses:(id)arg1;
- (void)setHasWarmingUp:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastCredentialRenewalRejectionDate:(id)arg1;
- (void)setModificationID:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOwningBundleID:(id)arg1;
- (void)setParentAccount:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProvisionedDataclasses:(id)arg1;
- (void)setSupportsAuthentication:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setWarmingUp:(bool)arg1;
- (bool)supportsAuthentication;
- (id)username;
- (bool)visible;
- (bool)warmingUp;
- (void)writeTo:(id)arg1;

// ACProtobufAccount (Helpers)

- (id)dataclassPropertiesDictionary;
- (id)propertiesDictionary;
- (void)setDataclassPropertiesDictionary:(id)arg1;
- (void)setPropertiesDictionary:(id)arg1;

@end
