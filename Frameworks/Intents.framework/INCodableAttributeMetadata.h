/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableAttributeMetadata : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSSecureCoding> {
    INCodableAttribute * _codableAttribute;
    NSString * _name;
    NSString * _placeholder;
    NSString * _placeholderID;
}

@property (nonatomic, readonly) INCodableDescription *_codableDescription;
@property (nonatomic, readonly, copy) INCodableLocalizationTable *_localizationTable;
@property (nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedPlaceholder;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *placeholderID;
@property (readonly) Class superclass;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_codableDescription;
- (id)_localizationTable;
- (id)_localizedDialogTokensWithLocalizer:(id)arg1;
- (id)codableAttribute;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 codableAttribute:(id)arg2;
- (id)localizedPlaceholder;
- (id)localizedPlaceholderWithLocalizer:(id)arg1;
- (id)name;
- (id)placeholder;
- (id)placeholderID;
- (void)setCodableAttribute:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// INCodableAttributeMetadata (__INCodableAttributeMetadataINIntentParameterMetadataPlaceholder)

- (id)__INCodableDescriptionPlaceholderKey;

// INCodableAttributeMetadata (__INCodableAttributeMetadataINIntentParameterMetadataPlaceholderID)

- (id)__INCodableDescriptionPlaceholderIDKey;

// INCodableAttributeMetadata (__INCodableAttributeMetadataINIntentResponseParameterMetadataPlaceholder)

- (id)__INIntentResponseCodableDescriptionPlaceholderKey;

// INCodableAttributeMetadata (__INCodableAttributeMetadataINIntentResponseParameterMetadataPlaceholderID)

- (id)__INIntentResponseCodableDescriptionPlaceholderIDKey;

// INCodableAttributeMetadata (__INCodableAttributeMetadataINTypePropertyMetadataPlaceholder)

- (id)__INTypeCodableDescriptionPlaceholderKey;

// INCodableAttributeMetadata (__INCodableAttributeMetadataINTypePropertyMetadataPlaceholderID)

- (id)__INTypeCodableDescriptionPlaceholderIDKey;

@end