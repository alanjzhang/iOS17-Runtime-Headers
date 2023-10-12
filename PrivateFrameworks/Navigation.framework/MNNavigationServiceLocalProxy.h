/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationServiceProxy, MNNavigationSessionManagerDelegate, MNNavigationStateObserver> {
    <MNNavigationServiceClientInterface> * _delegate;
    id /* block */  _navigationServiceActiveBlock;
    unsigned long long  _navigationServiceState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_serviceStateForStateType:(unsigned long long)arg1;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)advanceToNextLeg;
- (void)changeOfflineState:(unsigned long long)arg1;
- (void)changeTransportType:(int)arg1 route:(id)arg2;
- (void)changeUserOptions:(id)arg1;
- (void)checkinForNavigationService:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableNavigationCapability:(unsigned long long)arg1;
- (void)enableNavigationCapability:(unsigned long long)arg1;
- (void)forceReroute;
- (id)init;
- (void)insertWaypoint:(id)arg1;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSessionManager:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionManager:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didDismissTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSessionManager:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didProcessSpeechEvent:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTransitAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 location:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;
- (void)navigationSessionManager:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;
- (void)navigationSessionManager:(id)arg1 didSendNavigationServiceCallback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didStopWithReason:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateResumeRouteHandle:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTargetLegIndex:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSessionManager:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSessionManager:(id)arg1 updateSignsWithARInfo:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(bool)arg2;
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionManager:(id)arg1 willProcessSpeechEvent:(id)arg2;
- (void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(long long)arg3 request:(id)arg4 response:(id)arg5 simulationType:(long long)arg6 isResumingMultipointRoute:(bool)arg7;
- (void)navigationSessionManager:(id)arg1 willStopWithReason:(unsigned long long)arg2;
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerDidArrive:(id)arg1;
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;
- (void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;
- (void)navigationSessionManagerDidFinishLocationUpdate:(id)arg1;
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;
- (void)navigationSessionManagerWillPause:(id)arg1;
- (void)navigationSessionManagerWillReroute:(id)arg1;
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)removeWaypointAtIndex:(unsigned long long)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)rerouteWithWaypoints:(id)arg1;
- (void)reset;
- (void)resumeOriginalDestination;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setGuidanceType:(unsigned long long)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)setSimulationPosition:(double)arg1;
- (void)setSimulationSpeedMultiplier:(double)arg1;
- (void)setSimulationSpeedOverride:(double)arg1;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)start;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* block */)arg2;
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (void)switchToRoute:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
