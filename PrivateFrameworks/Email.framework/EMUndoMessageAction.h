/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMUndoMessageAction : EMMessageChangeAction {
    NSArray * _individualActions;
}

@property (nonatomic, readonly, copy) NSArray *individualActions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)individualActions;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndividualActions:(id)arg1 origin:(long long)arg2 actor:(long long)arg3;
- (long long)signpostType;

@end
