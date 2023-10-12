/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal * _syncLayer;
}

@property (nonatomic, retain) AVPlayerItem *playerItem;

+ (void)initialize;
+ (id)synchronizedLayerWithPlayerItem:(id)arg1;

- (bool)_isVisible;
- (id)_popAllOldPlayerItems;
- (void)_removeSelfFromPlayerItem:(id)arg1;
- (void)_updatePlayerItemState;
- (void)dealloc;
- (id)init;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;

@end