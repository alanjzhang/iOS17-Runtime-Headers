/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientInfo : NSObject {
    NSString * _cachedHostname;
    NSObject<OS_dispatch_queue> * _hostCallbackQueue;
    struct MGNotificationTokenStruct { } * _hostNotificationToken;
}

@property (nonatomic, readonly) NSString *hostname;

+ (id)sharedClientInfo;

- (void).cxx_destruct;
- (void)_refreshHostname;
- (void)dealloc;
- (id)hostname;
- (id)init;
- (id)initInternal;

@end
