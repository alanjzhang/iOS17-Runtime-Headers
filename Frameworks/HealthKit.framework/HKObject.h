/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    HKContributor * _contributor;
    double  _creationTimestamp;
    HKDevice * _device;
    HDDataOriginProvenance * _healthd_use_only_dataOriginProvenance;
    NSDictionary * _metadata;
    NSString * _sourceBundleIdentifier;
    HKSourceRevision * _sourceRevision;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSString *attachmentObjectIdentifier;
@property (nonatomic, readonly) NSString *attachmentSchemaIdentifier;
@property (nonatomic, readonly) HKContributor *contributor;
@property (getter=_creationDate, setter=_setCreationDate:, nonatomic, copy) NSDate *creationDate;
@property (getter=_creationTimestamp, setter=_setCreationTimestamp:, nonatomic) double creationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HKDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDDataOriginProvenance *hd_dataOriginProvenance;
@property (nonatomic, retain) HDDataOriginProvenance *healthd_use_only_dataOriginProvenance;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly) HKSource *source;
@property (getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:, nonatomic, copy) NSString *sourceBundleIdentifier;
@property (readonly) HKSourceRevision *sourceRevision;
@property (readonly) Class superclass;
@property (getter=_timeZoneName, nonatomic, readonly, copy) NSString *timeZoneName;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_copyByArchiving;
- (id)_creationDate;
- (double)_creationTimestamp;
- (long long)_externalSyncObjectCode;
- (id)_init;
- (void)_setContributor:(id)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setCreationTimestamp:(double)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setSourceBundleIdentifier:(id)arg1;
- (void)_setSourceRevision:(id)arg1;
- (void)_setUUID:(id)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_source;
- (id)_sourceBundleIdentifier;
- (id)_timeZoneName;
- (id)_validateConfiguration;
- (id)_validateConfigurationAllowingPrivateMetadata:(bool)arg1 applicationSDKVersion:(unsigned int)arg2;
- (void)_validateForCreation;
- (bool)_validateForSavingWithClientEntitlements:(id)arg1 applicationSDKVersion:(unsigned int)arg2 isAppleWatch:(bool)arg3 error:(id*)arg4;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)_valueDescription;
- (id)attachmentObjectIdentifier;
- (id)attachmentSchemaIdentifier;
- (id)contributor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)healthd_use_only_dataOriginProvenance;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (bool)prepareForDelivery:(id*)arg1;
- (bool)prepareForSaving:(id*)arg1;
- (void)setHealthd_use_only_dataOriginProvenance:(id)arg1;
- (id)source;
- (id)sourceRevision;

// HKObject (HKIntegerValueExtensions)

- (long long)hk_integerValue;

// HKObject (HKUUIDProvider)

- (id)hk_UUID;

// HKObject (HK_JSON)

- (id)asJSONObject;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// HKObject (HDCodingSupport)

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (id)codableRepresentationForSync;

// HKObject (HDDataEntity)

- (long long)entityType;
- (bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (id)hd_relatedJournalEntriesWithProfile:(id)arg1;

// HKObject (HDExtensions)

+ (id)hd_allObjectsToInsertWithObjects:(id)arg1;
+ (Class)hd_dataEntityClass;

- (id)hd_associatedObjects;
- (id)hd_associatedSampleTypes;
- (Class)hd_dataEntityClass;
- (id)hd_dataOriginProvenance;
- (id)hd_sampleType;

@end
