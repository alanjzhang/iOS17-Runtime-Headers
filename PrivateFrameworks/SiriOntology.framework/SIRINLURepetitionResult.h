/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
 */

@interface SIRINLURepetitionResult : NSObject <NSSecureCoding> {
    unsigned int  _asrHypothesisIndex;
    unsigned int  _repetitionType;
}

@property unsigned int asrHypothesisIndex;
@property unsigned int repetitionType;

+ (bool)supportsSecureCoding;

- (unsigned int)asrHypothesisIndex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAsrHypothesisIndex:(unsigned int)arg1 repetitionType:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (unsigned int)repetitionType;
- (void)setAsrHypothesisIndex:(unsigned int)arg1;
- (void)setRepetitionType:(unsigned int)arg1;

@end
