/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

@interface PRRegulatoryAssistanceEndpoint : NSObject {
    NSXPCConnection * _conn;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)endpointWithQueue:(id)arg1;

- (void).cxx_destruct;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)initInternalWithQueue:(id)arg1;
- (void)invalidate;
- (void)provideIsoCode:(id)arg1;

@end
