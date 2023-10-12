/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardSessionRequest : NSObject {
    NSXPCConnection * _connection;
    NSDictionary * _parameters;
    id /* block */  _reply;
}

@property NSXPCConnection *connection;
@property (retain) NSDictionary *parameters;
@property (copy) id /* block */ reply;

- (void).cxx_destruct;
- (id)connection;
- (id)parameters;
- (id /* block */)reply;
- (void)setConnection:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setReply:(id /* block */)arg1;

@end
