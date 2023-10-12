/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVABTestGenerator : NSObject {
    float  _probabilityForOutcomeA;
    long long  _totalExperiments;
    long long  _totalForOutcomeA;
    long long  _totalForOutcomeB;
}

@property (nonatomic, readonly) float probabilityForOutcomeA;
@property (nonatomic, readonly) long long totalExperiments;
@property (nonatomic, readonly) long long totalForOutcomeA;
@property (nonatomic, readonly) long long totalForOutcomeB;

- (id)description;
- (id)initWithProbabilityForOutcomeA:(float)arg1;
- (long long)lastOutcome;
- (long long)nextOutcome;
- (float)probabilityForOutcomeA;
- (long long)totalExperiments;
- (long long)totalForOutcomeA;
- (long long)totalForOutcomeB;
- (void)updateProbabilityForOutcomeA:(float)arg1;

@end
