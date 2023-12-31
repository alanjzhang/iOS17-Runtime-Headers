/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LighthouseCoreMLModelAnalysis.framework/LighthouseCoreMLModelAnalysis
 */

@interface LighthouseCoreMLModelTraining : NSObject

+ (id)evaluateModel:(id)arg1 modelConfiguration:(id)arg2 dataBatch:(id)arg3;
+ (id)getLabelFeatureName:(id)arg1 modelConfiguration:(id)arg2;
+ (void)initialize;
+ (bool)trainModel:(id)arg1 destModelUrl:(id)arg2 modelConfiguration:(id)arg3 dataBatch:(id)arg4;
+ (bool)trainModel:(id)arg1 destModelUrl:(id)arg2 modelConfiguration:(id)arg3 dataBatch:(id)arg4 labelFeatureName:(id)arg5;
+ (bool)validateModelFeatureName:(id)arg1 modelConfiguration:(id)arg2 dataBatch:(id)arg3;

@end
