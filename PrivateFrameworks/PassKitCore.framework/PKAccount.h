/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccount : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding> {
    unsigned long long  _accessLevel;
    NSURL * _accountBaseURL;
    NSString * _accountIdentifier;
    bool  _accountStateDirty;
    PKAccountAdditionalPushTopics * _additionalPushTopics;
    NSString * _altDSID;
    NSURL * _applyServiceURL;
    bool  _blockAllAccountAccess;
    bool  _blockNotifications;
    NSArray * _cloudStoreZoneNames;
    bool  _coOwner;
    PKAccountDetails * _details;
    unsigned long long  _feature;
    PKAccountFetchPeriods * _fetchPeriods;
    bool  _isCloudAccount;
    NSDate * _lastUpdated;
    NSURL * _paymentServicesBaseURL;
    NSSet * _previousAccountIdentifiers;
    bool  _sharedAccount;
    unsigned long long  _state;
    unsigned long long  _stateReason;
    NSSet * _supportedFeatures;
    NSString * _transactionSourceIdentifier;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long accessLevel;
@property (nonatomic, retain) NSURL *accountBaseURL;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) bool accountStateDirty;
@property (nonatomic, retain) PKAccountAdditionalPushTopics *additionalPushTopics;
@property (nonatomic, readonly) NSSet *allAccountIdentifiers;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, readonly) PKAppleBalanceAccountDetails *appleBalanceDetails;
@property (nonatomic, retain) NSURL *applyServiceURL;
@property (nonatomic) bool blockAllAccountAccess;
@property (nonatomic) bool blockNotifications;
@property (nonatomic, copy) NSArray *cloudStoreZoneNames;
@property (getter=isCoOwner, nonatomic) bool coOwner;
@property (nonatomic, readonly) PKCreditAccountDetails *creditDetails;
@property (nonatomic, retain) PKAccountDetails *details;
@property (nonatomic) unsigned long long feature;
@property (nonatomic, retain) PKAccountFetchPeriods *fetchPeriods;
@property (nonatomic) bool isCloudAccount;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, readonly) PKPayLaterAccountDetails *payLaterDetails;
@property (nonatomic, retain) NSURL *paymentServicesBaseURL;
@property (nonatomic, copy) NSSet *previousAccountIdentifiers;
@property (nonatomic, readonly) PKSavingsAccountDetails *savingsDetails;
@property (getter=isSharedAccount, nonatomic) bool sharedAccount;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic, copy) NSSet *supportedFeatures;
@property (nonatomic, readonly) bool supportsStandaloneTransactions;
@property (nonatomic, copy) NSString *transactionSourceIdentifier;
@property (nonatomic) unsigned long long type;

+ (id)accountIdentifierFromRecordName:(id)arg1;
+ (id)analyticsAccountTypeForAccount:(id)arg1;
+ (id)recordNameForAccountIdentifier:(id)arg1;
+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addSupportedFeaturesToEncryptedCloudRecord:(id)arg1;
- (id)_featureDescriptorsForFeature:(unsigned long long)arg1 inCloudRecord:(id)arg2;
- (id)_featureWithIdentifier:(id)arg1;
- (void)_insertSupportedFeature:(id)arg1;
- (void)_removeSupportedFeatureWithIdentifier:(id)arg1;
- (unsigned long long)accessLevel;
- (id)accountBaseURL;
- (id)accountIdentifier;
- (bool)accountStateDirty;
- (id)additionalPushTopics;
- (id)allAccountIdentifiers;
- (id)altDSID;
- (id)analyticsEventAccountType;
- (id)appleBalanceDetails;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)applyServiceURL;
- (id)associatedPassUniqueID;
- (bool)blockAllAccountAccess;
- (bool)blockNotifications;
- (id)cloudStoreZoneNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDate;
- (id)creditDetails;
- (id)description;
- (id)details;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feature;
- (id)fetchPeriods;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 isCloudAccount:(bool)arg2;
- (bool)isCloudAccount;
- (bool)isCoOwner;
- (bool)isContentEqualToAccount:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSharedAccount;
- (unsigned long long)itemType;
- (id)lastUpdated;
- (id)payLaterDetails;
- (id)paymentServicesBaseURL;
- (id)previousAccountIdentifiers;
- (id)primaryIdentifier;
- (id)productTimeZone;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (id)savingsDetails;
- (void)setAccessLevel:(unsigned long long)arg1;
- (void)setAccountBaseURL:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountStateDirty:(bool)arg1;
- (void)setAdditionalPushTopics:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setApplyServiceURL:(id)arg1;
- (void)setBlockAllAccountAccess:(bool)arg1;
- (void)setBlockNotifications:(bool)arg1;
- (void)setCloudStoreZoneNames:(id)arg1;
- (void)setCoOwner:(bool)arg1;
- (void)setDetails:(id)arg1;
- (void)setFeature:(unsigned long long)arg1;
- (void)setFetchPeriods:(id)arg1;
- (void)setIsCloudAccount:(bool)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setPaymentServicesBaseURL:(id)arg1;
- (void)setPreviousAccountIdentifiers:(id)arg1;
- (void)setSharedAccount:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStateReason:(unsigned long long)arg1;
- (void)setSupportedFeatures:(id)arg1;
- (void)setTransactionSourceIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)stateReason;
- (id)supportedFeatures;
- (bool)supportsExtendedFetch;
- (bool)supportsStandaloneTransactions;
- (id)transactionSourceIdentifier;
- (unsigned long long)type;
- (id)updateUserInfoBaseURL;
- (void)updateWithCloudStoreRecord:(id)arg1;

