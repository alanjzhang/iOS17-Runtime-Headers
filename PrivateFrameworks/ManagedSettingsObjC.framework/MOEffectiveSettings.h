/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ManagedSettingsObjC.framework/ManagedSettingsObjC
 */

@interface MOEffectiveSettings : NSObject {
    MOEffectiveAccountSettings * _account;
    MOEffectiveAllowedClientSettings * _allowedClient;
    MOEffectiveShieldSettings * _shield;
    MOEffectiveUserSettings * _user;
}

@property (readonly) MOEffectiveAccountSettings *account;
@property (readonly) MOEffectiveAllowedClientSettings *allowedClient;
@property (readonly) MOEffectiveShieldSettings *shield;
@property (readonly) MOEffectiveUserSettings *user;

- (void).cxx_destruct;
- (id)account;
- (id)allowedClient;
- (id)init;
- (id)shield;
- (id)user;

// MOEffectiveSettings (EventStream)

+ (void)startObservingChangesWithHandler:(id /* block */)arg1;
+ (void)subscribeForChangesInGroups:(id)arg1 eventName:(id)arg2;

@end
