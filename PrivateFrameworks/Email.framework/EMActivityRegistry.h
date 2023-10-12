/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMActivityRegistry : NSObject {
    EMRemoteConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _observerWrappersByObserver;
}

@property (retain) EMRemoteConnection *connection;

+ (id)observerInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithRemoteConnection:(id)arg1;
- (id)registerActivityObserver:(id)arg1;
- (void)setConnection:(id)arg1;

@end
