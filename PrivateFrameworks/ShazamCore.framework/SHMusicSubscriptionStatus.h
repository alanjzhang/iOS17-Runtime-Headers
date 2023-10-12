/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShazamCore.framework/ShazamCore
 */

@interface SHMusicSubscriptionStatus : NSObject {
    long long  _appleMusicSubscriptionStatus;
    long long  _shazamMusicSubscriptionStatus;
}

@property (nonatomic, readonly) long long appleMusicSubscriptionStatus;
@property (nonatomic, readonly) bool hasActiveAppleMusicSubscription;
@property (nonatomic, readonly) long long shazamMusicSubscriptionStatus;

- (long long)appleMusicSubscriptionStatus;
- (bool)hasActiveAppleMusicSubscription;
- (id)initWithSubscriptionStatus:(long long)arg1;
- (long long)shazamMusicSubscriptionStatus;

@end
