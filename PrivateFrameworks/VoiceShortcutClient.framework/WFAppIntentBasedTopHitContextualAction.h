/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFAppIntentBasedTopHitContextualAction : WFTopHitItemContextualAction {
    NSString * _appBundleIdentifier;
    long long  _authenticationPolicy;
    NSString * _extensionBundleIdentifier;
    LNAction * _linkAction;
    LNProperty * _parameterValue;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) long long authenticationPolicy;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) LNAction *linkAction;
@property (nonatomic, readonly) LNProperty *parameterValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (long long)authenticationPolicy;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 appBundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 authenticationPolicy:(long long)arg4 associatedAppBundleIdentifier:(id)arg5 parameterValue:(id)arg6 displayFormatString:(id)arg7 title:(id)arg8 subtitleFormatString:(id)arg9 primaryColor:(unsigned long long)arg10 icon:(id)arg11 accessoryIcon:(id)arg12 namedQueryInfo:(id)arg13;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)linkAction;
- (id)parameterValue;
- (bool)showsUserInterfaceWhenRunning;
- (id)uniqueIdentifier;

@end
