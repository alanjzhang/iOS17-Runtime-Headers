/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragSetDownItemAnimation : NSObject {
    bool  _almostToTarget;
    int  _animationCount;
    _UIPlatterView * _appPlatterView;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _center;
    id /* block */  _completionHandler;
    <UIViewSpringAnimationBehaviorDescribing> * _customSpringAnimationBehavior;
    bool  _defaultAnimation;
    _UIPlatterView * _defaultPlatterView;
    <_UIDragSetDownItemAnimationDelegate> * _delegate;
    bool  _done;
    _DUIVisibleDroppedItem * _droppedItem;
    _UIPlatterView * _druidPlatterView;
    bool  _hasStartedSpringAnimation;
    double  _initialDistanceFromTargetFrame;
    union { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*vector; 
    }  _initialTargetVelocity;
    union { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*vector; 
    }  _initialVelocity;
    UIDragItem * _item;
    id /* block */  _midpointHandler;
    bool  _midwayToTarget;
    id /* block */  _morphHandler;
    id /* block */  _nearCompletionHandler;
    id /* block */  _nonAnimatedMidpointHandler;
    _UIPlatterContainerView * _platterContainerView;
    id /* block */  _positionHandler;
    UIViewPropertyAnimator * _propertyAnimator;
    bool  _reachedTarget;
    bool  _reparentingCrossfadeComplete;
    _UIPortalView * _retargetingContainerPortalView;
    UIView * _retargetingContainerView;
    bool  _sourceAnimation;
    double  _targetCenterZ;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    UITargetedDragPreview * _targetedDropPreview;
    _UIPlatterView * _updatedAppPlatterView;
    bool  _updatedPreviewWasAdded;
    UITargetedDragPreview * _updatedTargetedDropPreview;
    <_UIDragSetDownAnimationTarget> * _visualTarget;
    UIWindow * _window;
}

