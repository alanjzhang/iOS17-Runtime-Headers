/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryFetchExecutor : NSObject {
    CNChangeHistoryFetchRequest * _request;
    CNContactStore * _store;
}

@property (nonatomic, readonly, copy) CNChangeHistoryFetchRequest *request;
@property (nonatomic, readonly) CNContactStore *store;

+ (id)os_log;

- (void).cxx_destruct;
- (id)contactLinkingEventsForContacts:(id)arg1 withFactory:(id)arg2;
- (id)countOfDeltaSync;
- (id)deltaSync;
- (id)description;
- (id)fetchCount:(id*)arg1;
- (id)fetchEvents:(id*)arg1;
- (id)fullSync;
- (id)initWithRequest:(id)arg1 store:(id)arg2;
- (id)keysToFetch;
- (id)request;
- (id)run:(id*)arg1;
- (id)store;
- (bool)validateFetchRequest;

@end
