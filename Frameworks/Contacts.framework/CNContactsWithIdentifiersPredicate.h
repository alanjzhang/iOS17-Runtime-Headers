/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactsWithIdentifiersPredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSArray * _identifiers;
    NSMutableDictionary * _internalIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cn_hasHighSpecificity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)internalIdentifiersForStoreWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

// CNContactsWithIdentifiersPredicate (Donations)

- (id)contactsFromDonationStore:(id)arg1;

// CNContactsWithIdentifiersPredicate (Suggested)

- (bool)cn_supportsNativeSorting;
- (id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;

@end
