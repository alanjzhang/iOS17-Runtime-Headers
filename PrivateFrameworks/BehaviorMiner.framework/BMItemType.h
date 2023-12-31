/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

@interface BMItemType : NSObject <NSCopying, NSSecureCoding> {
    long long  _edge;
    _DKEventStream * _eventStream;
    NSString * _identifier;
    Class  _valueClass;
    id /* block */  _valueExtractBlock;
}

@property (nonatomic) long long edge;
@property (nonatomic, retain) _DKEventStream *eventStream;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) Class valueClass;
@property (nonatomic, copy) id /* block */ valueExtractBlock;

+ (id)allItemTypes;
+ (id)allItemTypesDictionary;
+ (id)allRegisteredItemTypes;
+ (void)registerItemType:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)taskSpecificItemWithIdentifier:(id)arg1 valueClass:(Class)arg2;
+ (void)unregisterItemType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)edge;
- (void)encodeWithCoder:(id)arg1;
- (id)eventStream;
- (id)extractEventFromDKEvent:(id)arg1;
- (id)extractItemFromDKEvent:(id)arg1;
- (id)extractValueFromDKEvent:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEdge:(long long)arg1;
- (void)setEventStream:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValueClass:(Class)arg1;
- (void)setValueExtractBlock:(id /* block */)arg1;
- (Class)valueClass;
- (id /* block */)valueExtractBlock;

// BMItemType (AirplaneMode)

+ (id)toggledAirplaneMode;

// BMItemType (Alarm)

+ (id)alarmSnoozedAny;
+ (id)alarmSnoozedWithID;
+ (id)alarmStoppedAny;
+ (id)alarmStoppedWithID;

// BMItemType (AppActivity)

+ (id)appActivityType;
+ (id)relevanceAppActivityHash;
+ (id)relevanceCoarseAppActivityHash;

// BMItemType (AppInFocus)

+ (id)appInFocus;
+ (id)appLaunchedReason;
+ (id)appOpened;
+ (id)bundleIdOfHostOpenedShareExtension;
+ (id)bundleIdOfShareExtensionOpened;

// BMItemType (Audio)

+ (id)connectedToExternalAudioOutput;

// BMItemType (Bluetooth)

+ (id)bluetoothConnectedToDevice;
+ (id)bluetoothConnectedToDeviceWithAddress;
+ (id)bluetoothConnectedToDeviceWithName;

// BMItemType (CarPlay)

+ (id)connectedToCarPlay;

// BMItemType (CoreRoutineLocation)

+ (id)enterLocation;
+ (id)exitLocation;
+ (id)locationIdentifier;

// BMItemType (DoNotDisturb)

+ (id)toggledDoNotDisturb;

// BMItemType (Intents)

+ (id)appIntentAutomationHash;
+ (id)appIntentClass;
+ (id)relevanceCoarseIntentHash;
+ (id)relevanceIntentHash;

// BMItemType (Interaction)

+ (id)interactionContentURL;
+ (id)interactionDirection;
+ (id)interactionExtractedTopicFromAttachment;
+ (id)interactionItemTypes;
+ (id)interactionMechanism;
+ (id)interactionPhotoContact;
+ (id)interactionPhotoLocation;
+ (id)interactionPhotoScene;
+ (id)interactionRecipients;
+ (id)interactionSender;
+ (id)interactionSharingSourceBundleID;
+ (id)interactionTargetBundleID;
+ (id)interactionTextTopic;
+ (id)interactionUTIType;

// BMItemType (LowPowerMode)

+ (id)toggledLowPowerMode;

// BMItemType (Media)

+ (id)mediaGenreStartedPlaying;
+ (id)mediaIsPlaying;

// BMItemType (Time)

+ (id)dayOfWeek;
+ (id)hourOfDay;
+ (id)hourOfDaySlot;
+ (id)isWeekend;
+ (id)temporalItemTypes;

// BMItemType (User)

+ (id)firstBacklightAfterWakeup;

// BMItemType (WiFi)

+ (id)wifiConnectedToSSID;
+ (id)wifiDisconnectedFromSSID;
+ (id)wifiIsConnectedToSSID;

@end
