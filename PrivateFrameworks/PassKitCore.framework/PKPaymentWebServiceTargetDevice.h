/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol> {
    PKAssertion * _activePasscodeUpgradeFlowAssertion;
    bool  _activePasscodeUpgradeFlowAssertionActive;
    PKPassLibrary * _passLibrary;
    PKPassUpgradeController * _passUpgradeController;
    PKPaymentService * _paymentService;
    PKAssertion * _provisioningAssertion;
    bool  _provisioningAssertionActive;
    PKAssertion * _requiringUpgradedPasscodeAssertion;
    bool  _requiringUpgradedPasscodeAssertionActive;
    PKAssertion * _verificationAssertion;
    bool  _verificationAssertionActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)localTargetDevice;

- (void).cxx_destruct;
- (void)_accountAttestationAnonymizationSaltWithCompletion:(id /* block */)arg1;
- (void)_addPass:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (void)_addPassShare:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_cachedFeatureApplicationsForProvisioningWithCompletion:(id /* block */)arg1;
- (void)_canAcceptInvitation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_canAddSecureElementPassWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(id /* block */)arg3;
- (void)_consistencyCheck;
- (void)_credentialWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_downloadAllPaymentPasses;
- (void)_enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)arg1;
- (void)_featureApplicationsForProvisioningWithCompletion:(id /* block */)arg1;
- (void)_initializeSecureElement:(id /* block */)arg1;
- (void)_initializeSecureElementIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_passOwnershipTokenWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_passSharesForCredentialIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_paymentWebService:(id)arg1 pass:(id)arg2 withExpressInfo:(id)arg3 hasDisqualifyingConflicts:(id /* block */)arg4;
- (void)_performDeviceCheckInWithCompletion:(id /* block */)arg1;
- (void)_performDeviceRegistrationReturningContextForReason:(id)arg1 brokerURL:(id)arg2 completion:(id /* block */)arg3;
- (void)_performProductActionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_productsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;
- (void)_removeSharingInvitation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)_requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_sanitizeExpressPasses;
- (void)_setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)_setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(id /* block */)arg3;
- (void)_startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)_storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)_subcredentialInvitationsWithCompletion:(id /* block */)arg1;
- (void)_updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)_validateCommonPreconditionsWithCompletion:(id /* block */)arg1;
- (bool)_willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;
- (void)acceptCarKeyShareForMessage:(id)arg1 activationCode:(id)arg2 completion:(id /* block */)arg3;
- (void)accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)accountsWithCompletion:(id /* block */)arg1;
- (void)addISO18013Blobs:(id)arg1 cardType:(long long)arg2 completion:(id /* block */)arg3;
- (void)addPendingProvisionings:(id)arg1 completion:(id /* block */)arg2;
- (id)allPaymentApplicationUsageSummaries;
- (id)appleAccountInformation;
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)areUnifiedAccessPassesSupported;
- (void)availableHomeKeyPassesWithCompletionHandler:(id /* block */)arg1;
- (id)bridgedClientInfo;
- (void)cacheSharingMessageFromMailboxAddress:(id)arg1 message:(id)arg2;
- (void)cachedFeatureApplicationsForProvisioningWithCompletion:(id /* block */)arg1;
- (id)cellularNetworkRegion;
- (void)checkFidoKeyPresenceForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 completion:(id /* block */)arg4;
- (void)checkInvitationStatusForMailboxAddress:(id)arg1 completion:(id /* block */)arg2;
- (bool)claimSecureElementForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(id /* block */)arg1;
- (void)consistencyCheck;
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)createFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 challenge:(id)arg3 externalizedAuth:(id)arg4 completion:(id /* block */)arg5;
- (void)createShareForPartialShareInvitation:(id)arg1 authorization:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)currentPassbookState;
- (void)currentPasscodeMeetsUpgradedPasscodePolicy:(id /* block */)arg1;
- (void)currentSecureElementSnapshot:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;
- (void)deleteReservation:(id)arg1 completion:(id /* block */)arg2;
- (id)deviceClass;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceIDSIdentifier;
- (id)deviceName;
- (id)deviceRegion;
- (id)deviceSerialNumber;
- (id)deviceVersion;
- (void)displayableEntitlementsForPassIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)displayableSharesForPassIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)encryptedServiceProviderDataForSecureElementPass:(id)arg1 completion:(id /* block */)arg2;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)arg1;
- (id)entitlementsForPassIdentifier:(id)arg1;
- (void)familyMembersWithCompletion:(id /* block */)arg1;
- (void)featureApplicationsForProvisioningWithCompletion:(id /* block */)arg1;
- (bool)felicaSecureElementIsAvailable;
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)arg1 completion:(id /* block */)arg2;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)arg1 completion:(id /* block */)arg2;
- (void)hasActiveExternallySharedPasses:(id /* block */)arg1;
- (id)init;
- (void)longTermPrivacyKeyForCredentialGroupIdentifier:(id)arg1 reuseExisting:(bool)arg2 completion:(id /* block */)arg3;
- (unsigned long long)maximumPaymentCards;
- (void)meetsProvisioningRequirements:(id)arg1 completion:(id /* block */)arg2;
- (bool)meetsProvisioningRequirements:(id)arg1 missingRequirements:(id*)arg2;
- (void)noteForegroundVerificationObserverActive:(bool)arg1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id /* block */)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (id)osVersion;
- (unsigned long long)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 accountAttestationAnonymizationSaltWithCompletion:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 addPassShare:(id)arg2 onCredential:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 addSecureElementPass:(id)arg2 properties:(id)arg3 completion:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 canAcceptInvitation:(id)arg2 withCompletionV2:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 canAddSecureElementPassWithConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 credentialWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 declineRelatedSharingInvitationsIfNecessary:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 generateTransactionKeyWithParameters:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 isPassExpressWithUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 matchingInvitationOnDevice:(id)arg2 withTimeout:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 passSharesForCredentialIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)paymentWebService:(id)arg1 passWithUniqueID:(id)arg2;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataIncludingDeviceMetadata:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 removeSharingInvitation:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 removeSharingInvitationReceipts:(id)arg2 onCredential:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 setAccountAttestationAnonymizationSalt:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;
- (void)paymentWebService:(id)arg1 subcredentialInvitationsWithCompletion:(id /* block */)arg2;
- (id)paymentWebService:(id)arg1 supportedRegionFeatureOfType:(long long)arg2;
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 updateMetadataOnPass:(id)arg2 withCredential:(id)arg3 completion:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (bool)paymentWebServiceSupportsAccounts:(id)arg1;
- (bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (void)performDeviceCheckInWithCompletion:(id /* block */)arg1;
- (void)performDeviceRegistrationReturningContextForReason:(id)arg1 brokerURL:(id)arg2 completion:(id /* block */)arg3;
- (void)performProductActionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(bool)arg2 completion:(id /* block */)arg3;
- (void)prewarmCreateShareForPassIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)productsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)provisionHomeKeyPassForSerialNumbers:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)registrationSupportedInCurrentRegionForWebService:(id)arg1;
- (void)relinquishInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removePendingProvisioningOfType:(id)arg1 withUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)arg1;
- (void)requestBackgroundRegistrationForCredential:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)reserveStorageForAppletTypes:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)retrievePendingProvisioningsWithType:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveShareInvitationForMailboxAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)revokeShareForPassIdentifier:(id)arg1 share:(id)arg2 shouldCascade:(bool)arg3 completion:(id /* block */)arg4;
- (void)revokeSharesForPassIdentifier:(id)arg1 shares:(id)arg2 shouldCascade:(bool)arg3 completion:(id /* block */)arg4;
- (id)secureElementIdentifiers;
- (bool)secureElementIsAvailable;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (bool)secureElementSupportsExpressMode;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)signWithFidoKeyForRelyingParty:(id)arg1 relyingPartyAccountHash:(id)arg2 fidoKeyHash:(id)arg3 challenge:(id)arg4 publicKeyIdentifier:(id)arg5 externalizedAuth:(id)arg6 completion:(id /* block */)arg7;
- (void)signatureForAuthToken:(id)arg1 webService:(id)arg2 completion:(id /* block */)arg3;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(bool)arg1;
- (void)statusForShareableCredentials:(id)arg1 completion:(id /* block */)arg2;
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
- (bool)supportsAutomaticPassPresentation;
- (bool)supportsCheckingProvisioningRequirements;
- (bool)supportsCredentialType:(long long)arg1;
- (bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (void)triggerCloudStoreZoneCreationForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
- (void)updateShareForPassIdentifier:(id)arg1 share:(id)arg2 authorization:(id)arg3 completion:(id /* block */)arg4;
- (void)updatedAccountsForProvisioningWithCompletion:(id /* block */)arg1;
- (id)upgradeRequestForPass:(id)arg1;
- (bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;

@end
