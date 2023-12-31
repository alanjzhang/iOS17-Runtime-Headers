/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableObjectAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding> {
    NSString * _originalTypeName;
    NSString * _typeName;
}

@property (setter=_setOriginalTypeName:, nonatomic, copy) NSString *_originalTypeName;
@property (nonatomic, readonly, copy) NSString *className;
@property (nonatomic, copy) NSString *typeName;
@property (nonatomic, readonly) NSValueTransformer *valueTransformer;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_attributeType;
- (id)_originalTypeName;
- (Class)_relationshipValueTransformerClass;
- (void)_setOriginalTypeName:(id)arg1;
- (id)className;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (Class)resolutionResultClass;
- (void)setClassName:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;
- (void)updateWithDictionary:(id)arg1;
- (id)valueTransformer;
- (long long)valueType;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// INCodableObjectAttribute (__INCodableObjectAttributeINIntentParameter)

- (id)__INCodableDescriptionKey;

// INCodableObjectAttribute (__INCodableObjectAttributeINIntentParameterType)

- (id)__INCodableDescriptionTypeKey;

// INCodableObjectAttribute (__INCodableObjectAttributeINIntentResponseParameter)

- (id)__INIntentResponseCodableDescriptionKey;

// INCodableObjectAttribute (__INCodableObjectAttributeINIntentResponseParameterType)

- (id)__INIntentResponseCodableDescriptionTypeKey;

// INCodableObjectAttribute (__INCodableObjectAttributeINTypeProperty)

- (id)__INTypeCodableDescriptionKey;

// INCodableObjectAttribute (__INCodableObjectAttributeINTypePropertyType)

- (id)__INTypeCodableDescriptionTypeKey;

@end
