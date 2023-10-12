/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SHSheetInteractor : NSObject <SFCollaborationCreationDelegate, SFCollaborationPerformerDelegate, SHSheetActivityPerformerDelegate, SHSheetInteractor, SHSheetServiceManagerDelegate, SHSheetSessionDelegate> {
    SHSheetActivityPerformer * _activityPerformer;
    <SHSheetActivityPerformerPresentationInterface> * _activityPresentationController;
    SFCollaborationPerformer * _collaborationPerformer;
    <SHSheetInteractorDelegate> * _delegate;
    SHSheetServiceManager * _serviceManager;
    SHSheetSession * _session;
}

@property (nonatomic, retain) SHSheetActivityPerformer *activityPerformer;
@property (nonatomic) <SHSheetActivityPerformerPresentationInterface> *activityPresentationController;
@property (nonatomic, retain) SFCollaborationPerformer *collaborationPerformer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHSheetInteractorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSessionStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SHSheetServiceManager *serviceManager;
@property (nonatomic, retain) SHSheetSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteSharingURL:(id)arg1;
- (void)_didPerformActivityWithResult:(id)arg1;
- (void)_performActivity:(id)arg1;
- (id)_prepareActivityProxyForRequest:(id)arg1;
- (void)_recordActivityInteractionForResult:(id)arg1;
- (void)_recordActivityViewControllerInteraction;
- (void)_runActivity:(id)arg1;
- (void)_setupServiceManagerIfNeeded;
- (void)_updateRemoteScene;
- (id)activityPerformer;
- (id)activityPresentationController;
- (void)addParticipantsAllowedForCollaborationItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)canManageShareForDocumentInSharedFolderWithCompletionHandler:(id /* block */)arg1;
- (void)canShareFolderContainingExistingSharedItemsWithCompletionHandler:(id /* block */)arg1;
- (void)clearActivityForResult:(id)arg1;
- (void)collaborationFooterViewModelDidChangeForSession:(id)arg1;
- (id)collaborationPerformer;
- (id)collaborationServiceForActivityPerformer:(id)arg1;
- (id)collaborationServiceForSession:(id)arg1;
- (id)collaborationSharingResultForActivity:(id)arg1;
- (id)createActivityItemsConfiguration;
- (void)createSharingURLForCollaborationRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createSharingURLWithParticipantsForCollaborationRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)didBeginCreationForCollaborationPerformer:(id)arg1;
- (void)didCancelCreationForCollaborationPerformer:(id)arg1;
- (void)didFailCreationForCollaborationPerformer:(id)arg1 error:(id)arg2;
- (void)didFinishCreationForCollaborationPerformer:(id)arg1;
- (void)favoriteUserDefaultsActivity:(bool)arg1 withIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (bool)hasSessionStarted;
- (void)headerMetadataDidChangeForSession:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)invalidateRemoteSession;
- (void)isCollaborativeDidChangeForSession:(id)arg1;
- (id)linkMetadataForActivityPerformer:(id)arg1;
- (void)longPressShareActivityWithIdentifier:(id)arg1;
- (void)manageShareForDocumentInSharedFolder;
- (void)metadataCollectionDidLoadForSession:(id)arg1;
- (void)performActionActivityWithIdentifier:(id)arg1;
- (void)performActivity:(id)arg1;
- (void)performActivityWithRequest:(id)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)performEditAction;
- (void)performPeopleSuggestion:(id)arg1;
- (void)performPersonSuggestionWithIdentifier:(id)arg1;
- (void)performShareActivityWithIdentifier:(id)arg1;
- (void)performUserDefaultsActivityWithIdentifier:(id)arg1 activityCategory:(long long)arg2;
- (void)preheatActivitiesIfNeeded;
- (void)provideFeedbackForPeopleSugestionIdentifier:(id)arg1;
- (void)removePersonSuggestionWithIdentifier:(id)arg1;
- (void)requestServiceUpdate;
- (id)serviceManager;
- (void)serviceManager:(id)arg1 didPerformInServiceActivityWithIdentifier:(id)arg2 completed:(bool)arg3 items:(id)arg4 error:(id)arg5;
- (void)serviceManager:(id)arg1 didUpdateAirDropTransferWithChange:(id)arg2;
- (id)serviceManager:(id)arg1 identificationResultsFromSuggestedImageData:(id)arg2;
- (void)serviceManager:(id)arg1 performActivity:(id)arg2;
- (void)serviceManager:(id)arg1 performAirdropViewActivityWithNoContentView:(bool)arg2;
- (void)serviceManager:(id)arg1 performUserDefaultsActivityWithContext:(id)arg2;
- (void)serviceManager:(id)arg1 willPerformActivityInServiceForRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)serviceManagerDidChangeConnectionState:(id)arg1;
- (id)session;
- (void)session:(id)arg1 didChangeMetadata:(id)arg2;
- (void)sessionConfigurationDidChangeForSession:(id)arg1;
- (void)setActivityPerformer:(id)arg1;
- (void)setActivityPresentationController:(id)arg1;
- (void)setCollaborationPerformer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setWantsCollaborativeSession:(bool)arg1;
- (void)shareStatusForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showOptionsDidChangeForSession:(id)arg1;
- (void)startSession;
- (void)stopSession;
- (void)toggleUserDefaultsActivityWithIdentifier:(id)arg1 activityCategory:(long long)arg2;
- (void)updateSessionWithContext:(id)arg1;
- (void)updateUserDefaultsFavorites:(id)arg1 activityCategory:(long long)arg2;

@end
