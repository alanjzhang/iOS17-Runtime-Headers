/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying> {
    NSError * _fallbackError;
    unsigned long long  _fallbackReason;
    NSError * _migrateError;
    long long  _playbackSessionSize;
    _MRPlaybackSessionMigrateRequestProtobuf * _protobuf;
    unsigned long long  _requestType;
}

@property (nonatomic) bool allowFadeTransition;
@property (nonatomic, retain) MRContentItem *contentItem;
@property (nonatomic) unsigned int destinationTypes;
@property (nonatomic, readonly) double duration;
@property (nonatomic) long long endpointOptions;
@property (nonatomic) unsigned long long fallbackReason;
@property (nonatomic, retain) NSString *initiator;
@property (nonatomic) unsigned int originatorType;
@property (nonatomic) double playbackPosition;
@property (nonatomic) double playbackRate;
@property (nonatomic, retain) MRPlaybackSessionRequest *playbackSessionRequest;
@property (nonatomic) long long playbackSessionSize;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) long long playerOptions;
@property (nonatomic, retain) MRPlayerPath *playerPath;
@property (nonatomic, readonly) _MRPlaybackSessionMigrateRequestProtobuf *protobuf;
@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) NSString *report;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) MRPlayerPath *resolvedPlayerPath;

- (void).cxx_destruct;
- (void)addDestinationType:(unsigned int)arg1;
- (void)addDestinationTypesFromDevices:(id)arg1;
- (bool)allowFadeTransition;
- (id)contentItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)destinationTypes;
- (double)duration;
- (void)endEvent:(id)arg1;
- (void)endEvent:(id)arg1 withError:(id)arg2;
- (long long)endpointOptions;
- (unsigned long long)fallbackReason;
- (void)finalize;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initiator;
- (void)merge:(id)arg1;
- (unsigned int)originatorType;
- (double)playbackPosition;
- (double)playbackRate;
- (id)playbackSessionRequest;
- (long long)playbackSessionSize;
- (unsigned int)playbackState;
- (long long)playerOptions;
- (id)playerPath;
- (id)protobuf;
- (id)protobufData;
- (id)report;
- (id)requestID;
- (unsigned long long)requestType;
- (id)resolvedPlayerPath;
- (void)setAllowFadeTransition:(bool)arg1;
- (void)setContentItem:(id)arg1;
- (void)setDestinationTypes:(unsigned int)arg1;
- (void)setEndpointOptions:(long long)arg1;
- (void)setFallbackReason:(unsigned long long)arg1;
- (void)setInitiator:(id)arg1;
- (void)setOriginatorType:(unsigned int)arg1;
- (void)setOriginatorTypeFromDevice:(id)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlaybackSessionRequest:(id)arg1;
- (void)setPlaybackSessionSize:(long long)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPlayerOptions:(long long)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (void)startEvent:(id)arg1;

@end
