/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICDeviceHardwareHandler : NSObject {
    NSMutableArray * _deviceContexts;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceContextsLock;
    NSMutableArray * _disabledContexts;
}

- (void)addDeviceContext:(id)arg1;
- (id)init;
- (void)removeDeviceContext:(id)arg1;

@end
