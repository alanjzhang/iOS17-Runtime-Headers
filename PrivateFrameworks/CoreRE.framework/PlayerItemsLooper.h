/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface PlayerItemsLooper : NSObject {
    NSArray * _loopedAssets;
    AVQueuePlayer * _player;
}

@property (nonatomic, copy) NSArray *loopedAssets;
@property (nonatomic, retain) AVQueuePlayer *player;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enqueueAssetItems;
- (id)initWithPlayer:(id)arg1 assets:(id)arg2;
- (id)loopedAssets;
- (void)observeLastAndEnqueueAssetItems;
- (id)player;
- (void)playerItemAtEnd:(id)arg1;
- (void)setLoopedAssets:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
