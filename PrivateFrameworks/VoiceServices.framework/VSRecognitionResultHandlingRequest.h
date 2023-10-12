/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResultHandlingRequest : NSObject {
    VSRecognitionAction * _action;
    <VSRecognitionResultHandler> * _handler;
    NSArray * _results;
}

- (void)dealloc;
- (id)handler;
- (id)initWithHandler:(id)arg1 results:(id)arg2;
- (id)nextAction;
- (id)results;
- (void)setNextAction:(id)arg1;

@end
