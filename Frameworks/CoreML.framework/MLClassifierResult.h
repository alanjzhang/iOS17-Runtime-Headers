/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLClassifierResult : NSObject {
    <MLFeatureProvider> * _additionalFeatures;
    NSDictionary * _classProbability;
    MLFeatureValue * _predictedClass;
    long long  _predictedClassFeatureType;
}

@property (readonly) <MLFeatureProvider> *additionalFeatures;
@property (readonly) NSDictionary *classProbability;
@property (readonly) MLFeatureValue *predictedClass;
@property (readonly) long long predictedClassFeatureType;

+ (id)resultWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3;
+ (id)resultWithIntClassProbability:(id)arg1;
+ (id)resultWithIntClassProbability:(id)arg1 additionalFeatures:(id)arg2;
+ (id)resultWithStringClassProbability:(id)arg1;
+ (id)resultWithStringClassProbability:(id)arg1 additionalFeatures:(id)arg2;

- (void).cxx_destruct;
- (id)additionalFeatures;
- (id)classProbability;
- (id)initWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3;
- (id)initWithIntClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3;
- (id)initWithStringClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3;
- (id)predictedClass;
- (long long)predictedClassFeatureType;

// MLClassifierResult (Utilities)

- (id)asFeatureDictionaryWithPredictedClassDescription:(id)arg1 classProbabilityDescription:(id)arg2;

@end
