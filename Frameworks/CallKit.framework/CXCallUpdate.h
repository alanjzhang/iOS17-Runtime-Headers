/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallUpdate : NSObject <CXCopying, NSCopying, NSSecureCoding> {
    NSString * _ISOCountryCode;
    NSUUID * _UUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    bool  _accessoryButtonEventsEnabled;
    CXAccount * _account;
    CXParticipant * _activeRemoteParticipant;
    NSSet * _activeRemoteParticipantHandles;
    NSString * _audioCategory;
    long long  _audioInterruptionOperationMode;
    long long  _audioInterruptionProvider;
    NSString * _audioMode;
    bool  _blocked;
    long long  _bluetoothAudioFormat;
    NSDictionary * _context;
    bool  _conversation;
    NSString * _crossDeviceIdentifier;
    bool  _emergency;
    bool  _failureExpected;
    int  _filteredOutReason;
    CXHandoffContext * _handoffContext;
    bool  _hasBeenRedirected;
    struct CXCallUpdateHasSet { 
        unsigned int account : 1; 
        unsigned int activeRemoteParticipant : 1; 
        unsigned int remoteHandle : 1; 
        unsigned int localizedCallerName : 1; 
        unsigned int localizedCallerImageURL : 1; 
        unsigned int emergency : 1; 
        unsigned int failureExpected : 1; 
        unsigned int supportsEmergencyFallback : 1; 
        unsigned int usingBaseband : 1; 
        unsigned int blocked : 1; 
        unsigned int ttyType : 1; 
        unsigned int supportsTTYWithVoice : 1; 
        unsigned int mayRequireBreakBeforeMake : 1; 
        unsigned int hasVideo : 1; 
        unsigned int audioCategory : 1; 
        unsigned int audioMode : 1; 
        unsigned int audioInterruptionProvider : 1; 
        unsigned int audioInterruptionOperationMode : 1; 
        unsigned int verificationStatus : 1; 
        unsigned int priority : 1; 
        unsigned int requiresInCallSounds : 1; 
        unsigned int inCallSoundRegion : 1; 
        unsigned int supportsHolding : 1; 
        unsigned int supportsGrouping : 1; 
        unsigned int supportsUngrouping : 1; 
        unsigned int supportsDTMF : 1; 
        unsigned int supportsUnambiguousMultiPartyState : 1; 
        unsigned int supportsAddCall : 1; 
        unsigned int supportsSendingToVoicemail : 1; 
        unsigned int videoStreamToken : 1; 
        unsigned int crossDeviceIdentifier : 1; 
        unsigned int ISOCountryCode : 1; 
        unsigned int localSenderIdentityUUID : 1; 
        unsigned int localSenderIdentityAccountUUID : 1; 
        unsigned int localMemberHandleValue : 1; 
        unsigned int localSenderSubscriptionIdentifier : 1; 
        unsigned int participantGroupUUID : 1; 
        unsigned int remoteParticipantHandles : 1; 
        unsigned int otherInvitedHandles : 1; 
        unsigned int activeRemoteParticipantHandles : 1; 
        unsigned int handoffContext : 1; 
        unsigned int screenShareAttributes : 1; 
        unsigned int context : 1; 
        unsigned int prefersExclusiveAccessToCellularNetwork : 1; 
        unsigned int remoteUplinkMuted : 1; 
        unsigned int shouldSuppressInCallUI : 1; 
        unsigned int requiresAuthentication : 1; 
        unsigned int mutuallyExclusiveCall : 1; 
        unsigned int junkConfidence : 1; 
        unsigned int identificationCategory : 1; 
        unsigned int conversation : 1; 
        unsigned int mixesVoiceWithMedia : 1; 
        unsigned int prefersToPlayDuringWombat : 1; 
        unsigned int mediaPlaybackOnExternalDevice : 1; 
        unsigned int oneToOneModeEnabled : 1; 
        unsigned int sharingScreen : 1; 
        unsigned int bluetoothAudioFormat : 1; 
        unsigned int ignoresBluetoothDeviceUID : 1; 
        unsigned int serviceStatus : 1; 
        unsigned int transmissionMode : 1; 
        unsigned int accessoryButtonEventsEnabled : 1; 
        unsigned int sendingVideo : 1; 
        unsigned int hasBeenRedirected : 1; 
        unsigned int isKnownCaller : 1; 
        unsigned int filteredOutReason : 1; 
        unsigned int silencingUserInfo : 1; 
        unsigned int isReRing : 1; 
        unsigned int suppressRingtone : 1; 
    }  _hasSet;
    bool  _hasVideo;
    long long  _identificationCategory;
    bool  _ignoresBluetoothDeviceUID;
    long long  _inCallSoundRegion;
    bool  _isKnownCaller;
    bool  _isReRing;
    long long  _junkConfidence;
    NSString * _localMemberHandleValue;
    NSUUID * _localSenderIdentityAccountUUID;
    NSUUID * _localSenderIdentityUUID;
    NSString * _localSenderSubscriptionIdentifier;
    CXSandboxExtendedURL * _localizedCallerImageURL;
    NSString * _localizedCallerName;
    bool  _mayRequireBreakBeforeMake;
    bool  _mediaPlaybackOnExternalDevice;
    bool  _mixesVoiceWithMedia;
    bool  _mutuallyExclusiveCall;
    bool  _oneToOneModeEnabled;
    NSSet * _otherInvitedHandles;
    NSUUID * _participantGroupUUID;
    bool  _prefersExclusiveAccessToCellularNetwork;
    bool  _prefersToPlayDuringWombat;
    long long  _priority;
    CXHandle * _remoteHandle;
    NSSet * _remoteParticipantHandles;
    bool  _remoteUplinkMuted;
    bool  _requiresAuthentication;
    bool  _requiresInCallSounds;
    CXScreenShareAttributes * _screenShareAttributes;
    bool  _sendingVideo;
    long long  _serviceStatus;
    bool  _sharingScreen;
    bool  _shouldSuppressInCallUI;
    NSMutableDictionary * _silencingUserInfo;
    bool  _supportsAddCall;
    bool  _supportsDTMF;
    bool  _supportsEmergencyFallback;
    bool  _supportsGrouping;
    bool  _supportsHolding;
    bool  _supportsSendingToVoicemail;
    bool  _supportsTTYWithVoice;
    bool  _supportsUnambiguousMultiPartyState;
    bool  _supportsUngrouping;
    bool  _suppressRingtone;
    long long  _transmissionMode;
    long long  _ttyType;
    bool  _usingBaseband;
    long long  _verificationStatus;
    long long  _videoStreamToken;
}

