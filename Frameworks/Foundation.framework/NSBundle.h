/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBundle : NSObject {
    NSMutableDictionary * _attributedStringTable;
    _Atomic struct __CFBundle {} * _cfBundle;
    NSString * _firstClassName;
    _Atomic unsigned long long  _flags;
    id  _initialPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    Class  _principalClass;
    id  _resolvedPath;
}

@property (readonly, copy) NSURL *appStoreReceiptURL;
@property (getter=wf_applicationGroups, nonatomic, readonly) NSArray *applicationGroups;
@property (getter=wf_apsEnvironment, nonatomic, readonly) NSString *apsEnvironment;
@property (readonly, copy) NSString *builtInPlugInsPath;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *developmentLocalization;
@property (getter=wf_entitlements, nonatomic, readonly) NSDictionary *entitlements;
@property (readonly, copy) NSArray *executableArchitectures;
@property (readonly, copy) NSString *executablePath;
@property (readonly, copy) NSURL *executableURL;
@property (nonatomic, readonly) bool ic_canEditNotes;
@property (nonatomic, readonly) bool ic_isAppExtension;
@property (nonatomic, readonly) UIImage *icon;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (getter=wf_keychainAccessGroups, nonatomic, readonly) NSArray *keychainAccessGroups;
@property (nonatomic, readonly) NSURL *ln_safeBundleURL;
@property (getter=isLoaded, readonly) bool loaded;
@property (readonly, copy) NSArray *localizations;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly, copy) NSArray *normalizedLocalizations;
@property (readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class principalClass;
@property (readonly, copy) NSString *privateFrameworksPath;
@property (readonly, copy) NSURL *privateFrameworksURL;
@property (readonly, copy) NSString *resourcePath;
@property (readonly, copy) NSURL *resourceURL;
@property (readonly, copy) NSString *sharedFrameworksPath;
@property (readonly, copy) NSURL *sharedFrameworksURL;
@property (readonly, copy) NSString *sharedSupportPath;
@property (readonly, copy) NSURL *sharedSupportURL;
@property (getter=wf_teamIdentifier, nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly, copy) NSObject<OS_tcc_identity> *tu_assumedIdentity;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)_bundleWithIdentifier:(id)arg1 andLibraryName:(id)arg2;
+ (id)_localizedStringsForKeys:(id)arg1 forAllLocalizationsOfTable:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)bundleForClass:(Class)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)debugDescription;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id /* block */)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;
+ (id)loadedBundles;
+ (id)mainBundle;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (void)setSystemLanguages:(id)arg1;

- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (void)__static;
- (struct __CFBundle { }*)_cfBundle;
- (struct __CFBundle { }*)_cfBundleIfPresent;
- (id)_initUniqueWithPath:(id)arg1;
- (id)_initUniqueWithURL:(id)arg1;
- (id)_localizedStringNoCacheNoMarkdownParsingForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localizations:(id)arg4 actualTableURL:(id*)arg5 formatSpecifierConfiguration:(id*)arg6;
- (id)_localizedStringsForKeys:(id)arg1 forAllLocalizationsOfTable:(id)arg2;
- (id)_objectForUnlocalizedInfoDictionaryKey:(id)arg1;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_regionsArray;
- (bool)_searchForLocalizedString:(id)arg1 foundKey:(id*)arg2 foundTable:(id*)arg3;
- (id)_wrappedBundleURL;
- (id)_wrapperContainerURL;
- (id)appStoreReceiptURL;
- (id)builtInPlugInsPath;
- (id)builtInPlugInsURL;
- (id)bundleIdentifier;
- (id)bundleLanguages;
- (id)bundlePath;
- (id)bundleURL;
- (Class)classNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)developmentLocalization;
- (id)executableArchitectures;
- (id)executablePath;
- (id)executableURL;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id /* block */)arg2;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateResourceCache;
- (bool)isLoaded;
- (bool)load;
- (id)localizations;
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localizations:(id)arg4;
- (id)localizedStringsForTable:(id)arg1 localization:(id)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)preferredLocalizations;
- (bool)preflightAndReturnError:(id*)arg1;
- (Class)principalClass;
- (id)privateFrameworksPath;
- (id)privateFrameworksURL;
- (id)resourcePath;
- (id)resourceURL;
- (id)sharedFrameworksPath;
- (id)sharedFrameworksURL;
- (id)sharedSupportPath;
- (id)sharedSupportURL;
- (bool)unload;
- (unsigned long long)versionNumber;

