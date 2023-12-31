/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIBMLTTaskSupport : NSObject <TRIMetricsProviding> {
    TRIBMLTDeployment * _bmltDeployment;
    _PASLock * _lock;
}

@property (nonatomic, readonly) TRIBMLTDeployment *bmltDeployment;

- (void).cxx_destruct;
- (void)addDimension:(id)arg1;
- (void)addMetric:(id)arg1;
- (id)bmltDeployment;
- (id)dimensions;
- (id)initWithBMLTDeployment:(id)arg1;
- (void)mergeTelemetry:(id)arg1;
- (id)metrics;
- (id)tags;
- (id)trialSystemTelemetry;

@end
