/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSession : VCObject <AVCRateControllerDelegate, RTCPReportProvider, VCConnectionChangedHandler, VCMediaRecorderTransportDelegate, VCNetworkFeedbackControllerDelegate, VCRateControlMediaControllerDelegate, VCSecurityEventHandler, VCSessionParticipantDelegate, VCSessionParticipantStreamDelegate, VCSessionStatsControllerDelegate> {
    unsigned int  _basebandFlushTransactionID;
    VCSessionBitrateArbiter * _bitrateArbiter;
    VCAudioCaptionsCoordinator * _captionsCoordinator;
    VCSessionConfiguration * _configuration;
    VCControlChannelMultiWay * _controlChannel;
    NSString * _conversationID;
    NSDate * _conversationTimeBase;
    NSDate * _conversationTimeBaseTruncated;
    <VCConnectionProtocol> * _currentActiveConnection;
    int  _currentConnectionType;
    <VCSessionDelegate> * _delegate;
    bool  _didServerDie;
    VCSessionDownlinkBandwidthAllocator * _downlinkBandwidthAllocator;
    AVCRateController * _downlinkRateController;
    unsigned int  _downlinkTargetBitrate;
    VCNetworkFeedbackController * _feedbackController;
    bool  _forceDisableMediaPriority;
    bool  _forceFixedEncryptionLabel;
    NSString * _idsDestination;
    NSMutableArray * _initializingParticipants;
    bool  _isECNEnabled;
    bool  _isGKVoiceChat;
    bool  _isOneToOneInitiator;
    bool  _isOneToOneRemoteMediaStalling;
    bool  _isReconnectPending;
    bool  _isSSRCCollisionDetectionEnabled;
    bool  _isServerPacketRetransmissionForVideoEnabled;
    bool  _isUplinkRetransmissionForVideoEnabled;
    VCSessionParticipantLocal * _localParticipant;
    bool  _localSourceNeedsReset;
    unsigned short  _maxConnectionMTU;
    struct tagVCMediaQueue { } * _mediaQueue;
    struct { 
        unsigned int numberOfInternalQueues; 
        double maxWaitTimeToSchedulePackets; 
        double queueSizeThreshold; 
        double queueSizeThresholdForScreen; 
        double queueSizeQuantizationStep; 
        double queueSizeCallbackInterval; 
        double instantPeakBitrateFactor; 
        double packetSendPacingInterval; 
        unsigned int packetBurstSize; 
        unsigned int minBitrateWithoutThrottling; 
        int schedulePolicy; 
        int bundlePolicy; 
        bool useExternalDataBuffer; 
        char *dumpID; 
        bool isDumpFileEnabled; 
        struct opaqueRTCReporting {} *reportingAgent; 
        bool isRTXEnabled; 
        bool enableDynamicPeakBitrate; 
    }  _mediaQueueConfiguration;
    VCMediaRecorder * _mediaRecorder;
    struct __CFDictionary { } * _mediaTypeToSpatialMetadataEntryMap;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_nw_activity> * _nwActivity;
    NSObject<OS_nw_activity> * _nwActivityActiveSession;
    bool  _oneToOneModeEnabled;
    struct _VCSessionOneToOneSettings { 
        AVCRateController *rateController; 
        VCRateControlMediaController *mediaController; 
        struct tagHANDLE {} *mediaQueue; 
        struct tagVCMediaQueue {} *vcMediaQueue; 
        bool receivedFirstConnection; 
        bool startedOneToOne; 
    }  _oneToOneSettings;
    double  _oneToOneSwitchStartTime;
    NSMutableDictionary * _optInDictionary;
    NSObject<OS_nw_activity> * _parentNWActivity;
    VCSessionPresentationInfo * _presentationInfo;
    double  _remoteMediaStallDisconnectTimeout;
    double  _remoteMediaStallReconnectTimeout;
    NSMutableDictionary * _remoteParticipantsMapByServerID;
    NSMutableDictionary * _remoteParticipantsMapByUUID;
    int  _reportReportFrequency;
    int  _reportUpdateInterval;
    int  _reportingClientType;
    int  _reportingModuleID;
    bool  _screenAndCameraMixingEnabled;
    VCSecurityKeyManager * _securityKeyManager;
    VCSessionMessaging * _sessionMessaging;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    double  _sessionStartTime;
    VCSessionStatsController * _sessionStatsController;
    bool  _sharingEnabled;
    bool  _shouldCreateSecondAggregator;
    unsigned long long  _siriSpatialAudioSourceID;
    void * _spatialMetadata;
    NSMutableArray * _startingParticipants;
    unsigned int  _state;
    NSObject<OS_dispatch_semaphore> * _stopCompletedSemaphore;
    NSError * _stopError;
    NSMutableSet * _stoppingParticipants;
    bool  _switchFromGFTToOneToOneEnabled;
    VCSwitchManager * _switchManager;
    VCTransportSession * _transportSession;
    unsigned int  _transportSessionID;
    VCRateControlMediaController * _uplinkMediaController;
    AVCRateController * _uplinkRateController;
    unsigned int  _uplinkTargetBitrate;
    bool  _useReducedSizeRTCP;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSDictionary *capabilities;
@property (nonatomic, retain) <VCConnectionProtocol> *currentActiveConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VCSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVCRateController *downlinkRateController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *idsDestination;
@property (nonatomic) bool isOneToOneRemoteMediaStalling;
@property (nonatomic, readonly) VCSessionParticipant *localParticipant;
@property (nonatomic) struct tagVCMediaQueue { }*mediaQueue;
@property (nonatomic, retain) NSObject<OS_nw_activity> *nwActivity;
@property (nonatomic) bool oneToOneModeEnabled;
@property (nonatomic, readonly) VCSessionParticipantRemote *oneToOneRemoteParticipant;
@property (retain) NSMutableDictionary *optInDictionary;
@property (setter=setParentNWActivity:, nonatomic) NSObject<OS_nw_activity> *parentNWActivity;
@property (nonatomic, readonly) NSArray *remoteParticipants;
@property (nonatomic, retain) NSMutableDictionary *remoteParticipantsMapByServerID;
@property (nonatomic, readonly) int reportingClientType;
@property (nonatomic, readonly) int reportingModuleID;
@property (nonatomic) bool screenAndCameraMixingEnabled;
@property (nonatomic, retain) VCSessionMessaging *sessionMessaging;
@property (nonatomic, readonly) VCSessionStatsController *sessionStatsController;
@property (nonatomic) bool sharingEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *transportMetadata;
@property (nonatomic, readonly) VCTransportSession *transportSession;
@property (nonatomic, readonly) unsigned int transportSessionID;
@property (nonatomic, readonly) NSString *uuid;

+ (void)addUUIDToMutableData:(id)arg1 fromUUIDString:(id)arg2;
+ (void)cleanupControlChannelParticipantConfig:(struct { int x1; struct tagVCSecurityKeyHolder {} *x2; struct tagVCSecurityKeyHolder {} *x3; struct __CFData {} *x4; struct __CFData {} *x5; bool x6; }*)arg1;
+ (int)deviceRoleForSessionMode:(long long)arg1;
+ (bool)isServerPacketRetransmissionEnabledForVideo;
+ (bool)isUplinkRetransmissionEnabledForVideo;
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting { }*)arg3;

