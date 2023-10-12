/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSSinglePhraseResult : NSObject <NSCopying> {
    float  _combinedScore;
    unsigned long long  _decision;
    bool  _isRunningQuasar;
    bool  _isSecondChance;
    bool  _isSecondChanceCandidate;
    CSKeywordAnalyzerNDAPIResult * _ndapiResult;
    float  _ndapiScore;
    unsigned long long  _phId;
    float  _recognizerScore;
}

@property (nonatomic, readonly) float combinedScore;
@property (nonatomic, readonly) unsigned long long decision;
@property (nonatomic, readonly) bool isRunningQuasar;
@property (nonatomic, readonly) bool isSecondChance;
@property (nonatomic, readonly) bool isSecondChanceCandidate;
@property (nonatomic, readonly) CSKeywordAnalyzerNDAPIResult *ndapiResult;
@property (nonatomic, readonly) float ndapiScore;
@property (nonatomic, readonly) unsigned long long phId;
@property (nonatomic, readonly) float recognizerScore;

- (void).cxx_destruct;
- (float)combinedScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)decision;
- (id)description;
- (id)initWithPhId:(unsigned long long)arg1 keywordDetectorDecision:(unsigned long long)arg2 combinedScore:(float)arg3 ndapiScore:(float)arg4 ndapiResult:(id)arg5 recognizerScore:(float)arg6 isSecondChance:(bool)arg7 isSecondChanceCandidate:(bool)arg8 isRunningQuasar:(bool)arg9;
- (bool)isRunningQuasar;
- (bool)isSecondChance;
- (bool)isSecondChanceCandidate;
- (id)ndapiResult;
- (float)ndapiScore;
- (unsigned long long)phId;
- (float)recognizerScore;

@end
