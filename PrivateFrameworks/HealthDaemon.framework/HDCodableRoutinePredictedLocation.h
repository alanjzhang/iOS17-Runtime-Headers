/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutinePredictedLocation : PBCodable <NSCopying> {
    double  _confidence;
    NSData * _geoData;
    struct { 
        unsigned int confidence : 1; 
        unsigned int nextEntryTime : 1; 
        unsigned int modeOfTransportation : 1; 
        unsigned int sourceType : 1; 
    }  _has;
    HDCodableRoutineLocation * _locationOfInterest;
    int  _modeOfTransportation;
    double  _nextEntryTime;
    int  _sourceType;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSData *geoData;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasGeoData;
@property (nonatomic, readonly) bool hasLocationOfInterest;
@property (nonatomic) bool hasModeOfTransportation;
@property (nonatomic) bool hasNextEntryTime;
@property (nonatomic) bool hasSourceType;
@property (nonatomic, retain) HDCodableRoutineLocation *locationOfInterest;
@property (nonatomic) int modeOfTransportation;
@property (nonatomic) double nextEntryTime;
@property (nonatomic) int sourceType;

- (void).cxx_destruct;
- (int)StringAsModeOfTransportation:(id)arg1;
- (int)StringAsSourceType:(id)arg1;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoData;
- (bool)hasConfidence;
- (bool)hasGeoData;
- (bool)hasLocationOfInterest;
- (bool)hasModeOfTransportation;
- (bool)hasNextEntryTime;
- (bool)hasSourceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationOfInterest;
- (void)mergeFrom:(id)arg1;
- (int)modeOfTransportation;
- (id)modeOfTransportationAsString:(int)arg1;
- (double)nextEntryTime;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setGeoData:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasModeOfTransportation:(bool)arg1;
- (void)setHasNextEntryTime:(bool)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setLocationOfInterest:(id)arg1;
- (void)setModeOfTransportation:(int)arg1;
- (void)setNextEntryTime:(double)arg1;
- (void)setSourceType:(int)arg1;
- (int)sourceType;
- (id)sourceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
