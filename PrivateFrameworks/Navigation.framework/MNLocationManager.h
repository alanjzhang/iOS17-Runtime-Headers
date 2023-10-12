/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate> {
    NSHashTable * _accessRequesters;
    NSBundle * _effectiveBundle;
    NSString * _effectiveBundleIdentifier;
    double  _expectedGpsUpdateInterval;
    CLHeading * _heading;
    NSHashTable * _headingObservers;
    MNLocation * _lastLocation;
    NSLock * _lastLocationLock;
    NSDate * _lastUpdatedHeadingDate;
    CLInUseAssertion * _locationAssertion;
    id /* block */  _locationCorrector;
    NSHashTable * _locationListeners;
    NSHashTable * _locationObservers;
    <MNLocationProvider> * _locationProvider;
    unsigned long long  _locationProviderType;
    <MNLocationRecorder> * _locationRecorder;
    GEOLocationShifter * _locationShifter;
    NSLock * _observersLock;
    bool  _trackingHeading;
    bool  _trackingLocation;
}

@property (nonatomic, readonly) bool coarseModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLHeading *heading;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isHeadingServicesAvailable;
@property (nonatomic, readonly) MNLocation *lastLocation;
@property (nonatomic, copy) id /* block */ locationCorrector;
@property (nonatomic, retain) <MNLocationProvider> *locationProvider;
@property (nonatomic, readonly) unsigned long long locationProviderType;
@property (nonatomic, retain) <MNLocationRecorder> *locationRecorder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;

+ (id)sharedLocationManager;

- (void).cxx_destruct;
- (void)_clearLocationAssertion;
- (void)_createLocationAssertion;
- (bool)_hasLocationAssertion;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_reset;
- (void)_setTrackingHeading:(bool)arg1;
- (void)_setTrackingLocation:(bool)arg1;
- (void)_shiftLocationIfNecessary:(id)arg1 handler:(id /* block */)arg2;
- (void)_updateForNewShiftedLocation:(id)arg1 rawLocation:(id)arg2;
- (void)addLocationListener:(id)arg1;
- (bool)coarseModeEnabled;
- (void)dealloc;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (id)heading;
- (int)headingOrientation;
- (id)init;
- (bool)isHeadingServicesAvailable;
- (id)lastLocation;
- (id /* block */)locationCorrector;
- (id)locationProvider;
- (void)locationProvider:(id)arg1 didChangeCoarseMode:(bool)arg2;
- (void)locationProvider:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationProvider:(id)arg1 didExitRegion:(id)arg2;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (unsigned long long)locationProviderType;
- (id)locationRecorder;
- (void)pushLocation:(id)arg1;
- (void)removeLocationAccessFor:(id)arg1;
- (void)removeLocationAccessForAll;
- (void)removeLocationListener:(id)arg1;
- (void)requestLocationAccessFor:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationCorrector:(id /* block */)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setLocationProviderType:(unsigned long long)arg1;
- (void)setLocationRecorder:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (void)stop;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;
- (double)timeScale;
- (void)useGPSLocationProviderWithCLParameters:(id)arg1;
- (void)useHybridLocationProvider;
- (void)useSimulationLocationProvider:(id)arg1;
- (void)useTraceLocationProvider:(id)arg1;

@end
