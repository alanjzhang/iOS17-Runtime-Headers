/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIScene : UIResponder <BSDebugDescriptionProviding, DebugHierarchyObject_Fallback, FBSSceneDelegate, _UISceneHostingSettingsProviding> {
    NSNumber * __cachedInterfaceOrientation;
    UISceneActivationConditions * _activationConditions;
    NSDictionary * _additionalBSActionResponders;
    NSDictionary * _additionalSettingsDiffActions;
    <UISceneDelegate> * _delegate;
    NSArray * _finalSceneBSActionHandlers;
    NSArray * _finalSettingsDiffActions;
    NSArray * _flattenedBSActionResponders;
    NSDictionary * _flattenedBSActionSubstitutionProvidersByActionType;
    NSArray * _flattenedDiffActions;
    NSMutableArray * _heldSceneEventResponseBlocks;
    NSPointerArray * _inheritingScenes;
    NSArray * _initialSceneBSActionHandlers;
    NSArray * _initialSettingsDiffActions;
    _UISceneLifecycleMonitor * _lifecycleMonitor;
    FBSSceneSettings * _oldSettings;
    FBSSceneSettings * _overrideSettings;
    NSString * _persistenceIdentifier;
    NSMutableDictionary * _postSettingsUpdateResponseBlocks;
    NSDictionary * _registeredComponents;
    bool  _respondingToLifecycleEvent;
    FBSScene * _scene;
    struct { 
        unsigned int delegateIsResponder : 1; 
        unsigned int delegateSupportsWillConnect : 1; 
        unsigned int delegateSupportsDidDisconnect : 1; 
        unsigned int delegateSupportsDidBecomeActive : 1; 
        unsigned int delegateSupportsWillResignActive : 1; 
        unsigned int delegateSupportsWillEnterForeground : 1; 
        unsigned int delegateSupportsDidEnterBackground : 1; 
        unsigned int isUIKitManaged : 1; 
        unsigned int isInternal : 1; 
        unsigned int affectsAppLifecycleIfInternal : 1; 
        unsigned int affectsScreenOrientation : 1; 
        unsigned int isConnecting : 1; 
        unsigned int hostsWindows : 1; 
        unsigned int supportsDidChangeFromScreenToScreen : 1; 
        unsigned int hasPerformedInitialWindowUpdateForConnection : 1; 
        unsigned int hasInvalidated : 1; 
        unsigned int allowOverrideSettings : 1; 
        unsigned int isProcessingUpdateResponseBlocks : 1; 
        unsigned int isProcessingDiffActionHandlers : 1; 
        unsigned int readyForSuspension : 1; 
        unsigned int isMediaParticipant : 1; 
        unsigned int classRoutesEvents : 1; 
        unsigned int isTargetOfKeyboardEventDeferringEnvironment : 1; 
    }  _sceneFlags;
    NSString * _sceneIdentifier;
    UISceneSession * _session;
    UIScene * _settingsScene;
    NSString * _subtitle;
    NSString * _title;
}

