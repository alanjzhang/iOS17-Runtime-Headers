/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)init;
- (void)serviceCallback:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)serviceCancelPurge:(id /* block */)arg1;
- (void)serviceNotify:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)servicePing:(id /* block */)arg1;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(id /* block */)arg3;

@end
