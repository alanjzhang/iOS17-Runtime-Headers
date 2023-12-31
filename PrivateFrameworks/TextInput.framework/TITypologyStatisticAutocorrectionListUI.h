/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic {
    bool  _didSetListUIDisplayed;
    long long  _displayedToHidden;
    long long  _hiddenToDisplayed;
    long long  _inputsWhileDisplayed;
    long long  _inputsWhileHidden;
    bool  _listUIDisplayed;
}

@property (nonatomic, readonly) long long displayedToHidden;
@property (nonatomic, readonly) long long hiddenToDisplayed;
@property (nonatomic, readonly) long long inputsWhileDisplayed;
@property (nonatomic, readonly) long long inputsWhileHidden;

- (void)addInputCount;
- (long long)displayedToHidden;
- (long long)hiddenToDisplayed;
- (long long)inputsWhileDisplayed;
- (long long)inputsWhileHidden;
- (void)setListUIDisplayed:(bool)arg1;
- (id)structuredReport;
- (void)visitRecordAutocorrections:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordSync:(id)arg1;

@end
