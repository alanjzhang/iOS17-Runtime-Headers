/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineService : HDHealthService {
    unsigned long long  _machineType;
}

@property (nonatomic, readonly) unsigned long long machineType;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;
+ (unsigned long long)typeFromAdvertisementData:(id)arg1;

- (unsigned long long)machineType;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (bool)processAdvertisementData:(id)arg1;
- (void)readProperty:(id)arg1;
- (id)servicesInProfile;

@end