@property (nonatomic) bool almostToTarget;
@property (nonatomic) int animationCount;
@property (nonatomic, retain) _UIPlatterView *appPlatterView;
@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } center;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) <UIViewSpringAnimationBehaviorDescribing> *customSpringAnimationBehavior;
@property (nonatomic) bool defaultAnimation;
@property (nonatomic, retain) _UIPlatterView *defaultPlatterView;
@property (nonatomic) <_UIDragSetDownItemAnimationDelegate> *delegate;
@property (nonatomic, readonly) bool done;
@property (nonatomic, readonly) _DUIVisibleDroppedItem *droppedItem;
@property (nonatomic, retain) _UIPlatterView *druidPlatterView;
@property (nonatomic) bool hasStartedSpringAnimation;
@property (nonatomic) double initialDistanceFromTargetFrame;
@property (nonatomic) union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } initialTargetVelocity;
@property (nonatomic) union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } initialVelocity;
@property (nonatomic, readonly) UIDragItem *item;
@property (nonatomic, copy) id /* block */ midpointHandler;
@property (nonatomic) bool midwayToTarget;
@property (nonatomic, copy) id /* block */ morphHandler;
@property (nonatomic, copy) id /* block */ nearCompletionHandler;
@property (nonatomic, copy) id /* block */ nonAnimatedMidpointHandler;
@property (nonatomic, retain) _UIPlatterContainerView *platterContainerView;
@property (nonatomic, copy) id /* block */ positionHandler;
@property (nonatomic, readonly) long long previewMode;
@property (nonatomic, retain) UIViewPropertyAnimator *propertyAnimator;
@property (nonatomic, readonly) bool reachedTarget;
@property (nonatomic) bool reparentingCrossfadeComplete;
@property (nonatomic, retain) _UIPortalView *retargetingContainerPortalView;
@property (nonatomic, retain) UIView *retargetingContainerView;
@property (nonatomic) bool sourceAnimation;
@property (nonatomic) double targetCenterZ;
@property (nonatomic, readonly) UIWindow *targetContainerWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property (nonatomic, retain) UITargetedDragPreview *targetedDropPreview;
@property (nonatomic, retain) _UIPlatterView *updatedAppPlatterView;
@property (nonatomic) bool updatedPreviewWasAdded;
@property (nonatomic, retain) UITargetedDragPreview *updatedTargetedDropPreview;
@property (nonatomic, retain) <_UIDragSetDownAnimationTarget> *visualTarget;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_setCenterAndVelocityFromDroppedItem:(id)arg1;
- (bool)almostToTarget;
- (void)animationCompleted;
- (id /* block */)animationCompletionHandler;
- (int)animationCount;
- (void)animationReachedTarget;
- (id)appPlatterView;
- (void)beginAnimation;
- (struct CAPoint3D { double x1; double x2; double x3; })center;
- (id /* block */)completionHandler;
- (void)configureAnimation;
- (void)configureCrossfadingAnimationToTargetedPreview;
- (void)configureSystemDefaultAnimation;
- (id)customSpringAnimationBehavior;
- (bool)defaultAnimation;
- (id)defaultPlatterView;
- (id)delegate;
- (bool)done;
- (id)droppedItem;
- (id)druidPlatterView;
- (double)estimatedFractionCompleteOfAnimation;
- (bool)hasStartedSpringAnimation;
- (id)initWithDragItem:(id)arg1 droppedItem:(id)arg2 window:(id)arg3 defaultAnimation:(bool)arg4 sourceAnimation:(bool)arg5 delegate:(id)arg6;
- (double)initialDistanceFromTargetFrame;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })initialTargetVelocity;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })initialVelocity;
- (id)item;
- (id /* block */)midpointHandler;
- (bool)midwayToTarget;
- (id /* block */)morphHandler;
- (id /* block */)nearCompletionHandler;
- (bool)needsReparenting;
- (id /* block */)nonAnimatedMidpointHandler;
- (void)performSpringAnimations:(id /* block */)arg1;
- (void)performTrackingAnimations:(id /* block */)arg1;
- (id)platterContainerView;
- (id /* block */)positionHandler;
- (void)prepareAnimationInWindow;
- (void)prepareToBeginAnimation;
- (void)previewContainerAnimationDidComplete;
- (long long)previewMode;
- (id)propertyAnimator;
- (bool)reachedTarget;
- (void)reparentRetargetingContainerViewInTargetContainer;
- (bool)reparentingCrossfadeComplete;
- (id)retargetingContainerPortalView;
- (id)retargetingContainerView;
- (void)setAlmostToTarget:(bool)arg1;
- (void)setAnimationCount:(int)arg1;
- (void)setAppPlatterView:(id)arg1;
- (void)setCenter:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCustomSpringAnimationBehavior:(id)arg1;
- (void)setDefaultAnimation:(bool)arg1;
- (void)setDefaultPlatterView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDruidPlatterView:(id)arg1;
- (void)setHasStartedSpringAnimation:(bool)arg1;
- (void)setInitialDistanceFromTargetFrame:(double)arg1;
- (void)setInitialTargetVelocity:(union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })arg1;
- (void)setInitialVelocity:(union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })arg1;
- (void)setMidpointHandler:(id /* block */)arg1;
- (void)setMidwayToTarget:(bool)arg1;
- (void)setMorphHandler:(id /* block */)arg1;
- (void)setNearCompletionHandler:(id /* block */)arg1;
- (void)setNonAnimatedMidpointHandler:(id /* block */)arg1;
- (void)setPlatterContainerView:(id)arg1;
- (void)setPositionHandler:(id /* block */)arg1;
- (void)setPropertyAnimator:(id)arg1;
- (void)setReparentingCrossfadeComplete:(bool)arg1;
- (void)setRetargetingContainerPortalView:(id)arg1;
- (void)setRetargetingContainerView:(id)arg1;
- (void)setSourceAnimation:(bool)arg1;
- (void)setTargetCenterZ:(double)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetedDropPreview:(id)arg1;
- (void)setUpdatedAppPlatterView:(id)arg1;
- (void)setUpdatedPreviewWasAdded:(bool)arg1;
- (void)setUpdatedTargetedDropPreview:(id)arg1;
- (void)setVisualTarget:(id)arg1;
- (void)setWindow:(id)arg1;
- (bool)sourceAnimation;
- (double)targetCenterZ;
- (id)targetContainerWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (id)targetedDropPreview;
- (void)updateAnimationTargeting;
- (void)updateCurrentTargetFrame;
- (void)updateDroppedItem:(id)arg1;
- (void)updateTargetedDropPreview:(id)arg1;
- (id)updatedAppPlatterView;
- (bool)updatedPreviewWasAdded;
- (id)updatedTargetedDropPreview;
- (id)visualTarget;
- (id)window;

@end
