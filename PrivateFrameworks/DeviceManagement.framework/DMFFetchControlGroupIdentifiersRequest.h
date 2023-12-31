/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchControlGroupIdentifiersRequest : DMFTaskRequest {
    bool  _includeTemporary;
    NSString * _leaderIdentifier;
}

@property (nonatomic) bool includeTemporary;
@property (nonatomic, copy) NSString *leaderIdentifier;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeTemporary;
- (id)initWithCoder:(id)arg1;
- (id)leaderIdentifier;
- (void)setIncludeTemporary:(bool)arg1;
- (void)setLeaderIdentifier:(id)arg1;

@end
