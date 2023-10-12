/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
 */

@interface BRLTEmojiPrintPreprocessor : NSObject <BRLTPrintPreprocessor> {
    struct __EmojiLocaleDataWrapper { } * _locale;
    NSString * _primaryLanguageCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_setupLocale;
- (void)dealloc;
- (id)init;
- (id)initWithPrimaryLanguageCode:(id)arg1;
- (id)preprocessPrintString:(id)arg1 withLocationMap:(id*)arg2 isEightDot:(bool)arg3 textFormattingRanges:(id)arg4;

@end
