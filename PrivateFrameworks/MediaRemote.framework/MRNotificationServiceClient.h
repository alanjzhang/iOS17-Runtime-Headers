/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNotificationServiceClient : NSObject {
    MRMediaRemoteServiceClient * _serviceClient;
}

- (void).cxx_destruct;
- (void)_handleActiveApplicationDidChangeNotification:(id)arg1;
- (void)_handleActiveOriginDidChangeNotification:(id)arg1;
- (void)_handleActivePlayerDidChangeNotification:(id)arg1;
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;
- (void)_handleApplicationClientStateDidChangeNotification:(id)arg1;
- (void)_handleApplicationDidForegroundNotification:(id)arg1;
- (void)_handleApplicationDidRegisterNotification:(id)arg1;
- (void)_handleApplicationDidUnregisterNotification:(id)arg1;
- (void)_handleApplicationDisplayNameDidChangeNotification:(id)arg1;
- (void)_handleDeviceInfoDidChangeNotification:(id)arg1;
- (void)_handleLocalGroupSessionInfoDidChangeNotification:(id)arg1;
- (void)_handleLocalUserIdentityDidChangeNotification:(id)arg1;
- (void)_handleOriginDidRegisterNotification:(id)arg1;
- (void)_handleOriginDidUnregisterNotification:(id)arg1;
- (void)_handlePlayerContentItemArtworkDidChangeNotification:(id)arg1;
- (void)_handlePlayerContentItemsDidChangeNotification:(id)arg1;
- (void)_handlePlayerDidRegisterNotification:(id)arg1;
- (void)_handlePlayerDidUnregisterNotification:(id)arg1;
- (void)_handlePlayerIsPlayingDidChangeNotification:(id)arg1;
- (void)_handlePlayerNowPlayingInfoDidChangeNotification:(id)arg1;
- (void)_handlePlayerPlaybackQueueDidChangeNotification:(id)arg1;
- (void)_handlePlayerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_handlePlayerStateDidChangeNotification:(id)arg1;
- (void)_handlePlayerSupportedCommandsDidChangeNotification:(id)arg1;
- (void)_handleVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleVolumeDidChangeNotification:(id)arg1;
- (void)_maybePostPlaybackQueueNowPlayingItemChangedNotificationFromPlaybackQueueChangedNotification:(id)arg1;
- (void)_notificationFired:(id)arg1 clientNotification:(id)arg2 originNotification:(id)arg3 nowPlayingNotification:(id)arg4;
- (void)_notificationFired:(id)arg1 originNotification:(id)arg2 nowPlayingNotification:(id)arg3;
- (void)_notificationFired:(id)arg1 playerPathNotifcation:(id)arg2 originNotification:(id)arg3 nowPlayingNotification:(id)arg4;
- (void)_postDefaultAppilicationNotifications:(id)arg1;
- (void)_postDefaultOriginNotifications:(id)arg1;
- (void)_postDefaultPlayerNotificationsWithUserInfo:(id)arg1 object:(id)arg2;
- (void)_processActiveApplicationInvalidationHandlersForNotification:(id)arg1;
- (void)_processActiveOriginInvalidationHandlersForNotification:(id)arg1;
- (void)_processActivePlayerInvalidationHandlersForNotification:(id)arg1;
- (void)_processApplicationInvalidationHandlersForNotification:(id)arg1;
- (bool)_processNeedsNonPlayerPathBasedNotificationsForBackwardCompatabilitySupport;
- (void)_processOriginInvalidationHandlersForNotification:(id)arg1;
- (void)_processPlayerInvalidationHandlersForNotification:(id)arg1;
- (bool)_shouldPostNotifications;
- (id)initWithServiceClient:(id)arg1;
- (void)registerCallbacks;

@end
