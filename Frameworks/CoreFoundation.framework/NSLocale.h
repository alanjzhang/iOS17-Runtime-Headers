/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) long long ITUCountryCode;
@property (readonly) long long _calendarDirection;
@property (nonatomic, readonly) bool asc_prefersRightToLeftLayout;
@property (readonly, copy) NSArray *availableNumberingSystems;
@property (readonly, copy) NSString *explanationTextForSelectableScripts;
@property (nonatomic, readonly) bool hk_isUSLocale;
@property (nonatomic, readonly) NSString *lt_nlLanguageCode;
@property (readonly, copy) NSString *nationalDirectDialingPrefix;
@property (readonly, copy) NSString *numberingSystem;
@property (readonly, copy) NSString *optionNameForSelectableScripts;
@property (readonly, copy) NSString *optionNameWithColonForSelectableScripts;
@property (readonly, copy) NSArray *selectableScriptCodes;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)ISOCountryCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOLanguageCodes;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)availableLocaleIdentifiers;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)currentLocale;
+ (id)internetServicesRegion;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (bool)supportsSecureCoding;
+ (id)systemLocale;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)_prefForKey:(id)arg1;
- (id)alternateQuotationBeginDelimiter;
- (id)alternateQuotationEndDelimiter;
- (id)calendarIdentifier;
- (id)collationIdentifier;
- (id)collatorIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)currencyCode;
- (id)currencySymbol;
- (id)decimalSeparator;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exemplarCharacterSet;
- (id)groupingSeparator;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (id)languageIdentifier;
- (id)localeIdentifier;
- (id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForCalendarIdentifier:(id)arg1;
- (id)localizedStringForCollationIdentifier:(id)arg1;
- (id)localizedStringForCollatorIdentifier:(id)arg1;
- (id)localizedStringForCountryCode:(id)arg1;
- (id)localizedStringForCurrencyCode:(id)arg1;
- (id)localizedStringForCurrencySymbol:(id)arg1;
- (id)localizedStringForDecimalSeparator:(id)arg1;
- (id)localizedStringForGroupingSeparator:(id)arg1;
- (id)localizedStringForLanguageCode:(id)arg1;
- (id)localizedStringForLocaleIdentifier:(id)arg1;
- (id)localizedStringForQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForScriptCode:(id)arg1;
- (id)localizedStringForVariantCode:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)quotationBeginDelimiter;
- (id)quotationEndDelimiter;
- (id)regionCode;
- (id)scriptCode;
- (bool)usesMetricSystem;
- (id)variantCode;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_autoupdatingCurrent;
+ (id)_availableLocaleIdentifiers;
+ (id)_canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)_canonicalLocaleIdentifierFromString:(id)arg1;
+ (unsigned long long)_characterDirectionForLanguage:(id)arg1;
+ (id)_commonISOCurrencyCodes;
+ (id)_componentsFromLocaleIdentifier:(id)arg1;
+ (id)_current;
+ (id)_currentLocaleWithBundleLocalizations:(id)arg1 disableBundleMatching:(bool)arg2;
+ (id)_isoCountryCodes;
+ (id)_isoCurrencyCodes;
+ (id)_isoLanguageCodes;
+ (unsigned long long)_lineDirectionForLanguage:(id)arg1;
+ (id)_localeIdentifierByAddingLikelySubtags:(id)arg1;
+ (id)_localeIdentifierByReplacingLanguageCodeAndScriptCodeForLangCode:(id)arg1 desiredComponents:(id)arg2;
+ (id)_localeIdentifierFromComponents:(id)arg1;
+ (id)_localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)_newLocaleAsIfCurrent:(id)arg1 overrides:(const struct __CFDictionary { }*)arg2 disableBundleMatching:(bool)arg3;
+ (id)_newLocaleWithIdentifier:(id)arg1;
+ (id)_numberingSystemForLocaleIdentifier:(id)arg1;
+ (id)_preferredLanguages;
+ (id)_preferredLanguagesForCurrentUser:(bool)arg1;
+ (void)_resetCurrent;
+ (id)_system;
+ (id)_validNumberingSystemsForLocaleIdentifier:(id)arg1;
+ (unsigned int)_windowsLocaleCodeFromLocaleIdentifier:(id)arg1;

