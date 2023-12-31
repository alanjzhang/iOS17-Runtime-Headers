/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandAcquireSandboxExtensionWithUUID : MCMCommand <MCMParametersWithConcreteContainer> {
    MCMConcreteContainerIdentity * _concreteContainerIdentity;
}

@property (nonatomic, readonly) MCMConcreteContainerIdentity *concreteContainerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)concreteContainerIdentity;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;

@end
