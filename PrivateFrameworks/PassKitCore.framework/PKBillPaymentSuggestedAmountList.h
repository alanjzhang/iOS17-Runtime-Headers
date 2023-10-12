/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBillPaymentSuggestedAmountList : NSObject {
    NSString * _currencyCode;
    PKBillPaymentSuggestedAmount * _initialSuggestedAmount;
    NSDecimalNumber * _maximumAmount;
    NSDecimalNumber * _minimumAmount;
    NSDecimalNumber * _remainingStatementAmount;
    NSDecimalNumber * _smalllestSuggestionAmountBelowRemainingStatementAmount;
    NSArray * _sortedSuggestedAmounts;
    NSMutableDictionary * _suggestedAmountGapMessageForAmount;
    NSMutableDictionary * _suggestionsForAmount;
    NSMutableDictionary * _suggestionsForCategory;
}

@property (nonatomic, readonly, copy) NSString *currencyCode;
@property (nonatomic, retain) PKBillPaymentSuggestedAmount *initialSuggestedAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *maximumAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *minimumAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *remainingStatementAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *smalllestSuggestionAmountBelowRemainingStatementAmount;
@property (nonatomic, readonly, copy) NSArray *sortedSuggestedAmounts;

+ (id)boundaryAngle;
+ (unsigned long long)maximumNumberSuggestions;
+ (id)requiredSuggestedAmountCategories;
+ (id)roundingHandler;

- (void).cxx_destruct;
- (bool)_addSuggestedAmount:(id)arg1 force:(bool)arg2;
- (id)_boundaryAmount;
- (void)_createMandatorySuggestions;
- (id)_lastSuggestedAmountThatIsNotRequred;
- (void)_removeSuggestedAmount:(id)arg1;
- (id)_smalllestSuggestionAmountBelowRemainingStatementAmount;
- (id)_sortedAmounts;
- (id)_sortedSuggestedAmounts;
- (bool)_suggestedAmountIsRequiredCategory:(id)arg1;
- (id)_suggestedAmountThatIsNotRequired:(id)arg1 suggestedAmount2:(id)arg2;
- (void)_updateValues;
- (bool)addSuggestedAmount:(id)arg1;
- (void)addSuggestedAmountGapMessage:(id)arg1 forStartSuggestedAmount:(id)arg2;
- (void)addSuggestedAmountList:(id)arg1;
- (void)attemptToPurgeInvalidSuggestedAmounts;
- (id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)arg1 accountIdentifier:(id)arg2 statementIdentifier:(id)arg3;
- (bool)canAddAmount:(id)arg1;
- (bool)canAddAmount:(id)arg1 andCategory:(unsigned long long)arg2;
- (bool)canAddCategory:(unsigned long long)arg1;
- (id)currencyCode;
- (id)description;
- (id)init;
- (id)initWithCurrencyCode:(id)arg1 remainingMinimumPayment:(id)arg2 remainingStatementBalance:(id)arg3 currentBalance:(id)arg4;
- (id)initialSuggestedAmount;
- (bool)isValidWithUnableReason:(unsigned long long*)arg1;
- (id)maximumAmount;
- (id)maximumSuggestedAmount;
- (id)maximumSuggestedAmountFromCategories:(id)arg1;
- (id)minimumAmount;
- (id)minimumSuggestedAmount;
- (id)minimumSuggestedAmountFromCategories:(id)arg1;
- (id)remainingStatementAmount;
- (void)setInitialSuggestedAmount:(id)arg1;
- (id)smalllestSuggestionAmountBelowRemainingStatementAmount;
- (id)sortedSuggestedAmounts;
- (bool)suggestedAmount:(id)arg1 isAdjoiningSuggestedAmount:(id)arg2;
- (id)suggestedAmountAfterSuggestedAmount:(id)arg1;
- (id)suggestedAmountBeforeSuggestedAmount:(id)arg1;
- (id)suggestedAmountGapMessageForStartSuggestedAmount:(id)arg1;
- (id)suggestedAmountWithCategory:(unsigned long long)arg1;

@end
