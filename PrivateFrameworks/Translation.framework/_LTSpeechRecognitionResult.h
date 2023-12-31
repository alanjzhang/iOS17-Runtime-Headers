/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTSpeechRecognitionResult : NSObject <NSSecureCoding> {
    _LTSpeechRecognitionSausage * _bestRecognitionAlternatives;
    bool  _final;
    NSLocale * _locale;
    NSString * _modelVersion;
    bool  _stable;
    NSArray * _transcriptions;
}

@property (nonatomic, retain) _LTSpeechRecognitionSausage *bestRecognitionAlternatives;
@property (getter=isFinal, nonatomic) bool final;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, retain) NSString *modelVersion;
@property (getter=isStable, nonatomic) bool stable;
@property (nonatomic, retain) NSArray *transcriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestRecognitionAlternatives;
- (id)bestTranscription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFinal;
- (bool)isStable;
- (id)locale;
- (id)modelVersion;
- (void)setBestRecognitionAlternatives:(id)arg1;
- (void)setFinal:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setStable:(bool)arg1;
- (void)setTranscriptions:(id)arg1;
- (id)transcriptions;

@end
