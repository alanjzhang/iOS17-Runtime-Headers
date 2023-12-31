/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSAllanDeviationAnalysis : TSTimeErrorAnalysis {
    double * _adev;
}

@property (nonatomic, readonly, copy) NSArray *adev;

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;

- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (id)adev;
- (id)adevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)analysisLimit;
- (void)dealloc;
- (bool)exportAnalysisToDirectoryURL:(id)arg1;
- (bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (id)initWithTimeErrorValues:(id)arg1;

@end
