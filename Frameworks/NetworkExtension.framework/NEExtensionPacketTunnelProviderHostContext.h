/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderHostProtocol, NEExtensionPacketTunnelProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(id /* block */)arg1;
- (void)requestSocket:(bool)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)requiredEntitlement;
- (void)setAppUUIDMap:(id)arg1;
- (void)setupVirtualInterface:(id)arg1;
- (void)validateWithCompletionHandler:(id /* block */)arg1;

@end