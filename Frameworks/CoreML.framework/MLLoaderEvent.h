/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLLoaderEvent : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _bundleIdentifier;
    NSString * _compilerVersion;
    NSNumber * _computeUnits;
    NSNumber * _containsCustomLayer;
    NSNumber * _firstPartyExecutable;
    NSNumber * _modelDimension;
    NSNumber * _modelEngineType;
    NSString * _modelHash;
    NSNumber * _modelIsEncrypted;
    NSNumber * _modelLoadError;
    NSNumber * _modelLoadTime;
    NSString * _modelName;
    NSNumber * _modelOrigin;
    NSNumber * _modelProgramParsingError;
    NSNumber * _modelProgramValidationError;
    NSNumber * _modelType;
    NSString * _modelVersion;
    NSString * _nnModelNetHash;
    NSString * _nnModelShapeHash;
    NSString * _nnModelWeightsHash;
    NSString * _processName;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *compilerVersion;
@property (nonatomic, copy) NSNumber *computeUnits;
@property (nonatomic, copy) NSNumber *containsCustomLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSNumber *firstPartyExecutable;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *modelDimension;
@property (nonatomic, copy) NSNumber *modelEngineType;
@property (nonatomic, copy) NSString *modelHash;
@property (nonatomic, copy) NSNumber *modelIsEncrypted;
@property (nonatomic, copy) NSNumber *modelLoadError;
@property (nonatomic, copy) NSNumber *modelLoadTime;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSNumber *modelOrigin;
@property (nonatomic, copy) NSNumber *modelProgramParsingError;
@property (nonatomic, copy) NSNumber *modelProgramValidationError;
@property (nonatomic, copy) NSNumber *modelType;
@property (nonatomic, copy) NSString *modelVersion;
@property (readonly) NSString *name;
@property (nonatomic, copy) NSString *nnModelNetHash;
@property (nonatomic, copy) NSString *nnModelShapeHash;
@property (nonatomic, copy) NSString *nnModelWeightsHash;
@property (nonatomic, copy) NSString *processName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)compilerVersion;
- (id)computeUnits;
- (id)containsCustomLayer;
- (id)dictionaryRepresentation;
- (void)extractAndSetModelDetailsFromArchive:(void*)arg1;
- (id)firstPartyExecutable;
- (id)modelDimension;
- (id)modelEngineType;
- (id)modelHash;
- (id)modelIsEncrypted;
- (id)modelLoadError;
- (id)modelLoadTime;
- (id)modelName;
- (id)modelOrigin;
- (id)modelProgramParsingError;
- (id)modelProgramValidationError;
- (id)modelType;
- (id)modelVersion;
- (id)name;
- (id)nnModelNetHash;
- (id)nnModelShapeHash;
- (id)nnModelWeightsHash;
- (id)numberFromCString:(const char *)arg1;
- (id)processName;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCompilerVersion:(id)arg1;
- (void)setComputeUnits:(id)arg1;
- (void)setContainsCustomLayer:(id)arg1;
- (void)setFirstPartyExecutable:(id)arg1;
- (void)setModelDimension:(id)arg1;
- (void)setModelEngineType:(id)arg1;
- (void)setModelHash:(id)arg1;
- (void)setModelIsEncrypted:(id)arg1;
- (void)setModelLoadError:(id)arg1;
- (void)setModelLoadTime:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelOrigin:(id)arg1;
- (void)setModelProgramParsingError:(id)arg1;
- (void)setModelProgramValidationError:(id)arg1;
- (void)setModelType:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setNnModelNetHash:(id)arg1;
- (void)setNnModelShapeHash:(id)arg1;
- (void)setNnModelWeightsHash:(id)arg1;
- (void)setProcessName:(id)arg1;

@end
