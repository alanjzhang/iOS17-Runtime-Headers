/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainLock : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _containerLock;
    NSMutableDictionary * _locksByServiceUsername;
}

- (void).cxx_destruct;
- (id)init;
- (void)lockPerformForService:(id)arg1 username:(id)arg2 block:(id /* block */)arg3;

@end
