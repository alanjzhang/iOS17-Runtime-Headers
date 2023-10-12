/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface MIBundle : NSObject {
    NSString * _bundleName;
    NSURL * _bundleParentDirectoryURL;
    NSString * _bundleParentSubdirectory;
    unsigned char  _bundleType;
    NSArray * _extensionKitBundles;
    NSArray * _frameworkBundles;
    NSDictionary * _infoPlistSubset;
    bool  _isPlaceholder;
    bool  _isPlaceholderStatusValid;
    MIBundle * _parentBundle;
    NSString * _parentBundleID;
    NSArray * _pluginKitBundles;
    NSArray * _xpcServiceBundles;
}

@property (nonatomic, readonly) bool allowsAppleAppExtensionsNotInExtensionCache;
@property (nonatomic, readonly, copy) NSString *bundleName;
@property (nonatomic, copy) NSURL *bundleParentDirectoryURL;
@property (nonatomic, readonly, copy) NSString *bundleParentSubdirectory;
@property (nonatomic, readonly, copy) NSString *bundleShortVersion;
@property (nonatomic, readonly) unsigned char bundleType;
@property (nonatomic, readonly, copy) NSString *bundleTypeDescription;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly, copy) NSString *bundleVersion;
@property (nonatomic, readonly, copy) NSArray *deviceFamilies;
@property (nonatomic, retain) NSArray *extensionKitBundles;
@property (nonatomic, retain) NSArray *frameworkBundles;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *infoPlistSubset;
@property (nonatomic, readonly) bool isLaunchProhibited;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic) bool isPlaceholderStatusValid;
@property (nonatomic, readonly) bool isRemovableSystemApp;
@property (nonatomic, readonly) bool isStaticContent;
@property (nonatomic, readonly) bool isWatchApp;
@property (nonatomic, readonly, copy) NSString *minimumOSVersion;
@property (nonatomic, readonly) bool needsDataContainer;
@property (nonatomic, readonly) MIBundle *parentBundle;
@property (nonatomic, readonly, copy) NSString *parentBundleID;
@property (nonatomic, retain) NSArray *pluginKitBundles;
@property (nonatomic, readonly, copy) NSString *sdkBuildVersion;
@property (nonatomic, readonly) NSSet *siriIntents;
@property (nonatomic, readonly, copy) NSArray *supportedDevices;
@property (nonatomic, retain) NSArray *xpcServiceBundles;

+ (id)_URLOfFirstBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id*)arg3;
+ (id)bundleForURL:(id)arg1 error:(id*)arg2;
+ (bool)bundleIsBlacklisted:(id)arg1;
+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(id /* block */)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_filterExtensionBundlesNotInCacheIfNeeded:(id)arg1;
- (id)_infoPlistKeysToLoad;
- (bool)_isMinimumOSVersion:(id)arg1 applicableToOSVersion:(id)arg2 requiredOS:(unsigned long long)arg3 error:(id*)arg4;
- (bool)_validateAppNSPrivacyTrackingDomainsWithError:(id*)arg1;
- (bool)_validateExtensions:(id)arg1 error:(id*)arg2;
- (bool)_validateWithError:(id*)arg1;
- (bool)allowsAppleAppExtensionsNotInExtensionCache;
- (id)appExtensionBundlesPerformingPlatformValidation:(unsigned char)arg1 withError:(id*)arg2;
- (id)appExtensionBundlesWithError:(id*)arg1;
- (id)bundleName;
- (id)bundleParentDirectoryURL;
- (id)bundleParentSubdirectory;
- (id)bundleShortVersion;
- (unsigned char)bundleType;
- (id)bundleTypeDescription;
- (id)bundleURL;
- (id)bundleVersion;
- (id)currentOSVersionForValidationWithError:(id*)arg1;
- (id)description;
- (id)deviceFamilies;
- (id)extensionKitBundles;
- (id)extensionKitBundlesPerformingPlatformValidation:(unsigned char)arg1 withError:(id*)arg2;
- (id)extensionKitBundlesWithError:(id*)arg1;
- (id)frameworkBundles;
- (id)frameworkBundlesWithError:(id*)arg1;
- (bool)getIsBuiltForiOSPlatform:(bool*)arg1 error:(id*)arg2;
- (id)identifier;
- (id)infoPlistSubset;
- (void)infoPlistSubsetForTesting:(id)arg1;
- (id)initForTesting;
- (id)initWithBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id*)arg3;
- (id)initWithBundleParentURL:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id*)arg4;
- (id)initWithBundleURL:(id)arg1 error:(id*)arg2;
- (id)initWithParentBundle:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id*)arg4;
- (bool)isApplicableToCurrentDeviceCapabilitiesWithError:(id*)arg1;
- (bool)isApplicableToCurrentDeviceFamilyWithError:(id*)arg1;
- (bool)isApplicableToCurrentOSVersionWithError:(id*)arg1;
- (bool)isApplicableToOSVersion:(id)arg1 error:(id*)arg2;
- (bool)isApplicableToOSVersionEarlierThan:(id)arg1;
- (bool)isCompatibleWithDeviceFamily:(int)arg1;
- (bool)isLaunchProhibited;
- (bool)isMinimumOSVersion:(id)arg1 applicableToOSVersion:(id)arg2 error:(id*)arg3;
- (bool)isPlaceholder;
- (bool)isPlaceholderStatusValid;
- (bool)isRemovableSystemApp;
- (bool)isStaticContent;
- (bool)isWatchApp;
- (id)minimumOSVersion;
- (bool)needsDataContainer;
- (id)parentBundle;
- (id)parentBundleID;
- (id)pluginKitBundles;
- (id)pluginKitBundlesPerformingPlatformValidation:(unsigned char)arg1 withError:(id*)arg2;
- (id)pluginKitBundlesWithError:(id*)arg1;
- (id)sdkBuildVersion;
- (bool)sdkBuildVersionIsAtLeast:(id)arg1;
- (void)setBundleParentDirectoryURL:(id)arg1;
- (void)setExtensionKitBundles:(id)arg1;
- (void)setFrameworkBundles:(id)arg1;
- (void)setIsPlaceholderStatusValid:(bool)arg1;
- (bool)setIsPlaceholderWithError:(id*)arg1;
- (void)setPluginKitBundles:(id)arg1;
- (void)setXpcServiceBundles:(id)arg1;
- (id)siriIntents;
- (id)supportedDevices;
- (bool)thinningMatchesCurrentDeviceWithError:(id*)arg1;
- (bool)validateAppMetadataWithError:(id*)arg1;
- (bool)validateBundleMetadataWithError:(id*)arg1;
- (bool)validateExtensionKitMetadataWithError:(id*)arg1;
- (bool)validatePluginKitMetadataWithError:(id*)arg1;
- (id)xpcServiceBundles;
- (id)xpcServiceBundlesWithError:(id*)arg1;

@end
