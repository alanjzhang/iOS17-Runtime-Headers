/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings
 */

@interface GCSProfilesCollection : NSObject <GCSProfiles> {
    <GCSSettingsStoreService> * _settingsStore;
    <GCUserDefaults> * _userDefaults;
    NSArray * _values;
}

@property (nonatomic, readonly) <GCSSettingsStoreService> *settingsStore;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSettingsStore:(id)arg1 userDefaults:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)profileForIdentifier:(id)arg1;
- (void)setValues:(id)arg1;
- (id)settingsStore;
- (bool)storeVersionIsCompatible;
- (void)updateProfiles:(id)arg1;
- (id)values;

@end
