/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate> {
    UITableViewCell * _cell;
    EKRecurrenceOrdinalPickerViewController * _pickerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForRow:(long long)arg1;
- (long long)frequency;
- (void)frequencyPickerUpdated:(id)arg1;
- (double)heightForRow:(long long)arg1;
- (id)initWithDate:(id)arg1;
- (long long)numberOfRows;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
