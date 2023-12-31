/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountsManager : NSObject <BRCAccountHandlerDelegate, BRCCiconiaStatusProvider> {
    NSMutableDictionary * _accountHandlersByACAccountID;
    NSMutableArray * _accountsListChangeHandlers;
    bool  _finishedLoadingAccounts;
    bool  _isInSyncBubble;
    bool  _loadAccountsRequested;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _versionsProvidersByVolumeID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInSyncBubble;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_getOrCreateAccountHandlerForACAccount:(id)arg1;
- (bool)_maintainExistingFileProviderDomainsWithAccounts:(id)arg1 withError:(id*)arg2;
- (id)accountForCurrentPersona;
- (id)accountForPersona:(id)arg1;
- (void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2;
- (void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2;
- (id)accountHandlerForACAccountID:(id)arg1;
- (id)accountHandlerForCurrentPersona;
- (bool)cleanupAccountDataForLoggedOutAccountWithPersona:(id)arg1;
- (void)createAndLoadSessionWithACAccountID:(id)arg1 createBlock:(id /* block */)arg2;
- (void)createSessionWithACAccountID:(id)arg1 dsid:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)destroySessionWithACAccountID:(id)arg1;
- (void)enumerateAccountHandlerIfFinishedLoading:(id /* block */)arg1;
- (void)enumerateAccountHandlers:(id /* block */)arg1;
- (id)getOrCreateAccountHandlerForACAccount:(id)arg1;
- (id)init;
- (bool)isInSyncBubble;
- (void)loadAccounts;
- (void)notifyAccountsListChanged;
- (void)performWhenAccountsListChanges:(id /* block */)arg1;
- (id)personaIdentifierForACAccountID:(id)arg1;
- (bool)shouldLastCiconiaRunConsideredAsSuccessForFPFSMigrationRollupForAllAccounts;
- (void)updateAccountDisplayName:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)waitForAccountLoadingSynchronouslyIfPossible:(id)arg1;
- (bool)waitForInitialAccountLoadingSynchronouslyIfPossible;

// BRCAccountsManager (LegacyAdditions)

- (id)versionsProviderForVolume:(id)arg1;

@end
