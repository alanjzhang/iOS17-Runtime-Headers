/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCIContextManager : NSObject {
    VNCIContextsHandler * _cpuContextsHandler;
    NSMutableDictionary * _gpuContextsHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _gpuHandlersLock;
    unsigned long long  _maxContextsCount;
}

- (void).cxx_destruct;
- (id)init;

@end