- (bool)_doesNotRequireSpecialCaseHandling;
- (id)_localeWithNewCalendarIdentifier:(id)arg1;

// NSLocale (NSLocale)

+ (id)autoupdatingCurrentLocale;

- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// NSLocale (NSLocale_CalendarDirection)

- (long long)_calendarDirection;

// NSLocale (NSLocale_LanguageExtras)

+ (id)__effectiveLanguageForBundle:(id)arg1;
+ (id)_deviceLanguage;
+ (id)_preferredMeasurementSystem;
+ (id)_preferredTemperatureUnit;
+ (void)_setPreferredMeasurementSystem:(id)arg1;
+ (void)_setPreferredTemperatureUnit:(id)arg1;
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;
+ (id)preferredLocale;
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;
+ (void)setPreferredLanguages:(id)arg1;
+ (id)systemLanguages;

// NSLocale (NSLocale_NumberingSystem)

- (id)_numberingSystem;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

// NSLocale (HealthKit)

+ (bool)hk_isUSLocale;
+ (void)hk_setTestLocale:(id)arg1;
+ (void)hk_setTestPreferredLanguages:(id)arg1;
+ (id)hk_testableAutoupdatingCurrentLocale;
+ (id)hk_testableCurrentLocale;
+ (id)hk_testablePreferredLanguages;

- (bool)hk_isEquivalent:(id)arg1;
- (bool)hk_isIn24HourTime;
- (bool)hk_isUSLocale;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

// NSLocale (AppStoreComponents)

+ (id)asc_storefrontLocale;

- (bool)asc_prefersRightToLeftLayout;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

// NSLocale (AssistantServices)

+ (void)af_setAceTemperatureUnit:(id)arg1;
+ (id)af_temperatureUnitForAceTemperatureUnit:(id)arg1;

- (id)af_aceTemperatureUnit;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Calculate.framework/Calculate

// NSLocale (Whitespace)

- (bool)usesWhitespace;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

// NSLocale (CalClassAdditions)

- (bool)CalLanguageIsSimplifiedChinese;
- (bool)CalPrefersFullMonthDisplayNames;
- (bool)CalRegionIsChina;
- (bool)CalShouldUseAbbreviatedDayNames;
- (bool)CalUnableToAbbreviateMonthNames;
- (bool)CalUsesCelsius;
- (bool)_calendarIsIslamic;
- (bool)_languageIsArabic;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

// NSLocale (CRKAdditions)

+ (bool)crk_canShowGivenNameFamilyInitial;
+ (bool)crk_showPhoneticNames;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

// NSLocale (EmailFoundationAdditions)

+ (id)ef_localesFromLanguages:(id)arg1;
+ (id)ef_posixLocale;
+ (id)ef_quotePairsForLanguages:(id)arg1;
+ (id)ef_quotePairsForLocales:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

// NSLocale (GEOExtras)

- (id)_geo_languageAndLocale;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IconServices.framework/IconServices

// NSLocale (IconServicesAdditions)

+ (unsigned long long)_IS_currentLanguageDirection;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InternationalSupport.framework/InternationalSupport

// NSLocale (InternationalSupportExtensions)

