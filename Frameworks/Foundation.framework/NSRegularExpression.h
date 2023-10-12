/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRegularExpression : NSObject <NSCopying, NSSecureCoding> {
    int  _checkout;
    void * _internal;
    unsigned long long  _options;
    NSString * _pattern;
}

@property (readonly) unsigned long long numberOfCaptureGroups;
@property (readonly) unsigned long long options;
@property (readonly, copy) NSString *pattern;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)escapedPatternForString:(id)arg1;
+ (void)initialize;
+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (unsigned long long)_captureGroupNumberWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfCaptureGroups;
- (unsigned long long)options;
- (id)pattern;

// NSRegularExpression (NSMatching)

- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 usingBlock:(id /* block */)arg4;
- (id)firstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)matchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)numberOfMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfFirstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// NSRegularExpression (NSReplacement)

+ (id)escapedTemplateForString:(id)arg1;

- (unsigned long long)replaceMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withTemplate:(id)arg4;
- (id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(long long)arg3 template:(id)arg4;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withTemplate:(id)arg4;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents

// NSRegularExpression (Intents)

+ (id)_intents_sharedFormatRegularExpression;
+ (id)_intents_sharedFunctionRegularExpression;
+ (id)_intents_sharedOldFormatRegularExpression;
+ (id)_intents_sharedStringsDictFormatRegularExpression;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

// NSRegularExpression (ECMessageBodyParser)

+ (id)ec_attributionExpression;
+ (id)ec_attributionPrefixExpression;
+ (id)ec_copyAttributionRegularExpressionForType:(unsigned long long)arg1;
+ (id)ec_forwardSeparatorExpression;
+ (id)ec_signatureExpression;

// NSRegularExpression (SubjectParser)

+ (id)ec_regularExpressionForList;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

// NSRegularExpression (EmailFoundationAdditions)

+ (id)ef_regularExpressionForQuotedStringsInLocales:(id)arg1;

- (void)ef_enumerateTokensInString:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)ef_stringByRemovingTokensFromString:(id)arg1 matchingOptions:(unsigned long long)arg2 tokenizationOptions:(unsigned long long)arg3 tokenizationHandler:(id /* block */)arg4;
- (id)ef_stringByRemovingTokensFromString:(id)arg1 tokenizationHandler:(id /* block */)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

// NSRegularExpression (IC)

+ (id)ic_patternForTokens:(id)arg1 matchWordBoundaries:(bool)arg2;
+ (id)ic_regexForPrefixMatchingTokens:(id)arg1 substringMatchingTokens:(id)arg2;
+ (id)ic_regexForSearchStrings:(id)arg1;
+ (id)ic_regexForSearchStrings:(id)arg1 matchWordBoundaries:(bool)arg2;
+ (id)ic_uuidRegex;

- (bool)ic_matchesString:(id)arg1;

@end