@property (getter=_FBSScene, nonatomic, readonly) FBSScene *_FBSScene;
@property (setter=_setActivationConditions:, nonatomic, retain) UISceneActivationConditions *_activationConditions;
@property (getter=_isActive, nonatomic, readonly) bool _active;
@property (nonatomic, readonly) bool _affectsAppLifecycleIfInternal;
@property (nonatomic, readonly) bool _affectsScreenOrientation;
@property (nonatomic, readonly) NSArray *_allWindows;
@property (nonatomic, readonly) bool _allowsEventUIWindowRouting;
@property (getter=_cachedInterfaceOrientation, setter=_setCachedInterfaceOrientation:, nonatomic, retain) NSNumber *_cachedInterfaceOrientation;
@property (nonatomic, readonly) bool _canDynamicallySpecifySupportedInterfaceOrientations;
@property (getter=_isConnecting, nonatomic, readonly) bool _connecting;
@property (setter=_setDiscardSessionOnUserDisconnect:, nonatomic) bool _discardSessionOnUserDisconnect;
@property (nonatomic, readonly) FBSSceneSettings *_effectiveSettings;
@property (nonatomic, readonly) UIApplicationSceneClientSettings *_effectiveUIClientSettings;
@property (nonatomic, readonly) UIApplicationSceneSettings *_effectiveUISettings;
@property (getter=_isEligibleForSuspension, nonatomic, readonly) bool _eligibleForSuspension;
@property (nonatomic, readonly) _UIEventDeferringManager *_eventDeferringManager;
@property (nonatomic, readonly) _UIPhysicalButtonInteractionArbiter *_existingPhysicalButtonInteractionArbiter;
@property (nonatomic, readonly) _UIFocusSystemSceneComponent *_focusSystemSceneComponent;
@property (nonatomic, readonly) bool _hasInvalidated;
@property (nonatomic, readonly) bool _hasLifecycle;
@property (nonatomic, readonly) bool _hasSettingsScene;
@property (nonatomic, readonly) bool _hostsWindows;
@property (nonatomic, readonly) NSString *_identifier;
@property (nonatomic, readonly) NSArray *_interitingScenes;
@property (getter=_isInternal, nonatomic, readonly) bool _internal;
@property (setter=_setInvolvedInMediaPlayback:, nonatomic) bool _involvedInMediaPlayback;
@property (nonatomic, readonly) bool _isTargetOfKeyboardEventDeferringEnvironment;
@property (getter=_isUIKitManaged, nonatomic, readonly) bool _isUIKitManaged;
@property (nonatomic, readonly) _UIKeyWindowSceneObserver *_keyWindowSceneObserver;
@property (nonatomic, readonly) _UISceneLifecycleMonitor *_lifecycleMonitor;
@property (nonatomic, readonly) FBSSceneSettings *_oldSettings;
@property (nonatomic, readonly) NSString *_persistenceIdentifier;
@property (nonatomic, readonly) _UIPhysicalButtonInteractionArbiter *_physicalButtonInteractionArbiter;
@property (getter=_isProcessingDiffActionHandlers, nonatomic, readonly) bool _processingDiffActionHandlers;
@property (getter=_isReadyForSuspension, nonatomic, readonly) bool _readyForSuspension;
@property (getter=_isRespondingToLifecycleEvent, setter=_setIsRespondingToLifecycleEvent:, nonatomic) bool _respondingToLifecycleEvent;
@property (getter=_isRunningInTaskSwitcher, nonatomic, readonly) bool _runningInTaskSwitcher;
@property (nonatomic, readonly) NSArray *_sceneBSActionResponders;
@property (nonatomic, readonly) NSArray *_sceneComponents;
@property (nonatomic, readonly) _UISceneHostingControllerRegistry *_sceneHostingControllerRegistry;
@property (nonatomic, readonly) NSString *_sceneIdentifier;
@property (nonatomic, readonly) bool _sceneSessionRoleIsCarPlayOrNonInteractiveExternal;
@property (nonatomic, readonly) NSArray *_settingsDiffActions;
@property (setter=_setSettingsScene:, nonatomic) UIScene *_settingsScene;
@property (getter=_isSuspendedEventsOnly, nonatomic, readonly) bool _suspendedEventsOnly;
@property (getter=_isSuspendedUnderLock, nonatomic, readonly) bool _suspendedUnderLock;
@property (nonatomic, readonly) BKSAnimationFenceHandle *_synchronizedDrawingFence;
@property (nonatomic, readonly) FBSSceneSettings *_synthesizedSettings;
@property (nonatomic, readonly) double _systemMinimumMargin;
@property (nonatomic, readonly) NSArray *_visibleWindows;
@property (nonatomic, readonly) NSArray *_windows;
@property (nonatomic, retain) UISceneActivationConditions *activationConditions;
@property (nonatomic, readonly) long long activationState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <UISceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPointerLockState *pointerLockState;
@property (nonatomic, readonly) UISceneSession *session;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (long long)_activationStateFromSceneSettings:(id)arg1;
+ (id)_connectionOptionsForScene:(id)arg1 withSpecification:(id)arg2 transitionContext:(id)arg3 actions:(id)arg4 sceneSession:(id)arg5;
+ (void)_enumerateAllWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 asCopy:(bool)arg3 withBlock:(id /* block */)arg4;
+ (bool)_hostsWindows;
+ (Class)_implicitSceneFilterClass;
+ (id)_mostActiveScene;
+ (id)_persistenceIdentifierForScene:(id)arg1;
+ (void)_registerSceneComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3;
+ (id)_sceneForFBSScene:(id)arg1;
+ (id)_sceneForFBSScene:(id)arg1 create:(bool)arg2 withSession:(id)arg3 connectionOptions:(id)arg4;
+ (id)_sceneForFBSScene:(id)arg1 usingPredicate:(id)arg2;
+ (id)_scenesIncludingInternal:(bool)arg1;
+ (id)_scenesIncludingInternalForPK:(bool)arg1;
+ (bool)_supportsEventUIWindowRouting;
+ (void)_synchronizeDrawing;
+ (id)_synchronizeDrawingAndReturnFence;
+ (void)_synchronizeDrawingUsingFence:(id)arg1;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (id)_synchronizedDrawingFence;
+ (void*)_unsafeScenesIncludingInternal;

