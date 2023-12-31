/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenConfigurationConnection : NSObject {
    NSHashTable * _configurationConnections;
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _endpoint;
}

- (void).cxx_destruct;
- (id)configurationProtocol;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (void)registerForConfigurationChange:(id)arg1;
- (void)tokenConfigurationChanged:(id)arg1;

@end
