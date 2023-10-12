/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBSimplePasscodeInputView : OBPasscodeInputView <OBPasscodeFieldDelegate> {
    bool  _limitCharactersToNumbers;
    OBPasscodeField * _passcodeField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool limitCharactersToNumbers;
@property (nonatomic, retain) OBPasscodeField *passcodeField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfEntryFields:(unsigned long long)arg2;
- (bool)limitCharactersToNumbers;
- (id)passcode;
- (id)passcodeDisplayView;
- (id)passcodeField;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)setLimitCharactersToNumbers:(bool)arg1;
- (void)setPasscode:(id)arg1;
- (void)setPasscodeField:(id)arg1;

@end
