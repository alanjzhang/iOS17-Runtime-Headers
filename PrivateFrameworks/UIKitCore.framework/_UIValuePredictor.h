/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIValuePredictor : NSObject <NSCopying> {
    unsigned long long  _arrayCapacity;
    unsigned long long  _capacity;
    double * _confidenceFactors;
    double * _confidenceFactorsForDerivativeStability;
    double * _confidenceFactorsForHistoricalAccuracy;
    double * _confidenceFactorsForVelocity;
    double  _derivativeStabilityThreshold;
    double ** _derivatives;
    double  _maxConstraint;
    double  _maxHistoricalAccuracyThreshold;
    double  _maxVelocityThreshold;
    double  _minConstraint;
    double  _minHistoricalAccuracyThreshold;
    double  _minVelocityThreshold;
    unsigned long long  _numDerivatives;
    unsigned long long  _numPredictions;
    unsigned long long  _numValues;
    double * _predictions;
    double * _valueWeights;
    double * _values;
    bool  _wrapConstraint;
}

@property (nonatomic) double derivativeStabilityThreshold;
@property (nonatomic) double maxConstraint;
@property (nonatomic) double maxHistoricalAccuracyThreshold;
@property (nonatomic) double maxVelocityThreshold;
@property (nonatomic) double minConstraint;
@property (nonatomic) double minHistoricalAccuracyThreshold;
@property (nonatomic) double minVelocityThreshold;
@property (nonatomic, readonly) unsigned long long numDerivatives;
@property (nonatomic, readonly) unsigned long long numPredictions;
@property (nonatomic, readonly) unsigned long long numValues;
@property (nonatomic) bool wrapConstraint;

- (double*)_confidenceFactorsAtIndex:(unsigned long long)arg1;
- (double*)_confidenceFactorsForDerivativeStabilityAtIndex:(unsigned long long)arg1;
- (double*)_confidenceFactorsForHistoricalAccuracyAtIndex:(unsigned long long)arg1;
- (double*)_confidenceFactorsForVelocityAtIndex:(unsigned long long)arg1;
- (double)_constrainPrediction:(double)arg1;
- (double**)_derivatives;
- (void)_ensureCapacity:(unsigned long long)arg1;
- (void)_getPriorPredictions:(double*)arg1 forValueAtIndex:(int)arg2;
- (double*)_predictionsAtIndex:(unsigned long long)arg1;
- (void)_propagateDerivatives:(double*)arg1 fromHigherDerivatives:(double*)arg2 atIndex:(long long)arg3;
- (void)_setupDefaults;
- (void)_slideDataWindow;
- (void)_updateConfidenceFactorsAtIndex:(int)arg1;
- (void)_updateConfidenceFactorsForDerivativeStabilityAtIndex:(int)arg1;
- (void)_updateConfidenceFactorsForHistoricalAccuracyAtIndex:(int)arg1;
- (void)_updateConfidenceFactorsForVelocityAtIndex:(long long)arg1;
- (void)_updateDerivatives:(double*)arg1 fromArray:(double*)arg2 weights:(double*)arg3 atIndex:(long long)arg4 wrap:(bool)arg5;
- (void)_updatePredictionsAtIndex:(long long)arg1;
- (double*)_valueWeightsAtIndex:(unsigned long long)arg1;
- (double*)_valuesAtIndex:(unsigned long long)arg1;
- (void)addValue:(double)arg1 weight:(double)arg2;
- (double*)confidenceFactors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)derivativeStabilityThreshold;
- (id)description;
- (id)descriptionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 includeHeader:(bool)arg3 includeDetailedConfidence:(bool)arg4;
- (id)init;
- (id)initFromValuePredictor:(id)arg1;
- (id)initWithNumPredictions:(unsigned long long)arg1 numDerivatives:(unsigned long long)arg2;
- (double)maxConstraint;
- (double)maxHistoricalAccuracyThreshold;
- (double)maxVelocityThreshold;
- (double)minConstraint;
- (double)minHistoricalAccuracyThreshold;
- (double)minVelocityThreshold;
- (unsigned long long)numDerivatives;
- (unsigned long long)numPredictions;
- (unsigned long long)numValues;
- (double*)predictions;
- (void)setDerivativeStabilityThreshold:(double)arg1;
- (void)setMaxConstraint:(double)arg1;
- (void)setMaxHistoricalAccuracyThreshold:(double)arg1;
- (void)setMaxVelocityThreshold:(double)arg1;
- (void)setMinConstraint:(double)arg1;
- (void)setMinHistoricalAccuracyThreshold:(double)arg1;
- (void)setMinVelocityThreshold:(double)arg1;
- (void)setWrapConstraint:(bool)arg1;
- (bool)wrapConstraint;

@end
