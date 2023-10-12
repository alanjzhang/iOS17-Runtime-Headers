/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartCallIntent : PBCodable <NSCopying, NSSecureCoding, _INPBStartCallIntent> {
    int  _audioRoute;
    int  _callCapability;
    NSArray * _callGroups;
    _INPBCallRecordFilter * _callRecordFilter;
    _INPBCallRecordValue * _callRecordToCallBack;
    _INPBStartCallRequestMetadata * _callRequestMetadata;
    NSArray * _contacts;
    int  _destinationType;
    NSString * _faceTimeLink;
    struct { 
        unsigned int audioRoute : 1; 
        unsigned int callCapability : 1; 
        unsigned int destinationType : 1; 
        unsigned int isGroupCall : 1; 
        unsigned int preferredCallProvider : 1; 
        unsigned int recordTypeForRedialing : 1; 
        unsigned int ttyType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _isGroupCall;
    NSString * _notificationThreadIdentifier;
    int  _preferredCallProvider;
    int  _recordTypeForRedialing;
    int  _ttyType;
}

@property (nonatomic) int audioRoute;
@property (nonatomic) int callCapability;
@property (nonatomic, copy) NSArray *callGroups;
@property (nonatomic, readonly) unsigned long long callGroupsCount;
@property (nonatomic, retain) _INPBCallRecordFilter *callRecordFilter;
@property (nonatomic, retain) _INPBCallRecordValue *callRecordToCallBack;
@property (nonatomic, retain) _INPBStartCallRequestMetadata *callRequestMetadata;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destinationType;
@property (nonatomic, copy) NSString *faceTimeLink;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic) bool hasCallCapability;
@property (nonatomic, readonly) bool hasCallRecordFilter;
@property (nonatomic, readonly) bool hasCallRecordToCallBack;
@property (nonatomic, readonly) bool hasCallRequestMetadata;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic, readonly) bool hasFaceTimeLink;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasIsGroupCall;
@property (nonatomic, readonly) bool hasNotificationThreadIdentifier;
@property (nonatomic) bool hasPreferredCallProvider;
@property (nonatomic) bool hasRecordTypeForRedialing;
@property (nonatomic) bool hasTtyType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool isGroupCall;
@property (nonatomic, copy) NSString *notificationThreadIdentifier;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) int recordTypeForRedialing;
@property (readonly) Class superclass;
@property (nonatomic) int ttyType;

+ (Class)callGroupsType;
+ (Class)contactsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (int)StringAsCallCapability:(id)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (int)StringAsRecordTypeForRedialing:(id)arg1;
- (int)StringAsTTYType:(id)arg1;
- (void)addCallGroups:(id)arg1;
- (void)addContacts:(id)arg1;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (int)callCapability;
- (id)callCapabilityAsString:(int)arg1;
- (id)callGroups;
- (id)callGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callGroupsCount;
- (id)callRecordFilter;
- (id)callRecordToCallBack;
- (id)callRequestMetadata;
- (void)clearCallGroups;
- (void)clearContacts;
- (id)contacts;
- (id)contactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)faceTimeLink;
- (bool)hasAudioRoute;
- (bool)hasCallCapability;
- (bool)hasCallRecordFilter;
- (bool)hasCallRecordToCallBack;
- (bool)hasCallRequestMetadata;
- (bool)hasDestinationType;
- (bool)hasFaceTimeLink;
- (bool)hasIntentMetadata;
- (bool)hasIsGroupCall;
- (bool)hasNotificationThreadIdentifier;
- (bool)hasPreferredCallProvider;
- (bool)hasRecordTypeForRedialing;
- (bool)hasTtyType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)isGroupCall;
- (id)notificationThreadIdentifier;
- (int)preferredCallProvider;
- (id)preferredCallProviderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)recordTypeForRedialing;
- (id)recordTypeForRedialingAsString:(int)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setCallCapability:(int)arg1;
- (void)setCallGroups:(id)arg1;
- (void)setCallRecordFilter:(id)arg1;
- (void)setCallRecordToCallBack:(id)arg1;
- (void)setCallRequestMetadata:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setFaceTimeLink:(id)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasIsGroupCall:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasRecordTypeForRedialing:(bool)arg1;
- (void)setHasTtyType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setIsGroupCall:(bool)arg1;
- (void)setNotificationThreadIdentifier:(id)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setRecordTypeForRedialing:(int)arg1;
- (void)setTtyType:(int)arg1;
- (int)ttyType;
- (id)ttyTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
