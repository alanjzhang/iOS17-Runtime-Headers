/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewInteractionStateRecognizer : NSObject {
    double  _actualHintForce;
    double  _actualHintTime;
    double  _actualPeekForce;
    double  _actualPeekTime;
    double  _actualPopForce;
    double  _actualPopTime;
    bool  _allowsPopOffsetDecay;
    long long  _currentState;
    double  _currentTime;
    double  _currentTouchForce;
    unsigned long long  _deepPressCount;
    double  _highPopThreshold;
    double  _hintAndPeekInterval;
    double  _hintReductionForce;
    double  _lowpassForceAlpha;
    double  _maximumForce;
    double  _minimumPreviewDuration;
    double  _popAlwaysThreshold;
    double  _popDecayingOffset;
    double  _popForceReductionThreshold;
    double  _popOffsetDecayAlpha;
    double  _popOffsetInitial;
    double  _popOffsetLongterm;
    double  _popReductionForce;
    double  _previousEffectiveTouchForce;
    double  _previousPopThreshold;
    double  _previousTime;
    double  _progressToStrongThreshold;
    double  _revealThreshold;
    double  _saturationForce;
    bool  _shouldDelayReveal;
    double  _smoothedForce;
    double  _standardThreshold;
    double  _strongThreshold;
    double  _timeMark;
}

@property (nonatomic) long long currentState;
@property (nonatomic) double currentTouchForce;
@property (nonatomic) double minimumPreviewDuration;
@property (nonatomic) bool shouldDelayReveal;
@property (nonatomic, readonly) double velocity;

- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (double)_currentTouchForceMultiplier;
- (double)_denormalizedTouchForceValue:(double)arg1;
- (double)_normalizedTouchForceValue:(double)arg1;
- (double)_thresholdForForceLevel:(long long)arg1;
- (double)currentProgressToState:(long long)arg1;
- (long long)currentState;
- (double)currentTouchForce;
- (void)dealloc;
- (id)description;
- (void)evaluateWithTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (id)init;
- (double)minimumPreviewDuration;
- (void)reset;
- (void)setCurrentState:(long long)arg1;
- (void)setCurrentTouchForce:(double)arg1;
- (void)setMinimumPreviewDuration:(double)arg1;
- (void)setShouldDelayReveal:(bool)arg1;
- (bool)shouldDelayReveal;
- (double)velocity;

@end
