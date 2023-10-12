/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying> {
    AWDProactiveModelFittingQuantizedDenseVector * _denseQuantizedGradient;
    AWDProactiveModelFittingEvalMetrics * _evaluationMetrics;
    float  _gradientL2norm;
    float  _gradientScaleFactor;
    struct { 
        unsigned int iteration : 1; 
        unsigned int timestamp : 1; 
        unsigned int gradientL2norm : 1; 
        unsigned int gradientScaleFactor : 1; 
    }  _has;
    unsigned long long  _iteration;
    AWDProactiveModelFittingMinibatchStats * _minibatchStats;
    AWDProactiveModelFittingModelInfo * _modelInfo;
    AWDProactiveModelFittingSparseFloatVector * _sparseFloatGradient;
    AWDProactiveModelFittingQuantizedSparseVector * _sparseQuantizedGradient;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient;
@property (nonatomic, retain) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (nonatomic) float gradientL2norm;
@property (nonatomic) float gradientScaleFactor;
@property (nonatomic, readonly) bool hasDenseQuantizedGradient;
@property (nonatomic, readonly) bool hasEvaluationMetrics;
@property (nonatomic) bool hasGradientL2norm;
@property (nonatomic) bool hasGradientScaleFactor;
@property (nonatomic) bool hasIteration;
@property (nonatomic, readonly) bool hasMinibatchStats;
@property (nonatomic, readonly) bool hasModelInfo;
@property (nonatomic, readonly) bool hasSparseFloatGradient;
@property (nonatomic, readonly) bool hasSparseQuantizedGradient;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long iteration;
@property (nonatomic, retain) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, retain) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, retain) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient;
@property (nonatomic, retain) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denseQuantizedGradient;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evaluationMetrics;
- (float)gradientL2norm;
- (float)gradientScaleFactor;
- (bool)hasDenseQuantizedGradient;
- (bool)hasEvaluationMetrics;
- (bool)hasGradientL2norm;
- (bool)hasGradientScaleFactor;
- (bool)hasIteration;
- (bool)hasMinibatchStats;
- (bool)hasModelInfo;
- (bool)hasSparseFloatGradient;
- (bool)hasSparseQuantizedGradient;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)iteration;
- (void)mergeFrom:(id)arg1;
- (id)minibatchStats;
- (id)modelInfo;
- (bool)readFrom:(id)arg1;
- (void)setDenseQuantizedGradient:(id)arg1;
- (void)setEvaluationMetrics:(id)arg1;
- (void)setGradientL2norm:(float)arg1;
- (void)setGradientScaleFactor:(float)arg1;
- (void)setHasGradientL2norm:(bool)arg1;
- (void)setHasGradientScaleFactor:(bool)arg1;
- (void)setHasIteration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIteration:(unsigned long long)arg1;
- (void)setMinibatchStats:(id)arg1;
- (void)setModelInfo:(id)arg1;
- (void)setSparseFloatGradient:(id)arg1;
- (void)setSparseQuantizedGradient:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)sparseFloatGradient;
- (id)sparseQuantizedGradient;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

// AWDProactiveModelFittingLogRegGradient (PML_VisibleForTesting)

- (unsigned long long)gradientLength;
- (float)gradientValueAtIndex:(unsigned long long)arg1;
- (bool)hasGradient;

@end
