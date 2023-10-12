/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSDarwinVoiceTriggerEventInfoProvider : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _triggerInfos;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *triggerInfos;

+ (id)sharedInstance;
+ (id)voiceTriggerEventInfoWithAdjustedMachTime:(id)arg1 deviceUUID:(id)arg2 anchorHostMachTime:(unsigned long long)arg3 anchorDarwinMachTime:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)getMachTimeAdjustedVoiceTriggerEventInfoForDeviceUUID:(id)arg1;
- (id)init;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setRawVoiceTriggerEventInfo:(id)arg1 fromDeviceUUID:(id)arg2 anchorHostMachTime:(unsigned long long)arg3 anchorDarwinMachTime:(unsigned long long)arg4;
- (void)setTriggerInfos:(id)arg1;
- (id)triggerInfos;

@end
