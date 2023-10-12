/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding> {
    <NSObject><NSSecureCoding> * _activityContext;
    PDScheduledActivityCriteria * _activityCriteria;
}

@property (nonatomic, readonly) <NSObject><NSSecureCoding> *activityContext;
@property (nonatomic, readonly) PDScheduledActivityCriteria *activityCriteria;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityContext;
- (id)activityCriteria;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScheduledActivityRegistration:(id)arg1;

@end
