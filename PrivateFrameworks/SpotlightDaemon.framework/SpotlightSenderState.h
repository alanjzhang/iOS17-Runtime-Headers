/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SpotlightSenderState : NSObject {
    CSReceiverServerPreferences * _serverPreferences;
}

@property (nonatomic, readonly) CSReceiverServerPreferences *serverPreferences;

- (void).cxx_destruct;
- (void)_updateFromPreferences;
- (bool)clientDisabled:(long long)arg1;
- (id)init;
- (id)serverPreferences;

@end
