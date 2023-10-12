/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PreviewsOSSupport.framework/PreviewsOSSupport
 */

@interface UVBSPipeServiceConnection : UVBSConnection <UVBSPipeServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activateWithInterfaceTarget:(id)arg1;
- (oneway void)sendEncodedEvent:(id)arg1;
- (oneway void)sendEncodedEvent:(id)arg1 replyHandler:(id /* block */)arg2;

@end