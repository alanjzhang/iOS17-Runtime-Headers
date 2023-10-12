/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineTrafficConditions : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int precisionRecall : 1; 
        unsigned int trafficDensity : 1; 
        unsigned int predictedLocationOfInterest : 1; 
        unsigned int vehicleConnected : 1; 
    }  _has;
    int  _precisionRecall;
    bool  _predictedLocationOfInterest;
    unsigned long long  _timestamp;
    int  _trafficDensity;
    bool  _vehicleConnected;
}

@property (nonatomic) bool hasPrecisionRecall;
@property (nonatomic) bool hasPredictedLocationOfInterest;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTrafficDensity;
@property (nonatomic) bool hasVehicleConnected;
@property (nonatomic) int precisionRecall;
@property (nonatomic) bool predictedLocationOfInterest;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int trafficDensity;
@property (nonatomic) bool vehicleConnected;

- (int)StringAsPrecisionRecall:(id)arg1;
- (int)StringAsTrafficDensity:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrecisionRecall;
- (bool)hasPredictedLocationOfInterest;
- (bool)hasTimestamp;
- (bool)hasTrafficDensity;
- (bool)hasVehicleConnected;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)precisionRecall;
- (id)precisionRecallAsString:(int)arg1;
- (bool)predictedLocationOfInterest;
- (bool)readFrom:(id)arg1;
- (void)setHasPrecisionRecall:(bool)arg1;
- (void)setHasPredictedLocationOfInterest:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTrafficDensity:(bool)arg1;
- (void)setHasVehicleConnected:(bool)arg1;
- (void)setPrecisionRecall:(int)arg1;
- (void)setPredictedLocationOfInterest:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTrafficDensity:(int)arg1;
- (void)setVehicleConnected:(bool)arg1;
- (unsigned long long)timestamp;
- (int)trafficDensity;
- (id)trafficDensityAsString:(int)arg1;
- (bool)vehicleConnected;
- (void)writeTo:(id)arg1;

@end
