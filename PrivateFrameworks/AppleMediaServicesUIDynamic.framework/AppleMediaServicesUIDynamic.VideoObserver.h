/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
 */

@interface AppleMediaServicesUIDynamic.VideoObserver : NSObject {
    void delegate;
    void playerItemObserversAdded;
    void playerObserversAdded;
    void timeBoundaryObserver;
}

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)playbackErrorOccurredWithNotification:(id)arg1;
- (void)videoDidPlayToEnd;
- (void)videoPlaybackDidStall;

@end
