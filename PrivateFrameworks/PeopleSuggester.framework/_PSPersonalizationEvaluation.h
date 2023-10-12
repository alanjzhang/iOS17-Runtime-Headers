/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSPersonalizationEvaluation : NSObject {
    NSNumber * _accuracyGainThresholdForSwap;
    MLModelConfiguration * _adaptableModelConfiguration;
    NSString * _adaptableModelDeployPath;
    long long  _adaptationStrategy;
    NSNumber * _batchSize;
    NSNumber * _engagementRateGainThresholdForSwap;
    NSNumber * _epoc;
    bool  _evaluateIsInvokedOnce;
    NSNumber * _evaluationIterationCount;
    NSMutableDictionary * _featureNameDict;
    NSURL * _intermediateCompiledModelURL;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSNumber * _learningRate;
    NSNumber * _maxDepth;
    NSNumber * _minChildWeight;
    NSNumber * _minSampleCountForAdaptation;
    NSNumber * _minimumTestDataSizeForSwap;
    NSNumber * _numClasses;
    NSNumber * _numTrees;
    NSUserDefaults * _psAdaptationDefaults;
    NSDictionary * _recipe;
    NSNumber * _recipeID;
    NSMutableArray * _results;
    NSDictionary * _selectedFeaturesConfig;
    id /* block */  _shouldContinue;
    NSNumber * _swapOK;
    NSNumber * _testSplitPercent;
    NSNumber * _topN;
}

@property (nonatomic, retain) NSNumber *accuracyGainThresholdForSwap;
@property (nonatomic, retain) MLModelConfiguration *adaptableModelConfiguration;
@property (nonatomic, retain) NSString *adaptableModelDeployPath;
@property (nonatomic) long long adaptationStrategy;
@property (nonatomic, retain) NSNumber *batchSize;
@property (nonatomic, retain) NSNumber *engagementRateGainThresholdForSwap;
@property (nonatomic, retain) NSNumber *epoc;
@property (nonatomic) bool evaluateIsInvokedOnce;
@property (nonatomic, retain) NSNumber *evaluationIterationCount;
@property (nonatomic, retain) NSMutableDictionary *featureNameDict;
@property (nonatomic, retain) NSURL *intermediateCompiledModelURL;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) NSNumber *learningRate;
@property (nonatomic, retain) NSNumber *maxDepth;
@property (nonatomic, retain) NSNumber *minChildWeight;
@property (nonatomic, retain) NSNumber *minSampleCountForAdaptation;
@property (nonatomic, retain) NSNumber *minimumTestDataSizeForSwap;
@property (nonatomic, retain) NSNumber *numClasses;
@property (nonatomic, retain) NSNumber *numTrees;
@property (nonatomic, retain) NSUserDefaults *psAdaptationDefaults;
@property (nonatomic, readonly) NSDictionary *recipe;
@property (nonatomic, retain) NSNumber *recipeID;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, retain) NSDictionary *selectedFeaturesConfig;
@property (nonatomic, copy) id /* block */ shouldContinue;
@property (nonatomic, retain) NSNumber *swapOK;
@property (nonatomic, retain) NSNumber *testSplitPercent;
@property (nonatomic, retain) NSNumber *topN;

- (void).cxx_destruct;
- (id)accuracyGainThresholdForSwap;
- (void)adaptMLModel:(id)arg1 withTrainingData:(id)arg2 modelConfiguration:(id)arg3;
- (id)adaptableModelConfiguration;
- (id)adaptableModelDeployPath;
- (long long)adaptationStrategy;
- (id)batchSize;
- (bool)cloneAdaptableModel:(id)arg1 toFilePath:(id)arg2 originalXgboostModelName:(id)arg3 clonedXgboostModelName:(id)arg4;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1 forMLModel:(id)arg2;
- (id)engagementRateGainThresholdForSwap;
- (id)epoc;
- (bool)evaluateIsInvokedOnce;
- (id)evaluationIterationCount;
- (id)featureNameDict;
- (id)initWithRecipe:(id)arg1 knowledgeStore:(id)arg2 shouldContinueBlock:(id /* block */)arg3;
- (id)intermediateCompiledModelURL;
- (id)knowledgeStore;
- (id)learningRate;
- (id)loadAdaptableModelUnderDirectory:(id)arg1;
- (id)loadDefaultModel;
- (id)maxDepth;
- (id)minChildWeight;
- (id)minSampleCountForAdaptation;
- (id)minimumTestDataSizeForSwap;
- (id)numClasses;
- (id)numTrees;
- (bool)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)arg1;
- (id)processDataWithQuery:(id)arg1 balanceNeed:(bool)arg2;
- (id)psAdaptationDefaults;
- (id)recipe;
- (id)recipeID;
- (id)results;
- (id)selectedFeaturesConfig;
- (void)setAccuracyGainThresholdForSwap:(id)arg1;
- (void)setAdaptableModelConfiguration:(id)arg1;
- (void)setAdaptableModelDeployPath:(id)arg1;
- (void)setAdaptationStrategy:(long long)arg1;
- (void)setBatchSize:(id)arg1;
- (void)setEngagementRateGainThresholdForSwap:(id)arg1;
- (void)setEpoc:(id)arg1;
- (void)setEvaluateIsInvokedOnce:(bool)arg1;
- (void)setEvaluationIterationCount:(id)arg1;
- (void)setFeatureNameDict:(id)arg1;
- (void)setIntermediateCompiledModelURL:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setLastDayOfAdaptation:(id)arg1;
- (void)setLearningRate:(id)arg1;
- (void)setMaxDepth:(id)arg1;
- (void)setMinChildWeight:(id)arg1;
- (void)setMinSampleCountForAdaptation:(id)arg1;
- (void)setMinimumTestDataSizeForSwap:(id)arg1;
- (void)setNumClasses:(id)arg1;
- (void)setNumTrees:(id)arg1;
- (void)setParametersFromRecipe;
- (void)setPsAdaptationDefaults:(id)arg1;
- (void)setRecipeID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSelectedFeaturesConfig:(id)arg1;
- (void)setShouldContinue:(id /* block */)arg1;
- (void)setSwapOK:(id)arg1;
- (void)setTestSplitPercent:(id)arg1;
- (void)setTopN:(id)arg1;
- (id /* block */)shouldContinue;
- (id)swapOK;
- (id)testSplitPercent;
- (id)topN;
- (void)updateAdaptableModelConfigWithUpdateType:(long long)arg1 numTrees:(id)arg2;

@end