/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCGenericDeviceDataClampExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _maxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _minExpression;
}

@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *maxExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *minExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (void)initializeWithModel:(id)arg1;
- (id)inputExpression;
- (id)maxExpression;
- (id)minExpression;
- (void)reset;
- (void)setInputExpression:(id)arg1;
- (void)setMaxExpression:(id)arg1;
- (void)setMinExpression:(id)arg1;

// GCGenericDeviceDataClampExpressionModelBuilder (Serialization)

- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;

@end