// PKAccount (PKAppleBalanceAccountFeatureDescriptors)

- (id)_appleBalanceFeatureWithIdentifier:(id)arg1;
- (bool)supportsAMPRedeemGiftcard;
- (id)supportsAMPRedeemGiftcardFeatureDescriptor;
- (bool)supportsAMPTopUp;
- (id)supportsAMPTopUpFeatureDescriptor;
- (bool)supportsInStorePayment;
- (id)supportsInStorePaymentFeatureDescriptor;
- (bool)supportsInStoreTopUp;
- (id)supportsInStoreTopUpFeatureDescriptor;
- (bool)supportsTopUp;
- (id)supportsTopUpFeatureDescriptor;

// PKAccount (PKCreditAccountFeatureDescriptors)

- (id)_creditFeatureWithIdentifier:(id)arg1;
- (bool)accountUserInvitationAllowed;
- (id)accountUserInvitationAllowedFeatureDescriptor;
- (id)addFundingSourceFeatureDescriptor;
- (id)dynamicSecurityCodesFeatureDescriptor;
- (id)exportTransactionDataFeatureDescriptor;
- (bool)hideBillPaymentHoldTime;
- (id)hideBillPaymentHoldTimeFeatureDescriptor;
- (bool)hideDisputeDetails;
- (id)hideDisputeDetailsFeatureDescriptor;
- (bool)hideEnhancedDisputeDetails;
- (id)hideEnhancedDisputeDetailsFeatureDescriptor;
- (bool)hideInterestChargeClarity;
- (id)hideInterestChargeClarityFeatureDescriptor;
- (id)physicalCardActivationFeatureDescriptor;
- (bool)provisioningAllowed;
- (id)provisioningAllowedFeatureDescriptor;
- (id)redeemRewardsFeatureDescriptor;
- (id)requestPhysicalCardFeatureDescriptor;
- (id)requestStatementFeatureDescriptor;
- (id)schedulePaymentFeatureDescriptor;
- (id)scheduleRecurringPaymentsFeatureDescriptor;
- (id)showAccountSummaryFeatureDescriptor;
- (bool)showBillPaymentInterest;
- (id)showBillPaymentInterestFeatureDescriptor;
- (bool)showBillPaymentInterestSummary;
- (id)showBillPaymentInterestSummaryFeatureDescriptor;
- (bool)showCardPromotions;
- (id)showCardPromotionsFeatureDescriptor;
- (bool)showEnhancedMerchants;
- (id)showEnhancedMerchantsFeatureDescriptor;
- (id)showNotificationsFeatureDescriptor;
- (bool)showPaymentSheetRewards;
- (id)showPaymentSheetRewardsFeatureDescriptor;
- (bool)showRewardsGraph;
- (id)showRewardsGraphFeatureDescriptor;
- (id)showVirtualCardFeatureDescriptor;
- (id)statementMetadataFeatureDescriptor;
- (bool)supportsAddFundingSource;
- (bool)supportsDynamicSecurityCodes;
- (bool)supportsExportTransactionData;
- (bool)supportsPhysicalCardActivation;
- (bool)supportsRedeemRewards;
- (bool)supportsRequestPhysicalCard;
- (bool)supportsRequestStatement;
- (bool)supportsSchedulePayment;
- (bool)supportsScheduleRecurringPayments;
- (bool)supportsShowAccountSummary;
- (bool)supportsShowNotifications;
- (bool)supportsShowVirtualCard;
- (bool)supportsStatementMetadata;
- (bool)supportsTransactionSyncReporting;
- (bool)supportsViewStatement;
- (id)transactionSyncReportingFeatureDescriptor;
- (id)viewStatementFeatureDescriptor;

// PKAccount (PKPayLaterAccountFeatureDescriptors)

- (id)_payLaterFeatureWithIdentifier:(id)arg1;
- (bool)hidePayLaterInPaymentSheet;
- (id)hidePayLaterInPaymentSheetFeatureDescriptor;
- (bool)hidePayLaterSetupInWallet;
- (id)hidePayLaterSetupInWalletFeatureDescriptor;
- (bool)supportsDynamicReportIssueTopics;
- (id)supportsDynamicReportIssueTopicsFeatureDescriptor;

// PKAccount (PKSavingsAccountFeatureDescriptor)

- (id)_savingsFeatureWithIdentifier:(id)arg1;
- (id)addBeneficiariesFeatureDescriptor;
- (id)exportSavingsTransactionDataFeatureDescriptor;
- (id)oneTimeDepositFeatureDescriptor;
- (unsigned long long)oneTimeDepositFundingSourceTypes;
- (id)oneTimeDepositWithAppleCashFeatureDescriptor;
- (id)oneTimeWithdrawalFeatureDescriptor;
- (unsigned long long)oneTimeWithdrawalFundingSourceTypes;
- (id)oneTimeWithdrawalWithAppleCashFeatureDescriptor;
- (id)showSavingsAccountSummaryFeatureDescriptor;
- (bool)supportsAddBeneficiaries;
- (bool)supportsExportSavingsTransactionData;
- (bool)supportsOneTimeDeposit;
- (bool)supportsOneTimeDepositWithAppleCash;
- (bool)supportsOneTimeWithdrawal;
- (bool)supportsOneTimeWithdrawalWithAppleCash;
- (bool)supportsShowSavingsAccountSummary;
- (bool)supportsViewSavingsStatement;
- (bool)supportsViewTaxDocuments;
- (id)viewSavingsStatementFeatureDescriptor;
- (id)viewTaxDocumentsFeatureDescriptor;

@end
