/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceMetadata : NSObject <NSSecureCoding> {
    NSString * _deviceName;
    CLLocation * _location;
    NSString * _phoneNumber;
    NSNumber * _primaryJSBLSequenceCounter;
    NSString * _secureElementIdentifier;
    NSString * _serialNumber;
    NSString * _signedPhoneNumber;
    NSString * _signedPhoneNumberVersion;
    NSNumber * _uniqueChipIdentifier;
    NSString * _uniqueDeviceIdentifier;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly) NSString *extensiveLatitude;
@property (nonatomic, readonly) NSString *extensiveLongitude;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSNumber *primaryJSBLSequenceCounter;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSString *signedPhoneNumber;
@property (nonatomic, copy) NSString *signedPhoneNumberVersion;
@property (nonatomic, copy) NSNumber *uniqueChipIdentifier;
@property (nonatomic, copy) NSString *uniqueDeviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)extensiveLatitude;
- (id)extensiveLongitude;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentDeviceMetadata:(id)arg1;
- (id)location;
- (id)phoneNumber;
- (id)primaryJSBLSequenceCounter;
- (id)secureElementIdentifier;
- (id)serialNumber;
- (void)setDeviceName:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPrimaryJSBLSequenceCounter:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSignedPhoneNumber:(id)arg1;
- (void)setSignedPhoneNumberVersion:(id)arg1;
- (void)setUniqueChipIdentifier:(id)arg1;
- (void)setUniqueDeviceIdentifier:(id)arg1;
- (id)signedPhoneNumber;
- (id)signedPhoneNumberVersion;
- (id)uniqueChipIdentifier;
- (id)uniqueDeviceIdentifier;

@end
