/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSCriterion : NSObject <NSSecureCoding> {
    <NSObject> * _criteria;
    NSString * _qualifier;
    NSString * _type;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3;
- (id)criteria;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 allRequired:(bool)arg2;
- (id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3;
- (id)qualifier;
- (id)type;

@end