- (void).cxx_destruct;
- (id)_FBSScene;
- (void)__captureWindow:(id)arg1;
- (void)__releaseWindow:(id)arg1;
- (id)_actionsWithSubstitutionsForTransitionActions:(id)arg1 forFBSScene:(id)arg2 fromTransitionContext:(id)arg3;
- (id)_activationConditions;
- (void)_addInheritingScene:(id)arg1;
- (void)_addSubclassDebugDescriptionWithBuilder:(id)arg1;
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)arg1;
- (bool)_affectsAppLifecycleIfInternal;
- (bool)_affectsScreenOrientation;
- (id)_allWindows;
- (bool)_allowsEventUIWindowRouting;
- (void)_applyOverrideSettings:(id)arg1 forActions:(id /* block */)arg2;
- (void)_applyOverridesToHostedSceneSettings:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForInterfaceOrientation:(long long)arg1;
- (id)_cachedInterfaceOrientation;
- (void)_calculateFlattenedBSActionResponders;
- (void)_calculateFlattenedBSActionSubstitutionProviders;
- (void)_calculateFlattenedDiffActions;
- (bool)_canDynamicallySpecifySupportedInterfaceOrientations;
- (void)_compatibilityModeZoomDidChange;
- (void)_computeMetrics:(bool)arg1;
- (void)_computeMetricsForWindows:(id)arg1 animated:(bool)arg2;
- (id)_currentOpenApplicationEndpoint;
- (bool)_discardSessionOnUserDisconnect;
- (id)_effectiveSettings;
- (id)_effectiveUIClientSettings;
- (id)_effectiveUISettings;
- (void)_emitSceneSettingsUpdateResponseForCompletion:(id /* block */)arg1 afterSceneUpdateWork:(id /* block */)arg2;
- (void)_enableOverrideSettingsForActions:(id /* block */)arg1;
- (void)_enqueuePostSettingsUpdateResponseBlock:(id /* block */)arg1 inPhase:(id)arg2;
- (void)_enumerateWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2 asCopy:(bool)arg3 stopped:(bool*)arg4 withBlock:(id /* block */)arg5;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (void)_finishSceneConnection;
- (id)_fixupInheritedClientSettings:(id)arg1;
- (id)_fixupInheritedSettings:(id)arg1;
- (void)_guardedSetOverrideSettings:(id)arg1;
- (bool)_hasInvalidated;
- (bool)_hasLifecycle;
- (bool)_hasSettingsScene;
- (bool)_hostsWindows;
- (id)_identifier;
- (void)_initializeSceneComponents;
- (id)_interitingScenes;
- (void)_invalidate;
- (bool)_involvedInMediaPlayback;
- (bool)_isActive;
- (bool)_isConnected;
- (bool)_isConnecting;
- (bool)_isEligibleForSuspension;
- (bool)_isInternal;
- (bool)_isProcessingDiffActionHandlers;
- (bool)_isReadyForSuspension;
- (bool)_isRespondingToLifecycleEvent;
- (bool)_isRunningInTaskSwitcher;
- (bool)_isSuspendedEventsOnly;
- (bool)_isSuspendedUnderLock;
- (bool)_isTargetOfKeyboardEventDeferringEnvironment;
- (bool)_isUIKitManaged;
- (id)_lifecycleMonitor;
- (void)_noteDisplayIdentityDidChangeWithConfiguration:(id)arg1;
- (id)_oldSettings;
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performDeferredInitialWindowUpdateForConnection;
- (void)_performSystemSnapshotWithActions:(id /* block */)arg1;
- (id)_persistenceIdentifier;
- (void)_prepareCommonStateForActionRespondingFromTransitionContext:(id)arg1;
- (void)_prepareForResume;
- (void)_prepareForSuspend;
- (bool)_pushesTraitCollectionToScreen;
- (void)_readySceneForConnection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (void)_refreshActivationConditions;
- (void)_registerBSActionResponderArray:(id)arg1 forKey:(id)arg2;
- (void)_registerSceneActionsHandlerArray:(id)arg1 forKey:(id)arg2;
- (void)_registerSceneComponent:(id)arg1 forKey:(id)arg2;
- (void)_registerSettingsDiffActionArray:(id)arg1 forKey:(id)arg2;
- (void)_removeInheritingScene:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (id)_sceneBSActionResponders;
- (id)_sceneComponentForKey:(id)arg1;
- (id)_sceneComponents;
- (id)_sceneIdentifier;
- (bool)_sceneSessionRoleIsCarPlayOrNonInteractiveExternal;
- (void)_scheduleSceneEventResponseWithResponseBlock:(id /* block */)arg1;
- (void)_setActivationConditions:(id)arg1;
- (void)_setCachedInterfaceOrientation:(id)arg1;
- (void)_setDiscardSessionOnUserDisconnect:(bool)arg1;
- (void)_setInvolvedInMediaPlayback:(bool)arg1;
- (void)_setIsRespondingToLifecycleEvent:(bool)arg1;
- (void)_setSettingsScene:(id)arg1;
- (void)_setShouldHoldSceneEventResponses:(bool)arg1;
- (id)_settingsDiffActions;
- (id)_settingsScene;
- (bool)_shouldAllowFencing;
- (bool)_shouldDeferInitialWindowUpdateBeforeConnection:(id)arg1;
- (bool)_shouldDeferInitialWindowUpdateBeforeConnectionAndTrackIfNeeded:(id)arg1;
- (bool)_shouldRotateSafeAreaInsetsToInterfaceOrientation;
- (bool)_subclassTracksWindowsNeedingDeferredInitialUpdates;
- (void)_synchronizeDrawing;
- (id)_synchronizeDrawingAndReturnFence;
- (void)_synchronizeDrawingUsingFence:(id)arg1;
- (void)_synchronizeDrawingWithFence:(id)arg1;
- (id)_synchronizedDrawingFence;
- (id)_synthesizedSettings;
- (double)_systemMinimumMargin;
- (id)_topVisibleWindowEnumeratingAsCopy:(bool)arg1 passingTest:(id /* block */)arg2;
- (id)_topVisibleWindowPassingTest:(id /* block */)arg1;
- (bool)_tracksWindowsNeedingDeferredInitialUpdates;
- (void)_unregisterBSActionResponderArray:(id)arg1;
- (void)_unregisterSceneActionsHandlerArray:(id)arg1;
- (void)_unregisterSceneComponentForKey:(id)arg1;
- (void)_unregisterSettingsDiffActionArrayForKey:(id)arg1;
- (void)_updateSceneTraitsAndPushTraitsToScreen:(bool)arg1;
- (void)_updateSceneTraitsAndPushTraitsToScreen:(bool)arg1 callParentWillTransitionToTraitCollection:(bool)arg2;
- (void)_updateUIClientSettingsWithBlock:(id /* block */)arg1;
- (void)_updateUIClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)_updateUIClientSettingsWithUITransitionBlock:(id /* block */)arg1;
- (id)_visibleWindows;
- (bool)_windowIsFront:(id)arg1;
- (id)_windows;
- (id)debugDescription;
- (id)description;

