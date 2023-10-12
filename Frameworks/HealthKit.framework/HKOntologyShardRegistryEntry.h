/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKOntologyShardRegistryEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _availableChecksum;
    NSDate * _availableChecksumDate;
    NSString * _availableLocale;
    NSDate * _availableLocaleDate;
    NSString * _availableRegion;
    NSDate * _availableRegionDate;
    long long  _availableSize;
    NSDate * _availableSizeDate;
    long long  _availableState;
    NSDate * _availableStateDate;
    NSURL * _availableURL;
    NSDate * _availableURLDate;
    long long  _availableVersion;
    NSDate * _availableVersionDate;
    NSString * _currentLocale;
    NSDate * _currentLocaleDate;
    NSString * _currentRegion;
    NSDate * _currentRegionDate;
    long long  _currentVersion;
    NSDate * _currentVersionDate;
    long long  _desiredState;
    NSDate * _desiredStateDate;
    NSString * _identifier;
    NSString * _schemaType;
    long long  _schemaVersion;
    unsigned long long  _settings;
    long long  _slot;
}

@property (nonatomic, readonly, copy) NSString *availableChecksum;
@property (nonatomic, readonly, copy) NSDate *availableChecksumDate;
@property (nonatomic, readonly, copy) NSString *availableLocale;
@property (nonatomic, readonly, copy) NSDate *availableLocaleDate;
@property (nonatomic, readonly, copy) NSString *availableRegion;
@property (nonatomic, readonly, copy) NSDate *availableRegionDate;
@property (nonatomic, readonly) long long availableSize;
@property (nonatomic, readonly, copy) NSDate *availableSizeDate;
@property (nonatomic, readonly) long long availableState;
@property (nonatomic, readonly, copy) NSDate *availableStateDate;
@property (nonatomic, readonly, copy) NSURL *availableURL;
@property (nonatomic, readonly, copy) NSDate *availableURLDate;
@property (nonatomic, readonly) long long availableVersion;
@property (nonatomic, readonly, copy) NSDate *availableVersionDate;
@property (nonatomic, readonly, copy) NSString *currentLocale;
@property (nonatomic, readonly, copy) NSDate *currentLocaleDate;
@property (nonatomic, readonly, copy) NSString *currentRegion;
@property (nonatomic, readonly, copy) NSDate *currentRegionDate;
@property (nonatomic, readonly) long long currentVersion;
@property (nonatomic, readonly, copy) NSDate *currentVersionDate;
@property (nonatomic, readonly) long long desiredState;
@property (nonatomic, readonly, copy) NSDate *desiredStateDate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *schemaType;
@property (nonatomic, readonly) long long schemaVersion;
@property (nonatomic, readonly) unsigned long long settings;
@property (nonatomic, readonly) long long slot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableChecksum;
- (id)availableChecksumDate;
- (id)availableLocale;
- (id)availableLocaleDate;
- (id)availableRegion;
- (id)availableRegionDate;
- (long long)availableSize;
- (id)availableSizeDate;
- (long long)availableState;
- (id)availableStateDate;
- (id)availableURL;
- (id)availableURLDate;
- (long long)availableVersion;
- (id)availableVersionDate;
- (id)copyWithAvailableState:(long long)arg1;
- (id)copyWithAvailableStateImported;
- (id)copyWithAvailableStateNotImportedForDate:(id)arg1;
- (id)copyWithAvailableVersion:(long long)arg1;
- (id)copyWithAvailableVersion:(long long)arg1 availableState:(long long)arg2;
- (id)copyWithCurrentVersionUndeterminedForDate:(id)arg1;
- (id)copyWithDesiredState:(long long)arg1;
- (id)copyWithSlot:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLocale;
- (id)currentLocaleDate;
- (id)currentRegion;
- (id)currentRegionDate;
- (long long)currentVersion;
- (id)currentVersionDate;
- (id)debugDescription;
- (id)description;
- (long long)desiredState;
- (id)desiredStateDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 schemaType:(id)arg2 schemaVersion:(long long)arg3 availableURL:(id)arg4;
- (id)initWithIdentifier:(id)arg1 schemaType:(id)arg2 schemaVersion:(long long)arg3 availableVersion:(long long)arg4 availableRegion:(id)arg5 availableLocale:(id)arg6 availableURL:(id)arg7 availableChecksum:(id)arg8 availableSize:(long long)arg9 date:(id)arg10;
- (id)initWithIdentifier:(id)arg1 schemaType:(id)arg2 schemaVersion:(long long)arg3 availableVersion:(long long)arg4 date:(id)arg5;
- (id)initWithIdentifier:(id)arg1 schemaType:(id)arg2 schemaVersion:(long long)arg3 desiredState:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 schemaType:(id)arg2 schemaVersion:(long long)arg3 settings:(unsigned long long)arg4 slot:(long long)arg5 desiredState:(long long)arg6 desiredStateDate:(id)arg7 currentVersion:(long long)arg8 currentVersionDate:(id)arg9 currentRegion:(id)arg10 currentRegionDate:(id)arg11 currentLocale:(id)arg12 currentLocaleDate:(id)arg13 availableVersion:(long long)arg14 availableVersionDate:(id)arg15 availableRegion:(id)arg16 availableRegionDate:(id)arg17 availableLocale:(id)arg18 availableLocaleDate:(id)arg19 availableURL:(id)arg20 availableURLDate:(id)arg21 availableChecksum:(id)arg22 availableChecksumDate:(id)arg23 availableSize:(long long)arg24 availableSizeDate:(id)arg25 availableState:(long long)arg26 availableStateDate:(id)arg27;
- (bool)isEqual:(id)arg1;
- (id)schemaType;
- (long long)schemaVersion;
- (unsigned long long)settings;
- (long long)slot;
- (bool)unitTesting_isIdentical:(id)arg1;
- (id)updatedCopyWithAvailableVersion:(long long)arg1 availableRegion:(id)arg2 availableLocale:(id)arg3 availableURL:(id)arg4 availableChecksum:(id)arg5 availableSize:(long long)arg6 date:(id)arg7;

@end
