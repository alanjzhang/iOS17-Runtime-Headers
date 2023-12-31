/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceOrientationManagerInternal : NSObject {
    struct Dispatcher { int (**x1)(); id x2; } * fDeviceOrientationDispatcher;
    id /* block */  fDeviceOrientationHandler;
    NSOperationQueue * fDeviceOrientationQueue;
    NSObject<OS_dispatch_semaphore> * fDeviceOrientationSemaphore;
    bool  fDidSignalSemaphore;
    bool  fEnableOrientationNotification;
    struct Sample { 
        double timestamp; 
        int orientation; 
    }  fLastSignificantOrientationSample;
    struct Sample { 
        double timestamp; 
        int orientation; 
    }  fLatestDeviceOrientationSample;
    int  fOrientationCallbackMode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fSampleLock;
}

- (void)dealloc;
- (id)init;

@end
