/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSCloudDevicesCondition : TPSCondition <TPSCloudDeviceDataSource> {
    NSArray * _registeredDevices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *registeredDevices;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *values;

- (void).cxx_destruct;
- (id)_valuesFromValuesArray:(id)arg1;
- (id)init;
- (id)registeredDevices;
- (void)setRegisteredDevices:(id)arg1;
- (id)targetingValidations;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
