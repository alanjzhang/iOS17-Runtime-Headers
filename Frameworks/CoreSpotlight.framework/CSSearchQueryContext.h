/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchQueryContext : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _additionalBundleIDs;
    NSArray * _additionalQueries;
    bool  _advancedQuery;
    bool  _allowDocumentUnderstandingEntitledAttributes;
    bool  _allowPhotosEntitledAttributes;
    bool  _allowSpotlightEntitledAttributes;
    bool  _attribute;
    NSArray * _bundleIDs;
    NSString * _clientBundleID;
    NSArray * _completionAttributes;
    unsigned int  _completionOptions;
    long long  _completionResultCount;
    NSString * _completionString;
    NSArray * _completionWeights;
    bool  _counting;
    double  _currentTime;
    NSArray * _customFieldSpecifications;
    NSString * _customResourceDirectory;
    bool  _disableBlockingOnIndex;
    NSArray * _disableBundles;
    bool  _disableResultStreaming;
    long long  _dominantRankingQueryCount;
    long long  _dominatedRankingQueryCount;
    bool  _enableRecentSuggestions;
    bool  _enableResultCountsPerSuggestion;
    bool  _enableSuggestionTokens;
    long long  _feedbackQueryID;
    NSArray * _fetchAttributes;
    bool  _fetchl2Signals;
    NSArray * _filterQueries;
    NSString * _filterQuery;
    unsigned int  _flags;
    bool  _fsOnly;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMask;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMatch;
    bool  _grouped;
    NSArray * _groupingRules;
    bool  _hasFreeTextQuery;
    long long  _highMatchBit;
    long long  _highRecencyBit;
    bool  _includeUserActivities;
    NSArray * _instantAnswersBundleIDs;
    NSDate * _instantAnswersOverrideDate;
    NSArray * _instantAnswersQueries;
    bool  _internal;
    NSString * _keyboardLanguage;
    bool  _live;
    long long  _lowMatchBit;
    bool  _lowPriority;
    long long  _lowRecencyBit;
    NSArray * _markedTextArray;
    double  _maxAge;
    long long  _maxCount;
    long long  _maxSuggestionCount;
    unsigned long long  _maximumBatchSize;
    long long  _minCount;
    double  _minL2Score;
    NSArray * _mountPoints;
    NSString * _normalizedSearchQuery;
    NSDictionary * _options;
    bool  _parseUserQuery;
    NSAttributedString * _photosEntitySearchParse;
    bool  _playback;
    NSArray * _preferredLanguages;
    bool  _priorityIndexQuery;
    NSArray * _protectionClasses;
    unsigned int  _qos;
    long long  _queryID;
    NSDictionary * _queryUnderstandingOutput;
    NSArray * _rankingQueries;
    int  _rankingType;
    NSString * _reason;
    NSArray * _resultMatchingAttributes;
    NSArray * _resultMatchingSceneIdentifiers;
    _MDQueryRewriteContext * _rewriteContext;
    NSArray * _scopes;
    long long  _shortcutBit;
    unsigned long long  _sourceOptions;
    long long  _strongRankingQueryCount;
    CSSuggestion * _suggestion;
    NSString * _userQuery;
    unsigned int  _userQueryOptions;
}

