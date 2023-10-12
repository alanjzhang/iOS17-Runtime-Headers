/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteMatch : NSObject <NSSecureCoding> {
    NSArray * _candidateSteps;
    unsigned long long  _consecutiveProgressionsOffRoute;
    GEONavigationMatchInfo * _detailedMatchInfo;
    double  _distanceFromRoute;
    double  _distanceTraveledOffRoute;
    bool  _isGoodMatch;
    bool  _isTunnelProjection;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _locationCoordinate;
    double  _matchedCourse;
    double  _modifiedCourseAccuracy;
    double  _modifiedHorizontalAccuracy;
    GEOMatchedPathSegment * _pathSegment;
    GEORouteMatch * _projectedFrom;
    double  _roadWidth;
    GEOComposedRoute * _route;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    bool  _shouldProjectLocationAlongRoute;
    unsigned long long  _stepIndex;
    NSDate * _timestamp;
    unsigned long long  _transitID;
}

@property (nonatomic, retain) NSArray *candidateSteps;
@property (nonatomic) unsigned long long consecutiveProgressionsOffRoute;
@property (nonatomic, retain) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) bool isGoodMatch;
@property (nonatomic, readonly) bool isOnParkingLotRoad;
@property (nonatomic) bool isTunnelProjection;
@property (nonatomic, readonly) GEOComposedRouteLeg *leg;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic, readonly) struct { double x1; double x2; } locationCoordinate;
@property (nonatomic) struct { double x1; double x2; double x3; } locationCoordinate3D;
@property (nonatomic) double matchedCourse;
@property (nonatomic) double modifiedCourseAccuracy;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic, retain) GEOMatchedPathSegment *pathSegment;
@property (nonatomic, retain) GEORouteMatch *projectedFrom;
@property (nonatomic, readonly) GEOMapFeatureRoad *road;
@property (nonatomic) double roadWidth;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, readonly) bool routeMatchedToEnd;
@property (nonatomic, readonly) GEOComposedRouteSegment *segment;
@property (nonatomic, readonly) unsigned long long segmentIndex;
@property (nonatomic) bool shouldProjectLocationAlongRoute;
@property (nonatomic, readonly) GEOComposedRouteStep *step;
@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) unsigned long long transitID;
@property (nonatomic, readonly) GEOComposedTransitStationRouteStep *transitStationStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *transitTripStep;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)candidateSteps;
- (unsigned long long)consecutiveProgressionsOffRoute;
- (id)description;
- (id)detailedMatchInfo;
- (double)distanceFromRoute;
- (double)distanceTraveledOffRoute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 locationCoordinate:(struct { double x1; double x2; double x3; })arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringScore:(id)arg1;
- (bool)isGoodMatch;
- (bool)isOnParkingLotRoad;
- (bool)isTunnelProjection;
- (id)leg;
- (unsigned long long)legIndex;
- (struct { double x1; double x2; })locationCoordinate;
- (struct { double x1; double x2; double x3; })locationCoordinate3D;
- (double)matchedCourse;
- (double)modifiedCourseAccuracy;
- (double)modifiedHorizontalAccuracy;
- (id)pathSegment;
- (id)projectedFrom;
- (id)road;
- (double)roadWidth;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (bool)routeMatchBehind:(id)arg1;
- (bool)routeMatchedToEnd;
- (id)segment;
- (unsigned long long)segmentIndex;
- (void)setCandidateSteps:(id)arg1;
- (void)setConsecutiveProgressionsOffRoute:(unsigned long long)arg1;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setDistanceTraveledOffRoute:(double)arg1;
- (void)setIsGoodMatch:(bool)arg1;
- (void)setIsTunnelProjection:(bool)arg1;
- (void)setLocationCoordinate3D:(struct { double x1; double x2; double x3; })arg1;
- (void)setMatchedCourse:(double)arg1;
- (void)setModifiedCourseAccuracy:(double)arg1;
- (void)setModifiedHorizontalAccuracy:(double)arg1;
- (void)setPathSegment:(id)arg1;
- (void)setProjectedFrom:(id)arg1;
- (void)setRoadWidth:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShouldProjectLocationAlongRoute:(bool)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTransitID:(unsigned long long)arg1;
- (bool)shouldProjectLocationAlongRoute;
- (id)step;
- (unsigned long long)stepIndex;
- (id)timestamp;
- (unsigned long long)transitID;
- (id)transitStationStep;
- (id)transitTripStep;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;

// GEORouteMatch (CompanionExtras)

- (id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2;

@end
