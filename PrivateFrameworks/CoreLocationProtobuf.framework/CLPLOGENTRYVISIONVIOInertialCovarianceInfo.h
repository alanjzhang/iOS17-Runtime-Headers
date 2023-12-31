/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPLOGENTRYVISIONVIOInertialCovarianceInfo : PBCodable <NSCopying> {
    unsigned int  _accelBiasCovOffset;
    unsigned int  _accelBiasDof;
    unsigned int  _covarianceSize;
    unsigned long long  _covarianceSizeInBytes;
    unsigned int  _gyroBiasCovOffset;
    unsigned int  _gyroBiasDof;
    struct { 
        unsigned int covarianceSizeInBytes : 1; 
        unsigned int accelBiasCovOffset : 1; 
        unsigned int accelBiasDof : 1; 
        unsigned int covarianceSize : 1; 
        unsigned int gyroBiasCovOffset : 1; 
        unsigned int gyroBiasDof : 1; 
        unsigned int orientationCovOffset : 1; 
        unsigned int orientationDof : 1; 
        unsigned int positionCovOffset : 1; 
        unsigned int positionDof : 1; 
        unsigned int velocityCovOffset : 1; 
        unsigned int velocityDof : 1; 
    }  _has;
    unsigned int  _orientationCovOffset;
    unsigned int  _orientationDof;
    unsigned int  _positionCovOffset;
    unsigned int  _positionDof;
    unsigned int  _velocityCovOffset;
    unsigned int  _velocityDof;
}

@property (nonatomic) unsigned int accelBiasCovOffset;
@property (nonatomic) unsigned int accelBiasDof;
@property (nonatomic) unsigned int covarianceSize;
@property (nonatomic) unsigned long long covarianceSizeInBytes;
@property (nonatomic) unsigned int gyroBiasCovOffset;
@property (nonatomic) unsigned int gyroBiasDof;
@property (nonatomic) bool hasAccelBiasCovOffset;
@property (nonatomic) bool hasAccelBiasDof;
@property (nonatomic) bool hasCovarianceSize;
@property (nonatomic) bool hasCovarianceSizeInBytes;
@property (nonatomic) bool hasGyroBiasCovOffset;
@property (nonatomic) bool hasGyroBiasDof;
@property (nonatomic) bool hasOrientationCovOffset;
@property (nonatomic) bool hasOrientationDof;
@property (nonatomic) bool hasPositionCovOffset;
@property (nonatomic) bool hasPositionDof;
@property (nonatomic) bool hasVelocityCovOffset;
@property (nonatomic) bool hasVelocityDof;
@property (nonatomic) unsigned int orientationCovOffset;
@property (nonatomic) unsigned int orientationDof;
@property (nonatomic) unsigned int positionCovOffset;
@property (nonatomic) unsigned int positionDof;
@property (nonatomic) unsigned int velocityCovOffset;
@property (nonatomic) unsigned int velocityDof;

- (unsigned int)accelBiasCovOffset;
- (unsigned int)accelBiasDof;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)covarianceSize;
- (unsigned long long)covarianceSizeInBytes;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)gyroBiasCovOffset;
- (unsigned int)gyroBiasDof;
- (bool)hasAccelBiasCovOffset;
- (bool)hasAccelBiasDof;
- (bool)hasCovarianceSize;
- (bool)hasCovarianceSizeInBytes;
- (bool)hasGyroBiasCovOffset;
- (bool)hasGyroBiasDof;
- (bool)hasOrientationCovOffset;
- (bool)hasOrientationDof;
- (bool)hasPositionCovOffset;
- (bool)hasPositionDof;
- (bool)hasVelocityCovOffset;
- (bool)hasVelocityDof;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)orientationCovOffset;
- (unsigned int)orientationDof;
- (unsigned int)positionCovOffset;
- (unsigned int)positionDof;
- (bool)readFrom:(id)arg1;
- (void)setAccelBiasCovOffset:(unsigned int)arg1;
- (void)setAccelBiasDof:(unsigned int)arg1;
- (void)setCovarianceSize:(unsigned int)arg1;
- (void)setCovarianceSizeInBytes:(unsigned long long)arg1;
- (void)setGyroBiasCovOffset:(unsigned int)arg1;
- (void)setGyroBiasDof:(unsigned int)arg1;
- (void)setHasAccelBiasCovOffset:(bool)arg1;
- (void)setHasAccelBiasDof:(bool)arg1;
- (void)setHasCovarianceSize:(bool)arg1;
- (void)setHasCovarianceSizeInBytes:(bool)arg1;
- (void)setHasGyroBiasCovOffset:(bool)arg1;
- (void)setHasGyroBiasDof:(bool)arg1;
- (void)setHasOrientationCovOffset:(bool)arg1;
- (void)setHasOrientationDof:(bool)arg1;
- (void)setHasPositionCovOffset:(bool)arg1;
- (void)setHasPositionDof:(bool)arg1;
- (void)setHasVelocityCovOffset:(bool)arg1;
- (void)setHasVelocityDof:(bool)arg1;
- (void)setOrientationCovOffset:(unsigned int)arg1;
- (void)setOrientationDof:(unsigned int)arg1;
- (void)setPositionCovOffset:(unsigned int)arg1;
- (void)setPositionDof:(unsigned int)arg1;
- (void)setVelocityCovOffset:(unsigned int)arg1;
- (void)setVelocityDof:(unsigned int)arg1;
- (unsigned int)velocityCovOffset;
- (unsigned int)velocityDof;
- (void)writeTo:(id)arg1;

@end
