/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordRefinements : TITypologyRecord {
    TIKeyboardCandidate * _candidate;
    TIKeyboardState * _keyboardState;
    TIAutocorrectionList * _refinements;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, retain) TIAutocorrectionList *refinements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidate;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardState;
- (id)refinements;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setRefinements:(id)arg1;
- (id)shortDescription;

// TITypologyRecordRefinements (TITypologyStatistic)

- (void)applyToStatistic:(id)arg1;

@end
