/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRWrappingEvaluationResultV1 : NSObject <CRWrappingEvaluationResult> {
    float  _angleDiff;
    bool  _bothBeginWithDigits;
    double  _cachedEOSLMScore;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _cachedFeatureTokens;
    double  _cachedLMScore;
    bool  _centerAligned;
    CRLineWrapperV1Configuration * _configuration;
    CRLineWrappingContext * _context;
    bool  _contextNoText;
    bool  _continuesToNewColumn;
    bool  _eosLMScoreSet;
    bool  _f1EndsWithDD;
    bool  _f2BeginsWithDD;
    bool  _f2FullyDD;
    bool  _f2StartOfSentence;
    <CRLayoutLine> * _featureInTest;
    bool  _featureInTestNoText;
    struct CGSize { 
        double width; 
        double height; 
    }  _featureInTestSize;
    bool  _featureTokensSet;
    float  _horizontalOverlap;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isHyphenatedPrefixOfWord;
    bool  _isOversegmented;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastFeatureSize;
    bool  _leftAligned;
    float  _leftDistance;
    bool  _lmScoreSet;
    bool  _matchingLocales;
    float  _midDistance;
    bool  _midSentencePunctuated;
    bool  _multilineDD;
    float  _newParagraphIndentDistanceRatio;
    bool  _oversegmentedListItem;
    NSString * _paragraphText;
    float  _rightDistance;
    NSString * _sentencePuncStringToCheck;
    bool  _shouldAllowWhitespaceDelimiter;
    float  _textHeightRatio;
    float  _textWidthRatio;
    float  _topDistanceLeft;
    float  _topDistanceRight;
    float  _topDistanceRightToBottomLeft;
    float  _verticalOverlap;
    double  _verticalSpacing;
    float  _xSpace;
    float  _ySpace;
}