@property (nonatomic, copy) NSString *ISOCountryCode;
@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic) bool accessoryButtonEventsEnabled;
@property (nonatomic, retain) CXAccount *account;
@property (nonatomic, retain) CXParticipant *activeRemoteParticipant;
@property (nonatomic, copy) NSSet *activeRemoteParticipantHandles;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic) long long audioInterruptionOperationMode;
@property (nonatomic) long long audioInterruptionProvider;
@property (nonatomic, copy) NSString *audioMode;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic) long long bluetoothAudioFormat;
@property (nonatomic, copy) NSDictionary *context;
@property (getter=isConversation, nonatomic) bool conversation;
@property (nonatomic, copy) NSString *crossDeviceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmergency, nonatomic) bool emergency;
@property (getter=isFailureExpected, nonatomic) bool failureExpected;
@property (nonatomic) int filteredOutReason;
@property (nonatomic, retain) CXHandoffContext *handoffContext;
@property (nonatomic) bool hasBeenRedirected;
@property (nonatomic) struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; } hasSet;
@property (nonatomic) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long identificationCategory;
@property (nonatomic) bool ignoresBluetoothDeviceUID;
@property (nonatomic) long long inCallSoundRegion;
@property (nonatomic) bool isKnownCaller;
@property (nonatomic) bool isReRing;
@property (nonatomic) long long junkConfidence;
@property (nonatomic, copy) NSString *localMemberHandleValue;
@property (nonatomic, copy) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic, copy) NSUUID *localSenderIdentityUUID;
@property (nonatomic, copy) NSString *localSenderSubscriptionIdentifier;
@property (nonatomic, copy) CXSandboxExtendedURL *localizedCallerImageURL;
@property (nonatomic, copy) NSString *localizedCallerName;
@property (nonatomic) bool mayRequireBreakBeforeMake;
@property (nonatomic) bool mediaPlaybackOnExternalDevice;
@property (nonatomic) bool mixesVoiceWithMedia;
@property (getter=isMutuallyExclusiveCall, nonatomic) bool mutuallyExclusiveCall;
@property (getter=isOneToOneModeEnabled, nonatomic) bool oneToOneModeEnabled;
@property (nonatomic, copy) NSSet *otherInvitedHandles;
@property (nonatomic, retain) NSUUID *participantGroupUUID;
@property (nonatomic) bool prefersExclusiveAccessToCellularNetwork;
@property (nonatomic) bool prefersToPlayDuringWombat;
@property (nonatomic) long long priority;
@property (nonatomic, copy) CXHandle *remoteHandle;
@property (nonatomic, copy) NSSet *remoteParticipantHandles;
@property (getter=isRemoteUplinkMuted, nonatomic) bool remoteUplinkMuted;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic) bool requiresInCallSounds;
@property (nonatomic, retain) CXScreenShareAttributes *screenShareAttributes;
@property (getter=isSendingVideo, nonatomic) bool sendingVideo;
@property (nonatomic) long long serviceStatus;
@property (getter=isSharingScreen, nonatomic) bool sharingScreen;
@property (nonatomic) bool shouldSuppressInCallUI;
@property (nonatomic, retain) NSMutableDictionary *silencingUserInfo;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAddCall;
@property (nonatomic) bool supportsDTMF;
@property (nonatomic) bool supportsEmergencyFallback;
@property (nonatomic) bool supportsGrouping;
@property (nonatomic) bool supportsHolding;
@property (nonatomic) bool supportsSendingToVoicemail;
@property (nonatomic) bool supportsTTYWithVoice;
@property (nonatomic) bool supportsUnambiguousMultiPartyState;
@property (nonatomic) bool supportsUngrouping;
@property (nonatomic) bool suppressRingtone;
@property (nonatomic) long long transmissionMode;
@property (setter=setTTYType:, nonatomic) long long ttyType;
@property (getter=isUsingBaseband, nonatomic) bool usingBaseband;
@property (nonatomic) long long verificationStatus;
@property (nonatomic) long long videoStreamToken;

+ (id)callUpdateWithDefaultValuesSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ISOCountryCode;
- (id)UUID;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (bool)accessoryButtonEventsEnabled;
- (id)account;
- (id)activeRemoteParticipant;
- (id)activeRemoteParticipantHandles;
- (id)audioCategory;
- (long long)audioInterruptionOperationMode;
- (long long)audioInterruptionProvider;
- (id)audioMode;
- (bool)blocked;
- (long long)bluetoothAudioFormat;
- (id)context;
- (bool)conversation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossDeviceIdentifier;
- (id)description;
- (bool)emergency;
- (void)encodeWithCoder:(id)arg1;
- (bool)failureExpected;
- (int)filteredOutReason;
- (id)handoffContext;
- (bool)hasBeenRedirected;
- (struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; })hasSet;
- (bool)hasVideo;
- (long long)identificationCategory;
- (bool)ignoresBluetoothDeviceUID;
- (long long)inCallSoundRegion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBlocked;
- (bool)isConversation;
- (bool)isEmergency;
- (bool)isFailureExpected;
- (bool)isKnownCaller;
- (bool)isMutuallyExclusiveCall;
- (bool)isOneToOneModeEnabled;
- (bool)isReRing;
- (bool)isRemoteUplinkMuted;
- (bool)isSendingVideo;
- (bool)isSharingScreen;
- (bool)isUsingBaseband;
- (long long)junkConfidence;
- (id)localMemberHandleValue;
- (id)localSenderIdentityAccountUUID;
- (id)localSenderIdentityUUID;
- (id)localSenderSubscriptionIdentifier;
- (id)localizedCallerImageURL;
- (id)localizedCallerName;
- (bool)mayRequireBreakBeforeMake;
- (bool)mediaPlaybackOnExternalDevice;
- (bool)mixesVoiceWithMedia;
- (bool)mutuallyExclusiveCall;
- (bool)oneToOneModeEnabled;
- (id)otherInvitedHandles;
- (id)participantGroupUUID;
- (bool)prefersExclusiveAccessToCellularNetwork;
- (bool)prefersToPlayDuringWombat;
- (long long)priority;
- (id)remoteHandle;
- (id)remoteParticipantHandles;
- (bool)remoteUplinkMuted;
- (bool)requiresAuthentication;
- (bool)requiresInCallSounds;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (id)screenShareAttributes;
- (bool)sendingVideo;
- (long long)serviceStatus;
- (void)setAccessoryButtonEventsEnabled:(bool)arg1;
- (void)setAccount:(id)arg1;
- (void)setActiveRemoteParticipant:(id)arg1;
- (void)setActiveRemoteParticipantHandles:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioInterruptionOperationMode:(long long)arg1;
- (void)setAudioInterruptionProvider:(long long)arg1;
- (void)setAudioMode:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setBluetoothAudioFormat:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setConversation:(bool)arg1;
- (void)setCrossDeviceIdentifier:(id)arg1;
- (void)setEmergency:(bool)arg1;
- (void)setFailureExpected:(bool)arg1;
- (void)setFilteredOutReason:(int)arg1;
- (void)setHandoffContext:(id)arg1;
- (void)setHasBeenRedirected:(bool)arg1;
- (void)setHasSet:(struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; })arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setISOCountryCode:(id)arg1;
- (void)setIdentificationCategory:(long long)arg1;
- (void)setIgnoresBluetoothDeviceUID:(bool)arg1;
- (void)setInCallSoundRegion:(long long)arg1;
- (void)setIsKnownCaller:(bool)arg1;
- (void)setIsReRing:(bool)arg1;
- (void)setJunkConfidence:(long long)arg1;
- (void)setLocalMemberHandleValue:(id)arg1;
- (void)setLocalSenderIdentityAccountUUID:(id)arg1;
- (void)setLocalSenderIdentityUUID:(id)arg1;
- (void)setLocalSenderSubscriptionIdentifier:(id)arg1;
- (void)setLocalizedCallerImageURL:(id)arg1;
- (void)setLocalizedCallerName:(id)arg1;
- (void)setMayRequireBreakBeforeMake:(bool)arg1;
- (void)setMediaPlaybackOnExternalDevice:(bool)arg1;
- (void)setMixesVoiceWithMedia:(bool)arg1;
- (void)setMutuallyExclusiveCall:(bool)arg1;
- (void)setOneToOneModeEnabled:(bool)arg1;
- (void)setOtherInvitedHandles:(id)arg1;
- (void)setParticipantGroupUUID:(id)arg1;
- (void)setPrefersExclusiveAccessToCellularNetwork:(bool)arg1;
- (void)setPrefersToPlayDuringWombat:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRemoteHandle:(id)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;
- (void)setRemoteUplinkMuted:(bool)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setRequiresInCallSounds:(bool)arg1;
- (void)setScreenShareAttributes:(id)arg1;
- (void)setSendingVideo:(bool)arg1;
- (void)setServiceStatus:(long long)arg1;
- (void)setSharingScreen:(bool)arg1;
- (void)setShouldSuppressInCallUI:(bool)arg1;
- (void)setSilencingUserInfo:(id)arg1;
- (void)setSupportsAddCall:(bool)arg1;
- (void)setSupportsDTMF:(bool)arg1;
- (void)setSupportsEmergencyFallback:(bool)arg1;
- (void)setSupportsGrouping:(bool)arg1;
- (void)setSupportsHolding:(bool)arg1;
- (void)setSupportsSendingToVoicemail:(bool)arg1;
- (void)setSupportsTTYWithVoice:(bool)arg1;
- (void)setSupportsUnambiguousMultiPartyState:(bool)arg1;
- (void)setSupportsUngrouping:(bool)arg1;
- (void)setSuppressRingtone:(bool)arg1;
- (void)setTTYType:(long long)arg1;
- (void)setTransmissionMode:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUsingBaseband:(bool)arg1;
- (void)setVerificationStatus:(long long)arg1;
- (void)setVideoStreamToken:(long long)arg1;
- (bool)sharingScreen;
- (bool)shouldSuppressInCallUI;
- (id)silencingUserInfo;
- (bool)supportsAddCall;
- (bool)supportsDTMF;
- (bool)supportsEmergencyFallback;
- (bool)supportsGrouping;
- (bool)supportsHolding;
- (bool)supportsSendingToVoicemail;
- (bool)supportsTTYWithVoice;
- (bool)supportsUnambiguousMultiPartyState;
- (bool)supportsUngrouping;
- (bool)suppressRingtone;
- (long long)transmissionMode;
- (long long)ttyType;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateWithUpdate:(id)arg1;
- (bool)usingBaseband;
- (long long)verificationStatus;
- (long long)videoStreamToken;

@end
