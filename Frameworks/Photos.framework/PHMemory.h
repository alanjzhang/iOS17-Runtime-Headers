/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemory : PHAssetCollection {
    NSData * _assetListPredicate;
    PHMemoryFeature * _blacklistedFeature;
    unsigned long long  _category;
    NSDate * _creationDate;
    bool  _didLoadPhotosGraphProperties;
    bool  _favorite;
    long long  _featuredState;
    NSString * _graphMemoryIdentifier;
    NSDate * _lastEnrichmentDate;
    NSDate * _lastMoviePlayedDate;
    NSDate * _lastViewedDate;
    NSString * _localizedSubtitle;
    NSDictionary * _movieAssetState;
    NSData * _movieData;
    unsigned long long  _notificationState;
    long long  _pendingPlayCount;
    long long  _pendingShareCount;
    unsigned short  _pendingState;
    long long  _pendingViewCount;
    NSData * _photosGraphData;
    NSDictionary * _photosGraphProperties;
    long long  _photosGraphVersion;
    bool  _rejected;
    double  _score;
    unsigned short  _sharingComposition;
    long long  _storyColorGradeKind;
    NSString * _storyTitleCategory;
    unsigned long long  _subcategory;
    long long  _syncedPlayCount;
    long long  _syncedShareCount;
    long long  _syncedViewCount;
    unsigned short  _syndicatedContentState;
    NSString * _title;
    long long  _titleCategory;
    NSString * _titleFontName;
    NSDictionary * _transientMemoryProperties;
    bool  _userCreated;
}

@property (nonatomic, readonly, copy) NSString *URLNavigationSourceIdentifier;
@property (nonatomic, readonly) NSData *assetListPredicate;
@property (nonatomic, readonly) PHMemoryFeature *blacklistedFeature;
@property (nonatomic, readonly) NSArray *blockableFeatures;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) double currentRelevanceScore;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) NSSet *featuredPeopleIdentifiers;
@property (nonatomic, readonly) NSSet *featuredPersonLocalIdentifiers;
@property (nonatomic, readonly) long long featuredState;
@property (nonatomic, readonly) NSString *graphMemoryIdentifier;
@property (nonatomic, readonly) bool isBadgeable;
@property (nonatomic, readonly) bool isContiguous;
@property (nonatomic, readonly) bool isCurrentlyRelevant;
@property (nonatomic, readonly) bool isGreat;
@property (nonatomic, readonly) bool isMustSee;
@property (nonatomic, readonly) bool isStellar;
@property (nonatomic, readonly) NSDate *lastEnrichmentDate;
@property (nonatomic, readonly) NSDate *lastMoviePlayedDate;
@property (nonatomic, readonly) NSDate *lastViewedDate;
@property (nonatomic, readonly) NSData *movieData;
@property (nonatomic, readonly) NSDictionary *musicGenreDistribution;
@property (nonatomic, readonly) unsigned long long notificationState;
@property (nonatomic, readonly) unsigned short pendingState;
@property (nonatomic, readonly) NSDictionary *photosGraphProperties;
@property (nonatomic, readonly) long long photosGraphVersion;
@property (nonatomic, readonly) long long playCount;
@property (getter=isPresentedFromURLNavigation, nonatomic, readonly) bool presentedFromURLNavigation;
@property (getter=isRejected, nonatomic, readonly) bool rejected;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) long long shareCount;
@property (nonatomic, readonly) unsigned short sharingComposition;
@property (nonatomic, readonly) long long storyColorGradeKind;
@property (nonatomic, readonly) long long storyColorGradeKindRaw;
@property (nonatomic, readonly) NSString *storyTitleCategory;
@property (nonatomic, readonly) NSString *storyTitleCategoryRaw;
@property (nonatomic, readonly) unsigned long long subcategory;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) unsigned short syndicatedContentState;
@property (nonatomic, readonly) NSArray *triggerTypes;
@property (getter=isUserCreated, nonatomic, readonly) bool userCreated;
@property (nonatomic, readonly) long long viewCount;

