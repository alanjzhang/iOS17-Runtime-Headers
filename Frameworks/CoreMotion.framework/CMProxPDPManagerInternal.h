/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMProxPDPManagerInternal : NSObject {
    void * fLocationdConnection;
    id /* block */  fPDPHandler;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fStartedUpdates;
}

// CMProxPDPManagerInternal (null)

- (void)_startPDPUpdatesWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

@end
