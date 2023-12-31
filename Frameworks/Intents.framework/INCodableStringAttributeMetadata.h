/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {
    long long  _capitalization;
    NSString * _defaultValue;
    NSString * _defaultValueID;
    bool  _disableAutocorrect;
    bool  _disableSmartDashes;
    bool  _disableSmartQuotes;
    bool  _multiline;
}

@property (nonatomic) long long capitalization;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultValue;
@property (nonatomic, copy) NSString *defaultValueID;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAutocorrect;
@property (nonatomic) bool disableSmartDashes;
@property (nonatomic) bool disableSmartQuotes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedDefaultValue;
@property (getter=isMultiline, nonatomic) bool multiline;
@property (readonly) Class superclass;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)capitalization;
- (id)defaultValue;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)defaultValueID;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (bool)disableAutocorrect;
- (bool)disableSmartDashes;
- (bool)disableSmartQuotes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMultiline;
- (id)localizedDefaultValue;
- (id)localizedDefaultValueWithLocalizer:(id)arg1;
- (void)setCapitalization:(long long)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDefaultValueID:(id)arg1;
- (void)setDisableAutocorrect:(bool)arg1;
- (void)setDisableSmartDashes:(bool)arg1;
- (void)setDisableSmartQuotes:(bool)arg1;
- (void)setMultiline:(bool)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentParameterMetadataCapitalization)

- (id)__INCodableDescriptionCapitalizationKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentParameterMetadataDefaultValue)

- (id)__INCodableDescriptionDefaultValueKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentParameterMetadataDefaultValueID)

- (id)__INCodableDescriptionDefaultValueIDKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentParameterMetadataDisableAutocorrect)

- (id)__INCodableDescriptionDisableAutocorrectKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentParameterMetadataDisableSmartDashes)

- (id)__INCodableDescriptionDisableSmartDashesKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentParameterMetadataDisableSmartQuotes)

- (id)__INCodableDescriptionDisableSmartQuotesKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentParameterMetadataMultiline)

- (id)__INCodableDescriptionMultilineKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentResponseParameterMetadataCapitalization)

- (id)__INIntentResponseCodableDescriptionCapitalizationKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentResponseParameterMetadataDefaultValue)

- (id)__INIntentResponseCodableDescriptionDefaultValueKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentResponseParameterMetadataDefaultValueID)

- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentResponseParameterMetadataDisableAutocorrect)

- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentResponseParameterMetadataDisableSmartDashes)

- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentResponseParameterMetadataDisableSmartQuotes)

- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINIntentResponseParameterMetadataMultiline)

- (id)__INIntentResponseCodableDescriptionMultilineKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINTypePropertyMetadataCapitalization)

- (id)__INTypeCodableDescriptionCapitalizationKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINTypePropertyMetadataDefaultValue)

- (id)__INTypeCodableDescriptionDefaultValueKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINTypePropertyMetadataDefaultValueID)

- (id)__INTypeCodableDescriptionDefaultValueIDKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINTypePropertyMetadataDisableAutocorrect)

- (id)__INTypeCodableDescriptionDisableAutocorrectKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINTypePropertyMetadataDisableSmartDashes)

- (id)__INTypeCodableDescriptionDisableSmartDashesKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINTypePropertyMetadataDisableSmartQuotes)

- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;

// INCodableStringAttributeMetadata (__INCodableStringAttributeMetadataINTypePropertyMetadataMultiline)

- (id)__INTypeCodableDescriptionMultilineKey;

@end
