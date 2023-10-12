/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding> {
    NSLocale * _dominantLocale;
    NSCountedSet * _localeDetectionCount;
    NSCountedSet * _unsupportedLanguageCounts;
}

@property (nonatomic, copy) NSLocale *dominantLocale;
@property (nonatomic, retain) NSCountedSet *localeDetectionCount;
@property (nonatomic, retain) NSCountedSet *unsupportedLanguageCounts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dominantLocale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localeDetectionCount;
- (void)setDominantLocale:(id)arg1;
- (void)setLocaleDetectionCount:(id)arg1;
- (void)setUnsupportedLanguageCounts:(id)arg1;
- (id)unsupportedLanguageCounts;

@end