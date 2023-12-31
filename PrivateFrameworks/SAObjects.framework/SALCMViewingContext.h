/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALCMViewingContext : SADomainObject

@property (nonatomic) bool commercialPlaying;
@property (nonatomic, copy) NSNumber *durationInMilliseconds;
@property (nonatomic, retain) SALCMContent *nowPlaying;
@property (nonatomic, copy) NSString *nowPlayingAppId;
@property (nonatomic) bool paused;
@property (nonatomic, copy) NSNumber *playbackPositionInMilliseconds;
@property (nonatomic, copy) NSArray *viewingHistory;

+ (id)viewingContext;
+ (id)viewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (bool)commercialPlaying;
- (id)durationInMilliseconds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nowPlaying;
- (id)nowPlayingAppId;
- (bool)paused;
- (id)playbackPositionInMilliseconds;
- (void)setCommercialPlaying:(bool)arg1;
- (void)setDurationInMilliseconds:(id)arg1;
- (void)setNowPlaying:(id)arg1;
- (void)setNowPlayingAppId:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlaybackPositionInMilliseconds:(id)arg1;
- (void)setViewingHistory:(id)arg1;
- (id)viewingHistory;

@end
