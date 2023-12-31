/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIImageRemoteBackgroundColorAnalyzer : NSObject {
    NSXPCConnection * _serviceConnection;
}

@property (retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)_closeConnection;
- (void)_openConnectionIfNeeded;
- (void)dealloc;
- (void)getBackgroundColorOnImageData:(id)arg1 reply:(id /* block */)arg2;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;

@end
