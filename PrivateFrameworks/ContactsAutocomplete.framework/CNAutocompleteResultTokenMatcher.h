/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteResultTokenMatcher : NSObject {
    NSString * _countryCode;
    NSArray * _tokens;
}

+ (id)indexTokensFromPhoneNumber:(id)arg1;
+ (id)normalizePhoneNumber:(id)arg1 countryCode:(id)arg2;
+ (id)searchTokensFromString:(id)arg1;
+ (id)tokenizePhoneNumber:(id)arg1;

- (void).cxx_destruct;
- (bool)evaluateResult:(id)arg1;
- (bool)evaluateSingleResult:(id)arg1;
- (bool)evaluateTopLevelGroupResult:(id)arg1;
- (id /* block */)filterAdapter;
- (id)init;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 countryCode:(id)arg2;
- (id)nameTokensForResult:(id)arg1;
- (id)representationsOfPhoneNumber:(id)arg1;
- (id)tokensForResultName:(id)arg1;
- (id)tokensForResultValue:(id)arg1;

@end
