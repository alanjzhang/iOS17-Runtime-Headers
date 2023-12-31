/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADPersonalizedAdsStatusManager : ADSingleton {
    NSNumber * _pendingJingleRequestToken;
    bool  _sendingPersonalizedAdsToAdPlatforms;
}

@property (nonatomic, copy) NSNumber *pendingJingleRequestToken;
@property (nonatomic) bool sendingPersonalizedAdsToAdPlatforms;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)pendingJingleRequestToken;
- (void)sendPersonalizedAdsStatusToAdPlatforms:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)sendingPersonalizedAdsToAdPlatforms;
- (void)setPendingJingleRequestToken:(id)arg1;
- (void)setSendingPersonalizedAdsToAdPlatforms:(bool)arg1;

@end
