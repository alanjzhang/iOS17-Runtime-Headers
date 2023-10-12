/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlMediaController : NSObject {
    unsigned int  _afrcRemoteEstimatedBandwidth;
    bool  _allowVideoStop;
    int  _audioFractionTier;
    unsigned int  _audioSendingBitrate;
    unsigned int  _audioStallBitrate;
    unsigned int  _basebandAverageBitrate;
    unsigned int  _basebandAverageBitrateShort;
    double  _basebandExpectedQueuingDelay;
    int  _basebandFlushCount;
    unsigned int  _basebandFlushableQueueDepth;
    int  _basebandFlushedAudioCount;
    int  _basebandFlushedVideoCount;
    double  _basebandNBDCD;
    unsigned int  _basebandTotalQueueDepth;
    bool  _enableAggressiveProbingSequence;
    bool  _fromSmartBrake;
    struct tagHANDLE { int x1; } * _hMediaQueue;
    bool  _isAudioOnly;
    bool  _isAudioStall;
    bool  _isBasebandFlushing;
    bool  _isBasebandQueuingDelayHigh;
    bool  _isInThrottlingMode;
    bool  _isRTPFlushBasebandFromVCRateControl;
    bool  _isRateLimitedMaxTimeExceeded;
    bool  _isRemoteAudioPaused;
    bool  _isSenderProbingEnabled;
    bool  _isVideoPausedByUser;
    bool  _isVideoStoppedByBaseband;
    bool  _isVideoStoppedByVCRateControl;
    double  _lastAudioEnoughRateTime;
    double  _lastAudioFractionChangeTime;
    double  _lastAudioStallFlushTime;
    double  _lastBasebandFlushAudioTime;
    double  _lastBasebandFlushCountChangeTime;
    double  _lastBasebandFlushVideoTime;
    double  _lastBasebandHighNBDCDTime;
    double  _lastVideoKeyFrameTime;
    double  _lastVideoRefreshFrameTime;
    void * _logBWEDump;
    void * _logBasebandDump;
    id  _mediaControllerDelegate;
    double  _minProbingSpacingAggressive;
    unsigned int  _minTargetBitrate;
    unsigned int  _probingLargeFrameSize;
    unsigned int  _probingLargeFrameSizeCap;
    unsigned int  _probingSequencePacketCount;
    unsigned int  _probingSequencePacketSize;
    SenderLargeFrameInfo * _senderLargeFrameInfo;
    VCRateControlServerBag * _serverBag;
    bool  _shouldDisableLargeFrameRequestsWhenInitialRampUp;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _targetBitrate;
    struct tagVCMediaQueue { } * _vcMediaQueue;
    unsigned short  _videoFlushTransactionID;
    unsigned char  _videoPayloadType;
    unsigned int  _videoRefreshFramePacketCount;
    unsigned int  _videoRefreshFrameTimestamp;
    unsigned int  _videoSendingBitrate;
}

@property (nonatomic) unsigned int afrcRemoteEstimatedBandwidth;
@property (nonatomic) bool allowVideoStop;
@property (nonatomic, readonly) int audioFractionTier;
@property (nonatomic) int basebandFlushCount;
@property (nonatomic, readonly) int basebandFlushedAudioCount;
@property (nonatomic, readonly) int basebandFlushedVideoCount;
@property (nonatomic) bool enableAggressiveProbingSequence;
@property (nonatomic) bool isAudioOnly;
@property (nonatomic, readonly) bool isInThrottlingMode;
@property (nonatomic) bool isRTPFlushBasebandFromVCRateControl;
@property (nonatomic) bool isRemoteAudioPaused;
@property (nonatomic) bool isSenderProbingEnabled;
@property (nonatomic, readonly) bool isVideoStoppedByVCRateControl;
@property (nonatomic) double lastBasebandFlushCountChangeTime;
@property (nonatomic, readonly) double lastVideoRefreshFrameTime;
@property (nonatomic) struct tagHANDLE { int x1; }*mediaQueue;
@property (nonatomic, readonly) unsigned int probingLargeFrameSize;
@property (nonatomic, readonly) unsigned int probingSequencePacketCount;
@property (nonatomic, readonly) unsigned int probingSequencePacketSize;
@property (nonatomic, retain) VCRateControlServerBag *serverBag;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic) struct tagVCMediaQueue { }*vcMediaQueue;
@property (nonatomic) unsigned int videoSendingBitrate;

