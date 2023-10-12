/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordKeyboardLayout : TITypologyRecord {
    TIKeyboardLayout * _keyboardLayout;
    NSString * _name;
}

@property (nonatomic, retain) TIKeyboardLayout *keyboardLayout;
@property (nonatomic, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardLayout;
- (id)name;
- (void)setKeyboardLayout:(id)arg1;
- (void)setName:(id)arg1;
- (id)shortDescription;

@end
