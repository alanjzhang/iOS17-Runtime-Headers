/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/UniformTypeIdentifiers.framework/UniformTypeIdentifiers
 */

@interface UTType : NSObject <NSCopying, NSSecureCoding> {
    UTTypeRecord * _typeRecord;
}

@property (readonly) NSSet *_childTypes;
@property (readonly) long long _constantIndex;
@property (getter=_isCoreType, readonly) bool _coreType;
@property (getter=_isExported, readonly) bool _exported;
@property (getter=_isImported, readonly) bool _imported;
@property (readonly) NSString *_kindString;
@property (readonly) NSDictionary *_kindStringDictionary;
@property (readonly) NSDictionary *_localizedDescriptionDictionary;
@property (readonly) NSOrderedSet *_parentTypes;
@property (getter=_isRealized, readonly) bool _realized;
@property (readonly) NSSet *_subtypes;
@property (readonly) UTTypeRecord *_typeRecord;
@property (getter=_isWildcard, readonly) bool _wildcard;
@property (getter=isDeclared, readonly) bool declared;
@property (getter=isDynamic, readonly) bool dynamic;
@property (readonly) NSString *identifier;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *preferredFilenameExtension;
@property (readonly) NSString *preferredMIMEType;
@property (getter=isPublicType, readonly) bool publicType;
@property (readonly) NSURL *referenceURL;
@property (readonly) NSSet *supertypes;
@property (readonly) NSDictionary *tags;
@property (readonly) NSNumber *version;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/UniformTypeIdentifiers.framework/UniformTypeIdentifiers

+ (void)_enumerateAllDeclaredTypesUsingBlock:(id /* block */)arg1;
+ (id)_typeOfItemAtFileURL:(id)arg1 error:(id*)arg2;
+ (id)_typeOfPromiseAtFileURL:(id)arg1 error:(id*)arg2;
+ (id)_typeWithTypeRecord:(id)arg1 detachTypeRecord:(bool)arg2 findConstant:(bool)arg3;
+ (id)_typesWithIdentifiers:(id)arg1;
+ (void)_unrealizeAllCoreTypes;
+ (id)new;
+ (bool)supportsSecureCoding;
+ (id)typeWithFilenameExtension:(id)arg1;
+ (id)typeWithFilenameExtension:(id)arg1 conformingToType:(id)arg2;
+ (id)typeWithIdentifier:(id)arg1;
+ (id)typeWithMIMEType:(id)arg1;
+ (id)typeWithMIMEType:(id)arg1 conformingToType:(id)arg2;

- (void).cxx_destruct;
- (id)_childTypes;
- (long long)_constantIndex;
- (id)_initWithTypeRecord:(id)arg1;
- (bool)_isCoreType;
- (bool)_isExported;
- (bool)_isImported;
- (bool)_isRealized;
- (bool)_isWildcard;
- (id)_kindString;
- (id)_kindStringDictionary;
- (id)_kindStringWithPreferredLocalizations:(id)arg1;
- (id)_localizedDescriptionDictionary;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1;
- (id)_parentTypes;
- (id)_preferredTagOfClass:(id)arg1;
- (id)_subtypes;
- (id)_typeRecord;
- (void)_unrealize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isEqual:(id)arg1;
- (bool)isPublicType;
- (id)localizedDescription;
- (id)preferredFilenameExtension;
- (id)preferredMIMEType;
- (id)referenceURL;
- (id)version;

// UTType (Accessory)

+ (id)_typeWithBluetoothProductID:(unsigned int)arg1 vendorID:(unsigned short)arg2;

// UTType (Conformance)

- (bool)conformsToType:(id)arg1;
- (bool)isSubtypeOfType:(id)arg1;
- (bool)isSupertypeOfType:(id)arg1;
- (id)supertypes;

// UTType (DeviceModelCodes)

+ (id)_typeOfCurrentDevice;
+ (id)_typeWithDeviceModelCode:(id)arg1;
+ (id)_typeWithDeviceModelCode:(id)arg1 enclosureColor:(struct UTHardwareColor { unsigned char x1; unsigned char x2[3]; union { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_3_1_1; int x_3_1_2; } x3; })arg2;
+ (id)_typeWithDeviceModelCodeWithoutResolvingCurrentDevice:(id)arg1;

- (bool)_getEnclosureColor:(struct UTHardwareColor { unsigned char x1; unsigned char x2[3]; union { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_3_1_1; int x_3_1_2; } x3; }*)arg1;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x1; unsigned char x2[3]; union { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_3_1_1; int x_3_1_2; } x3; }*)arg1 count:(unsigned long long)arg2;
- (bool)_getPreferredEnclosureColor:(struct UTHardwareColor { unsigned char x1; unsigned char x2[3]; union { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_3_1_1; int x_3_1_2; } x3; }*)arg1;

// UTType (ExtendedImportsAndExports)

+ (id)_exportedTypeWithIdentifier:(id)arg1 bundle:(id)arg2 conformingToType:(id)arg3;
+ (id)_importedTypeWithIdentifier:(id)arg1 bundle:(id)arg2 conformingToType:(id)arg3;

// UTType (LocalConstants)

+ (id)exportedTypeWithIdentifier:(id)arg1;
+ (id)exportedTypeWithIdentifier:(id)arg1 conformingToType:(id)arg2;
+ (id)importedTypeWithIdentifier:(id)arg1;
+ (id)importedTypeWithIdentifier:(id)arg1 conformingToType:(id)arg2;

// UTType (UTSwiftOverlaySupport)

+ (id)_typeWithIdentifier:(id)arg1 constantIndex:(long long)arg2 error:(id*)arg3;

// UTType (UTTagSpecification)

+ (id)typeWithTag:(id)arg1 tagClass:(id)arg2 conformingToType:(id)arg3;
+ (id)typesWithTag:(id)arg1 tagClass:(id)arg2 conformingToType:(id)arg3;

- (id)tags;

// UTType (UTURLPropertyProviderSupport)

+ (id)_constantTypeForURLPropertyProviderWithIdentifier:(id)arg1;
+ (id)_typeForURLPropertyProviderWithTypeRecord:(id)arg1;

- (bool)_shouldURLPropertyProviderEncodeTypeRecord;

// UTType (UndeclaredTypes)

+ (id)_typeWithIdentifier:(id)arg1 allowUndeclared:(bool)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider

// UTType (FPCaching)

+ (id)fp_cachedTypeWithIdentifier:(id)arg1;
+ (id)fp_cachedTypeWithIdentifier:(id)arg1 alreadyAvailableType:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ShazamKit.framework/ShazamKit

// UTType (SHShazamAdditions)

+ (id)SHCustomCatalogContentType;
+ (id)SHSignatureContentType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

// UTType (BRAdditions)

- (bool)br_isAliasFileType;
- (bool)br_isDirectoryType;
- (bool)br_isDocumentType;
- (bool)br_isFileType;
- (bool)br_isPackageType;
- (bool)br_isSymbolicLinkType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

// UTType (DOCAdditions)

+ (id)doc_contentTypesForIdentifiers:(id)arg1;
+ (id)doc_identifiersForContentTypes:(id)arg1;

- (bool)doc_conformsToAnyInContentTypes:(id)arg1;

// UTType (DOCNode)

- (long long)_doc_fileTypeCompare:(id)arg1;
- (bool)doc_conformsToFolder;

@end
