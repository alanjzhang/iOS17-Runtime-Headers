/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWalkingRouteMatcher : GEORouteMatcher {
    unsigned long long  _newStepProgressions;
}

- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (double)_maxMatchDistance:(double)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 previousMatchGood:(bool)arg3;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (bool)_supportsSnapping;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2;

@end
