/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABBufferQueryCursorCount : NSObject {
    ABBufferQueryCount * _query;
}

@property (nonatomic, readonly) ABBufferQueryCount *query;

- (void)dealloc;
- (long long)fetchContactCount;
- (id)initWithAddressBook:(void*)arg1 predicate:(id)arg2 includeLinkedContacts:(bool)arg3 managedConfiguration:(id)arg4;
- (id)initWithQuery:(id)arg1;
- (id)query;

@end
