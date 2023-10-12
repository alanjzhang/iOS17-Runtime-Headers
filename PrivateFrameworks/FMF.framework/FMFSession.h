/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {
    NSMutableDictionary * _cachedCanShareLocationWithHandleByHandle;
    NSSet * _cachedGetHandlesFollowingMyLocation;
    NSSet * _cachedGetHandlesSharingLocationsWithMe;
    NSMutableDictionary * _cachedLocationForHandleByHandle;
    NSMutableDictionary * _cachedOfferExpirationForHandleByHandle;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <FMFSessionDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    NSObject<OS_dispatch_queue> * _handlesQueue;
    NSMutableSet * _internalHandles;
    bool  _isModelInitialized;
    FMFuture * _sessionInterruptionFuture;
    FMFuture * _sessionInvalidationFuture;
}

@property (nonatomic, retain) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle;
@property (nonatomic, retain) NSSet *cachedGetHandlesFollowingMyLocation;
@property (nonatomic, retain) NSSet *cachedGetHandlesSharingLocationsWithMe;
@property (nonatomic, retain) NSMutableDictionary *cachedLocationForHandleByHandle;
@property (nonatomic, retain) NSMutableDictionary *cachedOfferExpirationForHandleByHandle;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMFSessionDelegate> *delegate;
@property (nonatomic, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *handles;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlesQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *internalHandles;
@property (nonatomic) bool isModelInitialized;
@property (nonatomic, retain) FMFuture *sessionInterruptionFuture;
@property (nonatomic, retain) FMFuture *sessionInvalidationFuture;
@property (readonly) Class superclass;

+ (bool)FMFAllowed;
+ (bool)FMFRestricted;
+ (bool)isAnyAccountManaged;
+ (bool)isProvisionedForLocationSharing;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)__connection;
- (void)_daemonDidLaunch;
- (void)_registerForApplicationLifecycleEvents;
- (void)_registerForFMFDLaunchedNotification;
- (oneway void)abDidChange;
- (oneway void)abPreferencesDidChange;
- (void)addHandles:(id)arg1;
- (void)addInterruptionHander:(id /* block */)arg1;
- (void)addInvalidationHander:(id /* block */)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)cachedCanShareLocationWithHandleByHandle;
- (id)cachedGetHandlesFollowingMyLocation;
- (id)cachedGetHandlesSharingLocationsWithMe;
- (id)cachedLocationForHandleByHandle;
- (id)cachedOfferExpirationForHandleByHandle;
- (id)connection;
- (id)connectionQueue;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)didUpdateFences:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(bool)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (oneway void)didUpdatePreferences:(id)arg1;
- (void)dispatchOnDelegateQueue:(id /* block */)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (void)forceRefresh;
- (void)forceRefreshWithCompletion:(id /* block */)arg1;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(id /* block */)arg2;
- (id)handles;
- (id)handlesQueue;
- (bool)hasModelInitialized;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)internalHandles;
- (void)invalidate;
- (bool)isModelInitialized;
- (void)locatingInProgressChanged:(id)arg1;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (oneway void)modelDidLoad;
- (oneway void)networkReachabilityUpdated:(bool)arg1;
- (void)receivedMappingPacket:(id)arg1 completion:(id /* block */)arg2;
- (void)removeHandles:(id)arg1;
- (void)restoreClientConnection;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)serverProxy;
- (id)sessionInterruptionFuture;
- (id)sessionInvalidationFuture;
- (void)setCachedCanShareLocationWithHandleByHandle:(id)arg1;
- (void)setCachedGetHandlesFollowingMyLocation:(id)arg1;
- (void)setCachedGetHandlesSharingLocationsWithMe:(id)arg1;
- (void)setCachedLocationForHandleByHandle:(id)arg1;
- (void)setCachedOfferExpirationForHandleByHandle:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setDebugContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setHandlesQueue:(id)arg1;
- (void)setInternalHandles:(id)arg1;
- (void)setIsModelInitialized:(bool)arg1;
- (oneway void)setLocations:(id)arg1;
- (void)setSessionInterruptionFuture:(id)arg1;
- (void)setSessionInvalidationFuture:(id)arg1;

