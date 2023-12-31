/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CN : NSObject

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts

// CN (CNContainerPropertyDescription)

+ (id)allContainerProperties;
+ (id)containerAccountIdentifierDescription;
+ (id)containerConstraintsPathDescription;
+ (id)containerEnabledDescription;
+ (id)containerExternalIdentifierDescription;
+ (id)containerExternalModificationTagDescription;
+ (id)containerExternalSyncDataDescription;
+ (id)containerExternalSyncTagDescription;
+ (id)containerGuardianRestrictedDescription;
+ (id)containerGuardianStateDirtyDescription;
+ (id)containerIdentifierDescription;
+ (id)containerLastSyncDateDescription;
+ (id)containerMeIdentifierDescription;
+ (id)containerNameDescription;
+ (id)containerRestrictionsDescription;
+ (id)containerTypeDescription;
+ (id)containeriOSLegacyIdentifierDescription;
+ (id)writableContainerProperties;

// CN (CNInternationalSupport)

+ (bool)hasContactChineseJapaneseKoreanName:(id)arg1;
+ (bool)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1;
+ (bool)isEmptyNameContact:(id)arg1 phonetic:(bool)arg2 includingPrefixAndSuffix:(bool)arg3;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3;
+ (id)keyVectorForAllUsedKeysForInternationalSupport;
+ (id)localizedNameDelimiterForContact:(id)arg1;
+ (id)localizedPhoneticNameDelimiterForContact:(id)arg1;
+ (id)orderForContactName:(id)arg1;
+ (id)orderForContactName:(id)arg1 phonetic:(bool)arg2;
+ (id)orderForContactPhoneticName:(id)arg1;
+ (id)requiredPropertiesForNameScriptDetection;
+ (id)requiredPropertiesForPhoneticNameScriptDetection;
+ (bool)shouldContactUseFamilyGivenNameOrder:(id)arg1;

// CN (CNObjectValidation)

+ (bool)areValidDayComponents:(id)arg1 error:(id*)arg2;
+ (bool)areValidGregorianDayComponents:(id)arg1 error:(id*)arg2;
+ (bool)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id*)arg5;
+ (bool)areValidNonGregorianDayComponents:(id)arg1 error:(id*)arg2;

// CN (DataMapper)

+ (Class)defaultDataMapperClass;

// CN (MultiValueTransforms)

+ (id /* block */)addressingGrammarFromEncryptedStringTransform;
+ (id /* block */)addressingGrammarFromStringTransform;
+ (id /* block */)addressingGrammarToEncryptedStringTransform;
+ (id /* block */)addressingGrammarToStringTransform;
+ (id /* block */)dateComponentsFromDictionaryTransform;
+ (id /* block */)dateComponentsToDictionaryTransform;
+ (id /* block */)instantMessageAddressFromDictionaryTransform;
+ (id /* block */)instantMessageAddressToDictionaryTransform;
+ (id /* block */)nullTransform;
+ (id /* block */)phoneNumberFromStringTransform;
+ (id /* block */)phoneNumberToStringTransform;
+ (id /* block */)postalAddressFromDictionaryTransform;
+ (id /* block */)postalAddressToDictionaryTransform;
+ (id /* block */)relatedContactFromStringTransform;
+ (id /* block */)relatedContactToStringTransform;
+ (id /* block */)socialProfileFromDictionaryTransform;
+ (id /* block */)socialProfileToDictionaryTransform;
+ (id /* block */)socialProfileToFoundationProfileTransform;
+ (id /* block */)wallpaperFromDataTransform;

// CN (PropertyDescription)

