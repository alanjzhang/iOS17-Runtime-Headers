/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactDisableGuardianRestrictionsAction : CNContactAction {
    CNContactStore * _contactStore;
    CNContainer * _container;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNContainer *container;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (id)contactStore;
- (id)container;
- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;
- (bool)isDestructive;
- (void)performActionWithSender:(id)arg1;
- (id)title;

@end
