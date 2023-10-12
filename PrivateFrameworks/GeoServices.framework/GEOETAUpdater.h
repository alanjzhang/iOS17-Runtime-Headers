/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAUpdater : NSObject {
    bool  _allowRequests;
    GEOApplicationAuditToken * _auditToken;
    GEOCommonOptions * _commonOptions;
    GEOETATrafficUpdateRequest * _currentETARequest;
    double  _debugTimeWindowDuration;
    <GEOETAUpdaterDelegate> * _delegate;
    GEOComposedWaypoint * _destination;
    NSData * _directionsResponseID;
    NSTimer * _etaIdleTimer;
    GEOComposedETARoute * _etaRoute;
    long long  _etaState;
    double  _lastETARequestTime;
    unsigned long long  _maxAlternateRoutesCount;
    double  _requestInterval;
    NSString * _requestingAppIdentifier;
    GEOComposedRoute * _route;
    GEORouteAttributes * _routeAttributes;
    GEORouteMatch * _routeMatch;
    bool  _shouldUpdateTrafficOnRoute;
    bool  _shouldUseConditionalRequest;
    GEOLocation * _userLocation;
    NSArray * _waypoints;
}

@property (nonatomic) bool allowRequests;
@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic) double debugTimeWindowDuration;
@property (nonatomic) <GEOETAUpdaterDelegate> *delegate;
@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic, readonly) bool requestInProgress;
@property (nonatomic) double requestInterval;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (nonatomic) bool shouldUpdateTrafficOnRoute;
@property (nonatomic) bool shouldUseConditionalRequest;
@property (nonatomic, retain) GEOLocation *userLocation;
@property (nonatomic, retain) NSArray *waypoints;

- (void).cxx_destruct;
- (void)_addRouteAttributesToRequest:(id)arg1 completion:(id /* block */)arg2;
- (double)_calculateNextTransitionTime;
- (void)_clearTimer;
- (void)_continueUpdateRequests;
- (double)_currentTime;
- (void)_sendRequest:(id)arg1;
- (bool)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (void)_trafficRequest:(id)arg1 finished:(id)arg2;
- (id)_updateOrCreateRequest:(id)arg1;
- (void)_updateRequest:(id)arg1;
- (bool)allowRequests;
- (id)auditToken;
- (void)cancelRequest;
- (id)currentStep;
- (void)dealloc;
- (double)debugTimeWindowDuration;
- (id)delegate;
- (id)destination;
- (id)directionsResponseID;
- (id)init;
- (id)initWithRoute:(id)arg1 waypoints:(id)arg2 routeAttributes:(id)arg3;
- (unsigned long long)maxAlternateRoutesCount;
- (bool)requestInProgress;
- (double)requestInterval;
- (void)requestUpdate;
- (id)requestingAppIdentifier;
- (void)reset;
- (id)route;
- (id)routeAttributes;
- (id)routeMatch;
- (void)setAllowRequests:(bool)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setDebugTimeWindowDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setMaxAlternateRoutesCount:(unsigned long long)arg1;
- (void)setRequestInterval:(double)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShouldUpdateTrafficOnRoute:(bool)arg1;
- (void)setShouldUseConditionalRequest:(bool)arg1;
- (void)setUserLocation:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (bool)shouldUpdateTrafficOnRoute;
- (bool)shouldUseConditionalRequest;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;
- (id)userLocation;
- (id)waypoints;

@end