@property (nonatomic, retain) NSArray *additionalBundleIDs;
@property (nonatomic, retain) NSArray *additionalQueries;
@property (nonatomic) bool advancedQuery;
@property bool allowDocumentUnderstandingEntitledAttributes;
@property bool allowPhotosEntitledAttributes;
@property bool allowSpotlightEntitledAttributes;
@property (nonatomic) bool attribute;
@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, retain) NSArray *completionAttributes;
@property (nonatomic) unsigned int completionOptions;
@property (nonatomic) long long completionResultCount;
@property (nonatomic, retain) NSString *completionString;
@property (nonatomic, retain) NSArray *completionWeights;
@property (nonatomic) bool counting;
@property (nonatomic) double currentTime;
@property (nonatomic) bool disableBlockingOnIndex;
@property (nonatomic, retain) NSArray *disableBundles;
@property (nonatomic) bool disableNLP;
@property bool disableResultStreaming;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic) bool enableInstantAnswers;
@property (nonatomic) long long feedbackQueryID;
@property (nonatomic, retain) NSArray *fetchAttributes;
@property (nonatomic) bool fetchl2Signals;
@property (nonatomic, copy) NSArray *filterQueries;
@property (nonatomic, retain) NSString *filterQuery;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool fsOnly;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMask;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMatch;
@property (nonatomic) bool generateSuggestions;
@property (nonatomic) bool grouped;
@property (nonatomic, copy) NSArray *groupingRules;
@property (nonatomic) bool hasFreeTextQuery;
@property (nonatomic) long long highMatchBit;
@property (nonatomic) long long highRecencyBit;
@property (nonatomic) bool includeUserActivities;
@property (nonatomic, retain) NSArray *instantAnswersBundleIDs;
@property (nonatomic, retain) NSArray *instantAnswersQueries;
@property (nonatomic) bool internal;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic) bool live;
@property (nonatomic) long long lowMatchBit;
@property (nonatomic) bool lowPriority;
@property (nonatomic) long long lowRecencyBit;
@property (nonatomic, retain) NSArray *markedTextArray;
@property (nonatomic) double maxAge;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long maxSuggestionCount;
@property (nonatomic) unsigned long long maximumBatchSize;
@property (nonatomic) long long minCount;
@property (nonatomic) double minL2Score;
@property (nonatomic, retain) NSArray *mountPoints;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) bool parseUserQuery;
@property (nonatomic, copy) NSAttributedString *photosEntitySearchParse;
@property (nonatomic) bool playback;
@property (nonatomic) bool pommesSuggestions;
@property (nonatomic) bool pommesZKW;
@property (nonatomic, retain) NSArray *preferredLanguages;
@property (nonatomic) bool priorityIndexQuery;
@property (nonatomic, retain) NSArray *protectionClasses;
@property (readonly) unsigned int qos;
@property (nonatomic) long long queryID;
@property (nonatomic, copy) NSDictionary *queryUnderstandingOutput;
@property (nonatomic, retain) NSArray *rankingQueries;
@property (nonatomic) int rankingType;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSArray *resultMatchingAttributes;
@property (nonatomic, retain) NSArray *resultMatchingSceneIdentifiers;
@property (nonatomic, retain) _MDQueryRewriteContext *rewriteContext;
@property (nonatomic, retain) NSArray *scopes;
@property (nonatomic) long long shortcutBit;
@property (nonatomic) bool sodium;
@property (nonatomic) unsigned long long sourceOptions;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic, copy) CSSuggestion *suggestion;
@property (nonatomic, retain) NSString *userQuery;
@property (nonatomic) unsigned int userQueryOptions;

