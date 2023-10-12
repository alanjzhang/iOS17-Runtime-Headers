/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _MNArrivalUpdaterState_Parked : _MNArrivalUpdaterState <MNVehicleMonitorDelegate> {
    MNVehicleMonitor * _vehicleMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)onEnterState:(id)arg1;
- (void)onLeaveState:(id)arg1;
- (long long)state;
- (void)vehicleMonitorDidConnectToVehicle:(id)arg1;

@end