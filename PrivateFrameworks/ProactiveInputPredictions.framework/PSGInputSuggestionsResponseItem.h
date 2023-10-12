/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
 */

@interface PSGInputSuggestionsResponseItem : NSObject <NSCopying, NSSecureCoding> {
    PSGStructuredInfoSuggestion * _structuredInfoSuggestion;
    PSGTextualResponseSuggestion * _textualResponseSuggestion;
}

@property (nonatomic, readonly) PSGStructuredInfoSuggestion *structuredInfoSuggestion;
@property (nonatomic, readonly) PSGTextualResponseSuggestion *textualResponseSuggestion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextualResponseSuggestion:(id)arg1 structuredInfoSuggestion:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (id)predictedValue;
- (id)structuredInfoSuggestion;
- (id)textualResponseSuggestion;

@end