+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)_contextualScoreForMemory:(id)arg1;
+ (id)assetListPredicateFromQueryHintObjects:(id)arg1;
+ (id)blockedPersonLocalIdentifiersInPhotoLibrary:(id)arg1;
+ (id)corePropertiesToFetch;
+ (id)entityKeyMap;
+ (id)fetchBestRecentMemoryWithOptions:(id)arg1;
+ (id)fetchBlockedMemoriesWithOptions:(id)arg1;
+ (id)fetchMemoriesWithGraphMemoryIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMemoriesWithNilLastEnrichmentDateWithOptions:(id)arg1;
+ (id)fetchMemoriesWithUserFeedbackWithOptions:(id)arg1;
+ (id)fetchMemoryWithGraphMemoryIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchMostRelevantMemoryWithOptions:(id)arg1;
+ (id)fetchPredicateForSharingFilter:(unsigned short)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchPredicateFromUserCreatedComparisonPredicate:(id)arg1;
+ (id)fetchType;
+ (void)generateMemoriesWithOptions:(id)arg1 completion:(id /* block */)arg2;
+ (id)identifierCode;
+ (bool)isTriggeredMemoryCategory:(unsigned long long)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsPendingState;
+ (bool)managedObjectSupportsRejectedState;
+ (bool)managedObjectSupportsSharingComposition;
+ (bool)managedObjectSupportsTrashedState;
+ (id)memoriesWithBlockedPersonFeatureInPhotoLibrary:(id)arg1;
+ (id)movieDataWithTitleFontName:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)stringForCategory:(unsigned long long)arg1;
+ (id)stringForFeaturedState:(long long)arg1;
+ (id)stringForNotificationState:(unsigned long long)arg1;
+ (id)stringForSubcategory:(unsigned long long)arg1;
+ (id)stringForTriggerType:(unsigned long long)arg1;
+ (id)titleFontNameFromMovieData:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (id)_curatedAssetIDsWithLibrary:(id)arg1;
- (id)_extendedCuratedAssetIDsWithLibrary:(id)arg1;
- (void)_loadValuesFromPhotosGraphProperties;
- (id)_representativeAndCuratedAssetIDs;
- (id)assetListPredicate;
- (id)blacklistedFeature;
- (id)blockableFeatures;
- (bool)canContainAssets;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)canShowAvalancheStacks;
- (unsigned long long)category;
- (Class)changeRequestClass;
- (bool)collectionHasFixedOrder;
- (id)creationDate;
- (double)currentRelevanceScore;
- (id)defaultSortDescriptor;
- (id)description;
- (id)featuredPeopleIdentifiers;
- (id)featuredPersonLocalIdentifiers;
- (long long)featuredState;
- (id)graphMemoryIdentifier;
- (bool)hasBlockableFeature;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isBadgeable;
- (bool)isContiguous;
- (bool)isCurrentlyRelevant;
- (bool)isFavorite;
- (bool)isGreat;
- (bool)isMustSee;
- (bool)isPending;
- (bool)isRejected;
- (bool)isStellar;
- (bool)isUserCreated;
- (id)lastEnrichmentDate;
- (id)lastMoviePlayedDate;
- (id)lastViewedDate;
- (id)localizedSubtitle;
- (id)meaningLabels;
- (id)moodKeywords;
- (id)movieData;
- (id)movieStateDataForAsset:(id)arg1;
- (id)musicGenreDistribution;
- (unsigned long long)notificationState;
- (unsigned short)pendingState;
- (id)photosGraphProperties;
- (long long)photosGraphVersion;
- (long long)playCount;
- (id)predicateForAllAssetsWithLibrary:(id)arg1;
- (id)predicateForAllMomentsFromRepresentativeAssets;
- (id)presentationHints;
- (double)score;
- (long long)shareCount;
- (unsigned short)sharingComposition;
- (long long)storyColorGradeKind;
- (long long)storyColorGradeKindRaw;
- (id)storyTitleCategory;
- (id)storyTitleCategoryRaw;
- (unsigned long long)subcategory;
- (id)subtitle;
- (unsigned long long)suggestedMood;
- (unsigned short)syndicatedContentState;
- (long long)titleCategory;
- (id)titleFontName;
- (unsigned long long)titleFontNameHash;
- (id)triggerTypes;
- (id)userFeedbackProperties;
- (long long)viewCount;

// PHMemory (Curation)

+ (id)filteredAndSortedPreviewAssetsByScoreFromAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)previewCandidatesFromAssets:(id)arg1;

- (double)_evaluatedDurationWithNumberOfStillPhotos:(unsigned long long)arg1 numberOfLivePhotos:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 options:(id)arg4;
- (unsigned long long)_fetchNumberOfAssetsWithType:(unsigned long long)arg1 predicate:(id)arg2;
- (unsigned long long)_numberOfAssetsWithType:(unsigned long long)arg1 optionsValue:(id)arg2 predicate:(id)arg3;
- (id)_predicateForImages;
- (id)_predicateForLivePhotos;
- (id)_predicateForVideos;
- (unsigned long long)availableCurationLengthsWithOptions:(id)arg1;
- (id)curationOfLength:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)currentCurationLengthWithOptions:(id)arg1;
- (id)fetchAssetsWithCurationOfLength:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;
- (id)fetchPreviewAssetForLength:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (id)rankedPreviewAssetsForLength:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;

// PHMemory (NavigationContext)

+ (void)clearCurrentMemoryForURLNavigation;
+ (void)setCurrentMemoryForURLNavigation:(id)arg1;

- (id)URLNavigationSourceIdentifier;
- (bool)isPresentedFromURLNavigation;

// PHMemory (Relevance)

+ (id)fetchMostRelevantMemoryAtDate:(id)arg1 options:(id)arg2;
+ (id)mostRelevantMemoryInMemories:(id)arg1 atDate:(id)arg2;

- (bool)isRelevantAtDate:(id)arg1;
- (double)relevanceScoreAtDate:(id)arg1;

// PHMemory (Transient)

+ (id)_fetchOptionsForTransientMemoryAssetsWithOptions:(id)arg1;
+ (id)transientMemoryWithInfo:(id)arg1 photoLibrary:(id)arg2;

- (bool)isTransient;
- (id)query;
- (id)queryForCuratedAssetsWithOptions:(id)arg1;
- (id)queryForExtendedCuratedAssetsWithOptions:(id)arg1;
- (id)queryForKeyAssetWithOptions:(id)arg1;
- (id)rejectionCause;
- (void)setupTransientMemory;
- (id)transientMemoryStartDate;
- (id)transientRepresentativeAndCuratedAssetIDs;

@end
