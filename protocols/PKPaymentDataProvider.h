/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentDataProvider <NSObject>

@required

- (PKPaymentApplication *)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1;
- (NSString *)defaultPaymentPassIdentifier;
- (<PKPaymentDataProviderDelegate> *)delegate;
- (NSString *)deviceClass;
- (NSString *)deviceName;
- (PKOSVersionRequirement *)deviceVersion;
- (bool)isDeviceInRestrictedMode;
- (bool)isOrderManagementDisabled;
- (bool)isOrderManagementNotificationsDisabled;
- (bool)isPaymentHandoffDisabled;
- (PKPaymentWebService *)paymentWebService;
- (NSString *)secureElementIdentifier;
- (bool)secureElementIsProductionSigned;
- (void)setDefaultPaymentApplication:(void *)arg1 forPassUniqueIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentApplication *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPass *, void*
- (void)setDefaultPaymentPassIdentifier:(NSString *)arg1;
- (void)setDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (void)setOrderManagementDisabled:(bool)arg1;
- (void)setOrderManagementNotificationsDisabled:(bool)arg1;
- (void)setPaymentHandoffDisabled:(bool)arg1;

@optional

- (void)addDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (long long)apiVersion;
- (void)approvedTransactionsForTransactionSourceIdentifiers:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 startDate:(void *)arg4 endDate:(void *)arg5 limit:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSSet *, unsigned long long, unsigned long long, NSDate *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)archiveMessageWithIdentifier:(NSString *)arg1;
- (void)balanceReminderThresholdForBalance:(void *)arg1 pass:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentBalance *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentBalanceReminder *, void*
- (void)balancesForPaymentPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)cancelAutoTopUpForPassWithUniqueIdentifier:(void *)arg1 balanceIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)cashbackByPeriodForTransactionSourceIdentifiers:(NSSet *)arg1 withStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3 calendar:(NSCalendar *)arg4 calendarUnit:(unsigned long long)arg5 type:(unsigned long long)arg6;
- (void)cashbackByPeriodForTransactionSourceIdentifiers:(void *)arg1 withStartDate:(void *)arg2 endDate:(void *)arg3 calendar:(void *)arg4 calendarUnit:(void *)arg5 type:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSSet *, NSDate *, NSDate *, NSCalendar *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)commutePlanReminderForCommutePlan:(void *)arg1 pass:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: PKTransitCommutePlan *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentCommutePlanReminder *, void*
- (void)conflictingExpressPassIdentifiersForPassInformation:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PKExpressPassInformation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)credentialWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKAppletSubcredential *, void*
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1;
- (void)deletePaymentTransactionsWithIdentifiers:(NSSet *)arg1;
- (PKExpressPassInformation *)expressPassInformationForMode:(NSString *)arg1;
- (NSSet *)expressPassesInformation;
- (NSSet *)expressPassesInformationWithCardType:(long long)arg1;
- (void)familyMembersWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)featureApplicationsForAccountIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)felicaStateWithPassUniqueIdentifier:(void *)arg1 paymentApplication:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, PKPaymentApplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKFelicaTransitAppletState *, void*
- (void)hasTransactionsForTransactionSourceIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)hidePayLaterOptions;
- (void)installmentPlanTransactionsForTransactionSourceIdentifiers:(void *)arg1 accountIdentifier:(void *)arg2 redeemed:(void *)arg3 withRedemptionType:(void *)arg4 startDate:(void *)arg5 endDate:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSSet *, NSString *, bool, unsigned long long, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)installmentPlansWithTransactionReferenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)installmentTransactionsForInstallmentPlanIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)mapsMerchantsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (NSString *)messagesAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)passUpgradeWithRequest:(void *)arg1 pass:(void *)arg2 visibleViewController:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: PKPassUpgradeRequest *, PKPaymentPass *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, PKPaymentPass *, void*
- (void)peerPaymentCounterpartHandlesForTransactionSourceIdentifier:(void *)arg1 startDate:(void *)arg2 endDate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)pendingTransactionsForTransactionSourceIdentifiers:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 startDate:(void *)arg4 endDate:(void *)arg5 limit:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSSet *, unsigned long long, unsigned long long, NSDate *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)photosForFamilyMembersWithDSIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)plansForPaymentPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)removeDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (void)removeExpressPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)removeExpressPassWithUniqueIdentifier:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)removeExpressPassesWithCardType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)removeExpressPassesWithCardType:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)removeExpressPassesWithUniqueIdentifiers:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)setBalanceReminder:(void *)arg1 forBalance:(void *)arg2 pass:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: PKPaymentBalanceReminder *, PKPaymentBalance *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setCommutePlanReminder:(void *)arg1 forCommutePlan:(void *)arg2 pass:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: PKPaymentCommutePlanReminder *, PKTransitCommutePlan *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setExpressWithPassInformation:(void *)arg1 credential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKExpressPassInformation *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)setExpressWithPassInformation:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKExpressPassInformation *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, PKExpressPassInformation *, void*
- (void)setExpressWithPassInformation:(void *)arg1 visibleViewController:(void *)arg2 requiresAuth:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: PKExpressPassInformation *, id, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)setHidePayLaterOptions:(bool)arg1;
- (void)sharingCapabilitiesForPassIdentifier:(NSString *)arg1 outHasShares:(bool*)arg2 outHasShareableEntitlements:(bool*)arg3;
- (void)startServiceModeForPassWithUniqueIdentifier:(NSString *)arg1 visibleViewController:(id)arg2;
- (void)submitTransactionAnswerForTransaction:(void *)arg1 questionType:(void *)arg2 answer:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)supportsAddingPaymentPasses;
- (bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (bool)supportsExpressMode:(NSString *)arg1;
- (bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (bool)supportsInAppPaymentsForPass:(PKPass *)arg1;
- (bool)supportsLowPowerExpressMode;
- (bool)supportsMessagesForPass:(PKPass *)arg1;
- (bool)supportsNotificationsForPass:(PKPass *)arg1;
- (bool)supportsTransactionsForPass:(PKPass *)arg1;
- (void)tilesForPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)transactionCountByPeriodForRequest:(void *)arg1 calendar:(void *)arg2 calendarUnit:(void *)arg3 includePurchaseTotal:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: PKPaymentTransactionRequest *, NSCalendar *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)transactionReceiptForTransactionWithIdentifier:(void *)arg1 updateIfNecessary:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKTransactionReceipt *, void*
- (void)transactionReceiptWithUniqueID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKTransactionReceipt *, void*
- (void)transactionTagsForTransactionWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionWithReferenceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentTransaction *, void*
- (void)transactionWithServiceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentTransaction *, void*
- (void)transactionWithServiceIdentifier:(void *)arg1 transactionSourceIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentTransaction *, void*
- (NSString *)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(void *)arg1 withTransactionSource:(void *)arg2 withNotificationServiceData:(void *)arg3 limit:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (NSArray *)transactionsForRequest:(PKPaymentTransactionRequest *)arg1;
- (void)transactionsForRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentTransactionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)transactionsForTransactionSourceIdentifiers:(void *)arg1 matchingMerchant:(void *)arg2 withTransactionSource:(void *)arg3 withBackingData:(void *)arg4 limit:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSSet *, PKMerchant *, unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForTransactionSourceIdentifiers:(void *)arg1 withMerchantCategory:(void *)arg2 withTransactionSource:(void *)arg3 withBackingData:(void *)arg4 startDate:(void *)arg5 endDate:(void *)arg6 limit:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 13: NSSet *, long long, unsigned long long, unsigned long long, NSDate *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForTransactionSourceIdentifiers:(void *)arg1 withPeerPaymentCounterpartHandles:(void *)arg2 withTransactionSource:(void *)arg3 withBackingData:(void *)arg4 limit:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSSet *, NSSet *, unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForTransactionSourceIdentifiers:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 limit:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSSet *, unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForTransactionSourceIdentifiers:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 startDate:(void *)arg4 endDate:(void *)arg5 limit:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSSet *, unsigned long long, unsigned long long, NSDate *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForTransactionSourceIdentifiers:(void *)arg1 withTransactionSource:(void *)arg2 withBackingData:(void *)arg3 startDate:(void *)arg4 endDate:(void *)arg5 orderedByDate:(void *)arg6 limit:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 13: NSSet *, unsigned long long, unsigned long long, NSDate *, NSDate *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsForTransactionSourceIdentifiers:(void *)arg1 withTransactionType:(void *)arg2 withTransactionSource:(void *)arg3 withBackingData:(void *)arg4 startDate:(void *)arg5 endDate:(void *)arg6 limit:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 13: NSSet *, long long, unsigned long long, unsigned long long, NSDate *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transactionsRequiringReviewForAccountWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)transitStateWithPassUniqueIdentifier:(void *)arg1 paymentApplication:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, PKPaymentApplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKTransitAppletState *, void*

@end
