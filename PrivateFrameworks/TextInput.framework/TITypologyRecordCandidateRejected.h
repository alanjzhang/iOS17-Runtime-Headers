/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordCandidateRejected : TITypologyRecord {
    TIKeyboardCandidate * _candidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCandidate:(id)arg1;
- (id)shortDescription;

// TITypologyRecordCandidateRejected (TITypologyStatistic)

- (void)applyToStatistic:(id)arg1;

@end
