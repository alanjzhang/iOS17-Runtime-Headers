/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAAuthenticationBiometricMethodConfiguration : LAAuthenticationMethodConfiguration {
    bool  _autoRetry;
    bool  _avoidUsingFaceIDCamera;
}

@property (nonatomic, readonly) bool autoRetry;
@property (nonatomic, readonly) bool avoidUsingFaceIDCamera;

- (bool)autoRetry;
- (bool)avoidUsingFaceIDCamera;
- (id)initWithAutoRetry:(bool)arg1 avoidUsingFaceIDCamera:(bool)arg2 allowedUsers:(id)arg3 authenticationContext:(id)arg4;

@end
