/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Security.framework/Security
 */

@interface KCSharingGroupUpdateInfo : NSObject <NSSecureCoding> {
    NSArray * _addedParticipants;
    NSString * _departedGroupID;
    long long  _updateType;
    KCSharingGroup * _updatedGroup;
}

@property (nonatomic, readonly) NSArray *addedParticipants;
@property (nonatomic, readonly) NSString *departedGroupID;
@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) KCSharingGroup *updatedGroup;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedParticipants;
- (id)departedGroupID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDepartedGroupID:(id)arg1;
- (id)initWithGroup:(id)arg1 addedParticipants:(id)arg2;
- (long long)updateType;
- (id)updatedGroup;

@end
