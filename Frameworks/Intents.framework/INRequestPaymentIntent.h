/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRequestPaymentIntent : INIntent <INRequestPaymentIntentExport>

@property (nonatomic, readonly, copy) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) INPerson *payer;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (bool)_isUserConfirmationRequired;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (bool)configureAttributeSet:(id)arg1 includingData:(bool)arg2;
- (id)currencyAmount;
- (id)domain;
- (id)initWithPayer:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3;
- (id)note;
- (id)parametersByName;
- (id)payer;
- (void)setCurrencyAmount:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPayer:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
