/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRCallbackArray : NSObject {
    NSMutableArray * _callbacks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)addObject:(id /* block */)arg1;
- (id)init;
- (void)sweepWithCollection:(id)arg1;

@end
