/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRRecordedCorrection : NSObject {
    NSString * _correctedString;
    NSTextCheckingResult * _correctionResult;
    bool  _hasRecordedResponse;
}

@property bool hasRecordedResponse;

- (id)correctedString;
- (id)correctionResult;
- (void)dealloc;
- (id)description;
- (bool)hasRecordedResponse;
- (id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2;
- (void)setHasRecordedResponse:(bool)arg1;

@end
