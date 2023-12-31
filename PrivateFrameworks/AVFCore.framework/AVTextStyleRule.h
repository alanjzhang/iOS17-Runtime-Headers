/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVTextStyleRule : NSObject <NSCopying> {
    AVTextStyleRuleInternal * _textStyleRule;
}

@property (nonatomic, readonly) NSDictionary *textMarkupAttributes;
@property (nonatomic, readonly) NSString *textSelector;

+ (id)propertyListForTextStyleRules:(id)arg1;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
+ (id)textStyleRulesFromPropertyList:(id)arg1;

- (id)_dictionaryPlistRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTextMarkupAttributes:(id)arg1;
- (id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)textMarkupAttributes;
- (id)textSelector;

@end
