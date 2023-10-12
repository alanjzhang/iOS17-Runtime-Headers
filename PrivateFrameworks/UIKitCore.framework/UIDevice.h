/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDevice : NSObject <DebugHierarchyEntryPoint_Fallback, DebugHierarchyObject_Fallback> {
    float  _batteryLevel;
    struct { 
        unsigned int batteryMonitoringEnabled : 1; 
        unsigned int proximityMonitoringEnabled : 1; 
        unsigned int expectsFaceContactInLandscape : 1; 
        unsigned int orientation : 3; 
        unsigned int batteryState : 2; 
        unsigned int proximityState : 1; 
        unsigned int hasTouchPadOverride : 1; 
        unsigned int hasTouchPad : 1; 
        unsigned int isHardwareKeyboardAvailable : 1; 
    }  _deviceFlags;
    long long  _numDeviceOrientationObservers;
    bool  _remoteHasMicrophone;
    unsigned long long  _remoteTouchSurfaceType;
}

@property (setter=_setBacklightLevel:, nonatomic) float _backlightLevel;
@property (getter=_isHardwareKeyboardAvailable, nonatomic, readonly) bool _hardwareKeyboardAvailable;
@property (nonatomic, readonly) bool _supportsPencil;
@property (nonatomic, readonly) float batteryLevel;
@property (getter=isBatteryMonitoringEnabled, nonatomic) bool batteryMonitoringEnabled;
@property (nonatomic, readonly) long long batteryState;
@property (nonatomic, readonly, retain) NSString *buildVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *doc_symbolName;
@property (getter=_feedbackSupportLevel, nonatomic, readonly) long long feedbackSupportLevel;
@property (getter=isGeneratingDeviceOrientationNotifications, nonatomic, readonly) bool generatesDeviceOrientationNotifications;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifierForVendor;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *model;
@property (getter=isMultitaskingSupported, nonatomic, readonly) bool multitaskingSupported;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long orientation;
@property (getter=isProximityMonitoringEnabled, nonatomic) bool proximityMonitoringEnabled;
@property (nonatomic, readonly) bool proximityState;
@property (getter=sf_isDeveloperModeEnabled, nonatomic, readonly) bool sf_developerModeEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) long long userInterfaceIdiom;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_isWatch;
+ (bool)_isWatchCompanion;
+ (id)currentDevice;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(bool)arg1;

- (float)_backlightLevel;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (void)_hardwareKeyboardAvailabilityChanged;
- (bool)_isHardwareKeyboardAvailable;
- (bool)_isSystemSoundEnabled;
- (void)_performShimmedRequestIfPossibleForDeviceOrientation:(long long)arg1;
- (void)_playInputDeleteSound;
- (void)_playInputSelectSound;
- (void)_playSystemSound:(unsigned int)arg1;
- (void)_registerForSystemSounds:(id)arg1;
- (void)_setActiveUserInterfaceIdiom:(long long)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (void)_setExpectsFaceContactInLandscape:(bool)arg1;
- (float)_softwareDimmingAlpha;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)batteryLevel;
- (long long)batteryState;
- (void)beginGeneratingDeviceOrientationNotifications;
- (id)buildVersion;
- (void)dealloc;
- (void)endGeneratingDeviceOrientationNotifications;
- (id)identifierForVendor;
- (id)init;
- (bool)isBatteryMonitoringEnabled;
- (bool)isGeneratingDeviceOrientationNotifications;
- (bool)isMultitaskingSupported;
- (bool)isProximityMonitoringEnabled;
- (id)localizedModel;
- (id)model;
- (id)name;
- (long long)orientation;
- (void)playInputClick;
- (bool)proximityState;
- (void)setBatteryMonitoringEnabled:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setProximityMonitoringEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)systemName;
- (id)systemVersion;
- (long long)userInterfaceIdiom;

// UIDevice (Private)

- (void)_enableDeviceOrientationEvents:(bool)arg1;

// UIDevice (UIDeviceInternal)

+ (bool)_hasHomeButton;
+ (bool)_isLowEnd;

- (long long)_keyboardGraphicsQuality;
- (long long)_nativeScreenGamut;
- (long long)_predictionGraphicsQuality;

// UIDevice (UIDevicePrivate)

+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;

- (void)_clearGraphicsQualityOverride;
- (long long)_graphicsQuality;
- (bool)_hasGraphicsQualityOverride;
- (bool)_hasTouchPad;
- (void)_loadRemoteDeviceInfoIfNeeded;
- (bool)_remoteHasMicrophoneCapability;
- (unsigned long long)_remoteTouchSurfaceType;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(long long)arg1;
- (void)_setGraphicsQualityOverride:(long long)arg1;
- (void)_setHasTouchPad:(bool)arg1;
- (void)_setProximityState:(bool)arg1;
- (bool)_supportsDeepColor;
- (bool)_supportsForceTouch;
- (bool)_supportsPencil;

// UIDevice (_UIFeedbackEngineSupport)

- (long long)_feedbackSupportLevel;

// UIDevice (_UITapticEngineSupport)

- (id)_tapticEngine;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

// UIDevice (DOCDeviceSymbol)

- (id)doc_symbolName;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation

// UIDevice (SFAdditions)

- (id)sf_colorCodedSerialNumber;
- (id)sf_configString;
- (id)sf_deviceSubTypeString;
- (bool)sf_deviceSupportsDisplayZoom;
- (id)sf_deviceType;
- (bool)sf_hasHardwareHomeButton;
- (bool)sf_inRetailKioskMode;
- (bool)sf_isAppleTV;
- (bool)sf_isAudioAccessory;
- (bool)sf_isCarrierInstall;
- (bool)sf_isChinaRegionCellularDevice;
- (bool)sf_isDeveloperModeEnabled;
- (bool)sf_isInternalInstall;
- (bool)sf_isiPad;
- (bool)sf_isiPhone;
- (bool)sf_isiPod;
- (id)sf_monthAndYearOfManufacture;
- (id)sf_plantCode;
- (id)sf_productType;
- (id)sf_regionCode;
- (id)sf_regulatoryDeviceVariant;
- (id)sf_screenClassString;
- (id)sf_serialNumber;
- (id)sf_serialNumberQRImage;
- (id)sf_udidString;
- (unsigned long long)sf_weekOfManufacture;
- (unsigned long long)sf_yearOfManufacture;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libViewDebuggerSupport.dylib

// UIDevice (DebugHierarchyAdditionsFallback)

+ (id)fallback_debugHierarchyGroupingIDs;
+ (id)fallback_debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id*)arg2;
+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

@end