// NSBundle (NSBundleResourceRequestAdditions)

- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTag:(id)arg2;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVKit.framework/AVKit

// NSBundle (AVAdditions)

- (id)URLForMovieResource:(id)arg1;
- (id)imageForResource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

// NSBundle (HealthKit)

+ (id)hk_findContainedBundleWithIdentifier:(id)arg1 directoryURL:(id)arg2;

- (id)hk_displayName;
- (id)hk_extensionPointIdentifier;
- (id)hk_findContainedBundleWithIdentifier:(id)arg1;
- (id)hk_localizedClinicalReadAuthorizationUsageDescription;
- (id)hk_localizedReadAuthorizationUsageDescription;
- (id)hk_localizedResearchStudyUsageDescription;
- (id)hk_localizedWriteAuthorizationUsageDescription;
- (id)hk_name;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit

// NSBundle (MKAdditions)

+ (id)_mapkitBundle;

- (id)_mapkit_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos

// NSBundle (Photos)

- (bool)ph_isFirstPartyBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/UserNotifications.framework/UserNotifications

// NSBundle (UserNotifications)

+ (id)userNotificationsBundleWithIdentifier:(id)arg1;

// NSBundle (UserNotificationsInternal)

+ (id)un_safeBundleWithURL:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

+ (bool)isNewsOrStocks;
+ (long long)product;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

- (id)__asc_localizedStringForKey:(id)arg1 inTable:(id)arg2 withLanguage:(id)arg3;

// NSBundle (AppStoreComponents)

+ (id)asc_frameworkBundle;
+ (id)asc_localizedStringKeyPlatformSuffix;
+ (id)asc_realMainBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

// NSBundle (AppleMediaServices)

+ (id)ams_AppleMediaServicesBundle;
+ (id)ams_MusicBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

// NSBundle (AppleMediaServices)

- (id)ams_imageForResource:(id)arg1;
- (id)icon;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation

// NSBundle (BRLTBrailleTables)

+ (id)brl_brailleTableBundleWithIdentifier:(id)arg1;

- (id)brl_brailleTablesDictionary;
- (id)brl_languageAgnosticTables;
- (id)brl_supportedLocales;
- (id)brl_supportedLocalesForTableWithIdentifier:(id)arg1;
- (id)brl_supportedTablesForLocale:(id)arg1;
- (bool)brl_tableIsLanguageAgnosticWithIdentifier:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

// NSBundle (CATLocalizationHelper)

- (id)cat_localizedStringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

// NSBundle (WFEntitlements)

- (id)wf_applicationGroups;
- (id)wf_apsEnvironment;
- (id)wf_entitlements;
- (id)wf_keychainAccessGroups;
- (id)wf_teamIdentifier;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

// NSBundle (CoreMaterialAdditions)

+ (void)_setCoreMaterialOverrideRecipeBundleURL:(id)arg1;
+ (id)coreMaterialOverrideRecipeBundle;
+ (id)coreMaterialOverrideRecipeBundleURL;

// NSBundle (CoreMaterialInternalAdditions)

+ (id)coreMaterialRecipeBundle;

- (id)URLForMaterialRecipe:(id)arg1;
- (id)URLForMaterialRecipeDescendant:(id)arg1;
- (id)URLForVisualStyleSet:(id)arg1;
- (id)URLForVisualStyleSetDescendant:(id)arg1;
- (id)URLsForMaterialRecipeDescendants;
- (id)URLsForMaterialRecipes;
- (id)URLsForVisualStyleSets;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

