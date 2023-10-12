/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying> {
    bool  _allowsExtendedAttributes;
    bool  _appliesSourcePositionAttributes;
    long long  _failurePolicy;
    long long  _interpretedSyntax;
    NSString * _languageCode;
}

@property bool allowsExtendedAttributes;
@property bool appliesSourcePositionAttributes;
@property long long failurePolicy;
@property long long interpretedSyntax;
@property (copy) NSString *languageCode;

- (bool)allowsExtendedAttributes;
- (bool)appliesSourcePositionAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)failurePolicy;
- (unsigned long long)hash;
- (id)init;
- (long long)interpretedSyntax;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)setAllowsExtendedAttributes:(bool)arg1;
- (void)setAppliesSourcePositionAttributes:(bool)arg1;
- (void)setFailurePolicy:(long long)arg1;
- (void)setInterpretedSyntax:(long long)arg1;
- (void)setLanguageCode:(id)arg1;

// NSAttributedStringMarkdownParsingOptions (NSAttributedStringMarkdownParsingOptionConveniences)

+ (id)allowingExtendedAttributes;

// NSAttributedStringMarkdownParsingOptions (NSLocalizedAttributedString)

+ (id)_localizedAttributedStringParsingOptions;

@end
