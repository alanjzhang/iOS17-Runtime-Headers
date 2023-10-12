/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    UISwitch * _control;
    bool  _switchStateIsOn;
}

- (void).cxx_destruct;
- (void)_switchChanged:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end