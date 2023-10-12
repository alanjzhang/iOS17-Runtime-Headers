/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCMediaStreamConfig : NSObject {
    long long  _SRTCPCipherSuite;
    long long  _SRTPCipherSuite;
    long long  _accessNetworkType;
    AVCAudioStreamConfig * _audio;
    NSString * _cName;
    long long  _direction;
    unsigned long long  _fixedJitterBufferSize;
    unsigned int  _jitterBufferMode;
    bool  _jitterBufferModeSet;
    AVCNetworkAddress * _localAddress;
    unsigned int  _localSSRC;
    unsigned long long  _networkClockID;
    bool  _outOfProcessCodecsEnabled;
    bool  _rateAdaptationEnabled;
    NSData * _receiveMediaKey;
    unsigned long long  _recommendedMTU;
    AVCNetworkAddress * _remoteAddress;
    unsigned int  _remoteSSRC;
    bool  _rtcpEnabled;
    unsigned short  _rtcpRemotePort;
    double  _rtcpSendInterval;
    bool  _rtcpTimeOutEnabled;
    double  _rtcpTimeOutInterval;
    bool  _rtcpXREnabled;
    bool  _rtpTimeOutEnabled;
    double  _rtpTimeOutInterval;
    unsigned long long  _rxPayloadType;
    NSData * _sendMediaKey;
    long long  _streamInputID;
    AVCTextStreamConfig * _text;
    unsigned long long  _txPayloadType;
    AVCVideoStreamConfig * _video;
}

@property (nonatomic) long long SRTCPCipherSuite;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic) long long accessNetworkType;
@property (nonatomic, retain) AVCAudioStreamConfig *audio;
@property (nonatomic, copy) NSString *cName;
@property (nonatomic) long long direction;
@property (nonatomic) unsigned long long fixedJitterBufferSize;
@property (nonatomic) unsigned int jitterBufferMode;
@property (nonatomic, retain) AVCNetworkAddress *localAddress;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned long long networkClockID;
@property (nonatomic) bool outOfProcessCodecsEnabled;
@property (getter=isRateAdaptationEnabled, nonatomic) bool rateAdaptationEnabled;
@property (nonatomic, retain) NSData *receiveMasterKey;
@property (nonatomic, retain) NSData *receiveMediaKey;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic, retain) AVCNetworkAddress *remoteAddress;
@property (nonatomic) unsigned int remoteSSRC;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (nonatomic) double rtcpSendInterval;
@property (getter=isRTCPTimeOutEnabled, nonatomic) bool rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutInterval;
@property (getter=isRTCPXREnabled, nonatomic) bool rtcpXREnabled;
@property (getter=isRTPTimeOutEnabled, nonatomic) bool rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) unsigned long long rxPayloadType;
@property (nonatomic, retain) NSData *sendMasterKey;
@property (nonatomic, retain) NSData *sendMediaKey;
@property (nonatomic) long long streamInputID;
@property (nonatomic, retain) AVCTextStreamConfig *text;
@property (nonatomic) unsigned long long txPayloadType;
@property (nonatomic, retain) AVCVideoStreamConfig *video;

+ (long long)cipherSuiteWithClientCipherSuite:(long long)arg1;
+ (long long)clientCipherSuiteWithCipherSuite:(long long)arg1;
+ (long long)clientStreamDirectionWithDirection:(long long)arg1;
+ (id)dictionaryForCommonStreamConfig:(id)arg1;
+ (long long)streamDirectionWithClientDirection:(long long)arg1;
+ (int)streamJitterBufferModeWithClientJitterBufferMode:(unsigned int)arg1;

- (long long)SRTCPCipherSuite;
- (long long)SRTPCipherSuite;
- (long long)accessNetworkType;
- (id)audio;
- (id)cName;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (long long)direction;
- (unsigned long long)fixedJitterBufferSize;
- (id)init;
- (bool)isAudioCodecMaskValid;
- (bool)isAudioCodecValid;
- (bool)isJitterBufferModeValid;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTCPXREnabled;
- (bool)isRTPTimeOutEnabled;
- (bool)isRateAdaptationEnabled;
- (bool)isStreamInputIDValid;
- (bool)isValidAudioConfig;
- (bool)isValidTextConfig;
- (bool)isValidVideoConfig;
- (unsigned int)jitterBufferMode;
- (id)localAddress;
- (unsigned int)localSSRC;
- (unsigned long long)networkClockID;
- (bool)outOfProcessCodecsEnabled;
- (id)receiveMasterKey;
- (id)receiveMediaKey;
- (unsigned long long)recommendedMTU;
- (id)remoteAddress;
- (unsigned int)remoteSSRC;
- (unsigned short)rtcpRemotePort;
- (double)rtcpSendInterval;
- (double)rtcpTimeOutInterval;
- (double)rtpTimeOutInterval;
- (unsigned long long)rxPayloadType;
- (id)sendMasterKey;
- (id)sendMediaKey;
- (void)setAccessNetworkType:(long long)arg1;
- (void)setAudio:(id)arg1;
- (void)setCName:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setFixedJitterBufferSize:(unsigned long long)arg1;
- (void)setJitterBufferMode:(unsigned int)arg1;
- (void)setLocalAddress:(id)arg1;
- (void)setLocalSSRC:(unsigned int)arg1;
- (void)setNetworkClockID:(unsigned long long)arg1;
- (void)setOutOfProcessCodecsEnabled:(bool)arg1;
- (void)setRateAdaptationEnabled:(bool)arg1;
- (void)setReceiveMasterKey:(id)arg1;
- (void)setReceiveMediaKey:(id)arg1;
- (void)setRecommendedMTU:(unsigned long long)arg1;
- (void)setRemoteAddress:(id)arg1;
- (void)setRemoteSSRC:(unsigned int)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpRemotePort:(unsigned short)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtcpXREnabled:(bool)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setRxPayloadType:(unsigned long long)arg1;
- (void)setSRTCPCipherSuite:(long long)arg1;
- (void)setSRTPCipherSuite:(long long)arg1;
- (void)setSendMasterKey:(id)arg1;
- (void)setSendMediaKey:(id)arg1;
- (void)setStreamInputID:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTxPayloadType:(unsigned long long)arg1;
- (void)setUpWithDictionary:(id)arg1;
- (void)setVideo:(id)arg1;
- (long long)streamInputID;
- (id)text;
- (unsigned long long)txPayloadType;
- (id)video;

@end
