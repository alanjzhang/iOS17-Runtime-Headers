/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
 */

@interface PREAMResponseItem : PBCodable <NSCopying> {
    int  _ageGroup;
    NSString * _experimentId;
    struct { 
        unsigned int ageGroup : 1; 
        unsigned int modelId : 1; 
        unsigned int position : 1; 
        unsigned int replyTextId : 1; 
        unsigned int responseClassId : 1; 
        unsigned int isApricotDevice : 1; 
        unsigned int isCustomResponse : 1; 
        unsigned int isRobotResponse : 1; 
    }  _has;
    NSString * _hostProcess;
    bool  _isApricotDevice;
    bool  _isCustomResponse;
    bool  _isRobotResponse;
    NSString * _lang;
    NSString * _locale;
    unsigned int  _modelId;
    unsigned int  _position;
    unsigned int  _replyTextId;
    unsigned int  _responseClassId;
    NSString * _treatmentId;
    NSString * _treatmentModelName;
}

@property (nonatomic) int ageGroup;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic) bool hasAgeGroup;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic, readonly) bool hasHostProcess;
@property (nonatomic) bool hasIsApricotDevice;
@property (nonatomic) bool hasIsCustomResponse;
@property (nonatomic) bool hasIsRobotResponse;
@property (nonatomic, readonly) bool hasLang;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasModelId;
@property (nonatomic) bool hasPosition;
@property (nonatomic) bool hasReplyTextId;
@property (nonatomic) bool hasResponseClassId;
@property (nonatomic, readonly) bool hasTreatmentId;
@property (nonatomic, readonly) bool hasTreatmentModelName;
@property (nonatomic, retain) NSString *hostProcess;
@property (nonatomic) bool isApricotDevice;
@property (nonatomic) bool isCustomResponse;
@property (nonatomic) bool isRobotResponse;
@property (nonatomic, retain) NSString *lang;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic, retain) NSString *treatmentModelName;

- (void).cxx_destruct;
- (int)StringAsAgeGroup:(id)arg1;
- (int)ageGroup;
- (id)ageGroupAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasAgeGroup;
- (bool)hasExperimentId;
- (bool)hasHostProcess;
- (bool)hasIsApricotDevice;
- (bool)hasIsCustomResponse;
- (bool)hasIsRobotResponse;
- (bool)hasLang;
- (bool)hasLocale;
- (bool)hasModelId;
- (bool)hasPosition;
- (bool)hasReplyTextId;
- (bool)hasResponseClassId;
- (bool)hasTreatmentId;
- (bool)hasTreatmentModelName;
- (unsigned long long)hash;
- (id)hostProcess;
- (bool)isApricotDevice;
- (bool)isCustomResponse;
- (bool)isEqual:(id)arg1;
- (bool)isRobotResponse;
- (id)lang;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelId;
- (unsigned int)position;
- (bool)readFrom:(id)arg1;
- (unsigned int)replyTextId;
- (unsigned int)responseClassId;
- (void)setAgeGroup:(int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasAgeGroup:(bool)arg1;
- (void)setHasIsApricotDevice:(bool)arg1;
- (void)setHasIsCustomResponse:(bool)arg1;
- (void)setHasIsRobotResponse:(bool)arg1;
- (void)setHasModelId:(bool)arg1;
- (void)setHasPosition:(bool)arg1;
- (void)setHasReplyTextId:(bool)arg1;
- (void)setHasResponseClassId:(bool)arg1;
- (void)setHostProcess:(id)arg1;
- (void)setIsApricotDevice:(bool)arg1;
- (void)setIsCustomResponse:(bool)arg1;
- (void)setIsRobotResponse:(bool)arg1;
- (void)setLang:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setModelId:(unsigned int)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setReplyTextId:(unsigned int)arg1;
- (void)setResponseClassId:(unsigned int)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTreatmentModelName:(id)arg1;
- (id)treatmentId;
- (id)treatmentModelName;
- (void)writeTo:(id)arg1;

@end
