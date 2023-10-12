/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPointerArbiterCore_iOS : NSObject <PSPointerClientControllerDelegate, _UIAssertionControllerSubject, _UILumaTrackingBackdropViewDelegate, _UIPointerArbitrating> {
    UIPointerRegion * _activePointerRegion;
    UIPointerStyle * _activePointerStyle;
    bool  _hasRunningTransaction;
    unsigned long long  _lastMaterialLuminance;
    PSPointerHoverRegion * _lastSentHoverRegion;
    _UIPortalView * _overlayEffectPortalView;
    _UIAssertionController * _pauseAssertionController;
    NSMutableArray * _pendingTransactionBlocks;
    PSPointerClientController * _pointerClientController;
    PSPointerPortalSourceCollection * _pointerPortalSourceCollection;
    _UIPortalView * _pointerPortalView;
    NSMapTable * _pointerRegionToMatchMoveSourceMap;
    _UILumaTrackingBackdropView * _samplingBackdropView;
    UIPointerRegion * _scrollingRegion;
    unsigned long long  _transactionRevisionID;
    bool  _updatesPausedViaAssertion;
}

@property (nonatomic, retain) UIPointerRegion *activePointerRegion;
@property (nonatomic, retain) UIPointerStyle *activePointerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRunningTransaction;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastMaterialLuminance;
@property (nonatomic, retain) PSPointerHoverRegion *lastSentHoverRegion;
@property (nonatomic, retain) _UIPortalView *overlayEffectPortalView;
@property (nonatomic, retain) _UIAssertionController *pauseAssertionController;
@property (nonatomic, retain) NSMutableArray *pendingTransactionBlocks;
@property (nonatomic, retain) PSPointerClientController *pointerClientController;
@property (nonatomic, copy) PSPointerPortalSourceCollection *pointerPortalSourceCollection;
@property (nonatomic, retain) _UIPortalView *pointerPortalView;
@property (nonatomic, retain) NSMapTable *pointerRegionToMatchMoveSourceMap;
@property (nonatomic, readonly) long long pointerState;
@property (nonatomic, retain) _UILumaTrackingBackdropView *samplingBackdropView;
@property (nonatomic, retain) UIPointerRegion *scrollingRegion;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transactionRevisionID;
@property (nonatomic) bool updatesPausedViaAssertion;

- (void).cxx_destruct;
- (void)_clearMatchMoveSourceForRegion:(id)arg1 immediately:(bool)arg2;
- (id)_coordinateSpaceSourceViewForRegion:(id)arg1 withStyle:(id)arg2;
- (void)_getPointerRegion:(inout id*)arg1 andStyle:(inout id*)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 inWindow:(id)arg4;
- (id)_hoverRegionWithStyle:(id)arg1 forRegion:(id)arg2;
- (void)_notifyPointerStateDidChange;
- (void)_performNextTransaction;
- (void)_performTransactionUsingBlock:(id /* block */)arg1;
- (id)_pointerShapeForStyle:(id)arg1 region:(id)arg2;
- (void)_prepareContentMatchMoveSourceForPointerRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)_preparePointerPortalSourceCollectionWithCompletion:(id /* block */)arg1;
- (id)_psPointerShapeFromUIPointerShape:(id)arg1 atScale:(double)arg2;
- (void)_setActiveHoverRegion:(id)arg1 style:(id)arg2 forPointerRegion:(id)arg3 transactionID:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)activePointerRegion;
- (id)activePointerStyle;
- (void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)assertionActivationStateChangedToState:(bool)arg1 forType:(unsigned long long)arg2;
- (bool)assertionActivationStateForType:(unsigned long long)arg1;
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;
- (void)beginScrollingWithRegion:(id)arg1;
- (void)endScrollingWithRegion:(id)arg1;
- (void)exitRegion:(id)arg1 removeStyle:(bool)arg2 completion:(id /* block */)arg3;
- (bool)hasRunningTransaction;
- (id)init;
- (unsigned long long)lastMaterialLuminance;
- (id)lastSentHoverRegion;
- (id)obtainPointerUpdatePauseAssertion;
- (id)overlayEffectPortalView;
- (id)pauseAssertionController;
- (id)pendingTransactionBlocks;
- (id)pointerClientController;
- (void)pointerClientController:(id)arg1 didInvalidatePortalSourceCollections:(id)arg2 matchMoveSources:(id)arg3;
- (void)pointerClientControllerClientInteractionStateDidChange:(id)arg1;
- (void)pointerClientControllerWillDecelerate:(id)arg1 targetPointerPosition:(inout struct CGPoint { double x1; double x2; }*)arg2 velocity:(struct CGPoint { double x1; double x2; })arg3 inContextID:(unsigned int)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7;
- (id)pointerPortalSourceCollection;
- (id)pointerPortalView;
- (id)pointerRegionToMatchMoveSourceMap;
- (long long)pointerState;
- (id)samplingBackdropView;
- (id)scrollingRegion;
- (void)setActivePointerRegion:(id)arg1;
- (void)setActivePointerStyle:(id)arg1;
- (void)setHasRunningTransaction:(bool)arg1;
- (void)setLastMaterialLuminance:(unsigned long long)arg1;
- (void)setLastSentHoverRegion:(id)arg1;
- (void)setOverlayEffectPortalView:(id)arg1;
- (void)setPauseAssertionController:(id)arg1;
- (void)setPendingTransactionBlocks:(id)arg1;
- (void)setPointerClientController:(id)arg1;
- (void)setPointerPortalSourceCollection:(id)arg1;
- (void)setPointerPortalView:(id)arg1;
- (void)setPointerRegionToMatchMoveSourceMap:(id)arg1;
- (void)setSamplingBackdropView:(id)arg1;
- (void)setScrollingRegion:(id)arg1;
- (void)setTransactionRevisionID:(unsigned long long)arg1;
- (void)setUpdatesPausedViaAssertion:(bool)arg1;
- (unsigned long long)transactionRevisionID;
- (bool)updatesPausedViaAssertion;

@end
