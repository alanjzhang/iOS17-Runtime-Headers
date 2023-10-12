/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {
    CADisplayLink * _continuousEvaluationDisplayLink;
    NSSet * _currentTouches;
    _UITouchesObservingGestureRecognizer * _gestureRecognizer;
    double  _lastObservationTime;
    long long  _observerCount;
    NSObservation * _touchesObservation;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelContinuousEvaluation;
- (void)_didEndHavingAnyObservers;
- (double)_maximumPossibleForceForTouches:(id)arg1;
- (bool)_shouldFilterDueToSystemGesturesForTouches:(id)arg1;
- (double)_timestampForTouches:(id)arg1;
- (id)_touchForceMessageForTouches:(id)arg1;
- (double)_unclampedTouchForceForTouches:(id)arg1;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_willBeginHavingAnyObservers;
- (id)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(id)arg1;

@end
