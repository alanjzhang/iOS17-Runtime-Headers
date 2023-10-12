/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentCodableDescription : INRootCodableDescription <INWidgetPlistRepresentable, NSCopying, NSSecureCoding> {
    bool  _configurable;
    NSString * _defaultImageName;
    bool  _deprecated;
    NSString * _descriptiveText;
    NSString * _descriptiveTextLocID;
    bool  _eligibleForSuggestions;
    bool  _eligibleForWidgets;
    NSArray * _entityVerbs;
    bool  _foreground;
    NSString * _inputAttributeName;
    long long  _intentCategory;
    NSString * _keyAttributeName;
    NSArray * _phrases;
    NSString * _title;
    NSString * _titleLocID;
    bool  _userConfirmationRequired;
    NSString * _verb;
    NSNumber * _versioningHash;
}

@property (setter=_setInputAttributeName:, nonatomic, copy) NSString *_inputAttributeName;
@property (setter=_setKeyAttributeName:, nonatomic, copy) NSString *_keyAttributeName;
@property (getter=isConfigurable, nonatomic) bool configurable;
@property (nonatomic, copy) NSString *defaultImageName;
@property (getter=isDeprecated, nonatomic) bool deprecated;
@property (nonatomic, copy) NSString *descriptiveText;
@property (nonatomic, copy) NSString *descriptiveTextLocID;
@property (getter=isEligibleForSuggestions, nonatomic) bool eligibleForSuggestions;
@property (getter=isEligibleForWidgets, nonatomic) bool eligibleForWidgets;
@property (nonatomic, copy) NSArray *entityVerbs;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic, readonly) INCodableAttribute *inputAttribute;
@property (nonatomic) long long intentCategory;
@property (nonatomic, readonly) INCodableAttribute *keyAttribute;
@property (nonatomic, readonly, copy) NSString *localizedDescriptiveText;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, retain) NSArray *phrases;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocID;
@property (nonatomic) bool userConfirmationRequired;
@property (nonatomic, copy) NSString *verb;
@property (nonatomic, copy) NSNumber *versioningHash;

+ (id)_intentClassNameWithDictionary:(id)arg1;
+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeKey;
- (id)_attributesKey;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (id)_ignoredAttributeTags;
- (id)_inputAttributeName;
- (id)_keyAttributeName;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (void)_setInputAttributeName:(id)arg1;
- (void)_setKeyAttributeName:(id)arg1;
- (void)_updateWithIntentCodableDescription:(id)arg1;
- (id)attributes;
- (long long)codableDescriptionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultImageName;
- (id)descriptiveText;
- (id)descriptiveTextLocID;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityVerbs;
- (id)initWithCoder:(id)arg1;
- (id)inputAttribute;
- (long long)intentCategory;
- (bool)isConfigurable;
- (bool)isDeprecated;
- (bool)isEligibleForSuggestions;
- (bool)isEligibleForWidgets;
- (bool)isForeground;
- (id)keyAttribute;
- (id)localizedDescriptiveText;
- (id)localizedDescriptiveTextWithLocalizer:(id)arg1;
- (id)localizedTitle;
- (id)localizedTitleWithLocalizer:(id)arg1;
- (id)phrases;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1;
- (void)setConfigurable:(bool)arg1;
- (void)setDefaultImageName:(id)arg1;
- (void)setDeprecated:(bool)arg1;
- (void)setDescriptiveText:(id)arg1;
- (void)setDescriptiveTextLocID:(id)arg1;
- (void)setEligibleForSuggestions:(bool)arg1;
- (void)setEligibleForWidgets:(bool)arg1;
- (void)setEntityVerbs:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setIntentCategory:(long long)arg1;
- (void)setPhrases:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocID:(id)arg1;
- (void)setUserConfirmationRequired:(bool)arg1;
- (void)setVerb:(id)arg1;
- (void)setVersioningHash:(id)arg1;
- (id)title;
- (id)titleLocID;
- (void)updateWithDictionary:(id)arg1;
- (bool)userConfirmationRequired;
- (id)verb;
- (id)versioningHash;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// INIntentCodableDescription (__)

+ (id)__Key;

// INIntentCodableDescription (__Category)

+ (id)__CategoryKey;

// INIntentCodableDescription (__ClassName)

+ (id)__ClassNameKey;

// INIntentCodableDescription (__ClassPrefix)

+ (id)__ClassPrefixKey;

// INIntentCodableDescription (__Configurable)

+ (id)__ConfigurableKey;

// INIntentCodableDescription (__DefaultImageName)

+ (id)__DefaultImageNameKey;

// INIntentCodableDescription (__Deprecated)

+ (id)__DeprecatedKey;

// INIntentCodableDescription (__Description)

+ (id)__DescriptionKey;

// INIntentCodableDescription (__DescriptionID)

+ (id)__DescriptionIDKey;

// INIntentCodableDescription (__EligibleForWidgets)

+ (id)__EligibleForWidgetsKey;

// INIntentCodableDescription (__Entity)

+ (id)__EntityKey;

// INIntentCodableDescription (__Foreground)

+ (id)__ForegroundKey;

// INIntentCodableDescription (__Hash)

+ (id)__HashKey;

// INIntentCodableDescription (__IneligibleForSuggestions)

+ (id)__IneligibleForSuggestionsKey;

// INIntentCodableDescription (__Input)

+ (id)__InputKey;

// INIntentCodableDescription (__KeyParameter)

+ (id)__KeyParameterKey;

// INIntentCodableDescription (__Name)

+ (id)__NameKey;
+ (id)__NameKey;

// INIntentCodableDescription (__Parameter)

+ (id)__ParameterKey;

// INIntentCodableDescription (__Parameters)

+ (id)__ParametersKey;

// INIntentCodableDescription (__Phrases)

+ (id)__PhrasesKey;

// INIntentCodableDescription (__Summary)

+ (id)__SummaryKey;

// INIntentCodableDescription (__Title)

+ (id)__TitleKey;

// INIntentCodableDescription (__TitleID)

+ (id)__TitleIDKey;

// INIntentCodableDescription (__UserConfirmationRequired)

+ (id)__UserConfirmationRequiredKey;

// INIntentCodableDescription (__Verb)

+ (id)__VerbKey;

// INIntentCodableDescription (__VerbAssociations)

+ (id)__VerbAssociationsKey;

@end
