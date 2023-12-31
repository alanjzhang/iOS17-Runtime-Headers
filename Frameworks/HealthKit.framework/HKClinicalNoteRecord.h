/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalNoteRecord : HKMedicalRecord <HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSArray * _authors;
    NSArray * _categories;
    NSArray * _categoriesCodingCollections;
    HKConcept * _documentType;
    HKMedicalCodingCollection * _documentTypeCodingCollection;
    HKMedicalDate * _noteCreationDate;
    HKMedicalDate * _relevantEndDate;
    HKMedicalDate * _relevantStartDate;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSArray *authors;
@property (readonly, copy) NSArray *categories;
@property (readonly, copy) NSArray *categoriesCodingCollections;
@property (readonly, copy) HKClinicalNoteRecordType *clinicalNoteRecordType;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *documentType;
@property (readonly, copy) HKMedicalCodingCollection *documentTypeCodingCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKMedicalDate *noteCreationDate;
@property (nonatomic, readonly) long long recordCategoryType;
@property (readonly, copy) HKMedicalDate *relevantEndDate;
@property (readonly, copy) HKMedicalDate *relevantStartDate;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newClinicalNoteRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 documentTypeCodingCollection:(id)arg14 noteCreationDate:(id)arg15 categoriesCodingCollections:(id)arg16 relevantStartDate:(id)arg17 relevantEndDate:(id)arg18 authors:(id)arg19 config:(id /* block */)arg20;
+ (id)clinicalNoteRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 documentTypeCodingCollection:(id)arg14 noteCreationDate:(id)arg15 categoriesCodingCollections:(id)arg16 relevantStartDate:(id)arg17 relevantEndDate:(id)arg18 authors:(id)arg19;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAuthors:(id)arg1;
- (void)_setCategories:(id)arg1;
- (void)_setCategoriesCodingCollections:(id)arg1;
- (void)_setDocumentType:(id)arg1;
- (void)_setDocumentTypeCodingCollection:(id)arg1;
- (void)_setNoteCreationDate:(id)arg1;
- (void)_setRelevantEndDate:(id)arg1;
- (void)_setRelevantStartDate:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)authors;
- (id)categories;
- (id)categoriesCodingCollections;
- (id)clinicalNoteRecordType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)documentType;
- (id)documentTypeCodingCollection;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)noteCreationDate;
- (id)relevantEndDate;
- (id)relevantStartDate;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;

// HKClinicalNoteRecord (CategoryType)

- (long long)recordCategoryType;

// HKClinicalNoteRecord (HKConceptIndexable)

+ (id)cachedConceptRelationshipKeyPaths;
+ (id)indexableConceptKeyPaths;

- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;

// HKClinicalNoteRecord (MedicalRecordCodings)

+ (id)defaultDisplayString;

- (id)medicalRecordCodings;

// HKClinicalNoteRecord (SortDate)

+ (id)clinicalNoteRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 statusCoding:(id)arg12 documentTypeCodingCollection:(id)arg13 noteCreationDate:(id)arg14 categoriesCodingCollections:(id)arg15 relevantStartDate:(id)arg16 relevantEndDate:(id)arg17 authors:(id)arg18;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// HKClinicalNoteRecord (HDExtensions)

+ (Class)hd_dataEntityClass;

@end
