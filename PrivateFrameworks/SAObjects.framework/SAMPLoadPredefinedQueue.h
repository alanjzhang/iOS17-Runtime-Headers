/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) bool dryRun;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (nonatomic, copy) NSString *requesterSharedUserId;
@property (nonatomic, copy) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) bool shouldShuffle;
@property (nonatomic, copy) NSNumber *startPlaying;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;

- (bool)dryRun;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (int)mediaItemType;
- (bool)mutatingCommand;
- (id)requesterSharedUserId;
- (bool)requiresResponse;
- (void)setDryRun:(bool)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setMediaItemType:(int)arg1;
- (void)setRequesterSharedUserId:(id)arg1;
- (void)setSharedUserIdFromPlayableMusicAccount:(id)arg1;
- (void)setShouldShuffle:(bool)arg1;
- (void)setStartPlaying:(id)arg1;
- (id)sharedUserIdFromPlayableMusicAccount;
- (bool)shouldShuffle;
- (id)startPlaying;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

// SAMPLoadPredefinedQueue (AnalyticsContextVending)

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
