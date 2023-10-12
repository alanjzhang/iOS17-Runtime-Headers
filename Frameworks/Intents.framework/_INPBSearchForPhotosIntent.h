/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForPhotosIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForPhotosIntent> {
    _INPBActivityList * _activities;
    _INPBString * _albumName;
    _INPBDateTimeRange * _dateCreated;
    _INPBEventList * _events;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _excludedAttributes;
    _INPBGeographicalFeatureList * _geographicalFeatures;
    struct { }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _includedAttributes;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _locationCreated;
    _INPBString * _memoryName;
    _INPBContactList * _peopleInPhoto;
    _INPBPlaceList * _places;
    _INPBStringList * _searchTerm;
}

@property (nonatomic, retain) _INPBActivityList *activities;
@property (nonatomic, retain) _INPBString *albumName;
@property (nonatomic, retain) _INPBDateTimeRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBEventList *events;
@property (nonatomic, readonly) int*excludedAttributes;
@property (nonatomic, readonly) unsigned long long excludedAttributesCount;
@property (nonatomic, retain) _INPBGeographicalFeatureList *geographicalFeatures;
@property (nonatomic, readonly) bool hasActivities;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasDateCreated;
@property (nonatomic, readonly) bool hasEvents;
@property (nonatomic, readonly) bool hasGeographicalFeatures;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLocationCreated;
@property (nonatomic, readonly) bool hasMemoryName;
@property (nonatomic, readonly) bool hasPeopleInPhoto;
@property (nonatomic, readonly) bool hasPlaces;
@property (nonatomic, readonly) bool hasSearchTerm;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int*includedAttributes;
@property (nonatomic, readonly) unsigned long long includedAttributesCount;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *locationCreated;
@property (nonatomic, retain) _INPBString *memoryName;
@property (nonatomic, retain) _INPBContactList *peopleInPhoto;
@property (nonatomic, retain) _INPBPlaceList *places;
@property (nonatomic, retain) _INPBStringList *searchTerm;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsExcludedAttributes:(id)arg1;
- (int)StringAsIncludedAttributes:(id)arg1;
- (id)activities;
- (void)addExcludedAttribute:(int)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (id)albumName;
- (void)clearExcludedAttributes;
- (void)clearIncludedAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (int*)excludedAttributes;
- (id)excludedAttributesAsString:(int)arg1;
- (unsigned long long)excludedAttributesCount;
- (id)geographicalFeatures;
- (bool)hasActivities;
- (bool)hasAlbumName;
- (bool)hasDateCreated;
- (bool)hasEvents;
- (bool)hasGeographicalFeatures;
- (bool)hasIntentMetadata;
- (bool)hasLocationCreated;
- (bool)hasMemoryName;
- (bool)hasPeopleInPhoto;
- (bool)hasPlaces;
- (bool)hasSearchTerm;
- (unsigned long long)hash;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (int*)includedAttributes;
- (id)includedAttributesAsString:(int)arg1;
- (unsigned long long)includedAttributesCount;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)locationCreated;
- (id)memoryName;
- (id)peopleInPhoto;
- (id)places;
- (bool)readFrom:(id)arg1;
- (id)searchTerm;
- (void)setActivities:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setExcludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setGeographicalFeatures:(id)arg1;
- (void)setIncludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIntentMetadata:(id)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setMemoryName:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setPlaces:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)writeTo:(id)arg1;

@end
