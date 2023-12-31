/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRewardsSummaryFetcher : NSObject {
    PKAccount * _account;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

- (void).cxx_destruct;
- (id)_relevantTransactionSourceIdentifiers;
- (id)initWithTransactionSourceCollection:(id)arg1 account:(id)arg2;
- (bool)isPaymentPassRelevant:(id)arg1;
- (bool)isTransactionSourceIdentifierRelevant:(id)arg1;
- (void)rewardsTierSummariesWithCompletion:(id /* block */)arg1;

@end