- (void)addParticipantConfigurations:(id)arg1;
- (void)additionalFlushCountToOneToOneRateController:(unsigned int)arg1;
- (void)applyLinkConstrains:(id)arg1;
- (void)applyRemoteLinkConstrains:(id)arg1;
- (void)applySpatialMetadata;
- (void)broadcastInitialMediaState;
- (unsigned int)calculateExpectedTotalNetworkBitrateDownlink;
- (unsigned int)calculateExpectedTotalNetworkBitrateUplink;
- (id)capabilities;
- (void)cleanupNwActivity;
- (void)cleanupSpatialAudio;
- (void)cleanupVCRC;
- (void)collectSessionEventKeyFieldsAndSubtype:(struct __CFDictionary { }*)arg1 eventType:(unsigned short)arg2 withParticipant:(id)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5 withStreamID:(unsigned short)arg6 collectSubtype:(unsigned short*)arg7;
- (bool)composeControlChannelParticipantConfig:(struct { int x1; struct tagVCSecurityKeyHolder {} *x2; struct tagVCSecurityKeyHolder {} *x3; struct __CFData {} *x4; struct __CFData {} *x5; bool x6; }*)arg1 withRemoteParticipant:(id)arg2;
- (id)computeConversationTimeBaseTruncated;
- (struct __CFString { }*)configurationSpecificReportingServiceName;
- (bool)configureRemoteParticipant:(id)arg1 withConfig:(id)arg2;
- (void)createMediaQueue;
- (id)currentActiveConnection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)detectSSRCCollision:(id)arg1 resetNeeded:(bool*)arg2;
- (bool)detectSSRCCollisionWithRemoteMediaStream:(id)arg1 remoteBlobCreationTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2 resetNeeded:(bool*)arg3;
- (void)didEncryptionKeyRollTimeout;
- (void)didLocalNetworkConditionChange:(bool)arg1 isLocalNetworkQualityDegraded:(bool)arg2 isRemoteNetworkQualityDegraded:(bool)arg3;
- (void)didReceiveMomentsRequest:(id)arg1;
- (void)didReceivedSessionStatsAtTime:(double)arg1;
- (void)didRemoveSpatialMetadataEntry;
- (void)dispatchedAddParticipantConfigurations:(id)arg1;
- (void)dispatchedAddParticipantWithConfig:(id)arg1;
- (void)dispatchedHandleActiveConnectionChange:(id)arg1;
- (void)dispatchedParticipant:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)dispatchedRemoveParticipant:(id)arg1;
- (void)dispatchedSetRemoteScreenControlEnabled:(bool)arg1 isLocal:(bool)arg2;
- (void)dispatchedSetScreenAndCameraMixingEnabled:(bool)arg1;
- (void)dispatchedSetSharingEnabled:(bool)arg1;
- (void)dispatchedStart;
- (void)dispatchedStopWithError:(id)arg1;
- (void)dispatchedStopWithError:(id)arg1 didRemoteCancel:(bool)arg2;
- (void)dispatchedTransportStop;
- (void)dispatchedUpdateConfiguration:(id)arg1;
- (void)distributeBitrateAndOptInToStreamIDsWithSeamlessTransition:(bool)arg1;
- (id)downlinkRateController;
- (int)flushBasebandWithPayloads:(id)arg1;
- (void)generateKeyFrameWithReceivedMessage:(id)arg1 forParticipant:(id)arg2;
- (bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (void)generateReportDictionary:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)getClientSpecificUserInfo;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleActiveConnectionChangeForMultiway:(id)arg1;
- (void)handleCellTechChange:(int)arg1 connection:(id)arg2;
- (void)handleCellularMTUChanged:(unsigned short)arg1 connection:(id)arg2;
- (bool)handleEncryptionInfoChange:(id)arg1;
- (void)handleEncryptionInfoEvent:(id)arg1;
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)arg1 mediaQueueStreamId:(unsigned int)arg2 type:(int)arg3;
- (void)handleMembershipChangeInfoEvent:(id)arg1;
- (void)handlePreferredInterfaceForDuplicationUpdate:(unsigned char)arg1 notifyPeer:(bool)arg2 enableDuplication:(bool)arg3 isMediaUnrecoverableSignal:(bool)arg4;
- (void)handlePrimaryConnectionChanged:(id)arg1;
- (id)idsDestination;
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 processId:(int)arg5 isGKVoiceChat:(bool)arg6;
- (bool)isECNCapableWithRemoteParticipant:(id)arg1;
- (bool)isOneToOneRemoteMediaStalling;
- (bool)isTLEEnabledOnPrimaryConnection;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (id)localParticipant;
- (int)maxRemoteParticipants30fps;
- (void)mediaController:(void*)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; })arg2;
- (void)mediaQualityDegraded:(bool)arg1;
- (struct tagVCMediaQueue { }*)mediaQueue;
- (void)mediaRecorder:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;
- (void)mediaStateChangedForParticipant:(id)arg1;
- (void)messageMediaInitialStateToParticipant:(id)arg1;
- (id)newEncryptionLabelWithLocalUUID:(id)arg1 remoteUUID:(id)arg2;
- (id)newNetworkBitrateString:(const struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1;
- (void)notifyRemoteOfCellTechChange:(id)arg1 remoteParticipant:(id)arg2;
- (id)nwActivity;
- (bool)oneToOneModeEnabled;
- (id)oneToOneRemoteParticipant;
- (id)optInDictionary;
- (void)optInStreamWithIDSStreamIDs:(id)arg1;
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;
- (id)parentNWActivity;
- (id)participantForID:(id)arg1;
- (id)participantsToString;
- (void)preWarmStateChanged:(bool)arg1;
- (void)processDidStop;
- (void)rateController:(id)arg1 isECNEnabled:(bool)arg2;
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)recommendedSettingsChanged:(id)arg1;
- (bool)registerRemoteParticipantToSession:(id)arg1;
- (void)registerReportingTask;
- (id)remoteParticipants;
- (id)remoteParticipantsMapByServerID;
- (void)removeDelegatesForRemoteParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)reportLocalRateControlExperimentConfiguration;
- (int)reportingClientType;
- (void)reportingIntervalChanged:(double)arg1;
- (int)reportingModuleID;
- (void)reportingMomentsToGreenTeaWithRequest:(id)arg1;
- (void)reportingSessionDownlinkOptInEvent:(id)arg1 selectedMediaEntriesForParticipants:(id)arg2;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 keyChangeReason:(id)arg3 newMKI:(id)arg4 withStreamID:(unsigned short)arg5;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withStreamID:(unsigned short)arg2;
- (void)reportingSessionRemoteParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 value:(id)arg3;
- (void)reportingSessionStopEventWithError:(id)arg1;
- (void)reportingSetUserInfo;
- (int)reserveAudioChannelForMediaType:(unsigned int)arg1 spatialAudioSourceID:(unsigned long long)arg2;
- (void)resetDecryptionTimeout;
- (bool)screenAndCameraMixingEnabled;
- (int)selectDataPath;
- (void)sendNetworkCapabilitiesMessageToParticipant:(id)arg1;
- (void)sendStreamGroupStateToParticipant:(id)arg1;
- (void)sendSymptomsToRemoteParticipants:(id)arg1 symptom:(id)arg2 groupID:(id)arg3;
- (void)serverDidDie;
- (id)sessionMessaging;
- (char *)sessionStateToString:(unsigned int)arg1;
- (id)sessionStatsController;
- (void)setCurrentActiveConnection:(id)arg1;
- (void)setDelegatesForRemoteParticipant:(id)arg1;
- (void)setIsOneToOneRemoteMediaStalling:(bool)arg1;
- (void)setIsUplinkRetransmissionEnabled:(bool)arg1;
- (void)setMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (void)setMediaQueuePeakBitrateWithTargetBitrate:(unsigned int)arg1;
- (void)setNwActivity:(id)arg1;
- (void)setOneToOneModeEnabled:(bool)arg1;
- (void)setOneToOneModeEnabledFromRemoteSignal:(bool)arg1;
- (void)setOneToOneVideoStreamBandwidthProbing:(bool)arg1;
- (void)setOptInDictionary:(id)arg1;
- (void)setParentNWActivity:(id)arg1;
- (void)setRemoteParticipantsMapByServerID:(id)arg1;
- (void)setRemoteScreenControlEnabled:(bool)arg1;
- (void)setReportingClientExperimentSettings;
- (void)setReportingConfig:(struct { unsigned int x1; struct __CFString {} *x2; struct __CFDate {} *x3; int x4; bool x5; void *x6; id x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFDictionary {} *x10; id /* block */ x11; id x12; bool x13; }*)arg1;
- (void)setScreenAndCameraMixingEnabled:(bool)arg1;
- (void)setSessionInfoSynchronizerCallbacks;
- (void)setSessionInfoSynchronizerErrorResponseCallback;
- (void)setSessionInfoSynchronizerPeerSubscribedStreamsCallback;
- (void)setSessionMessaging:(id)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTransportConnectionSelectionVersionWithLocalFrameWorkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;
- (void)setTransportSessionEventHandler;
- (void)setupMultiwayABTesting;
- (void)setupOneToOneVideoReceiverDelegate;
- (void)setupOneToOneVideoStreamDelegate;
- (void)setupRateControllersMultiway;
- (int)setupSpatialAudio;
- (void)setupTransportSessionWithDestination:(id)arg1;
- (void)setupUplinkBitrateCaps;
- (bool)sharingEnabled;
- (void)start;
- (void)startDeallocTimer;
- (void)startRateControllersMultiwayFromOneToOne:(bool)arg1;
- (void)stopAllParticipants;
- (void)stopMediaQueueOneToOne;
- (void)stopTimeoutTimer;
- (void)stopWithError:(id)arg1;
- (void)stopWithError:(id)arg1 didRemoteCancel:(bool)arg2;
- (void)tearDown;
- (id)transportMetadata;
- (id)transportSession;
- (unsigned int)transportSessionID;
- (void)unregisterRemoteParticipantFromSession:(id)arg1;
- (void)unregisterReportingTask;
- (void)updateConfiguration:(id)arg1;
- (void)updateLocalStreamConfiguration;
- (void)updateLocalVideoCaptureFrameRate;
- (void)updateMediaRecorderCapabillities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3;
- (void)updateMultiwayRateControllerWithActiveConnection:(id)arg1 isScreenEnabled:(bool)arg2 isLocal:(bool)arg3;
- (void)updateNetworkFeedbackControllerReport:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)updateOneToOneVideoReceiverDelegate:(bool)arg1;
- (void)updateParticipantConfigurations:(id)arg1;
- (void)updateParticipantWindowState;
- (void)updatePresentationInfo:(id)arg1;
- (id)uuid;
- (void)vcSessionParticipant:(id)arg1 audioEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 audioPaused:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg2;
- (void)vcSessionParticipant:(id)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(id)arg3;
- (void)vcSessionParticipant:(id)arg1 didDetectError:(id)arg2;
- (void)vcSessionParticipant:(id)arg1 didRequestVideoRedundancy:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSessionParticipant:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcSessionParticipant:(id)arg1 mediaMixingDidChangeForMediaType:(unsigned int)arg2 mixingMediaType:(unsigned int)arg3;
- (void)vcSessionParticipant:(id)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(bool)arg4 error:(id)arg5;
- (void)vcSessionParticipant:(id)arg1 oneToOneModeDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 reactionDidStart:(id)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteAudioEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteAudioPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;
- (void)vcSessionParticipant:(id)arg1 remoteScreenEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteVideoEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 remoteVideoPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 streamGroupID:(unsigned int)arg3 firType:(int)arg4;
- (void)vcSessionParticipant:(id)arg1 screenEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 videoEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipant:(id)arg1 videoPaused:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSessionParticipantDidChangeReceivingStreams:(id)arg1;
- (void)vcSessionParticipantDidChangeSendingStreams:(id)arg1;
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(id)arg1;
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(id)arg1;
- (void)vcSessionParticipantDidRemoteMediaStallTimeout:(id)arg1 duration:(double)arg2;
- (void)vcSessionParticipantDidStopReacting:(id)arg1;
- (void)vcSessionParticipantFetchStreamGroupState:(id)arg1;
- (id)vcrcServerBagWithOperatingMode:(int)arg1;

