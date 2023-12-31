/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIGroupsAndContainersContactsSaveResult : NSObject {
    NSArray * _addedContacts;
    NSError * _error;
    bool  _saveDidSucceed;
}

@property (nonatomic, readonly) NSArray *addedContacts;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool saveDidSucceed;

- (void).cxx_destruct;
- (id)addedContacts;
- (id)error;
- (id)initWithSuccess:(bool)arg1 error:(id)arg2 addedContacts:(id)arg3;
- (bool)saveDidSucceed;

@end
