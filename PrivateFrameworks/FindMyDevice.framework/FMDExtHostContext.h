/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDExtHostContext : FMDExtensionContext <FMDExtAccessoryDelegateProtocol> {
    <FMDExtAccessoryDelegateProtocol> * _accessoryDelegate;
}

@property (nonatomic, retain) <FMDExtAccessoryDelegateProtocol> *accessoryDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryDelegate;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setAccessoryDelegate:(id)arg1;

@end
