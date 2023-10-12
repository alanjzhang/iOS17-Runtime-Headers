/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDTestFlightAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {
    ACAccount * _account;
    NSURL * _artworkURL;
    NSDictionary * _backgroundAssetMetadata;
    NSString * _betaBuildGroupID;
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSString * _companionBundleID;
    NSURL * _existingBundleURL;
    NSNumber * _externalVersionIdentifier;
    NSArray * _genreIDs;
    bool  _hasMessagesExtension;
    NSNumber * _initialODRSize;
    NSNumber * _itemID;
    NSString * _itemName;
    bool  _launchProhibited;
    NSURL * _messagesArtworkURL;
    long long  _packageCompression;
    NSData * _packageDPInfo;
    NSData * _packageSINF;
    NSNumber * _packageSize;
    NSURL * _packageURL;
    NSDictionary * _placeholderEntitlements;
    NSArray * _provisioningProfiles;
    NSData * _receipt;
    bool  _requiresPowerPluggedIn;
    bool  _requiresPowerPluggedIn_wasSet;
    NSString * _shortBundleVersion;
    long long  _softwarePlatform;
    NSString * _storeCohort;
    NSNumber * _storeFront;
    bool  _userInitiated;
    NSString * _variantID;
    NSString * _vendorName;
}

@property (nonatomic, copy) ACAccount *account;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSDictionary *backgroundAssetMetadata;
@property (nonatomic, copy) NSString *betaBuildGroupID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSString *companionBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *existingBundleURL;
@property (nonatomic, copy) NSNumber *externalVersionIdentifier;
@property (nonatomic, copy) NSArray *genreIDs;
@property (nonatomic) bool hasMessagesExtension;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *initialODRSize;
@property (nonatomic, copy) NSNumber *itemID;
@property (nonatomic, copy) NSString *itemName;
@property (getter=isLaunchProhibited, nonatomic) bool launchProhibited;
@property (nonatomic, copy) NSURL *messagesArtworkURL;
@property (readonly) long long metadataType;
@property (nonatomic) long long packageCompression;
@property (nonatomic, copy) NSData *packageDPInfo;
@property (nonatomic, copy) NSData *packageSINF;
@property (nonatomic, copy) NSNumber *packageSize;
@property (nonatomic, copy) NSURL *packageURL;
@property (nonatomic, copy) NSDictionary *placeholderEntitlements;
@property (nonatomic, copy) NSArray *provisioningProfiles;
@property (nonatomic, copy) NSData *receipt;
@property bool requiresPowerPluggedIn;
@property (nonatomic, copy) NSString *shortBundleVersion;
@property long long softwarePlatform;
@property (nonatomic, copy) NSString *storeCohort;
@property (nonatomic, copy) NSNumber *storeFront;
@property (readonly) Class superclass;
@property (nonatomic) bool userInitiated;
@property (nonatomic, copy) NSString *variantID;
@property (nonatomic, copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)artworkURL;
- (id)backgroundAssetMetadata;
- (id)betaBuildGroupID;
- (id)bundleID;
- (id)bundleVersion;
- (id)companionBundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)existingBundleURL;
- (id)externalVersionIdentifier;
- (id)genreIDs;
- (bool)hasMessagesExtension;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initialODRSize;
- (bool)isLaunchProhibited;
- (id)itemID;
- (id)itemName;
- (id)messagesArtworkURL;
- (long long)metadataType;
- (long long)packageCompression;
- (id)packageDPInfo;
- (id)packageSINF;
- (id)packageSize;
- (id)packageURL;
- (id)placeholderEntitlements;
- (id)provisioningProfiles;
- (id)receipt;
- (bool)requiresPowerPluggedIn;
- (void)setAccount:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setBackgroundAssetMetadata:(id)arg1;
- (void)setBetaBuildGroupID:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCompanionBundleID:(id)arg1;
- (void)setExistingBundleURL:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setGenreIDs:(id)arg1;
- (void)setHasMessagesExtension:(bool)arg1;
- (void)setInitialODRSize:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setLaunchProhibited:(bool)arg1;
- (void)setMessagesArtworkURL:(id)arg1;
- (void)setPackageCompression:(long long)arg1;
- (void)setPackageDPInfo:(id)arg1;
- (void)setPackageSINF:(id)arg1;
- (void)setPackageSize:(id)arg1;
- (void)setPackageURL:(id)arg1;
- (void)setPlaceholderEntitlements:(id)arg1;
- (void)setProvisioningProfiles:(id)arg1;
- (void)setReceipt:(id)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setShortBundleVersion:(id)arg1;
- (void)setSoftwarePlatform:(long long)arg1;
- (void)setStoreCohort:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (void)setVariantID:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)shortBundleVersion;
- (long long)softwarePlatform;
- (id)storeCohort;
- (id)storeFront;
- (bool)userInitiated;
- (id)variantID;
- (id)vendorName;

@end