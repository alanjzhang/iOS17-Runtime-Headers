/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactsProviderModerator : NSObject {
    CNCache * _cache;
    _TtC8Contacts22CNContactsProviderHost * _host;
    CNUnfairLock * _lock;
}

@property (nonatomic, readonly) CNCache *cache;
@property (nonatomic, readonly) _TtC8Contacts22CNContactsProviderHost *host;
@property (nonatomic, readonly) CNUnfairLock *lock;

+ (id)log;
+ (id)synchronizeAllUsingSession:(id)arg1;

- (void).cxx_destruct;
- (id)cache;
- (id)host;
- (id)initWithHost:(id)arg1;
- (id)lock;
- (id)synchronizeUsingSession:(id)arg1 bundleIdentifier:(id)arg2;

@end