// VCSession (Messaging)

+ (unsigned int)mediaStateForMediaStateMessageValue:(id)arg1;
+ (id)mediaStateMessageKeyForMediaType:(unsigned int)arg1;
+ (id)mediaStateMessageStreamGroupKeysForMediaType:(unsigned int)arg1;
+ (id)mediaStateMessageValueForMediaState:(unsigned int)arg1;
+ (unsigned int)mediaTypeForMediaStateMessageKey:(id)arg1;

- (void)appendMediaTypeMixingListToMessageDictionary:(id)arg1;
- (void)broadcastMediaStateUpdateMessage;
- (void)broadcastMessage:(id)arg1 withTopic:(id)arg2;
- (void)broadcastMessageDictionary:(id)arg1 withTopic:(id)arg2;
- (void)broadcastSingleStateMessage:(id)arg1 withTopic:(id)arg2;
- (void)createSessionMessaging;
- (void)destroySessionMessaging;
- (void)handleNetworkCapabilityMessage:(id)arg1 forParticipantId:(id)arg2;
- (void)processMediaStateMessage:(id)arg1 remoteParticipantID:(id)arg2;
- (void)processMediaTypeMixingList:(id)arg1 forRemoteParticipant:(id)arg2;
- (void)processMediaTypeStatesWithMessage:(id)arg1 mediaTypeStates:(id)arg2;
- (void)processStreamGroupStateMessageKey:(id)arg1 value:(id)arg2 mediaTypeStates:(id)arg3;
- (void)processSymptomFromMessage:(id)arg1 participantID:(id)arg2 isLocalInitiated:(bool)arg3 isLocalSideOnly:(bool)arg4;
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;
- (void)sendMediaStateUpdateMessageToRemoteParticipant:(id)arg1;
- (void)setupAudioEnabledMessages;
- (void)setupAudioPausedMessages;
- (void)setupCellTechChangeMessages;
- (void)setupDisconnectMessage;
- (void)setupKeyFrameGenerationMessages;
- (void)setupLinkConstrainsChangedMessages;
- (void)setupMediaQualityDegradedMessage;
- (void)setupMediaStateUpdateMessage;
- (void)setupMomentsMessages;
- (void)setupNetworkCapabilityMessage;
- (void)setupNetworkQualityDegradedMessage;
- (void)setupOneToOneEnabledMessages;
- (void)setupPiPStateChangeMessage;
- (void)setupPreferredInterfaceMessage;
- (void)setupReactionMessages;
- (void)setupStreamGroupStateFetchMessage;
- (void)setupSymptomEnabledMessages;
- (void)setupVideoEnabledMessages;
- (void)setupVideoPausedMessages;
- (void)setupVideoRedundancyMessages;
- (void)setupWRMAlertUpdateMessage;
- (void)startSessionMessaging;
- (id)stateMessageWithSupportsNestedDictionary:(bool)arg1;
- (void)stopSessionMessaging;
- (void)updateStateMessage:(id)arg1 stateState:(unsigned int)arg2 streamGroupKey:(id)arg3;
- (bool)validateStreamGroup:(id)arg1 state:(id)arg2;

