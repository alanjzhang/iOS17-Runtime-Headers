/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandInfoValueForKey : MCMCommand <MCMParametersWithKey> {
    MCMConcreteContainerIdentity * _concreteContainerIdentity;
    NSString * _key;
}

@property (nonatomic, readonly) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (nonatomic, readonly) NSString *key;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)concreteContainerIdentity;
- (void)execute;
- (id)infoValueForKeyWithError:(unsigned long long*)arg1;
- (id)initWithKey:(id)arg1 concreteContainerIdentity:(id)arg2 context:(id)arg3 resultPromise:(id)arg4;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)key;
- (bool)preflightClientAllowed;

@end
