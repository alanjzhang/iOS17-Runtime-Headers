/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardArbiterClientInputDestination : _UIKeyboardArbiterClient {
    NSMutableSet * _activePIDs;
    NSMutableDictionary * _callerIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientChangeResponseLock;
    NSObject<OS_os_transaction> * _clientChangeResponseTransaction;
    bool  _deactivatedBySystemAnimation;
    NSString * _focusedSceneIdentityStringOrIdentifier;
    bool  _hadFocusBeforeOverlay;
    int  _hostedCount;
    NSString * _keyboardSceneIdentifierEnteringForeground;
    UIScreen * _lastScreen;
    NSMutableSet * _pendingKeyboardGrabs;
    bool  _resignActiveByControlCenter;
    bool  _resigningByOtherApp;
    UIWindowScene * _suppressedScene;
    bool  _updatingKeyWindow;
}

@property (nonatomic, retain) NSMutableSet *activePIDs;
@property (nonatomic, retain) NSMutableDictionary *callerIDs;
@property (nonatomic, copy) NSString *focusedSceneIdentityStringOrIdentifier;
@property (nonatomic, retain) NSMutableSet *pendingKeyboardGrabs;
@property (nonatomic) bool updatingKeyWindow;

+ (id)currentBundleIdentifier;

- (void).cxx_destruct;
- (id)_activeScreen;
- (bool)_didHandleKeyboardClientChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(bool)arg2 isLocalEvent:(bool)arg3;
- (void)_layoutKeyboardViews:(id)arg1;
- (void)_preserveInputViewsForClientChange:(bool)arg1 snapshotIfNecessary:(bool)arg2;
- (bool)_sceneFocusPermittedForApplication;
- (bool)_sceneFocusUpdatePermittedForWindow:(id)arg1;
- (id)activePIDs;
- (void)addWindowHostingPID:(int)arg1 callerID:(id)arg2;
- (bool)allowedToEnableKeyboardWindow;
- (bool)allowedToShowKeyboard;
- (void)applicationKeyWindowDidChange:(id)arg1;
- (id)callerIDs;
- (void)clearKeyboardSceneIdentifierEnteringForeground:(id)arg1;
- (void)completeMoveKeyboard;
- (void)configureArbiterCommunication:(id)arg1;
- (id)currentHostedPIDs;
- (void)didBecomeActive:(id)arg1;
- (void)didFailArbiterConnection;
- (void)didRemoveDeactivationReason:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)finishWithHostedWindow;
- (id)focusedSceneIdentityStringOrIdentifier;
- (void)handleKeyboardUIDidChange:(id)arg1;
- (void)handleKeyboardUITrackingChange:(id)arg1;
- (bool)hasWindowHostingCallerID:(id)arg1;
- (bool)hasWindowHostingPID:(int)arg1;
- (id)init;
- (bool)inputDestinationDidChange:(bool)arg1 withIAVHeight:(double)arg2 isIAVRelevant:(bool)arg3 notifyRemote:(bool)arg4 forScene:(id)arg5;
- (bool)isHostedInAnotherProcess;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrameIncludingRemoteIAV;
- (void)keyboardUIDidChange:(id)arg1 onComplete:(id /* block */)arg2;
- (unsigned long long)localSceneCount;
- (bool)needsToShowKeyboard;
- (bool)needsToShowKeyboardForViewServiceHost;
- (void)peekApplicationEvent:(id)arg1;
- (id)pendingKeyboardGrabs;
- (id)prepareForHostedWindowWithScene:(id)arg1;
- (void)queue_activeProcessResignWithCompletion:(id /* block */)arg1;
- (void)queue_endInputSessionWithCompletion:(id /* block */)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(id /* block */)arg2;
- (void)queue_keyboardUIDidChange:(id)arg1 onComplete:(id /* block */)arg2;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)queue_setKeyboardDisabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)removeWindowHostingPID:(int)arg1 callerID:(id)arg2;
- (void)resignFirstResponderIfNeeded;
- (void)restorePreservedInputViewsIfNecessary;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)setActivePIDs:(id)arg1;
- (void)setCallerIDs:(id)arg1;
- (void)setCurrentClientState:(id)arg1;
- (void)setFocusedSceneIdentityStringOrIdentifier:(id)arg1;
- (void)setKeyboardSceneIdentifierEnteringForegroundForScene:(id)arg1;
- (void)setPendingKeyboardGrabs:(id)arg1;
- (void)setSnapshotting:(bool)arg1;
- (void)setSuppressingKeyboard:(bool)arg1 forScene:(id)arg2;
- (void)setUpdatingKeyWindow:(bool)arg1;
- (void)setWindowEnabled:(bool)arg1;
- (void)setWindowEnabled:(bool)arg1 force:(bool)arg2;
- (void)setWindowHostingPID:(int)arg1 active:(bool)arg2;
- (bool)shouldIgnoreInputDestinationChange:(bool)arg1 withIAVHeight:(double)arg2;
- (bool)shouldSnapshot;
- (void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)startConnection;
- (void)startConnectionWithCompletion:(id /* block */)arg1;
- (void)stopConnection;
- (void)syncKeyboardUIChangeInfo:(id)arg1;
- (void)updateWindowState;
- (bool)updatingKeyWindow;
- (void)userSelectedApp:(id)arg1 onCompletion:(id /* block */)arg2;
- (bool)wantsToShowKeyboard;
- (bool)wantsToShowKeyboardForViewServiceHost;
- (void)willAddDeactivationReason:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)willResume:(id)arg1;

@end
