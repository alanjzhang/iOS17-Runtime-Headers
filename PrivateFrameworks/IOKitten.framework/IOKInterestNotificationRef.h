/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
 */

@interface IOKInterestNotificationRef : NSObject {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    IOKInterestNotification * _notification;
}

@property (nonatomic) IOKInterestNotification *notification;

- (id)init;
- (void)lock;
- (id)notification;
- (void)setNotification:(id)arg1;
- (void)unlock;

@end
