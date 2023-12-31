/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAPersistedRight : LARight {
    NSArray * _privateKeys;
    NSArray * _secrets;
}

@property (nonatomic, readonly) LAPrivateKey *key;
@property (nonatomic, readonly) LASecret *secret;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 accessKey:(id)arg2 privateKeys:(id)arg3 secrets:(id)arg4;
- (id)key;
- (id)secret;

@end
