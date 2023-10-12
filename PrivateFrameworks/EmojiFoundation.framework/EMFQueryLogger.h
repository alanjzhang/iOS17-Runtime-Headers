/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFQueryLogger : NSObject {
    struct __EmojiLocaleDataWrapper { } * _localeData;
}

@property (nonatomic, readonly) struct __EmojiLocaleDataWrapper { }*localeData;

+ (id)documentWeightsStringFromQueryResult:(id)arg1 usingLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2;
+ (id)overriddenResultsStringFromQueryResult:(id)arg1 usingLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2;

- (void)dealloc;
- (id)initWithEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
- (struct __EmojiLocaleDataWrapper { }*)localeData;
- (void)logQueryResult:(id)arg1;

@end
