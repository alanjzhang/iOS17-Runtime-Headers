/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _arrivalRouteCoordinate;
    GEOComposedRouteStep * _arrivalStep;
    struct { 
        double latitude; 
        double longitude; 
    }  _destinationLocationCoordinate;
    GEOComposedRouteStep * _previousExitStationStep;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1 arrivalStep:(id)arg2;
- (bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