+ (id)sodiumSupportedBundleIDs;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalBundleIDs;
- (id)additionalQueries;
- (bool)advancedQuery;
- (bool)allowDocumentUnderstandingEntitledAttributes;
- (bool)allowPhotosEntitledAttributes;
- (bool)allowSpotlightEntitledAttributes;
- (bool)attribute;
- (id)bundleIDs;
- (id)clientBundleID;
- (id)completionAttributes;
- (unsigned int)completionOptions;
- (long long)completionResultCount;
- (id)completionString;
- (id)completionWeights;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)counting;
- (double)currentTime;
- (id)customFieldSpecifications;
- (id)customResourceDirectory;
- (id)debugDescription;
- (id)description;
- (bool)disableBlockingOnIndex;
- (id)disableBundles;
- (bool)disableNLP;
- (bool)disableResultStreaming;
- (long long)dominantRankingQueryCount;
- (long long)dominatedRankingQueryCount;
- (bool)enableInstantAnswers;
- (bool)enablePhotosEntitySearch;
- (bool)enableRecentSuggestions;
- (bool)enableResultCountsPerSuggestion;
- (bool)enableSuggestionTokens;
- (void)encodeWithCoder:(id)arg1;
- (long long)feedbackQueryID;
- (id)fetchAttributes;
- (bool)fetchl2Signals;
- (id)filterQueries;
- (id)filterQuery;
- (unsigned int)flags;
- (bool)fsOnly;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMask;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMatch;
- (bool)generateSuggestions;
- (bool)grouped;
- (id)groupingRules;
- (bool)hasFreeTextQuery;
- (long long)highMatchBit;
- (long long)highRecencyBit;
- (bool)includeUserActivities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQoS:(unsigned int)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)instantAnswersBundleIDs;
- (id)instantAnswersOverrideDate;
- (id)instantAnswersQueries;
- (bool)internal;
- (bool)isDateQueryContext;
- (bool)isMail;
- (bool)isMessages;
- (bool)isNotes;
- (bool)isPhotos;
- (bool)isPommesCtl;
- (bool)isSafari;
- (id)keyboardLanguage;
- (bool)live;
- (long long)lowMatchBit;
- (bool)lowPriority;
- (long long)lowRecencyBit;
- (id)markedTextArray;
- (double)maxAge;
- (long long)maxCount;
- (long long)maxItemCount;
- (long long)maxSuggestionCount;
- (unsigned long long)maximumBatchSize;
- (long long)minCount;
- (double)minL2Score;
- (id)mountPoints;
- (id)normalizedSearchQuery;
- (id)options;
- (bool)parseUserQuery;
- (id)photosEntitySearchParse;
- (bool)playback;
- (bool)pommesSuggestions;
- (bool)pommesZKW;
- (id)preferredLanguages;
- (bool)priorityIndexQuery;
- (id)protectionClasses;
- (unsigned int)qos;
- (long long)queryID;
- (id)queryUnderstandingOutput;
- (id)rankingQueries;
- (int)rankingType;
- (id)reason;
- (id)resultMatchingAttributes;
- (id)resultMatchingSceneIdentifiers;
- (id)rewriteContext;
- (id)scopes;
- (void)setAdditionalBundleIDs:(id)arg1;
- (void)setAdditionalQueries:(id)arg1;
- (void)setAdvancedQuery:(bool)arg1;
- (void)setAllowDocumentUnderstandingEntitledAttributes:(bool)arg1;
- (void)setAllowPhotosEntitledAttributes:(bool)arg1;
- (void)setAllowSpotlightEntitledAttributes:(bool)arg1;
- (void)setAttribute:(bool)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCompletionAttributes:(id)arg1;
- (void)setCompletionOptions:(unsigned int)arg1;
- (void)setCompletionResultCount:(long long)arg1;
- (void)setCompletionString:(id)arg1;
- (void)setCompletionWeights:(id)arg1;
- (void)setCounting:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCustomFieldSpecifications:(id)arg1;
- (void)setCustomResourceDirectory:(id)arg1;
- (void)setDisableBlockingOnIndex:(bool)arg1;
- (void)setDisableBundles:(id)arg1;
- (void)setDisableNLP:(bool)arg1;
- (void)setDisableResultStreaming:(bool)arg1;
- (void)setDominantRankingQueryCount:(long long)arg1;
- (void)setDominatedRankingQueryCount:(long long)arg1;
- (void)setEnableInstantAnswers:(bool)arg1;
- (void)setEnablePhotosEntitySearch:(bool)arg1;
- (void)setEnableRecentSuggestions:(bool)arg1;
- (void)setEnableResultCountsPerSuggestion:(bool)arg1;
- (void)setEnableSuggestionTokens:(bool)arg1;
- (void)setFeedbackQueryID:(long long)arg1;
- (void)setFetchAttributes:(id)arg1;
- (void)setFetchl2Signals:(bool)arg1;
- (void)setFilterQueries:(id)arg1;
- (void)setFilterQuery:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFsOnly:(bool)arg1;
- (void)setFuzzyMask:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setFuzzyMatch:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setGenerateSuggestions:(bool)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setGroupingRules:(id)arg1;
- (void)setHasFreeTextQuery:(bool)arg1;
- (void)setHighMatchBit:(long long)arg1;
- (void)setHighRecencyBit:(long long)arg1;
- (void)setIncludeUserActivities:(bool)arg1;
- (void)setInstantAnswersBundleIDs:(id)arg1;
- (void)setInstantAnswersOverrideDate:(id)arg1;
- (void)setInstantAnswersQueries:(id)arg1;
- (void)setInternal:(bool)arg1;
- (void)setIsDateQueryContext:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setLive:(bool)arg1;
- (void)setLowMatchBit:(long long)arg1;
- (void)setLowPriority:(bool)arg1;
- (void)setLowRecencyBit:(long long)arg1;
- (void)setMarkedTextArray:(id)arg1;
- (void)setMaxAge:(double)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setMaxItemCount:(long long)arg1;
- (void)setMaxSuggestionCount:(long long)arg1;
- (void)setMaximumBatchSize:(unsigned long long)arg1;
- (void)setMinCount:(long long)arg1;
- (void)setMinL2Score:(double)arg1;
- (void)setMountPoints:(id)arg1;
- (void)setNormalizedSearchQuery:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setParseUserQuery:(bool)arg1;
- (void)setPhotosEntitySearchParse:(id)arg1;
- (void)setPlayback:(bool)arg1;
- (void)setPommesSuggestions:(bool)arg1;
- (void)setPommesZKW:(bool)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setPriorityIndexQuery:(bool)arg1;
- (void)setProtectionClasses:(id)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setQueryID:(long long)arg1;
- (void)setQueryUnderstandingOutput:(id)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setRankingType:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setResultMatchingAttributes:(id)arg1;
- (void)setResultMatchingSceneIdentifiers:(id)arg1;
- (void)setRewriteContext:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setShortcutBit:(long long)arg1;
- (void)setSodium:(bool)arg1;
- (void)setSourceOptions:(unsigned long long)arg1;
- (void)setStrongRankingQueryCount:(long long)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setUserQuery:(id)arg1;
- (void)setUserQueryOptions:(unsigned int)arg1;
- (long long)shortcutBit;
- (bool)sodium;
- (id)sodiumEnabledBundleID;
- (unsigned long long)sourceOptions;
- (long long)strongRankingQueryCount;
- (id)suggestion;
- (id)userQuery;
- (unsigned int)userQueryOptions;
- (id)xpc_dictionary;

@end
