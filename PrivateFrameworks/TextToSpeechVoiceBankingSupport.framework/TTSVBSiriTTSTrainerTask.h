/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeechVoiceBankingSupport.framework/TextToSpeechVoiceBankingSupport
 */

@interface TTSVBSiriTTSTrainerTask : NSObject

@property (nonatomic, readonly) long long currentTaskTotal;
@property (nonatomic, readonly) long long currentTaskValue;
@property (nonatomic, readonly) bool isUnfinishedOrPending;
@property (nonatomic, readonly) double normalizedProgressValue;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString *taskID;
@property (nonatomic, readonly) long long trainingStatus;

- (long long)currentTaskTotal;
- (long long)currentTaskValue;
- (id)description;
- (id)initWithTaskID:(id)arg1 trainingAssetURL:(id)arg2 dataAssetURL:(id)arg3 inferenceAssetURL:(id)arg4 trainingMode:(long long)arg5 startImmediately:(bool)arg6;
- (bool)isUnfinishedOrPending;
- (double)normalizedProgressValue;
- (long long)status;
- (id)taskID;
- (long long)trainingStatus;

@end
