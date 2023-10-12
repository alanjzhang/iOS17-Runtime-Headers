/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORouteMatchUpdater_Transfer : _GEORouteMatchUpdater {
    GEOPBTransitStation * _alightStation;
    GEOComposedRouteStep * _alightStep;
    GEOPBTransitStop * _alightStop;
    GEOPBTransitStation * _boardStation;
    GEOComposedRouteStep * _boardStep;
    GEOPBTransitStop * _boardStop;
    GEOComposedRouteStep * _transferStep;
}

- (void).cxx_destruct;
- (bool)_isLocation:(id)arg1 nearStation:(id)arg2;
- (bool)_isLocation:(id)arg1 nearStop:(id)arg2;
- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2 transferStep:(id)arg3 boardStep:(id)arg4;
- (bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
