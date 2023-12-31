/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandContext : NSObject <MCMCommandContext> {
    MCMClientIdentity * _clientIdentity;
    <MCMContainerCache> * _containerCache;
    <MCMContainerFactory> * _containerFactory;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) MCMClientIdentity *clientIdentity;
@property (nonatomic, readonly) <MCMContainerCache> *containerCache;
@property (nonatomic, readonly) <MCMContainerFactory> *containerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

+ (id)privileged;
+ (id)privilegedWithUserIdentity:(id)arg1 userIdentityCache:(id)arg2;

- (void).cxx_destruct;
- (id)clientIdentity;
- (id)containerCache;
- (id)containerFactory;
- (id)initWithClientIdentity:(id)arg1 containerCache:(id)arg2 containerFactory:(id)arg3 userIdentityCache:(id)arg4;
- (id)userIdentityCache;

@end
