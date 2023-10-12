/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLBag : NSObject {
    ISURLBagBackend * _bagBackend;
    NSString * _bagBackendKey;
    SSURLBagContext * _context;
    SSNetworkConstraints * _defaultConstraints;
    NSArray * _guidPatterns;
    NSSet * _guidSchemes;
    NSDictionary * _headerPatterns;
    double  _invalidationTime;
    bool  _loadedFromDiskCache;
    NSString * _storeFrontIdentifier;
}

@property (nonatomic, copy) SSURLBagContext *URLBagContext;
@property (nonatomic, readonly) NSDictionary *URLBagDictionary;
@property (readonly) NSSet *availableStorefrontItemKinds;
@property (nonatomic, readonly) NSString *bagBackendKey;
@property (nonatomic) double invalidationTime;
@property (nonatomic) bool loadedFromDiskCache;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly) long long versionIdentifier;

+ (void)_loadItemKindURLBagKeyMap;
+ (id)_sharedBagBackend;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2;
+ (bool)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (id)urlBagForContext:(id)arg1;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (bool)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;

- (void).cxx_destruct;
- (id)URLBagContext;
- (id)URLBagDictionary;
- (id)URLForURL:(id)arg1 clientIdentifier:(id)arg2;
- (id)_copyGUIDPatternsFromBagBackend;
- (id)_copyGUIDSchemesFromBagBackend;
- (id)_copyHeaderPatternsFromBagBackend;
- (id)_networkConstraintsCachePath;
- (void)_preprocessURLResolutionCacheDictionary:(id)arg1;
- (void)_setBagBackendWithDictionary:(id)arg1;
- (void)_toggleStopSendingLocalCookies;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_writeURLResolutionCacheFile;
- (id)availableStorefrontItemKinds;
- (id)bagBackendKey;
- (id)copyExtraHeadersForURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithRawDictionary:(id)arg1;
- (id)initWithURLBagContext:(id)arg1;
- (double)invalidationTime;
- (bool)isValid;
- (bool)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (bool)loadedFromDiskCache;
- (id)networkConstraintsForDownloadKind:(id)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2;
- (void)setInvalidationTime:(double)arg1;
- (void)setInvalidationTimeWithExprationInterval:(double)arg1;
- (void)setLoadedFromDiskCache:(bool)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setURLBagContext:(id)arg1;
- (bool)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;
- (bool)shouldSendGUIDForURL:(id)arg1;
- (id)storeFrontIdentifier;
- (id)urlForKey:(id)arg1;
- (bool)urlIsTrusted:(id)arg1;
- (id)valueForKey:(id)arg1;
- (long long)versionIdentifier;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
