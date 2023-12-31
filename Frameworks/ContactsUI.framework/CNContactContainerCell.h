/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactContainerCell : CNLabeledCell {
    UILabel * _accountLabel;
    UILabel * _accountNameLabel;
    <CNPropertyCellDelegate> * _delegate;
}

@property (nonatomic, readonly) UILabel *accountLabel;
@property (nonatomic, readonly) UILabel *accountNameLabel;
@property (nonatomic) <CNPropertyCellDelegate> *delegate;

+ (bool)wantsChevron;

- (void).cxx_destruct;
- (id)accountLabel;
- (id)accountNameLabel;
- (id)delegate;
- (id)labelView;
- (void)performDefaultAction;
- (void)setCardGroupItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (void)updateConstraints;
- (id)valueView;

@end
