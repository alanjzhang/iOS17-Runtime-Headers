/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAScreentimeSettingsObjectCache : NSObject <NSSecureCoding> {
    NSDate * _date;
    id  _introductionModel;
    NSNumber * _memberDSID;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) id introductionModel;
@property (nonatomic, retain) NSNumber *memberDSID;

+ (Class)introductionModelClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntroductionModel:(id)arg1 date:(id)arg2 dsid:(id)arg3;
- (id)introductionModel;
- (id)memberDSID;
- (void)setDate:(id)arg1;
- (void)setIntroductionModel:(id)arg1;
- (void)setMemberDSID:(id)arg1;

// FAScreentimeSettingsObjectCache (Convenience)

+ (id)objectWithData:(id)arg1;

- (id)dataRepresentation;

@end