// VCSession (OneToOne)

- (bool)addOneToOneParticipant:(id)arg1;
- (void)applyNegotiatedOneToOneFaceTimeSettings;
- (void)cleanUpOneToOneVideoStreamDelegate;
- (void)cleanupOneToOne;
- (void)cleanupOneToOneDelegates;
- (void)cleanupOneToOneMediaQueue;
- (void)cleanupOneToOneVideoReceiverDelegate;
- (void)cleanupRateControllerOneToOne;
- (bool)completeTransitionToOneToOneEnabled:(bool)arg1;
- (void)completionHandlerOneToOneEnabled:(bool)arg1 didSucceed:(bool)arg2;
- (bool)configureLocalParticipantWithOneToOneRemoteParticipant:(id)arg1 isInitialConfiguration:(bool)arg2;
- (void)configureOneToOneRateController:(id)arg1 isUsingCamera:(bool)arg2 isUsingScreen:(bool)arg3;
- (void)configureOneToOneReportingOnVideoEnabled;
- (bool)configureRemoteParticipantForOneToOne:(id)arg1;
- (void)dispatchedSetOneToOneModeEnabled:(bool)arg1 isLocal:(bool)arg2;
- (void)handleActiveConnectionChangeForOneToOne:(id)arg1;
- (void)initWithRelevantStorebagEntries;
- (bool)isOneToOneRemoteParticipantUsingScreen;
- (bool)isOneToOneUsingScreen;
- (bool)isOneToOneUsingVideo;
- (void)messageExistingParticipantsPostOneToOneModeSwitch;
- (bool)multiwayToOneToOneSwitchConfigure;
- (void)multiwayToOneToOneSwitchResume;
- (void)multiwayToOneToOneSwitchSuspend;
- (bool)negotiateOneToOneWithRemoteParticipant:(id)arg1;
- (id)newNegotiatorForOneToOneWithRemoteParticipant:(id)arg1;
- (id)newParticipantOneToOneConfigWithIDSParticipantID:(unsigned long long)arg1 isLocal:(bool)arg2 mediaControlInfoVersion:(unsigned char)arg3 videoEnabled:(bool)arg4 screenEnabled:(bool)arg5 remoteParticipant:(id)arg6;
- (void)notifyDelegateActiveConnectionDidChange;
- (void)oneToOneToMultiwaySwitchConfigure;
- (void)oneToOneToMultiwaySwitchResume;
- (void)oneToOneToMultiwaySwitchSuspend;
- (void)renewOneToOneMediaQueue;
- (void)reportActiveConnectionOneToOne;
- (void)reportCompletedSwitchingToOneToOne:(bool)arg1;
- (void)reportExistingParticipantsAnew;
- (void)reportStartedSwitchingToOneToOne:(bool)arg1;
- (void)reportSwitchingError:(bool)arg1 errorEvent:(unsigned int)arg2;
- (void)setIsOneToOneRemoteMediaStalling:(bool)arg1;
- (bool)setOneToOneConfigOnRemoteParticipant:(id)arg1;
- (int)setupOneToOne;
- (void)setupOneToOneABTesting;
- (void)setupOneToOneAdaptiveLearning;
- (int)setupOneToOneMediaControlInfoGeneratorsWithVersion:(unsigned char)arg1 oneToOneConfig:(id)arg2 videoEnabled:(bool)arg3;
- (int)setupOneToOneMediaQueue;
- (int)setupRateControllerOneToOne;
- (void)startOneToOne;
- (void)startRateControllerOneToOne;
- (void)startReportingForOneToOneEnabled:(bool)arg1;
- (void)stopRateControllerOneToOne;
- (bool)switchFromMultiwayToOneToOne;
- (bool)switchFromOneToOneToMultiway;
- (void)updateOneToOneRateControllerForVideoEnabled:(bool)arg1;
- (void)updateOneToOneRateControllerForVideoEnabled:(bool)arg1 screenEnabled:(bool)arg2;
- (unsigned int)vcrcServerBagProfileNumber;

@end
