/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCFNetworkTaskMetrics : PBCodable <NSCopying> {
    NSString * _activityUUID;
    unsigned long long  _didCompleteWithError;
    long long  _error;
    struct { 
        unsigned int didCompleteWithError : 1; 
        unsigned int error : 1; 
        unsigned int numberOfRedirects : 1; 
        unsigned int numberOfRetries : 1; 
        unsigned int taskResume : 1; 
        unsigned int timestamp : 1; 
        unsigned int underlyingError : 1; 
        unsigned int underlyingErrorDomain : 1; 
        unsigned int schedulingTier : 1; 
        unsigned int taskType : 1; 
        unsigned int isBackground : 1; 
        unsigned int unused : 1; 
    }  _has;
    bool  _isBackground;
    unsigned long long  _numberOfRedirects;
    unsigned long long  _numberOfRetries;
    int  _schedulingTier;
    unsigned long long  _taskResume;
    int  _taskType;
    unsigned long long  _timestamp;
    NSMutableArray * _transactionMetrics;
    long long  _underlyingError;
    long long  _underlyingErrorDomain;
    bool  _unused;
}

@property (nonatomic, retain) NSString *activityUUID;
@property (nonatomic) unsigned long long didCompleteWithError;
@property (nonatomic) long long error;
@property (nonatomic, readonly) bool hasActivityUUID;
@property (nonatomic) bool hasDidCompleteWithError;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasIsBackground;
@property (nonatomic) bool hasNumberOfRedirects;
@property (nonatomic) bool hasNumberOfRetries;
@property (nonatomic) bool hasSchedulingTier;
@property (nonatomic) bool hasTaskResume;
@property (nonatomic) bool hasTaskType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnderlyingError;
@property (nonatomic) bool hasUnderlyingErrorDomain;
@property (nonatomic) bool hasUnused;
@property (nonatomic) bool isBackground;
@property (nonatomic) unsigned long long numberOfRedirects;
@property (nonatomic) unsigned long long numberOfRetries;
@property (nonatomic) int schedulingTier;
@property (nonatomic) unsigned long long taskResume;
@property (nonatomic) int taskType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSMutableArray *transactionMetrics;
@property (nonatomic) long long underlyingError;
@property (nonatomic) long long underlyingErrorDomain;
@property (nonatomic) bool unused;

+ (Class)transactionMetricsType;

- (int)StringAsSchedulingTier:(id)arg1;
- (int)StringAsTaskType:(id)arg1;
- (id)activityUUID;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)didCompleteWithError;
- (long long)error;
- (bool)hasActivityUUID;
- (bool)hasDidCompleteWithError;
- (bool)hasError;
- (bool)hasIsBackground;
- (bool)hasNumberOfRedirects;
- (bool)hasNumberOfRetries;
- (bool)hasSchedulingTier;
- (bool)hasTaskResume;
- (bool)hasTaskType;
- (bool)hasTimestamp;
- (bool)hasUnderlyingError;
- (bool)hasUnderlyingErrorDomain;
- (bool)hasUnused;
- (unsigned long long)hash;
- (bool)isBackground;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numberOfRedirects;
- (unsigned long long)numberOfRetries;
- (bool)readFrom:(id)arg1;
- (int)schedulingTier;
- (id)schedulingTierAsString:(int)arg1;
- (void)setActivityUUID:(id)arg1;
- (void)setDidCompleteWithError:(unsigned long long)arg1;
- (void)setError:(long long)arg1;
- (void)setHasDidCompleteWithError:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasIsBackground:(bool)arg1;
- (void)setHasNumberOfRedirects:(bool)arg1;
- (void)setHasNumberOfRetries:(bool)arg1;
- (void)setHasSchedulingTier:(bool)arg1;
- (void)setHasTaskResume:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnderlyingError:(bool)arg1;
- (void)setHasUnderlyingErrorDomain:(bool)arg1;
- (void)setHasUnused:(bool)arg1;
- (void)setIsBackground:(bool)arg1;
- (void)setNumberOfRedirects:(unsigned long long)arg1;
- (void)setNumberOfRetries:(unsigned long long)arg1;
- (void)setSchedulingTier:(int)arg1;
- (void)setTaskResume:(unsigned long long)arg1;
- (void)setTaskType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionMetrics:(id)arg1;
- (void)setUnderlyingError:(long long)arg1;
- (void)setUnderlyingErrorDomain:(long long)arg1;
- (void)setUnused:(bool)arg1;
- (unsigned long long)taskResume;
- (int)taskType;
- (id)taskTypeAsString:(int)arg1;
- (unsigned long long)timestamp;
- (id)transactionMetrics;
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (long long)underlyingError;
- (long long)underlyingErrorDomain;
- (bool)unused;
- (void)writeTo:(id)arg1;

@end