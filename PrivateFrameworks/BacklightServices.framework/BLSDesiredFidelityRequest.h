/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices
 */

@interface BLSDesiredFidelityRequest : NSObject {
    id /* block */  _completion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_completed;
}

- (void).cxx_destruct;
- (void)completeWithDesiredFidelity:(long long)arg1;
- (id)initWithCompletion:(id /* block */)arg1;

@end