// FMFSession (Admin)

- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)canOfferToHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)getAccountEmailAddress:(id /* block */)arg1;
- (void)getActiveLocationSharingDevice:(id /* block */)arg1;
- (void)getHandlesFollowingMyLocation:(id /* block */)arg1;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(id /* block */)arg2;
- (void)getHandlesSharingLocationsWithMe:(id /* block */)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(id /* block */)arg2;
- (void)getHandlesWithPendingOffers:(id /* block */)arg1;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(id /* block */)arg3;
- (void)getThisDeviceAndCompanion:(id /* block */)arg1;
- (void)isAllowFriendRequestsEnabled:(id /* block */)arg1;
- (void)isMyLocationEnabled:(id /* block */)arg1;
- (void)setActiveDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)setAllowFriendRequestsEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setHideMyLocationEnabled:(bool)arg1 completion:(id /* block */)arg2;

// FMFSession (Data)

- (id)cachedLocationForHandle:(id)arg1;
- (bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)getFavoritesSharingLocationWithMe;
- (id)getHandlesFollowingMyLocation;
- (id)getHandlesSharingLocationsWithMe;
- (id)getHandlesWithPendingOffers;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (bool)isMyLocationEnabled;
- (void)reloadDataIfNotLoaded;

// FMFSession (Establish)

- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (bool)_isNoMappingPacketReturnedError:(id)arg1;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)approveFriendshipRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)declineFriendshipRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)getPendingFriendshipRequestsWithCompletion:(id /* block */)arg1;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendNotNowToHandle:(id)arg1 callerId:(id)arg2 completion:(id /* block */)arg3;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;

// FMFSession (Favorites)

- (void)addFavorite:(id)arg1 completion:(id /* block */)arg2;
- (void)getFavoritesWithCompletion:(id /* block */)arg1;
- (void)removeFavorite:(id)arg1 completion:(id /* block */)arg2;

// FMFSession (Fences)

- (void)addFence:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteFence:(id)arg1 completion:(id /* block */)arg2;
- (void)fencesForHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)getFences:(id /* block */)arg1;
- (void)muteFencesForHandle:(id)arg1 untilDate:(id)arg2 completion:(id /* block */)arg3;
- (void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(id /* block */)arg5;
- (void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 triggerLocation:(id)arg5 completion:(id /* block */)arg6;

// FMFSession (HomeKit)

- (void)includeDeviceInAutomations:(id /* block */)arg1;

// FMFSession (Internal)

- (void)crashDaemon;
- (void)dumpStateWithCompletion:(id /* block */)arg1;
- (void)exit5XXGracePeriod;
- (id)getActiveLocationSharingDevice;
- (id)getAllDevices;
- (void)getAllDevices:(id /* block */)arg1;
- (void)getDataForPerformanceRequest:(id /* block */)arg1;
- (void)getPrettyNameForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)getRecordIdForHandle:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)iCloudAccountNameWithCompletion:(id /* block */)arg1;
- (bool)is5XXError:(id)arg1;
- (void)isIn5XXGracePeriodWithCompletion:(id /* block */)arg1;
- (double)maxLocatingInterval;
- (void)removeDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;
- (void)sessionHandleReport:(id /* block */)arg1;
- (void)setExpiredInitTimestamp;
- (bool)shouldHandleErrorInFWK:(id)arg1;
- (void)showMeDeviceAlert;
- (void)showShareMyLocationRestrictedAlert;
- (void)showShareMyLocationiCloudSettingsOffAlert;
- (id)verifyRestrictionsAndShowDialogIfRequired;

// FMFSession (Locate)

- (void)locationForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id /* block */)arg4;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id /* block */)arg4;

// FMFSession (Maps)

- (void)getAllLocations:(id /* block */)arg1;

// FMFSession (Notifications)

- (void)contactForPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)dataForPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)encryptPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAndLocationForPayload:(id)arg1 completion:(id /* block */)arg2;

// FMFSession (TodayWidget)

- (void)favoritesForMaxCount:(id)arg1 completion:(id /* block */)arg2;
- (void)nearbyLocationsWithCompletion:(id /* block */)arg1;

@end
