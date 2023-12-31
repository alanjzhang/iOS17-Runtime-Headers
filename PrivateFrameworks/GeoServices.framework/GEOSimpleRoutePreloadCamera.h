/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)implicateAssetMetadataTilesForCoordinate:(struct { double x1; double x2; })arg1 size:(double)arg2;
- (void)implicateTilesForCoordinate:(struct { double x1; double x2; })arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(bool)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8;

@end
