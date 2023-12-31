/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCapabilityManager : NSObject {
    NSNumber * _overrideForAllBoolValues;
    NSMutableDictionary * _overrides;
}

@property (nonatomic, retain) NSNumber *overrideForAllBoolValues;
@property (nonatomic, retain) NSMutableDictionary *overrides;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)applicationDisplayIdentifiers;
- (id)capabilityAnswer:(id)arg1;
- (bool)capabilityBoolAnswer:(id)arg1;
- (bool)hasCapabilities:(id)arg1;
- (id)init;
- (id)overrideForAllBoolValues;
- (id)overrides;
- (id)preferencesCapabilityAnswer:(id)arg1;
- (void)resetOverrides;
- (void)setOverrideForAllBoolValues:(id)arg1;
- (void)setOverrideValue:(id)arg1 forKey:(id)arg2;
- (void)setOverrides:(id)arg1;
- (id)supportPSPhoneNoiseCancellationCapability;
- (id)supportPSPhotoFormatEnhancedProRAWCapability;
- (id)supportPSPhotoFormatProRAWCapability;
- (id)supportPSRecordHDRVideoCapability;
- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsChamoisExternalDisplay;
- (id)supportsContinuityCamera;
- (id)supportsDisplayZoomCapability;
- (id)supportsInEDUModeCapability;
- (id)supportsInStoreDemoModeCapability;
- (id)supportsLightningAdapterCapability;
- (id)supportsListeningExperienceCapbility;
- (id)supportsNightShiftCapability;
- (id)supportsPSCellularDataPlanCapability;
- (id)supportsPSDeveloperSettingsCapability;
- (id)supportsPSExposureNotificationsCapability;
- (id)supportsPSHomeScreenPhoneCapability;
- (id)supportsPSPencilCapability;
- (id)supportsPSTTYCapability;
- (id)supportsPSTrackpadAndMouseCapability;
- (id)supportsPSTrackpadOnlyCapability;
- (id)supportsPictureInPictureCapability;
- (id)supportsRaiseToWakeCapability;
- (id)supportsRetailKioskModeCapability;
- (id)supportsWalletApplePayCapability;

@end