@property float angleDiff;
@property bool bothBeginWithDigits;
@property double cachedEOSLMScore;
@property /* Warning: unhandled struct encoding: '{vector<unsigned int' */ struct  cachedFeatureTokens; /* unknown property attribute:  std::allocator<unsigned int>>=^I}} */
@property double cachedLMScore;
@property bool centerAligned;
@property (retain) CRLineWrapperV1Configuration *configuration;
@property CRLineWrappingContext *context;
@property bool contextNoText;
@property bool continuesToNewColumn;
@property (readonly) bool contributesToVerticalSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double eosLMScore;
@property bool eosLMScoreSet;
@property (readonly) bool excessiveVerticalDistance;
@property bool f1EndsWithDD;
@property bool f2BeginsWithDD;
@property bool f2FullyDD;
@property bool f2StartOfSentence;
@property (retain) <CRLayoutLine> *featureInTest;
@property bool featureInTestNoText;
@property struct CGSize { double x1; double x2; } featureInTestSize;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<unsigned int' */ struct  featureTokens; /* unknown property attribute:  std::allocator<unsigned int>>=^I}} */
@property bool featureTokensSet;
@property (readonly) unsigned long long hash;
@property float horizontalOverlap;
@property (readonly) struct CGSize { double x1; double x2; } imageSize;
@property (readonly) bool isHyphenatedPrefixOfWord;
@property bool isOversegmented;
@property struct CGSize { double x1; double x2; } lastFeatureSize;
@property bool leftAligned;
@property float leftDistance;
@property (readonly) double lmScore;
@property bool lmScoreSet;
@property bool matchingLocales;
@property float midDistance;
@property bool midSentencePunctuated;
@property bool multilineDD;
@property float newParagraphIndentDistanceRatio;
@property bool oversegmentedListItem;
@property (retain) NSString *paragraphText;
@property float rightDistance;
@property (retain) NSString *sentencePuncStringToCheck;
@property (readonly) bool shouldAllowWhitespaceDelimiter;
@property (readonly) bool similarAngles;
@property (readonly) bool similarHeights;
@property (readonly) Class superclass;
@property (readonly) long long textBasedEvaluation;
@property (readonly) long long textContentWrappingScore;
@property float textHeightRatio;
@property float textWidthRatio;
@property (readonly) long long tokenCountDiff;
@property float topDistanceLeft;
@property float topDistanceRight;
@property float topDistanceRightToBottomLeft;
@property float verticalOverlap;
@property double verticalSpacing;
@property (readonly) double verticalSpacingToHeightRatio;
@property (readonly) double widthGrowth;
@property (readonly) long long wordCountWrappingScore;
@property float xSpace;
@property float ySpace;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_computeCharLMScores;
- (void)_computeDDPropertiesWithContext:(id)arg1;
- (void)_computeGeometricProperties;
- (void)_computeIsHyphenatedPrefixOfWord:(id)arg1;
- (void)_computeLMScoreComputingEOS:(bool)arg1;
- (void)_computeNoTextWithContext:(id)arg1;
- (void)_setParagraphTextWithString:(id)arg1 context:(id)arg2;
- (id)_spaceSeparatedTokens:(id)arg1;
- (long long)_tokenCountForString:(id)arg1;
- (float)angleDiff;
- (bool)bothBeginWithDigits;
- (double)cachedEOSLMScore;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })cachedFeatureTokens;
- (double)cachedLMScore;
- (long long)caseWrappingScoreUsingCustomConfiguration:(bool)arg1;
- (bool)centerAligned;
- (id)configuration;
- (id)context;
- (bool)contextNoText;
- (bool)continuesToNewColumn;
- (bool)contributesToVerticalSpacing;
- (id)description;
- (double)eosLMScore;
- (bool)eosLMScoreSet;
- (bool)excessiveVerticalDistance;
- (bool)f1EndsWithDD;
- (bool)f2BeginsWithDD;
- (bool)f2FullyDD;
- (bool)f2StartOfSentence;
- (id)featureInTest;
- (bool)featureInTestNoText;
- (struct CGSize { double x1; double x2; })featureInTestSize;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })featureTokens;
- (bool)featureTokensSet;
- (float)horizontalOverlap;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithTextFeature:(id)arg1 context:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 configuration:(id)arg4;
- (id)initWithTextFeature:(id)arg1 context:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 configuration:(id)arg4 skipTextComputation:(bool)arg5;
- (bool)isHyphenatedPrefixOfWord;
- (bool)isOversegmented;
- (struct CGSize { double x1; double x2; })lastFeatureSize;
- (bool)leftAligned;
- (float)leftDistance;
- (double)lmScore;
- (bool)lmScoreSet;
- (bool)matchingLocales;
- (float)midDistance;
- (bool)midSentencePunctuated;
- (bool)multilineDD;
- (float)newParagraphIndentDistanceRatio;
- (bool)oversegmentedListItem;
- (id)paragraphText;
- (long long)punctuationWrappingScoreUsingCustomConfiguration:(bool)arg1;
- (id)resultByMerging:(id)arg1;
- (float)rightDistance;
- (id)sentencePuncStringToCheck;
- (void)setAngleDiff:(float)arg1;
- (void)setBothBeginWithDigits:(bool)arg1;
- (void)setCachedEOSLMScore:(double)arg1;
- (void)setCachedFeatureTokens:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })arg1;
- (void)setCachedLMScore:(double)arg1;
- (void)setCenterAligned:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setContextNoText:(bool)arg1;
- (void)setContinuesToNewColumn:(bool)arg1;
- (void)setEosLMScoreSet:(bool)arg1;
- (void)setF1EndsWithDD:(bool)arg1;
- (void)setF2BeginsWithDD:(bool)arg1;
- (void)setF2FullyDD:(bool)arg1;
- (void)setF2StartOfSentence:(bool)arg1;
- (void)setFeatureInTest:(id)arg1;
- (void)setFeatureInTestNoText:(bool)arg1;
- (void)setFeatureInTestSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFeatureTokensSet:(bool)arg1;
- (void)setHorizontalOverlap:(float)arg1;
- (void)setIsOversegmented:(bool)arg1;
- (void)setLastFeatureSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeftAligned:(bool)arg1;
- (void)setLeftDistance:(float)arg1;
- (void)setLmScoreSet:(bool)arg1;
- (void)setMatchingLocales:(bool)arg1;
- (void)setMidDistance:(float)arg1;
- (void)setMidSentencePunctuated:(bool)arg1;
- (void)setMultilineDD:(bool)arg1;
- (void)setNewParagraphIndentDistanceRatio:(float)arg1;
- (void)setOversegmentedListItem:(bool)arg1;
- (void)setParagraphText:(id)arg1;
- (void)setRightDistance:(float)arg1;
- (void)setSentencePuncStringToCheck:(id)arg1;
- (void)setTextHeightRatio:(float)arg1;
- (void)setTextWidthRatio:(float)arg1;
- (void)setTopDistanceLeft:(float)arg1;
- (void)setTopDistanceRight:(float)arg1;
- (void)setTopDistanceRightToBottomLeft:(float)arg1;
- (void)setVerticalOverlap:(float)arg1;
- (void)setVerticalSpacing:(double)arg1;
- (void)setXSpace:(float)arg1;
- (void)setYSpace:(float)arg1;
- (bool)shouldAllowWhitespaceDelimiter;
- (bool)similarAngles;
- (bool)similarHeights;
- (long long)textBasedEvaluation;
- (long long)textContentWrappingScore;
- (float)textHeightRatio;
- (float)textWidthRatio;
- (long long)tokenCountDiff;
- (float)topDistanceLeft;
- (float)topDistanceRight;
- (float)topDistanceRightToBottomLeft;
- (float)verticalOverlap;
- (double)verticalSpacing;
- (double)verticalSpacingToHeightRatio;
- (double)widthGrowth;
- (long long)wordCountWrappingScore;
- (float)xSpace;
- (float)ySpace;

@end
