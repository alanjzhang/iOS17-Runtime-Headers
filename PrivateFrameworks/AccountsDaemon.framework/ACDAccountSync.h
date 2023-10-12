/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountSync : NSObject {
    int  _circleToken;
    bool  _duchessEnabled;
    bool  _enabled;
    int  _keychainToken;
    ACAccountStore * _store;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSTimer * _timer;
}

+ (id)accountSyncPropertiesForAccount:(id)arg1;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncUnsupportedTypes;
+ (id)sharedAccountSyncServer;

- (void).cxx_destruct;
- (bool)checkCircleState;
- (void)dealloc;
- (id)init;
- (void)setupAccountSync;

@end