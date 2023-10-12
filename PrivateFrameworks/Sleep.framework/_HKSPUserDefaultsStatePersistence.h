/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface _HKSPUserDefaultsStatePersistence : NSObject <HKSPStatePersistence> {
    <HKSPUserDefaults> * _userDefaults;
}

@property (nonatomic, readonly) <HKSPUserDefaults> *userDefaults;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)arg1;
- (id)loadPersistentStateForIdentifier:(id)arg1 allowedStates:(id)arg2 error:(id*)arg3;
- (bool)savePersistentState:(id)arg1 identifier:(id)arg2 error:(id*)arg3;
- (id)userDefaults;

@end
