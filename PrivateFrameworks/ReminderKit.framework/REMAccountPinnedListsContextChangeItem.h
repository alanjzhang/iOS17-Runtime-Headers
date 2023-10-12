/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMAccountPinnedListsContextChangeItem : NSObject {
    REMAccountChangeItem * _accountChangeItem;
}

@property (nonatomic, retain) REMAccountChangeItem *accountChangeItem;
@property (nonatomic, readonly) REMManualOrdering *unsavedManualOrdering;

- (void).cxx_destruct;
- (id)accountChangeItem;
- (id)initWithAccountChangeItem:(id)arg1;
- (void)setAccountChangeItem:(id)arg1;
- (id)unsavedManualOrdering;
- (void)updateManualOrdering:(id)arg1;

@end