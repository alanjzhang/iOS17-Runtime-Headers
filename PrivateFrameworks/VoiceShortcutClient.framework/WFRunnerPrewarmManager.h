/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFRunnerPrewarmManager : NSObject {
    NSXPCConnection * _runner;
}

@property (nonatomic, retain) NSXPCConnection *runner;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)prewarmRunnerIfNecessary;
- (void)reset;
- (id)runner;
- (void)setRunner:(id)arg1;

@end
