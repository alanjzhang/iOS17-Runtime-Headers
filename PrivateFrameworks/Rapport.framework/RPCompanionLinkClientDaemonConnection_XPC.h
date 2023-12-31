/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkClientDaemonConnection_XPC : NSObject <RPDaemonConnection> {
    NSXPCConnection * _cnx;
}

@property (nonatomic, retain) NSXPCConnection *cnx;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cnx;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setCnx:(id)arg1;

@end