+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames { }*)arg2;
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)_availableRegionsOfType:(int)arg1;
+ (id)_containingRegionOfType:(int)arg1 forRegion:(id)arg2;
+ (id)_deviceLanguages;
+ (id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 length:(unsigned long long)arg4;
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3 length:(unsigned long long)arg4;
+ (id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(bool)arg4;
+ (id)_globalPreferredLanguages;
+ (id)_languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3;
+ (id)_languagesToExemplarStrings;
+ (id)_minimizeSubtagsForLocaleIdentifier:(id)arg1;
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)_regionLanguageData;
+ (id)_regionLanguageDataForRegionCode:(id)arg1 subdivisionCode:(id)arg2;
+ (id)_supportedKeyboardLanguages;
+ (id)abbreviationsForLanguages:(id)arg1 minimizeVariants:(bool)arg2;
+ (id)availableContinents;
+ (id)availableSpokenLanguages;
+ (id)baseLanguageFromLanguage:(id)arg1;
+ (id)baseSystemLanguages;
+ (id)containingContinentOfRegion:(id)arg1;
+ (id)containingRegionOfRegion:(id)arg1;
+ (id)deviceLanguage;
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(bool)arg4;
+ (id)exemplarForLanguage:(id)arg1;
+ (id)exemplarRegionForLanguage:(id)arg1;
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;
+ (id)languagesByAddingRelatedLanguagesToLanguages:(id)arg1;
+ (id)languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3 filter:(long long)arg4;
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;
+ (id)minimizedLanguagesFromLanguages:(id)arg1;
+ (id)regionsForLanguage:(id)arg1 withThreshold:(long long)arg2;
+ (id)relatedLanguagesForLanguage:(id)arg1;
+ (id)scriptCodeFromLanguage:(id)arg1;
+ (id)spokenLanguagesForLanguage:(id)arg1;
+ (id)spokenLanguagesForLanguages:(id)arg1 includeLanguagesForRegion:(bool)arg2;
+ (id)supportedLanguages;
+ (id)supportedRegions;

- (id)availableNumberingSystems;
- (id)countryCodeTopLevelDomainsUsingPunycode:(bool)arg1;
- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(bool)arg4;
- (bool)isEquivalentTo:(id)arg1;
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2;
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2 length:(unsigned long long)arg3;
- (id)localizedStringForNumberingSystem:(id)arg1 short:(bool)arg2;
- (id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(bool)arg3;
- (id)numberingSystem;
- (long long)positionOfDayPeriodInFormattedTime;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

// NSLocale (IntlPreferencesAdditions)

+ (id)_archivedPreferencesWithOverridingLanguages:(id)arg1 targetPlatform:(unsigned long long)arg2 hash:(out id*)arg3;
+ (bool)_defaultUsesTwelveHourClock;
+ (id)_hashesFromAppPreferences:(id)arg1;
+ (void)_insertFallbackLanguageIfNecessaryForRegion:(id)arg1;
+ (bool)_language:(id)arg1 usesSameLocalizationAs:(id)arg2;
+ (id)_languageIdentifiersForLanguage:(id)arg1 region:(id)arg2;
+ (id)_localeIdentifierForLanguage:(id)arg1 region:(id)arg2;
+ (id)_localeIdentifierForRegionChangeFrom:(id)arg1 to:(id)arg2;
+ (id)_preferencesForSetLanguageAndRegion:(id)arg1;
+ (id)_sanitizedLanguageIdentifierFromKeyboardLanguage:(id)arg1;
+ (id)_sanitizedLanguageIdentifierFromKeyboardLanguage:(id)arg1 currentLocale:(id)arg2;
+ (void)_setUsesTwelveHourClock:(bool)arg1;
+ (bool)_usesTwelveHourClock;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)archivedPreferences;
+ (id)archivedPreferencesForTargetPlatform:(unsigned long long)arg1;
+ (id)archivedPreferencesWithHash:(out id*)arg1;
+ (id)archivedPreferencesWithHashesForBundleIDs:(id)arg1;
+ (void)archivedPreferencesWithHashesForBundleIDs:(id)arg1 reply:(id /* block */)arg2;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;
+ (id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1;
+ (id)deviceLanguageIdentifier;
+ (id)deviceLanguageLocale;
+ (id)displayNameForSelectableScriptCode:(id)arg1;
+ (void)enableDefaultKeyboardForPreferredLanguages;
+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;
+ (id)localeIdentifierForRegionChange:(id)arg1;
+ (void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1;
+ (id)renderableLanguagesFromList:(id)arg1;
+ (id)renderableLocaleLanguages;
+ (id)renderableUILanguages;
+ (void)resetCustomFormats;
+ (void)resetTimeFormat;
+ (void)setArchivedPreferences:(id)arg1;
+ (void)setLanguageAndRegion:(id)arg1;
+ (void)setLanguageToPreferredLanguages:(id)arg1 fallback:(id)arg2;
+ (void)setLocaleAfterLanguageChange:(id)arg1;
+ (void)setLocaleAfterRegionChange:(id)arg1;
+ (void)setLocaleAndResetCustomFormat:(id)arg1;
+ (void)setLocaleAndResetTimeFormat:(id)arg1;
+ (void)setLocaleOnly:(id)arg1;
+ (void)setPreferredLanguageAndUpdateLocale:(id)arg1;
+ (id)supportedCJLanguageIdentifiers;
+ (void)unregisterPreferredLanguageForKeyboardLanguage:(id)arg1;
+ (id)validateLocale:(id)arg1;

- (id)explanationTextForSelectableScripts;
- (id)localeByChangingLanguageTo:(id)arg1;
- (id)optionNameForSelectableScripts;
- (id)optionNameWithColonForSelectableScripts;
- (id)selectableScriptCodes;

// NSLocale (Setup)

+ (id)_subdivisionCodeFromSubdivisionTag:(id)arg1 restrictedToRegionCode:(id)arg2;

- (id)_languagesForMultilingualSetupWithKeyboardsIDs:(id)arg1;
- (bool)_requiresMultilingualSetupWithKeyboardIDs:(id)arg1;
- (id)defaultLanguagesForMultilingualSetup;
- (id)languagesForMultilingualSetup;
- (bool)requiresMultilingualSetup;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

// NSLocale (MTUtilities)

- (bool)mtIsIn24HourTime;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation

// NSLocale (MNExtras)

+ (id)_localeOverridesForLocaleWithCountryCode:(id)arg1;
+ (void)_navigation_overrideDistanceUnit:(long long)arg1;

- (bool)_navigation_distanceUsesMetricSystem;
- (bool)_navigation_distanceUsesMetricSystemIgnoringUserPreference:(bool)arg1;
- (id)_navigation_objectForKey:(id)arg1;
- (bool)_navigation_useYardsForShortDistances;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

// NSLocale (PKAdditions)

+ (id)pk_deviceLanguage;
+ (id)pk_preferredLocale;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhoneNumbers.framework/PhoneNumbers

// NSLocale (PhoneNumbers)

+ (long long)ITUCountryCodeForISOCountryCode:(id)arg1;
+ (id)nationalDirectDialingPrefixForISOCountryCode:(id)arg1;

- (long long)ITUCountryCode;
- (id)nationalDirectDialingPrefix;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

// NSLocale (RCAdditions)

+ (id)rc_preferredLanguageCodes;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

// NSLocale (SCRCLocaleExtras)

+ (id)_nonRomanLanguages;

- (bool)usesRomanTextProcessing;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput

// NSLocale (TIExtras)

+ (id)localeForBundleLanguage:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

// NSLocale (TPSCoreAdditions)

+ (id)tps_userLanguageCode;
+ (id)tps_userPreferredLocalizations;
+ (id)tps_userPreferredLocalizationsForLanguages:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Translation.framework/Translation

// NSLocale (LTLocaleIdentifier)

+ (id)lt_localeWithLTIdentifier:(id)arg1;

- (id)_ltCsLocaleIdentifier;
- (bool)_ltEqual:(id)arg1;
- (id)_ltLocaleIdentifier;
- (id)_vsLocaleIdentifier;
- (id)lt_nlLanguageCode;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

// NSLocale (VKFoundationUtility)

+ (long long)_vk_indexForLocale:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore

// NSLocale (WeatherCore)

+ (void)wc_setPreferredTemperatureUnit:(id)arg1;

@end
