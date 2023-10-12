/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContainerOfContactPredicate : CNPredicate <CNiOSContainerPredicate> {
    NSString * _contactIdentifier;
}

@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includesDisabledContainers;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end
