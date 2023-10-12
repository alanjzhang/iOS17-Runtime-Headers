/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeEntity : PBCodable <NSCopying, NSSecureCoding, _INPBHomeEntity> {
    int  _deviceType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _deviceTypes;
    NSString * _entityIdentifier;
    _INPBDataString * _entityName;
    int  _entityType;
    _INPBDataString * _group;
    struct { 
        unsigned int deviceType : 1; 
        unsigned int entityType : 1; 
        unsigned int sceneType : 1; 
    }  _has;
    _INPBDataString * _home;
    _INPBString * _name;
    _INPBDataString * _room;
    int  _sceneType;
    _INPBDataString * _zone;
    NSArray * _zones;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType;
@property (nonatomic, readonly) int*deviceTypes;
@property (nonatomic, readonly) unsigned long long deviceTypesCount;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic, retain) _INPBDataString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, retain) _INPBDataString *group;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic, readonly) bool hasEntityIdentifier;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasGroup;
@property (nonatomic, readonly) bool hasHome;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasRoom;
@property (nonatomic) bool hasSceneType;
@property (nonatomic, readonly) bool hasZone;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDataString *home;
@property (nonatomic, retain) _INPBString *name;
@property (nonatomic, retain) _INPBDataString *room;
@property (nonatomic) int sceneType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *zone;
@property (nonatomic, copy) NSArray *zones;
@property (nonatomic, readonly) unsigned long long zonesCount;

+ (bool)supportsSecureCoding;
+ (Class)zonesType;

- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (int)StringAsDeviceTypes:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsSceneType:(id)arg1;
- (void)addDeviceTypes:(int)arg1;
- (void)addZones:(id)arg1;
- (void)clearDeviceTypes;
- (void)clearZones;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (int*)deviceTypes;
- (id)deviceTypesAsString:(int)arg1;
- (int)deviceTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceTypesCount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (id)entityName;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (id)group;
- (bool)hasDeviceType;
- (bool)hasEntityIdentifier;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasGroup;
- (bool)hasHome;
- (bool)hasName;
- (bool)hasRoom;
- (bool)hasSceneType;
- (bool)hasZone;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)room;
- (int)sceneType;
- (id)sceneTypeAsString:(int)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setDeviceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setGroup:(id)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasSceneType:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setSceneType:(int)arg1;
- (void)setZone:(id)arg1;
- (void)setZones:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zone;
- (id)zones;
- (id)zonesAtIndex:(unsigned long long)arg1;
- (unsigned long long)zonesCount;

@end