// NSBundle (RTExtensions)

+ (id)_coreroutineBundle;
+ (id)_coreroutine_LocalizedStringForKey:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

// NSBundle (DoNotDisturb)

+ (id)dnd_doNotDisturbLocalizationBundle;
+ (id)dnd_locationBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

// NSBundle (GC)

+ (id)GameControllerFoundationBundle;
+ (id)GameControllerFrameworkBundle;
+ (id)gc_bundleForExecutableAtPath:(id)arg1;
+ (id)gc_bundleForExecutableAtURL:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

// NSBundle (GeoServicesBundle)

+ (id)__geoBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)_cachedMainBundleResourcePath;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IconServices.framework/IconServices

// NSBundle (IconServicesAdditions)

+ (id)__IS__frameworkBundle;
+ (id)__IS__frameworkLocalizedString:(id)arg1;
+ (id)__IS__iconsetResourceAssetsCatalogURL;
+ (id)__IS__iconsetResourceBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InternationalSupport.framework/InternationalSupport

// NSBundle (InternationalSupportExtensions)

- (id)localizedStringInDeviceLanguageForKey:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

// NSBundle (IntlPreferencesAdditions)

- (id)normalizedLocalizations;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

// NSBundle (PackageMetadata)

- (id)executablePathWithError:(id*)arg1;

// NSBundle (StaticExtraction)

- (id)ln_safeBundleURL;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

// NSBundle (VCPMediaAnalysis)

+ (id)vcp_mediaAnalysisBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation

// NSBundle (MNExtras)

+ (id)_navigationBundle;
+ (bool)_navigation_implementsSiriMethod;
+ (bool)_navigation_isRunningInSiri;

- (id)_navigation_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

// NSBundle (IC)

- (bool)ic_canEditNotes;
- (bool)ic_isAppExtension;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

// NSBundle (PKADLoggingPrivacy)

- (id)PKSanitizedBundleIdentifier;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

// NSBundle (PersonaUI)

+ (id)pr_personaUIBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAML.framework/SAML

// NSBundle (SAMLAdditions)

+ (id)saml_frameworkBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

// NSBundle (SCRCBundleExtras)

+ (id)coreFrameworkBundle;
+ (id)localeForString:(id)arg1;
+ (id)localizedCoreStringForKey:(id)arg1;
+ (id)localizedScreenReaderStringForKey:(id)arg1 table:(id)arg2;
+ (id)preferredLocalizationsForLocale:(id)arg1;
+ (id)screenReaderFrameworkBundle;

- (id)bundleLocale;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 locale:(id)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

// NSBundle (SCROBundleExtras)

+ (id)_brailleTableBundles;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (bool)doesBrailleTableSupportContractions:(id)arg1;
+ (bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;

- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

// NSBundle (TelephonyUtilities)

+ (id)tu_assumedIdentityForBundleIdentifier:(id)arg1;

- (id)tu_assumedIdentity;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (bool)loadAndReturnError:(id*)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

// NSBundle (SafeCategory)

+ (Class)safeCategoryBaseClass;

// NSBundle (UIAccessibilityLoader)

+ (id)_accessibilityBundleWithBundlePath:(id)arg1;
+ (id)accessibilityBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityInternalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityLocalBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityMacCalystBundleWithLastPathComponent:(id)arg1;

- (void)_loadAXBundleForBundleOffMainThread;
- (id)accessibilityBundlePath;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

// NSBundle (LocalizationAdditions)

- (id)_preferredEnglishLocalizationBundle;

// NSBundle (TextureDataLoading)

- (id)dataForResourceName:(id)arg1;

// NSBundle (UINSBundleAdditions)

- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;

// NSBundle (UINSBundleLocalizableStringAdditions)

+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (void)pushNibPath:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

// NSBundle (VKBundle)

+ (id)__vkBundle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

// NSBundle (ISAdditions)

+ (id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2;

@end
