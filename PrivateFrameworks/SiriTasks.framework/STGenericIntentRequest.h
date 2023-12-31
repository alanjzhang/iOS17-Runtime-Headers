/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STGenericIntentRequest : AFSiriRequest {
    bool  __launchToForeground;
    NSString * _appIdentifier;
    NSDictionary * _info;
    NSString * _intentString;
    NSString * _utterance;
}

@property (setter=_setLaunchToForeground:, nonatomic) bool _launchToForeground;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_launchToForeground;
- (bool)_makeAppFrontmost;
- (void)_setLaunchToForeground:(bool)arg1;
- (id)appIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)info;
- (id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)intentString;
- (bool)isForegroundLaunch;
- (id)responseWithCode:(long long)arg1;
- (id)utterance;

// STGenericIntentRequest (AFAnalytics)

- (id)_af_analyticsContextDescription;

@end