- (unsigned int)afrcRemoteEstimatedBandwidth;
- (bool)allowVideoStop;
- (int)audioFractionTier;
- (int)basebandFlushCount;
- (int)basebandFlushedAudioCount;
- (int)basebandFlushedVideoCount;
- (void)dealloc;
- (void)decreaseFlushCount:(int)arg1;
- (bool)didMediaGetFlushedWithPayloadType:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short*)arg4;
- (bool)enableAggressiveProbingSequence;
- (void)enableBasebandLogDump:(void*)arg1;
- (bool)increaseFlushCountForVideoRefresh:(int)arg1 transactionID:(unsigned short)arg2;
- (id)initWithMediaQueue:(struct tagHANDLE { int x1; }*)arg1 delegate:(id)arg2;
- (bool)isAudioOnly;
- (bool)isInThrottlingMode;
- (bool)isProbingLargeFrameRequiredAtTime:(double)arg1;
- (bool)isRTPFlushBasebandFromVCRateControl;
- (bool)isRemoteAudioPaused;
- (bool)isSenderProbingEnabled;
- (bool)isVideoStoppedByVCRateControl;
- (double)lastBasebandFlushCountChangeTime;
- (double)lastVideoRefreshFrameTime;
- (struct tagHANDLE { int x1; }*)mediaQueue;
- (void)pauseVideoByUser:(bool)arg1;
- (void)printLargeFrameStatsAtTime:(double)arg1 timestamp:(unsigned int)arg2 timeSinceLastProbingSequence:(double)arg3 frameSize:(unsigned int)arg4 wastedBytes:(unsigned int)arg5 fecRatio:(double)arg6 isFrameRequested:(bool)arg7;
- (unsigned int)probingLargeFrameSize;
- (unsigned int)probingSequencePacketCount;
- (unsigned int)probingSequencePacketSize;
- (bool)rampUpAudioFraction;
- (void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg1 payloadType:(unsigned char)arg2 packetCount:(unsigned int)arg3 isKeyFrame:(bool)arg4;
- (void)scheduleProbingSequenceAtTime:(double)arg1;
- (void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg1 paddingBytes:(unsigned int)arg2 timestamp:(unsigned int)arg3 fecRatio:(double)arg4 isProbingSequenceScheduled:(bool*)arg5;
- (id)serverBag;
- (void)setAfrcRemoteEstimatedBandwidth:(unsigned int)arg1;
- (void)setAllowVideoStop:(bool)arg1;
- (void)setBasebandFlushCount:(int)arg1;
- (void)setEnableAggressiveProbingSequence:(bool)arg1;
- (void)setIsAudioOnly:(bool)arg1;
- (void)setIsRTPFlushBasebandFromVCRateControl:(bool)arg1;
- (void)setIsRemoteAudioPaused:(bool)arg1;
- (void)setIsSenderProbingEnabled:(bool)arg1;
- (void)setLastBasebandFlushCountChangeTime:(double)arg1;
- (void)setMediaQueue:(struct tagHANDLE { int x1; }*)arg1;
- (void)setServerBag:(id)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (void)setVcMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (void)setVideoSendingBitrate:(unsigned int)arg1;
- (id)statisticsCollector;
- (unsigned int)targetBitrate;
- (void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg1;
- (void)updateProbingLargeFrameSizeCap;
- (struct tagVCMediaQueue { }*)vcMediaQueue;
- (unsigned int)videoSendingBitrate;

@end