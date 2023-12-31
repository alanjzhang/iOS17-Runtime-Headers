/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWatchAppInstallationDataSource : HKObserverBridge {
    HKNanoRegistryPairingAndSwitchingNotificationDataSource * _devicePairingAndSwitchingDataSource;
    NSMutableDictionary * _watchAppInstallationManagersByBundleIdentifier;
}

@property (nonatomic, readonly) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource;
@property (nonatomic, readonly) NSMutableDictionary *watchAppInstallationManagersByBundleIdentifier;

- (void).cxx_destruct;
- (void)_populateManagersDictionaryForBundleIdentifier:(id)arg1;
- (id)devicePairingAndSwitchingDataSource;
- (id)init;
- (id)initWithDevicePairingAndSwitchingNotificationDataSource:(id)arg1;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;
- (id)watchAppInstallationManagerForBundleIdentifier:(id)arg1;
- (id)watchAppInstallationManagersByBundleIdentifier;

@end