// UIScene (AVAudioSession)

- (void)_getDefaultAudioSessionFromMainThreadWithCompletionHandler:(id /* block */)arg1;
- (void)getDefaultAudioSessionWithCompletionHandler:(id /* block */)arg1;

// UIScene (EventDeferring)

- (id)_eventDeferringManager;

// UIScene (KeyWindowSceneObserver)

- (id)_keyWindowSceneObserver;

// UIScene (PhysicalButtonInteractionArbiter)

- (id)_physicalButtonInteractionArbiter;

// UIScene (PhysicalButtonInteractionArbiterInternal)

- (id)_existingPhysicalButtonInteractionArbiter;

// UIScene (SceneType)

+ (long long)_UIO_sceneType;

// UIScene (UIFocusSystem)

- (id)_carPlaySceneComponent;

// UIScene (UIFocusSystemSceneComponent)

- (id)_focusSystemSceneComponent;

// UIScene (UIKitBacklightServices)

- (id)_backlightSceneEnvironment;

// UIScene (_UISceneEnhancedStateRestoration_Private)

- (void)_completeStateRestoration;
- (void)_extendStateRestoration;
- (void)_willRestoreInteractionStateForUserActivityManager:(id)arg1;

// UIScene (_UISceneHostingControllerRegistry)

- (id)_sceneHostingControllerRegistry;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVKit.framework/AVKit

// UIScene (AVSecondScreenAdditions)

+ (id)avkit_secondScreenScenes;

- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (id)avkit_asWindowScene;
- (bool)avkit_isForeground;
- (void)avkit_resetPreferredModeSwitchRequest;
- (bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (long long)avkit_screenType;
- (void)avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (id)activationConditions;
- (long long)activationState;
- (void)completeStateRestoration;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)extendStateRestoration;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (id)nextResponder;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)pointerLockState;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2 fromTransitionContext:(id)arg3;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (id)session;
- (void)setActivationConditions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)title;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libViewDebuggerSupport.dylib

// UIScene (DebugHierarchyAdditionsFallback)

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

@end
