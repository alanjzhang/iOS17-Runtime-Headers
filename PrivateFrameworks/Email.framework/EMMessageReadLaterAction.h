/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMessageReadLaterAction : EMMessageChangeAction {
    NSDate * _readLaterDate;
}

@property (nonatomic, readonly) NSDate *readLaterDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 readLaterDate:(id)arg4;
- (id)readLaterDate;
- (long long)signpostType;

@end