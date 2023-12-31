/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionResult : NSObject <NSSecureCoding> {
    NSNumber * _appliedImageOrientation;
    NSData * _brailleEdges;
    NSString * _detectedTextDescription;
    NSString * _detectedTextSummary;
    NSString * _detectedTextType;
    NSArray * _effectiveTextDetectionLocales;
    NSData * _equivalenceToken;
    NSSet * _evaluatedFeatureTypes;
    NSArray * _features;
    CIImage * _image;
    long long  _imageRegistrationState;
    AXMetricSession * _metricSession;
    AXMSemanticTextFactory * _semanticTextFactory;
    NSObject<NSSecureCoding> * _userContext;
}

@property (nonatomic, retain) NSNumber *appliedImageOrientation;
@property (nonatomic, readonly) AXMVisionFeature *assetMetadataFeature;
@property (nonatomic, readonly) NSArray *blurFeatures;
@property (nonatomic, retain) NSData *brailleEdges;
@property (nonatomic, readonly) NSArray *brightnessFeatures;
@property (nonatomic, readonly) NSArray *captionFeatures;
@property (nonatomic, readonly) bool captionMayContainSensitiveContent;
@property (nonatomic, readonly) AXMVisionFeature *colorInfoFeature;
@property (nonatomic, readonly) NSDictionary *detectedFeatureDictionary;
@property (nonatomic, retain) NSString *detectedTextDescription;
@property (nonatomic, retain) NSString *detectedTextSummary;
@property (nonatomic, retain) NSString *detectedTextType;
@property (nonatomic, retain) NSArray *effectiveTextDetectionLocales;
@property (nonatomic, retain) NSData *equivalenceToken;
@property (nonatomic, retain) NSSet *evaluatedFeatureTypes;
@property (nonatomic, readonly) NSArray *faceFeatures;
@property (nonatomic, readonly) NSDictionary *featureGates;
@property (nonatomic, retain) NSArray *features;
@property (nonatomic, readonly) NSArray *iconClassFeatures;
@property (nonatomic, retain) CIImage *image;
@property (nonatomic) long long imageRegistrationState;
@property (nonatomic, readonly) bool includesFeaturesForImageExploration;
@property (nonatomic, readonly) bool includesNSFWFeatures;
@property (nonatomic, readonly) NSString *localizedDetectedIconHint;
@property (nonatomic, readonly) NSString *localizedDetectedTextHint;
@property (nonatomic, readonly) NSString *localizedDetectedTextSummaryHint;
@property (nonatomic, readonly) NSString *localizedDetectedTextTypeHint;
@property (nonatomic, retain) AXMetricSession *metricSession;
@property (nonatomic, readonly) NSArray *modelClassificationFeatures;
@property (nonatomic, readonly) NSArray *objectClassificationFeatures;
@property (nonatomic, readonly) NSArray *ocrFeatures;
@property (nonatomic, readonly) NSArray *sceneClassificationFeatures;
@property (nonatomic, retain) AXMSemanticTextFactory *semanticTextFactory;
@property (nonatomic, readonly) NSArray *sensitiveContentForCaptionFeatures;
@property (nonatomic, retain) NSObject<NSSecureCoding> *userContext;

+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4 userContext:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_processFeatureChild:(id)arg1;
- (id)_processFeatureTree:(id)arg1;
- (id)appliedImageOrientation;
- (id)assetMetadataFeature;
- (id)brailleEdges;
- (id)captionTranslationLocale;
- (id)colorInfoFeature;
- (id)description;
- (id)detectedCaptionFeatureDescriptionWithOptions:(id)arg1;
- (id)detectedFeatureDescriptionWithOptions:(id)arg1;
- (id)detectedFeatureDictionary;
- (id)detectedSceneClassificationFeatureDescriptionWithOptions:(id)arg1;
- (id)detectedTextDescription;
- (id)detectedTextSummary;
- (id)detectedTextType;
- (id)effectiveTextDetectionLocales;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalenceToken;
- (id)evaluatedFeatureTypes;
- (id)featureGates;
- (id)features;
- (unsigned long long)hash;
- (id)image;
- (long long)imageRegistrationState;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAXMVisionResult:(id)arg1;
- (id)localizedDetectedIconHint;
- (id)localizedDetectedTextHint;
- (id)localizedDetectedTextSummaryHint;
- (id)localizedDetectedTextTypeHint;
- (id)metricSession;
- (id)parentOCRFeatureTypes;
- (id)semanticTextFactory;
- (void)setAppliedImageOrientation:(id)arg1;
- (void)setBrailleEdges:(id)arg1;
- (void)setDetectedTextDescription:(id)arg1;
- (void)setDetectedTextSummary:(id)arg1;
- (void)setDetectedTextType:(id)arg1;
- (void)setEffectiveTextDetectionLocales:(id)arg1;
- (void)setEquivalenceToken:(id)arg1;
- (void)setEvaluatedFeatureTypes:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageRegistrationState:(long long)arg1;
- (void)setMetricSession:(id)arg1;
- (void)setSemanticTextFactory:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)smallestChildOCRFeatureTypes;
- (id)sortedFeatures;
- (id)userContext;

// AXMVisionResult (AXMVisionEngineLookupConvenience)

- (id)blurFeatures;
- (id)brightnessFeatures;
- (id)captionFeatures;
- (bool)captionMayContainSensitiveContent;
- (id)faceFeatures;
- (id)iconClassFeatures;
- (bool)includesFeaturesForImageExploration;
- (bool)includesNSFWFeatures;
- (id)modelClassificationFeatures;
- (id)objectClassificationFeatures;
- (id)ocrFeatures;
- (id)sceneClassificationFeatures;
- (id)sensitiveContentFeatures;
- (id)sensitiveContentForCaptionFeatures;

@end
