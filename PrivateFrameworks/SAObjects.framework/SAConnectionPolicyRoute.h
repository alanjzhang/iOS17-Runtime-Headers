/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *cname;
@property (nonatomic, copy) NSString *connectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, copy) NSNumber *mptcp;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSString *resolver;
@property (nonatomic, copy) NSString *resolverProtocol;
@property (nonatomic, copy) NSString *routeId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *timeout;
@property (nonatomic, copy) NSString *type;

+ (id)connectionPolicyRoute;
+ (id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)cname;
- (id)connectionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)host;
- (id)mptcp;
- (long long)priority;
- (id)resolver;
- (id)resolverProtocol;
- (id)routeId;
- (void)setCname:(id)arg1;
- (void)setConnectionId:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setMptcp:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setResolver:(id)arg1;
- (void)setResolverProtocol:(id)arg1;
- (void)setRouteId:(id)arg1;
- (void)setTimeout:(id)arg1;
- (void)setType:(id)arg1;
- (id)timeout;
- (id)type;

@end
