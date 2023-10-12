/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMetadataItem : NSObject <AVAirSerializationProtocol, AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
    AVMetadataItemInternal * _priv;
}

@property (nonatomic, readonly, copy) NSString *dataType;
@property (nonatomic, readonly) NSData *dataValue;
@property (nonatomic, readonly) NSDate *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly, copy) NSString *extendedLanguageTag;
@property (nonatomic, readonly, copy) NSDictionary *extraAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly, copy) <NSObject><NSCopying> *value;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (bool)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;
+ (id)_isoUserDataKeysRequiringKeySpaceConversion;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1 containerURL:(id)arg2 securityOptions:(unsigned int)arg3;
+ (id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1;
+ (id)dataTypeForValue:(id)arg1;
+ (id)identifierForKey:(id)arg1 keySpace:(id)arg2;
+ (void)initialize;
+ (id)keyForIdentifier:(id)arg1;
+ (id)keySpaceForIdentifier:(id)arg1;
+ (id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2;

- (bool)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2;
- (id)_conformingDataTypes;
- (void*)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 error:(id*)arg2;
- (id)_createJSONEncodedDataFromValue:(id)arg1 error:(id*)arg2;
- (id)_figMetadataDictionary;
- (id)_figMetadataDictionaryWithValue:(bool)arg1 diviningValueDataType:(bool)arg2;
- (id)_figMetadataFormat;
- (id)_figMetadataSpecificationReturningError:(id*)arg1;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (id)_initWithReader:(struct OpaqueFigMetadataReader { }*)arg1 itemIndex:(long long)arg2;
- (id)_serializationDataType;
- (void)cancelLoading;
- (id)commonKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (void)dealloc;
- (id)description;
- (id)discoveryTimestamp;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)extendedLanguageTag;
- (id)extraAttributes;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)intrinsicAttributesOfExtraAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)keySpace;
- (id)languageCode;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)startDate;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)unicodeLanguageCode;
- (id)unicodeLanguageIdentifier;
- (id)value;

// AVMetadataItem (AVMetadataItemLazyValueLoading)

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(id /* block */)arg2;

// AVMetadataItem (AVMetadataItemTypeCoercion)

- (id)dataValue;
- (id)dateValue;
- (struct CGImage { }*)imageValue;
- (id)numberValue;
- (id)stringValue;

// AVMetadataItem (AVMetadataItem_Local)

- (void)_extractPropertiesFromDictionary:(id)arg1;
- (id)_keyAsString;
- (void)_makePropertiesReady;
- (void)_makeValueReady;
- (void)_updateCommonKey;
- (void)_updateIdentifier;
- (void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg1;
- (void)_updateLanguageInformationFromLocale:(id)arg1;
- (id)_valueFromCFType:(void*)arg1;

// AVMetadataItem (AVPlayerItemMetadataCollectorMetadataItemFiltering)

+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifiers:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVKit.framework/AVKit

// AVMetadataItem (AVAirSerialization)

+ (id)airRepresentationForArray:(id)arg1;
+ (id)itemArrayWithAirRepresentations:(id)arg1;
+ (id)itemWithAirDictionaryRepresentation:(id)arg1;

- (id)airDictionaryRepresentation;

@end