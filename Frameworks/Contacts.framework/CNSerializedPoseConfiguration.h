/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSerializedPoseConfiguration : NSObject <NSCopying, NSSecureCoding> {
    AVTAvatarPhysicalizedPose * _pose;
    NSString * _poseName;
}

@property (nonatomic, readonly, copy) AVTAvatarPhysicalizedPose *pose;
@property (nonatomic, readonly, copy) NSString *poseName;

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoseConfiguration:(id)arg1;
- (id)initWithPoseName:(id)arg1 pose:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)pose;
- (id)poseName;

@end
