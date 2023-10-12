/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDProvider : NSObject {
    NSSet * _blockedProcessNames;
    FPDProviderDescriptor * _descriptor;
    NSObject<OS_dispatch_queue> * _domainQueue;
    NSMutableDictionary * _domainsByID;
    NSMutableDictionary * _domainsByRootPath;
    bool  _invalidated;
    NSURL * _localDomainsPlistURL;
    FPDExtensionManager * _manager;
    NSObject<OS_dispatch_queue> * _presentersQueue;
    NSURL * _providerPlistURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _requestedExtendedAttributes;
    FPDServer * _server;
    NSURL * _supportURL;
}

@property (nonatomic, readonly) FPDExtension *asAppExtensionBackedProvider;
@property (nonatomic, copy) NSSet *blockedProcessNames;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) FPDProviderDescriptor *descriptor;
@property (nonatomic, readonly) NSMutableDictionary *domainsByID;
@property (nonatomic, readonly) NSMutableDictionary *domainsByRootPath;
@property (nonatomic, readonly) NSArray *extensionStorageURLs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) bool isAppExtensionReachable;
@property (nonatomic, readonly) NSURL *localDomainsPlistURL;
@property (nonatomic, readonly) FPDExtensionManager *manager;
@property (nonatomic, readonly) NSDictionary *nsDomainsByID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *presentersQueue;
@property (nonatomic, readonly) NSArray *providedItemsURLs;
@property (nonatomic, readonly) NSURL *providerPlistURL;
@property (nonatomic, readonly) NSString *purposeIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDictionary *relevantDomainsByID;
@property (nonatomic, retain) NSArray *requestedExtendedAttributes;
@property (nonatomic, readonly) FPDServer *server;
@property (nonatomic, readonly) bool shouldHideDomainDisplayName;
@property (nonatomic, readonly) NSURL *supportURL;
@property (nonatomic, readonly) bool supportsEnumeration;
@property (nonatomic, readonly) bool supportsFPFS;
@property (nonatomic, readonly) bool testingProvider;

+ (void)_garbageCollectFoldersWithNoRelatedDomain:(id)arg1 supportDir:(id)arg2;
+ (id)defaultNSDomainForDescriptor:(id)arg1;
+ (void)dumpXattrsForContentsOfDirectoryAtURL:(id)arg1 dumper:(id)arg2;
+ (void)dumpXattrsForItemAtURL:(id)arg1 to:(id)arg2;
+ (void)dumpXattrsForSyncRootDirectoryOfVolume:(id)arg1 dumper:(id)arg2;
+ (void)dumpXattrsForSystemDirectoryOfVolume:(id)arg1 dumper:(id)arg2;
+ (id)fpfsDomainURLIsRootOf:(id)arg1;
+ (id)fpfsDomainXattrForURL:(id)arg1;
+ (id)getXattr:(const char *)arg1 at:(const char *)arg2;
+ (id)onDiskProvidersForServer:(id)arg1;
+ (id)parseDomainProperties:(id)arg1 descriptor:(id)arg2 volume:(id)arg3 replicatedByDefault:(bool)arg4;

- (void).cxx_destruct;
- (id)_recreateDefaultDomainIfNeeded;
- (void)_setEnabledOrHiddenByUser:(bool)arg1 forDomainIdentifier:(id)arg2 newValue:(bool)arg3 request:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_startOrClearDomain:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (bool)_supportsFPFS;
- (void)_writeDomainPropertiesIntoLibrary:(id)arg1 ifChangedFrom:(id)arg2;
- (void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 knownFolders:(id)arg3 request:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addDomain:(id)arg1 byImportingDirectoryAtURL:(id)arg2 knownFolders:(id)arg3 unableToStartup:(bool)arg4 needsReimport:(bool)arg5 startupError:(id)arg6 reloadDomain:(bool)arg7 request:(id)arg8 completionHandler:(id /* block */)arg9;
- (id)asAppExtensionBackedProvider;
- (id)blockedProcessNames;
- (id)bundleVersion;
- (id)defaultNSDomain;
- (id)description;
- (id)descriptor;
- (id)domainForIdentifier:(id)arg1;
- (id)domainForRealPathURLFast:(id)arg1;
- (id)domainForRealPathURLSlow:(id)arg1;
- (id)domainForURL:(id)arg1;
- (id)domainsByID;
- (id)domainsByRootPath;
- (void)dumpStateTo:(id)arg1 providerFilter:(id)arg2 limitNumberOfItems:(bool)arg3;
- (void)dumpValue:(id)arg1 forKey:(id)arg2 to:(id)arg3;
- (void)dumpXattrsForDomains:(id)arg1 dumper:(id)arg2;
- (void)enableAllDomainsIfNoUserElection;
- (id)extensionStorageURLs;
- (id)identifier;
- (id)importDomainsFromLibrary:(id)arg1 updatePlist:(bool)arg2;
- (id)initWithDescriptor:(id)arg1 server:(id)arg2;
- (void)invalidateSingleDomain:(id)arg1 reason:(id)arg2;
- (void)invalidateWithReason:(id)arg1;
- (bool)invalidated;
- (bool)isAppExtensionReachable;
- (bool)isEqual:(id)arg1;
- (id)localDomainsPlistURL;
- (id)loggerForDomainWithIdentifier:(id)arg1;
- (id)manager;
- (void)materializeRootForDomain:(id)arg1;
- (id)newDomainFromNSDomain:(id)arg1 volumeManager:(id)arg2;
- (id)nsDomainsByID;
- (id)presentersQueue;
- (id)providedItemsURLs;
- (id)providerDomainForDomain:(id)arg1;
- (id)providerPlistURL;
- (id)purposeIdentifier;
- (id)queue;
- (id)relevantDomainsByID;
- (void)reloadDomain:(id)arg1 unableToStartup:(bool)arg2 needsReimport:(bool)arg3 startupError:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)removeAllDomainsForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDomain:(id)arg1 mode:(unsigned long long)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)requestedExtendedAttributes;
- (id)server;
- (void)setBlockedProcessNames:(id)arg1;
- (void)setDomainUserInfo:(id)arg1 forDomainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setEjectable:(bool)arg1 forDomainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setEnabled:(bool)arg1 forDomainIdentifier:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setHiddenByUser:(bool)arg1 forDomainIdentifier:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setRequestedExtendedAttributes:(id)arg1;
- (bool)shouldHideDomainDisplayName;
- (void)startDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)startWithCompletion:(id /* block */)arg1;
- (id)supportURL;
- (bool)supportsEnumeration;
- (bool)supportsFPFS;
- (bool)testingProvider;
- (void)writeAllDomainProperties;

@end
