/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContextualActionsClient.framework/ContextualActionsClient
 */

@interface CAXShortcutsSessionSummary : NSObject <NSSecureCoding> {
    NSArray * _actions;
    NSUUID * _blendingCacheUpdateUUID;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSUUID *blendingCacheUpdateUUID;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)blendingCacheUpdateUUID;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActions:(id)arg1 sessionIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)sessionIdentifier;

@end
