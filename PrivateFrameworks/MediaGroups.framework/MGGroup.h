/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaGroups.framework/MediaGroups
 */

@interface MGGroup : NSObject <NSSecureCoding> {
    MGGroupIdentifier * _identifier;
    NSArray * _memberIdentifiers;
    NSString * _name;
    NSDictionary * _properties;
    MGClientService * _service;
    NSString * _type;
}

@property (nonatomic, readonly) MGGroupIdentifier *identifier;
@property (nonatomic, readonly, copy) NSArray *memberIdentifiers;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (nonatomic, readonly) MGClientService *service;
@property (nonatomic, readonly, copy) NSString *type;

+ (id)clientServiceWithConnectionProvider:(id)arg1;
+ (void)groupWithClientService:(id)arg1 name:(id)arg2 members:(id)arg3 completion:(id /* block */)arg4;
+ (void)groupWithConnectionProvider:(id)arg1 name:(id)arg2 members:(id)arg3 completion:(id /* block */)arg4;
+ (void)groupWithName:(id)arg1 members:(id)arg2 completion:(id /* block */)arg3;
+ (id)predicateForCurrentDevice;
+ (id)predicateForGroup:(id)arg1;
+ (id)predicateForGroupIdentifier:(id)arg1;
+ (id)predicateForGroupsContainingGroup:(id)arg1;
+ (id)predicateForType;
+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (void)deleteWithClientService:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteWithCompletion:(id /* block */)arg1;
- (void)deleteWithConnectionProvider:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)forceSetClientService:(id)arg1;
- (id)identifier;
- (id)initWithClientService:(id)arg1 type:(id)arg2 identifier:(id)arg3 name:(id)arg4 memberIdentifiers:(id)arg5;
- (id)initWithClientService:(id)arg1 type:(id)arg2 identifier:(id)arg3 name:(id)arg4 properties:(id)arg5 memberIdentifiers:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithConnectionProvider:(id)arg1 type:(id)arg2 identifier:(id)arg3 name:(id)arg4 memberIdentifiers:(id)arg5;
- (id)initWithConnectionProvider:(id)arg1 type:(id)arg2 identifier:(id)arg3 name:(id)arg4 properties:(id)arg5 memberIdentifiers:(id)arg6;
- (bool)isSameGroup:(id)arg1;
- (id)memberIdentifiers;
- (void)membersWithCompletion:(id /* block */)arg1;
- (id)name;
- (id)properties;
- (id)service;
- (id)type;

@end
