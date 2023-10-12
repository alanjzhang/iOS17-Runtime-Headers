/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFSpeechRecordingAlertPolicyMutation : NSObject <AFSpeechRecordingAlertPolicyMutating> {
    AFSpeechRecordingAlertPolicy * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasStartingAlertBehavior : 1; 
        unsigned int hasStoppedAlertBehavior : 1; 
        unsigned int hasStoppedWithErrorAlertBehavior : 1; 
    }  _mutationFlags;
    AFSpeechRecordingAlertBehavior * _startingAlertBehavior;
    AFSpeechRecordingAlertBehavior * _stoppedAlertBehavior;
    AFSpeechRecordingAlertBehavior * _stoppedWithErrorAlertBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getStartingAlertBehavior;
- (id)getStoppedAlertBehavior;
- (id)getStoppedWithErrorAlertBehavior;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setStartingAlertBehavior:(id)arg1;
- (void)setStoppedAlertBehavior:(id)arg1;
- (void)setStoppedWithErrorAlertBehavior:(id)arg1;

@end
