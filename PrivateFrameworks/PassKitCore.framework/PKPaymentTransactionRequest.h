/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionRequest : NSObject <NSSecureCoding> {
    PKCurrencyAmount * _amount;
    long long  _amountComparison;
    NSString * _currencyCode;
    long long  _dateOrder;
    bool  _disputesOnly;
    NSDate * _endDate;
    NSArray * _fundingSourceTypes;
    long long  _limit;
    PKMerchant * _merchant;
    long long  _merchantCategory;
    NSString * _panIdentifier;
    long long  _peerPaymentSubType;
    NSArray * _regions;
    NSDecimalNumber * _rewardsValue;
    unsigned long long  _rewardsValueUnit;
    NSDate * _startDate;
    NSSet * _tags;
    NSSet * _transactionSourceIdentifiers;
    NSArray * _transactionSources;
    NSArray * _transactionStatuses;
    NSArray * _transactionTypes;
}

@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic) long long amountComparison;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) long long dateOrder;
@property (nonatomic) bool disputesOnly;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSArray *fundingSourceTypes;
@property (nonatomic) long long limit;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic) long long merchantCategory;
@property (nonatomic, retain) NSString *panIdentifier;
@property (nonatomic) long long peerPaymentSubType;
@property (nonatomic, retain) NSArray *regions;
@property (nonatomic, retain) NSDecimalNumber *rewardsValue;
@property (nonatomic) unsigned long long rewardsValueUnit;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSSet *tags;
@property (nonatomic, retain) NSSet *transactionSourceIdentifiers;
@property (nonatomic, retain) NSArray *transactionSources;
@property (nonatomic, retain) NSArray *transactionStatuses;
@property (nonatomic, retain) NSArray *transactionTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (long long)amountComparison;
- (id)currencyCode;
- (long long)dateOrder;
- (bool)disputesOnly;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)fundingSourceTypes;
- (id)initWithCoder:(id)arg1;
- (long long)limit;
- (id)merchant;
- (long long)merchantCategory;
- (id)panIdentifier;
- (long long)peerPaymentSubType;
- (id)regions;
- (id)rewardsValue;
- (unsigned long long)rewardsValueUnit;
- (void)setAmount:(id)arg1;
- (void)setAmountComparison:(long long)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDateOrder:(long long)arg1;
- (void)setDisputesOnly:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFundingSourceTypes:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setMerchant:(id)arg1;
- (void)setMerchantCategory:(long long)arg1;
- (void)setPanIdentifier:(id)arg1;
- (void)setPeerPaymentSubType:(long long)arg1;
- (void)setRegions:(id)arg1;
- (void)setRewardsValue:(id)arg1;
- (void)setRewardsValueUnit:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setTransactionSourceIdentifiers:(id)arg1;
- (void)setTransactionSources:(id)arg1;
- (void)setTransactionStatuses:(id)arg1;
- (void)setTransactionTypes:(id)arg1;
- (id)startDate;
- (id)tags;
- (id)transactionSourceIdentifiers;
- (id)transactionSources;
- (id)transactionStatuses;
- (id)transactionTypes;

@end