+ (id)addressingGrammarsDescription;
+ (id)addressingGrammarsEncryptedDescription;
+ (id)allContactProperties;
+ (id)allContactPropertyKeys;
+ (id)allImageDataProperties;
+ (id)allImageDataPropertyKeys;
+ (id)allNameComponentRelatedProperties;
+ (id)allPhoneticNameComponentProperties;
+ (id)allWallpaperProperties;
+ (id)allWallpaperPropertyKeys;
+ (id)alwaysFetchedProperties;
+ (id)birthdayDescription;
+ (id)calendarURIsDescription;
+ (id)callAlertDescription;
+ (id)contactFlagsDescription;
+ (id)contactPropertiesByKey;
+ (id)contactRelationsDescription;
+ (id)contactTypeDescription;
+ (id)creationDateDescription;
+ (id)cropRectDescription;
+ (id)datesDescription;
+ (id)departmentDescription;
+ (id)downtimeWhitelistDescription;
+ (id)emailAddressesDescription;
+ (id)explicitDisplayNameDescription;
+ (id)externalIdentifierDescription;
+ (id)externalImageURIDescription;
+ (id)externalModificationTagDescription;
+ (id)externalRepresentationDescription;
+ (id)externalUUIDDescription;
+ (id)familyNameDescription;
+ (id)fullscreenImageDataDescription;
+ (id)givenNameDescription;
+ (id)iOSLegacyIdentifierDescription;
+ (id)identifierDescription;
+ (id)imageBackgroundColorsDataDescription;
+ (id)imageDataAvailableDescription;
+ (id)imageDataDescription;
+ (id)imageHash;
+ (id)imageType;
+ (id)instantMessagAddressesDescription;
+ (id)isUsingSharedPhotoDescription;
+ (id)jobTitleDescription;
+ (id)linkIdentifierDescription;
+ (id)mapsDataDescription;
+ (id)memojiMetadataDescription;
+ (id)middleNameDescription;
+ (id)modificationDateDescription;
+ (id)multiValueContactProperties;
+ (id)namePrefixDescription;
+ (id)nameSuffixDescription;
+ (id)nicknameDescription;
+ (id)nonGregorianBirthdayDescription;
+ (id)noteDescription;
+ (id)organizationNameDescription;
+ (id)phoneNumbersDescription;
+ (id)phonemeDataDescription;
+ (id)phoneticFamilyNameDescription;
+ (id)phoneticGivenNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id)phoneticOrganizationNameDescription;
+ (id)postalAddressesDescription;
+ (id)preferredApplePersonaIdentifierDescription;
+ (id)preferredChannelDescription;
+ (id)preferredForImageDescription;
+ (id)preferredForNameDescription;
+ (id)preferredLikenessSourceDescription;
+ (id)previousFamilyNameDescription;
+ (id)pronunciationFamilyNameDescription;
+ (id)pronunciationGivenNameDescription;
+ (void)resetRestrictedPropertiesOnMutableContact:(id)arg1;
+ (id)restrictedProperties;
+ (id)runtimeOnlyProperties;
+ (id)sectionForSortingByFamilyNameDescription;
+ (id)sectionForSortingByGivenNameDescription;
+ (id)sharedPhotoDisplayPreferenceDescription;
+ (id)singleValueContactProperties;
+ (id)socialProfilesDescription;
+ (id)squashableContactCardProperties;
+ (id)squashableContactCardPropertyKeys;
+ (id)syncImageDataDescription;
+ (id)textAlertDescription;
+ (id)thumbnailImageDataDescription;
+ (id)urlAddressesDescription;
+ (id)wallpaperDescription;
+ (id)wallpaperMetadataDescription;
+ (id)watchWallpaperImageDataDescription;
+ (id)writableAlwaysFetchedProperties;
+ (id)writableContactProperties;
+ (id)writableMultiValueContactProperties;
+ (id)writableSingleValueContactProperties;

// CN (UnifiedContacts)

+ (id)_unifyContacts:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2;
+ (id)contactUnifyingContacts:(id)arg1 includingMainStoreContacts:(bool)arg2 allowMutableContactFreeze:(bool)arg3;
+ (id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)mutableContactUnifyingContacts:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (id)sourceContactForValue:(id)arg1 labeledValueIdentifier:(id)arg2 propertyKey:(id)arg3 inUnifiedContact:(id)arg4;
+ (id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AddressBook.framework/AddressBook

// CN (ABSExtensions)

+ (id)contactPropertiesByABSPropertyID;

@end
