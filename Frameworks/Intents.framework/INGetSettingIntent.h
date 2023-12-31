/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetSettingIntent : INIntent <INGetSettingIntentExport>

@property (nonatomic, readonly) long long confirmationValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)confirmationValue;
- (id)domain;
- (id)initWithSettingMetadata:(id)arg1 confirmationValue:(long long)arg2;
- (id)parametersByName;
- (void)setConfirmationValue:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)settingMetadata;
- (id)verb;

// INGetSettingIntent (Deprecated)

- (id)initWithSettingMetadata:(id)arg1;

@end
