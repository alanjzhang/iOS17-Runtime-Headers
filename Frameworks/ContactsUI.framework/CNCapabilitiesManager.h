/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {
    NSMutableDictionary * _destinationStatus;
    bool  _isListeningToIDSQueryController;
    bool  _isListeningToIDSServiceAvailability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_setDefaultCapabilitiesManager:(id)arg1;
+ (id)defaultCapabilitiesManager;

- (void).cxx_destruct;
- (bool)_isAppAvailable:(id)arg1;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2;
- (bool)areFavoritesAvailable;
- (id)conferenceURLForDestinationID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (void)dealloc;
- (bool)hasAdditionalTextTones;
- (bool)hasCameraCapability;
- (bool)hasCellularDataCapability;
- (bool)hasCellularTelephonyCapability;
- (bool)hasCellularTelephonyHardwareCapability;
- (bool)hasForceTouchCapability;
- (bool)hasPreviouslyConferencedWithID:(id)arg1;
- (bool)hasSMSCapability;
- (bool)hasSiriCapability;
- (bool)hasTelephonyCapability;
- (bool)hasVibratorCapability;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (bool)isConferencingAvailable;
- (bool)isConferencingEverGonnaBeAvailable;
- (bool)isEmailConfigured;
- (bool)isFaceTimeAppAvailable;
- (bool)isFaceTimeAudioAvailable;
- (bool)isMMSConfigured;
- (bool)isMadridConfigured;
- (bool)isMailAppAvailable;
- (bool)isMessagesAppAvailable;
- (bool)isPhoneAppAvailable;
- (bool)isSensitiveUIAllowed;
- (bool)isWeiboServiceAvailable;
- (void)removeIDSServiceAvailabilityListener:(id)arg1;

@end
