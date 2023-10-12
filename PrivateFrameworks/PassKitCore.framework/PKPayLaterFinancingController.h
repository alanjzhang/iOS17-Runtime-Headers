/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPayLaterFinancingController : NSObject <PKAccountServiceObserver> {
    PKAccountService * _accountService;
    PKPayLaterProductAssessmentCollection * _assessmentCollection;
    bool  _autoPaymentOn;
    PKPayLaterAvailableFundingSourcesFilter * _availableFundingSourcesFilter;
    NSDictionary * _bankFundingSources;
    PKPayLaterFinancingControllerConfiguration * _configuration;
    PKPayLaterFinancingControllerRequest * _currentRequest;
    NSString * _defaultPassUniqueIdentifier;
    bool  _didBeginAnalyticsReporter;
    PKCurrencyAmount * _dueNext30Days;
    PKPayLaterDynamicContent * _dynamicContent;
    bool  _fetchedPayLaterAccount;
    bool  _hasEndedSignPost;
    unsigned long long  _languageDisclosureLocation;
    NSArray * _lastUsedFundingSources;
    NSError * _loadingError;
    unsigned long long  _loadingState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockObservers;
    NSHashTable * _observers;
    PKPassLibrary * _passLibrary;
    PKAccount * _payLaterAccount;
    PKPaymentPass * _payLaterPass;
    PKPaymentService * _paymentService;
    PKPaymentWebService * _paymentWebService;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentService * _peerPaymentService;
    PKPayLaterFinancingControllerRequest * _pendingCancellationRequest;
    PKPayLaterFinancingPlansFetcher * _plansFetcher;
    NSMutableOrderedSet * _queuedRequests;
    NSString * _referrerIdentifier;
    NSObject<OS_dispatch_queue> * _replyQueue;
    PKPayLaterPaymentSource * _selectedFundingSource;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) PKAccountService *accountService;
@property (nonatomic, readonly) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (nonatomic) bool autoPaymentOn;
@property (nonatomic, readonly) bool canShowPayLaterTab;
@property (nonatomic, readonly) PKPayLaterFinancingControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPayLaterDynamicContent *dynamicContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long languageDisclosureLocation;
@property (nonatomic, readonly, copy) NSError *loadingError;
@property (nonatomic, readonly) unsigned long long loadingState;
@property (nonatomic, readonly) PKPassLibrary *passLibrary;
@property (nonatomic, readonly) PKAccount *payLaterAccount;
@property (nonatomic, retain) PKPaymentPass *payLaterPass;
@property (nonatomic, readonly) PKPaymentWebService *paymentWebService;
@property (nonatomic, readonly) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic, retain) PKPayLaterPaymentSource *selectedFundingSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKCurrencyAmount *transactionCurrencyAmount;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)_addFinancingOptionRequest:(id)arg1;
- (bool)_eligibleToFetchFinancingOptionsWithPayLaterAccount:(id)arg1 transactionAmount:(id)arg2;
- (void)_executeNextRequestIfPossible;
- (void)_informObserversAssessmentCollectionChanged;
- (void)_informObserversFinancingOptionCancelled:(id)arg1;
- (void)_payLaterAccountWithCompletion:(id /* block */)arg1;
- (void)_reportEndSignpostIfNecessary;
- (void)_reportEventSignpostIfNecessary;
- (void)_updateLoadingState:(unsigned long long)arg1;
- (bool)_updateStateWithResponse:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (id)accountService;
- (id)assessmentCollection;
- (bool)autoPaymentOn;
- (id)availableFundingSourcesForFinancingOption:(id)arg1;
- (bool)canShowPayLaterTab;
- (id)configuration;
- (void)dealloc;
- (id)dynamicContent;
- (id)dynamicContentPageForPageType:(unsigned long long)arg1 productType:(unsigned long long)arg2 optionIdentifier:(id)arg3;
- (id)dynamicContentPageItemForPageType:(unsigned long long)arg1 productType:(unsigned long long)arg2 optionIdentifier:(id)arg3;
- (id)dynamicContentSectionsForPageType:(unsigned long long)arg1 productType:(unsigned long long)arg2 optionIdentifier:(id)arg3;
- (void)fetchPayLaterDynamicContentForType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithAccountService:(id)arg1 paymentService:(id)arg2 peerPaymentService:(id)arg3 paymentWebService:(id)arg4 passLibrary:(id)arg5 payLaterAccount:(id)arg6 configuration:(id)arg7;
- (void)invalidate;
- (unsigned long long)languageDisclosureLocation;
- (id)loadingError;
- (unsigned long long)loadingState;
- (id)passLibrary;
- (id)payLaterAccount;
- (id)payLaterPass;
- (id)paymentWebService;
- (id)peerPaymentAccount;
- (id)referrerIdentifier;
- (void)refreshAvailableFundingSources;
- (void)registerObserver:(id)arg1;
- (id)selectedFundingSource;
- (void)setAutoPaymentOn:(bool)arg1;
- (void)setPayLaterPass:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setSelectedFundingSource:(id)arg1;
- (void)stateMachineUpdatedAuthenticationState:(unsigned long long)arg1 selectedOptionIdentifier:(id)arg2 error:(id)arg3 cancelReason:(long long)arg4;
- (id)transactionCurrencyAmount;
- (void)unregisterObserver:(id)arg1;
- (void)updateFinancingOptionsWithCompletion:(id /* block */)arg1;

@end
