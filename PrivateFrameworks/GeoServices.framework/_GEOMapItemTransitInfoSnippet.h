/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo> {
    NSString * _displayName;
    NSArray * _labelItems;
    GEOPDTransitInfoSnippet * _transitInfoSnippet;
}

@property (nonatomic, readonly) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departureSequences;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) bool hasTransitIncidentComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) bool isTransitIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSDate *lastFullScheduleValidDate;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly) unsigned long long linesCount;
@property (nonatomic, readonly) <GEOTransitNearbySchedule> *nearbySchedule;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *systems;
@property (nonatomic, readonly) unsigned long long systemsCount;
@property (nonatomic, readonly) double timeToLive;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *transitTripStops;

- (void).cxx_destruct;
- (id)allSequencesForSystem:(id)arg1 container:(id)arg2;
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;
- (id)composedRoute;
- (id)connections;
- (id)departureSequenceContainersForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(id /* block */)arg3;
- (id)departureSequences;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 container:(id)arg3 validForDateFromBlock:(id /* block */)arg4;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(id /* block */)arg4;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(id /* block */)arg3;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(id /* block */)arg3 hasSequencesWithNoDirection:(out bool*)arg4;
- (id)displayName;
- (bool)hasTransitIncidentComponent;
- (id)headSignsForLine:(id)arg1;
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(id /* block */)arg2 excludingIncidentEntities:(id)arg3 usingContainers:(bool)arg4;
- (id)incidents;
- (id)initWithTransitInfoSnippet:(id)arg1;
- (bool)isTransitIncidentsTTLExpired;
- (id)labelItems;
- (id)lastFullScheduleValidDate;
- (id)lines;
- (unsigned long long)linesCount;
- (id)linesForSystem:(id)arg1;
- (id)nearbySchedule;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)arg1;
- (id)serviceResumesResultForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 usingContainers:(bool)arg4;
- (id)subtitle;
- (id)systems;
- (unsigned long long)systemsCount;
- (double)timeToLive;
- (id)title;
- (id)transitTripStops;

@end
