/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSManager : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (void)initialize;
+ (bool)supportsWatch;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (void)invalidate;
- (void)setInternalQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2;
- (void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(bool)arg3;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(bool)arg3;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 cloudEnabled:(bool)arg5;
- (void)unsafe_invalidate;
- (id)xpcConnection;

@end
