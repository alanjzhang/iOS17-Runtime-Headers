/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser * _currentUser;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)cachedCurrentUserAppleID;
- (id)currentUser;
- (void)currentUserDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)lock;
- (bool)settingsUIVisible;
- (void)unlock;

@end