/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding> {
    GEOComposedString * _arInstructionString;
    <GEOTransitArtworkDataSource> * _artworkOverride;
    struct { 
        unsigned int index; 
        float offset; 
    }  _coordinateForDistanceStrings;
    unsigned long long  _creationOrder;
    double  _distance;
    double  _distanceForStrings;
    int  _drivingSide;
    double  _endValidDistance;
    struct { 
        unsigned int index; 
        float offset; 
    }  _endValidRouteCoordinate;
    unsigned long long  _enrouteNoticeIndex;
    GEOGuidanceEvent * _guidanceEvent;
    NSMutableArray * _lanes;
    unsigned long long  _legIndex;
    GEOJunction * _maneuverJunction;
    int  _maneuverType;
    NSArray * _primaryLaneStrings;
    NSArray * _primarySignStrings;
    NSString * _roadName;
    NSArray * _secondaryLaneStrings;
    NSArray * _secondarySignStrings;
    NSData * _serverRouteID;
    unsigned long long  _source;
    unsigned long long  _sourceIndex;
    NSArray * _spokenStrings;
    double  _startValidDistance;
    struct { 
        unsigned int index; 
        float offset; 
    }  _startValidRouteCoordinate;
    unsigned int  _stepID;
    unsigned long long  _stepIndex;
    int  _transportType;
    NSUUID * _uniqueID;
}

@property (nonatomic, readonly) NSArray *announcements;
@property (nonatomic, readonly) NSString *arArrowLabel;
@property (nonatomic, readonly) <GEOServerFormattedString> *arInstruction;
@property (nonatomic, readonly) GEOComposedString *arInstructionString;
@property (nonatomic, readonly) int arType;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artworkOverride;
@property (nonatomic, readonly) int composedGuidanceEventType;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } coordinateForDistanceStrings;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double distanceForStrings;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) double endValidDistance;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } endValidRouteCoordinate;
@property (nonatomic) unsigned long long enrouteNoticeIndex;
@property (nonatomic, readonly) NSString *exclusiveSetIdentifier;
@property (nonatomic, readonly) NSArray *gapRanges;
@property (nonatomic, readonly) bool hasArGuidance;
@property (nonatomic, readonly) bool hasHaptics;
@property (nonatomic, readonly) bool hasJunctionView;
@property (nonatomic, readonly) bool hasSignGuidance;
@property (nonatomic, readonly) bool hasSpokenGuidance;
@property (nonatomic, readonly) bool isImportant;
@property (nonatomic, readonly) bool isLaneGuidanceForManeuver;
@property (nonatomic, readonly) bool isSpecial;
@property (nonatomic, readonly) bool isSticky;
@property (nonatomic, readonly) GEOJunctionView *junctionView;
@property (nonatomic, readonly) NSArray *laneInstructions;
@property (nonatomic, readonly) NSArray *laneTitles;
@property (nonatomic, readonly) NSArray *lanes;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic, readonly) GEOJunction *maneuverJunction;
@property (nonatomic, readonly) int maneuverType;
@property (nonatomic, readonly) unsigned long long numChainedAnnouncements;
@property (nonatomic, readonly) NSArray *primaryLaneStrings;
@property (nonatomic, readonly) NSArray *primarySignStrings;
@property (nonatomic, readonly) double repetitionInterval;
@property (nonatomic, readonly) NSString *roadName;
@property (nonatomic, readonly) NSArray *secondaryLaneStrings;
@property (nonatomic, readonly) NSArray *secondarySignStrings;
@property (nonatomic, readonly) NSData *serverRouteID;
@property (nonatomic, readonly) GEONameInfo *shieldInfo;
@property (nonatomic, readonly) NSArray *signDetails;
@property (nonatomic, readonly) NSArray *signTitles;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long sourceIndex;
@property (nonatomic, readonly) NSArray *spokenStrings;
@property (nonatomic, readonly) unsigned long long stackRanking;
@property (nonatomic, readonly) double startValidDistance;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } startValidRouteCoordinate;
@property (nonatomic, readonly) unsigned int stepID;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) NSUUID *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_junctionViewIDForData:(id)arg1;
- (id)announcements;
- (id)arArrowLabel;
- (id)arInstruction;
- (id)arInstructionString;
- (int)arType;
- (id)artworkOverride;
- (long long)compare:(id)arg1;
- (long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2;
- (long long)comparePriority:(id)arg1;
- (int)composedGuidanceEventType;
- (struct { unsigned int x1; float x2; })coordinateForDistanceStrings;
- (id)description;
- (double)desiredTimeGapToEvent:(id)arg1 chained:(bool)arg2;
- (double)distance;
- (double)distanceForStrings;
- (int)drivingSide;
- (void)encodeWithCoder:(id)arg1;
- (double)endDistanceForSpeed:(double)arg1;
- (double)endValidDistance;
- (struct { unsigned int x1; float x2; })endValidRouteCoordinate;
- (unsigned long long)enrouteNoticeIndex;
- (id)exclusiveSetIdentifier;
- (id)gapRanges;
- (bool)hasArGuidance;
- (bool)hasHaptics;
- (bool)hasJunctionView;
- (bool)hasSignGuidance;
- (bool)hasSpokenGuidance;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoGuidanceEvent:(id)arg1 step:(id)arg2 legIndex:(unsigned long long)arg3 coordinates:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isImportant;
- (bool)isLaneGuidanceForManeuver;
- (bool)isSpecial;
- (bool)isSticky;
- (bool)isValidForSpeed:(double)arg1;
- (id)junctionView;
- (id)laneInstructions;
- (id)laneTitles;
- (id)lanes;
- (unsigned long long)legIndex;
- (id)maneuverJunction;
- (int)maneuverType;
- (unsigned long long)numChainedAnnouncements;
- (id)primaryLaneStrings;
- (id)primarySignStrings;
- (double)repetitionInterval;
- (id)roadName;
- (id)secondaryLaneStrings;
- (id)secondarySignStrings;
- (id)serverRouteID;
- (void)setEnrouteNoticeIndex:(unsigned long long)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setSourceIndex:(unsigned long long)arg1;
- (id)shieldInfo;
- (id)signDetails;
- (id)signTitles;
- (unsigned long long)source;
- (unsigned long long)sourceIndex;
- (id)spokenStrings;
- (unsigned long long)stackRanking;
- (double)startDistanceForSpeed:(double)arg1;
- (double)startValidDistance;
- (struct { unsigned int x1; float x2; })startValidRouteCoordinate;
- (unsigned int)stepID;
- (unsigned long long)stepIndex;
- (int)transportType;
- (double)triggerDistanceForSpeed:(double)arg1 andDuration:(id /* block */)arg2;
- (id)uniqueID;

@end
