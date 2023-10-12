/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDuplicateAsset : NSObject {
    PLManagedAsset * _asset;
    NSString * _assetCloudScopedIdentifier;
    NSManagedObjectID * _assetObjectID;
    NSString * _assetObjectIDDescription;
    NSString * _assetUUID;
    bool  _dateUpdated;
    short  _duplicateAssetVisibilityState;
    bool  _enableEXIFDataAccess;
    bool  _facesUpdated;
    NSNumber * _hasUserModifiedDateCreated;
    NSNumber * _hasUserModifiedLocation;
    NSNumber * _hasUserModifiedTimezone;
    bool  _iptcUpdated;
    bool  _locationUpdated;
    long long  _mergeStatus;
    NSString * _originalFilename;
    long long  _originalResolution;
    bool  _resourceComparisonPropertyUpdateLocation;
    NSString * _resourceSwapAssetUUID;
    bool  _resourceSwapDisabled;
    long long  _score;
    bool  _timezoneUpdated;
    bool  _titleUpdated;
}

@property (retain) PLManagedAsset *asset;
@property (retain) NSString *assetCloudScopedIdentifier;
@property (retain) NSManagedObjectID *assetObjectID;
@property (retain) NSString *assetObjectIDDescription;
@property (retain) NSString *assetUUID;
@property bool dateUpdated;
@property (nonatomic) short duplicateAssetVisibilityState;
@property bool enableEXIFDataAccess;
@property bool facesUpdated;
@property (readonly) bool hasModifiedUserDateCreated;
@property (readonly) bool hasModifiedUserLocation;
@property (readonly) bool hasModifiedUserTimezone;
@property (readonly) bool hasModifiedUserTitle;
@property bool iptcUpdated;
@property (readonly) bool isMergeReady;
@property (readonly) NSDictionary *jsonDescriptionData;
@property bool locationUpdated;
@property (nonatomic) long long mergeStatus;
@property (nonatomic) long long originalResolution;
@property (readonly) NSString *privateDescription;
@property bool resourceComparisonPropertyUpdateLocation;
@property (retain) NSString *resourceSwapAssetUUID;
@property bool resourceSwapDisabled;
@property (readonly) long long score;
@property (readonly) NSString *shortDescription;
@property bool timezoneUpdated;
@property bool titleUpdated;
@property (readonly) NSString *veryShortDescription;

+ (bool)isDuplicateAssetSortChangedObject:(id)arg1;
+ (id)relationshipKeyPathsForMergePrefetching;
+ (id)relationshipKeyPathsForPrefetching;

- (void).cxx_destruct;
- (id)_additionalDescriptionDictionaryWithPIIDetails:(bool)arg1;
- (id)_additionalDescriptionState:(id)arg1;
- (id)_additionalDescriptionWithPIIDetails:(bool)arg1;
- (long long)_buildBaseScore;
- (long long)_buildUserModifiedScore;
- (short)_calculateDuplicateAssetVisibilityState;
- (void)_compareResourceReverseCheckFromOther:(id)arg1 score:(struct PLDuplicateAssetScoreTuple { short x1; short x2; }*)arg2;
- (void)_compareResourceTIFFCheckFromAsset:(id)arg1 other:(id)arg2 scoreProperty:(short*)arg3;
- (struct PLDuplicateAssetScoreTuple { short x1; short x2; })_compareResourcesAdditionalChecksFromOther:(id)arg1;
- (struct PLDuplicateAssetScoreTuple { short x1; short x2; })_compareResourcesMatchingKindSubtypeCheckFromOther:(id)arg1 error:(id*)arg2;
- (struct PLDuplicateAssetScoreTuple { short x1; short x2; })_compareResourcesMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)arg1;
- (struct PLDuplicateAssetScoreTuple { short x1; short x2; })_compareResourcesMatchingPlaybackStyleCheckFromOther:(id)arg1 error:(id*)arg2;
- (struct PLDuplicateAssetScoreTuple { short x1; short x2; })_compareResourcesNotMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)arg1 error:(id*)arg2;
- (void)_compareResourcesResetPropertiesWithOther:(id)arg1;
- (void)_compareUTICheckFromOther:(id)arg1 scoreTuple:(struct PLDuplicateAssetScoreTuple { short x1; short x2; }*)arg2;
- (void)_configureInitPropertiesWithAsset:(id)arg1;
- (long long)_correctedCompareDate:(id)arg1 otherDate:(id)arg2;
- (void)_fileFormatIncrementScore:(long long*)arg1;
- (void)_mergeComparisonScoreModifierWithOtherAsset:(id)arg1 score:(long long*)arg2 otherScore:(long long*)arg3;
- (void)_tieBreakerComparisonScoreWithOtherAsset:(id)arg1 score:(long long*)arg2 otherScore:(long long*)arg3;
- (void)_updateScoreOnCondition:(bool)arg1 incrementOtherScore:(bool)arg2 scoreTuple:(struct PLDuplicateAssetScoreTuple { short x1; short x2; }*)arg3 other:(id)arg4 propertyName:(id)arg5 additionalLogString:(id)arg6;
- (void)_updateScoresUsingLatestDateWithDate:(id)arg1 otherDate:(id)arg2 score:(long long*)arg3 otherScore:(long long*)arg4;
- (bool)_validCPLAssetsWithAssets:(id)arg1;
- (id)asset;
- (id)assetCloudScopedIdentifier;
- (id)assetObjectID;
- (id)assetObjectIDDescription;
- (id)assetUUID;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 enabledMergeComparison:(bool)arg2;
- (long long)compareResource:(id)arg1 error:(id*)arg2;
- (bool)dateUpdated;
- (id)debugDescription;
- (id)description;
- (short)duplicateAssetVisibilityState;
- (id)duplicateAssetVisibilityStateString;
- (bool)enableEXIFDataAccess;
- (bool)facesUpdated;
- (bool)hasModifiedUserDateCreated;
- (bool)hasModifiedUserLocation;
- (bool)hasModifiedUserTimezone;
- (bool)hasModifiedUserTitle;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 cloudScopedIdentifier:(id)arg2 enableEXIFDataAccess:(bool)arg3;
- (bool)iptcUpdated;
- (bool)isMergeReady;
- (id)jsonDescriptionData;
- (bool)locationUpdated;
- (long long)mergeStatus;
- (long long)originalResolution;
- (id)privateDescription;
- (bool)resourceComparisonPropertyUpdateLocation;
- (id)resourceSwapAssetUUID;
- (bool)resourceSwapDisabled;
- (long long)score;
- (void)setAsset:(id)arg1;
- (void)setAssetCloudScopedIdentifier:(id)arg1;
- (void)setAssetObjectID:(id)arg1;
- (void)setAssetObjectIDDescription:(id)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setDateUpdated:(bool)arg1;
- (void)setDuplicateAssetVisibilityState:(short)arg1;
- (void)setEnableEXIFDataAccess:(bool)arg1;
- (void)setFacesUpdated:(bool)arg1;
- (void)setIptcUpdated:(bool)arg1;
- (void)setLocationUpdated:(bool)arg1;
- (void)setMergeStatus:(long long)arg1;
- (void)setOriginalResolution:(long long)arg1;
- (void)setResourceComparisonPropertyUpdateLocation:(bool)arg1;
- (void)setResourceSwapAssetUUID:(id)arg1;
- (void)setResourceSwapDisabled:(bool)arg1;
- (void)setTimezoneUpdated:(bool)arg1;
- (void)setTitleUpdated:(bool)arg1;
- (id)shortDescription;
- (bool)timezoneUpdated;
- (bool)titleUpdated;
- (id)veryShortDescription;

@end
