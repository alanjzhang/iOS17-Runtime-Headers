/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCloudSyncContainerDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerIdentifier;
    NSArray * _databaseDescriptions;
    NSString * _deviceIdentifier;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly, copy) NSArray *databaseDescriptions;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseDescriptions;
- (id)debugDescription;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 deviceIdentifier:(id)arg2 databaseDescriptions:(id)arg3;

@end
