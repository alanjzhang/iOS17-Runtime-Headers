/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEventInternal * _playerItemErrorLogEvent;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *errorComment;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) long long errorStatusCode;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSString *serverAddress;

- (id)URI;
- (id)_common_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)errorComment;
- (id)errorDomain;
- (long long)errorStatusCode;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)playbackSessionID;
- (id)serverAddress;

@end
