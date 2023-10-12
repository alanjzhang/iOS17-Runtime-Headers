/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INUserActivityExecutionInfo : INExecutionInfo {
    NSString * _userActivityType;
}

@property (nonatomic, readonly, copy) NSString *userActivityType;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4;
- (bool)canRunOnLocalDevice;
- (id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)userActivityType;

@end
