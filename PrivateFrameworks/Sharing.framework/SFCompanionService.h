/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionService : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceID;
    NSString * _deviceName;
    NSString * _identifier;
    NSString * _ipAddress;
    NSString * _managerID;
    NSNumber * _nsxpcVersion;
    NSString * _serviceType;
}

@property (copy) NSString *deviceID;
@property (copy) NSString *deviceName;
@property (copy) NSString *identifier;
@property (copy) NSString *ipAddress;
@property (copy) NSString *managerID;
@property (copy) NSNumber *nsxpcVersion;
@property (copy) NSString *serviceType;

+ (id)serviceFromAuthorData:(id)arg1;
+ (id)serviceFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)ipAddress;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToService:(id)arg1;
- (id)managerID;
- (id)messageData;
- (id)nsxpcVersion;
- (id)serviceType;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIpAddress:(id)arg1;
- (void)setManagerID:(id)arg1;
- (void)setNsxpcVersion:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
