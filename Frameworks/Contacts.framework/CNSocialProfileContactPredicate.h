/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSocialProfileContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    CNSocialProfile * _socialProfile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CNSocialProfile *socialProfile;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocialProfile:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)socialProfile;

// CNSocialProfileContactPredicate (Suggested)

- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;

@end