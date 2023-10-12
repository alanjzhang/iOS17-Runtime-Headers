/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordGroupMarker : TITypologyRecord {
    TIKeyboardState * _keyboardState;
    NSString * _textChange;
}

@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, copy) NSString *textChange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setTextChange:(id)arg1;
- (id)shortDescription;
- (id)textChange;

@end
