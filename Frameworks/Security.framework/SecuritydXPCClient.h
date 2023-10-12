/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Security.framework/Security
 */

@interface SecuritydXPCClient : NSObject <SecuritydXPCClientInterface> {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)configureSecuritydXPCProtocol:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initTargetingSession:(int)arg1;
- (id)protocolWithSync:(bool)arg1 errorHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;

@end
