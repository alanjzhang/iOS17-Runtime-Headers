/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorStreamGroupStreamConfiguration : NSObject <NSCopying> {
    unsigned int  _audioChannelCount;
    NSMutableArray * _codecs;
    unsigned int  _coordinateSystem;
    unsigned int  _framerate;
    bool  _isSubStream;
    bool  _isTemporalStream;
    unsigned int  _keyFrameInterval;
    unsigned int  _maxMediaBitrate;
    unsigned int  _maxNetworkBitrate;
    unsigned int  _maxPacketsPerSecond;
    unsigned int  _metadata;
    unsigned short  _parentStreamID;
    NSMutableSet * _payloads;
    unsigned int  _qualityIndex;
    unsigned int  _repairedMaxNetworkBitrate;
    unsigned short  _repairedStreamID;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
    unsigned int  _rtpTimestampRate;
    unsigned long long  _serializedSize;
    unsigned int  _ssrc;
    unsigned short  _streamID;
    unsigned char  _streamIndex;
}

@property (nonatomic) unsigned int audioChannelCount;
@property (nonatomic, readonly) NSArray *codecs;
@property (nonatomic) unsigned int coordinateSystem;
@property (nonatomic) unsigned int framerate;
@property (nonatomic) bool isSubStream;
@property (nonatomic) bool isTemporalStream;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int maxPacketsPerSecond;
@property (nonatomic) unsigned int metadata;
@property (nonatomic) unsigned short parentStreamID;
@property (nonatomic, readonly) NSSet *payloads;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (nonatomic) unsigned short repairedStreamID;
@property (nonatomic) struct CGSize { double x1; double x2; } resolution;
@property (nonatomic) unsigned int rtpTimestampRate;
@property (nonatomic) unsigned long long serializedSize;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned short streamID;
@property (nonatomic) unsigned char streamIndex;

+ (id)configWithQualityIndex:(unsigned int)arg1 nwBitrate:(unsigned int)arg2 mediaBitrate:(unsigned int)arg3 maxPacketsPerSecond:(unsigned int)arg4 repairedNwBitrate:(unsigned int)arg5 keyFrameInterval:(unsigned int)arg6 framerate:(unsigned int)arg7 rtpSampleRate:(unsigned int)arg8 isTemporal:(bool)arg9 isSubStream:(bool)arg10 metadata:(unsigned int)arg11 payloads:(id)arg12 codecs:(id)arg13 width:(unsigned int)arg14 height:(unsigned int)arg15 audioChannelCount:(unsigned int)arg16 streamIndex:(unsigned char)arg17 coordinateSystem:(unsigned int)arg18;

- (void)addCodec:(unsigned int)arg1;
- (void)addPayload:(int)arg1;
- (bool)applyCipherSuiteOnMediaStreamConfig:(id)arg1 codecConfigs:(id)arg2;
- (bool)areCodecsEqualTo:(id)arg1;
- (unsigned int)audioChannelCount;
- (id)codecs;
- (unsigned int)coordinateSystem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)framerate;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualPayloads:(id)arg1;
- (bool)isSubStream;
- (bool)isTemporalStream;
- (unsigned int)keyFrameInterval;
- (unsigned int)maxMediaBitrate;
- (unsigned int)maxNetworkBitrate;
- (unsigned int)maxPacketsPerSecond;
- (unsigned int)metadata;
- (unsigned short)parentStreamID;
- (id)payloads;
- (unsigned int)qualityIndex;
- (void)removeCodec:(unsigned int)arg1;
- (unsigned int)repairedMaxNetworkBitrate;
- (unsigned short)repairedStreamID;
- (void)resetCodecs;
- (void)resetPayloads;
- (struct CGSize { double x1; double x2; })resolution;
- (unsigned int)rtpTimestampRate;
- (unsigned long long)serializedSize;
- (void)setAudioChannelCount:(unsigned int)arg1;
- (void)setCoordinateSystem:(unsigned int)arg1;
- (void)setFramerate:(unsigned int)arg1;
- (void)setIsSubStream:(bool)arg1;
- (void)setIsTemporalStream:(bool)arg1;
- (void)setKeyFrameInterval:(unsigned int)arg1;
- (void)setMaxMediaBitrate:(unsigned int)arg1;
- (void)setMaxNetworkBitrate:(unsigned int)arg1;
- (void)setMaxPacketsPerSecond:(unsigned int)arg1;
- (void)setMetadata:(unsigned int)arg1;
- (void)setParentStreamID:(unsigned short)arg1;
- (void)setQualityIndex:(unsigned int)arg1;
- (void)setRepairedMaxNetworkBitrate:(unsigned int)arg1;
- (void)setRepairedStreamID:(unsigned short)arg1;
- (void)setResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setRtpTimestampRate:(unsigned int)arg1;
- (void)setSerializedSize:(unsigned long long)arg1;
- (void)setSsrc:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (void)setStreamIndex:(unsigned char)arg1;
- (unsigned int)ssrc;
- (unsigned short)streamID;
- (unsigned char)streamIndex;

@end
