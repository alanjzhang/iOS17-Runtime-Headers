/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPIndoorPressure : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int pressure : 1; 
        unsigned int temperature : 1; 
    }  _has;
    float  _pressure;
    float  _temperature;
    double  _timestamp;
}

@property (nonatomic) bool hasPressure;
@property (nonatomic) bool hasTemperature;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) float pressure;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPressure;
- (bool)hasTemperature;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)pressure;
- (bool)readFrom:(id)arg1;
- (void)setHasPressure:(bool)arg1;
- (void)setHasTemperature:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPressure:(float)arg1;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (float)temperature;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
