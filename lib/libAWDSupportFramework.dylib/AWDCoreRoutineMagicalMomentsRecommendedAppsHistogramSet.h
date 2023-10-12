/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramSet : PBCodable <NSCopying> {
    int  _confidenceOfMostConfidentModel;
    int  _durationSinceLastSuccessfulTraining;
    int  _fallbackModelConfidence;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int confidenceOfMostConfidentModel : 1; 
        unsigned int durationSinceLastSuccessfulTraining : 1; 
        unsigned int fallbackModelConfidence : 1; 
        unsigned int modelType : 1; 
    }  _has;
    NSMutableArray * _instances;
    int  _modelType;
    unsigned long long  _timestamp;
}

@property (nonatomic) int confidenceOfMostConfidentModel;
@property (nonatomic) int durationSinceLastSuccessfulTraining;
@property (nonatomic) int fallbackModelConfidence;
@property (nonatomic) bool hasConfidenceOfMostConfidentModel;
@property (nonatomic) bool hasDurationSinceLastSuccessfulTraining;
@property (nonatomic) bool hasFallbackModelConfidence;
@property (nonatomic) bool hasModelType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *instances;
@property (nonatomic) int modelType;
@property (nonatomic) unsigned long long timestamp;

+ (Class)instanceType;

- (void)addInstance:(id)arg1;
- (void)clearInstances;
- (int)confidenceOfMostConfidentModel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)durationSinceLastSuccessfulTraining;
- (int)fallbackModelConfidence;
- (bool)hasConfidenceOfMostConfidentModel;
- (bool)hasDurationSinceLastSuccessfulTraining;
- (bool)hasFallbackModelConfidence;
- (bool)hasModelType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)instances;
- (unsigned long long)instancesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)modelType;
- (bool)readFrom:(id)arg1;
- (void)setConfidenceOfMostConfidentModel:(int)arg1;
- (void)setDurationSinceLastSuccessfulTraining:(int)arg1;
- (void)setFallbackModelConfidence:(int)arg1;
- (void)setHasConfidenceOfMostConfidentModel:(bool)arg1;
- (void)setHasDurationSinceLastSuccessfulTraining:(bool)arg1;
- (void)setHasFallbackModelConfidence:(bool)arg1;
- (void)setHasModelType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstances:(id)arg1;
- (void)setModelType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
