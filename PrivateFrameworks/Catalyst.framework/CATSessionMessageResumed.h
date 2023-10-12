/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATSessionMessageResumed : CATSessionMessage {
    NSArray * _pendingRemoteTaskUUIDs;
    NSDictionary * _serverUserInfo;
    NSUUID * _sessionUUID;
}

@property (nonatomic, copy) NSArray *pendingRemoteTaskUUIDs;
@property (nonatomic, copy) NSDictionary *serverUserInfo;
@property (nonatomic, copy) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1;
- (id)pendingRemoteTaskUUIDs;
- (id)serverUserInfo;
- (id)sessionUUID;
- (void)setPendingRemoteTaskUUIDs:(id)arg1;
- (void)setServerUserInfo:(id)arg1;
- (void)setSessionUUID:(id)arg1;

@end
