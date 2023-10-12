/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNSoundPrintKEmbeddingModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _fixedLengthEmbedding;
    MLMultiArray * _framewiseEmbedding;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *fixedLengthEmbedding;
@property (nonatomic, retain) MLMultiArray *framewiseEmbedding;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)fixedLengthEmbedding;
- (id)framewiseEmbedding;
- (id)initWithFixedLengthEmbedding:(id)arg1 framewiseEmbedding:(id)arg2;
- (void)setFixedLengthEmbedding:(id)arg1;
- (void)setFramewiseEmbedding:(id)arg1;

@end