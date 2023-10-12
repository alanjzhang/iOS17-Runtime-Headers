/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCFNetworkStreamTaskTiming : PBCodable <NSCopying> {
    unsigned long long  _connectEnd;
    unsigned long long  _connectStart;
    unsigned long long  _connected;
    unsigned long long  _connectionInit;
    unsigned long long  _domainLookupEnd;
    unsigned long long  _domainLookupStart;
    unsigned long long  _firstRead;
    unsigned long long  _firstWrite;
    struct { 
        unsigned int connectEnd : 1; 
        unsigned int connectStart : 1; 
        unsigned int connected : 1; 
        unsigned int connectionInit : 1; 
        unsigned int domainLookupEnd : 1; 
        unsigned int domainLookupStart : 1; 
        unsigned int firstRead : 1; 
        unsigned int firstWrite : 1; 
        unsigned int isCellular : 1; 
        unsigned int resumeStart : 1; 
        unsigned int secureConnectionStart : 1; 
        unsigned int taskCreationStart : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _isCellular;
    NSString * _procname;
    unsigned long long  _resumeStart;
    unsigned long long  _secureConnectionStart;
    unsigned long long  _taskCreationStart;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long connectEnd;
@property (nonatomic) unsigned long long connectStart;
@property (nonatomic) unsigned long long connected;
@property (nonatomic) unsigned long long connectionInit;
@property (nonatomic) unsigned long long domainLookupEnd;
@property (nonatomic) unsigned long long domainLookupStart;
@property (nonatomic) unsigned long long firstRead;
@property (nonatomic) unsigned long long firstWrite;
@property (nonatomic) bool hasConnectEnd;
@property (nonatomic) bool hasConnectStart;
@property (nonatomic) bool hasConnected;
@property (nonatomic) bool hasConnectionInit;
@property (nonatomic) bool hasDomainLookupEnd;
@property (nonatomic) bool hasDomainLookupStart;
@property (nonatomic) bool hasFirstRead;
@property (nonatomic) bool hasFirstWrite;
@property (nonatomic) bool hasIsCellular;
@property (nonatomic, readonly) bool hasProcname;
@property (nonatomic) bool hasResumeStart;
@property (nonatomic) bool hasSecureConnectionStart;
@property (nonatomic) bool hasTaskCreationStart;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long isCellular;
@property (nonatomic, retain) NSString *procname;
@property (nonatomic) unsigned long long resumeStart;
@property (nonatomic) unsigned long long secureConnectionStart;
@property (nonatomic) unsigned long long taskCreationStart;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)connectEnd;
- (unsigned long long)connectStart;
- (unsigned long long)connected;
- (unsigned long long)connectionInit;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)domainLookupEnd;
- (unsigned long long)domainLookupStart;
- (unsigned long long)firstRead;
- (unsigned long long)firstWrite;
- (bool)hasConnectEnd;
- (bool)hasConnectStart;
- (bool)hasConnected;
- (bool)hasConnectionInit;
- (bool)hasDomainLookupEnd;
- (bool)hasDomainLookupStart;
- (bool)hasFirstRead;
- (bool)hasFirstWrite;
- (bool)hasIsCellular;
- (bool)hasProcname;
- (bool)hasResumeStart;
- (bool)hasSecureConnectionStart;
- (bool)hasTaskCreationStart;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (long long)isCellular;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)procname;
- (bool)readFrom:(id)arg1;
- (unsigned long long)resumeStart;
- (unsigned long long)secureConnectionStart;
- (void)setConnectEnd:(unsigned long long)arg1;
- (void)setConnectStart:(unsigned long long)arg1;
- (void)setConnected:(unsigned long long)arg1;
- (void)setConnectionInit:(unsigned long long)arg1;
- (void)setDomainLookupEnd:(unsigned long long)arg1;
- (void)setDomainLookupStart:(unsigned long long)arg1;
- (void)setFirstRead:(unsigned long long)arg1;
- (void)setFirstWrite:(unsigned long long)arg1;
- (void)setHasConnectEnd:(bool)arg1;
- (void)setHasConnectStart:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setHasConnectionInit:(bool)arg1;
- (void)setHasDomainLookupEnd:(bool)arg1;
- (void)setHasDomainLookupStart:(bool)arg1;
- (void)setHasFirstRead:(bool)arg1;
- (void)setHasFirstWrite:(bool)arg1;
- (void)setHasIsCellular:(bool)arg1;
- (void)setHasResumeStart:(bool)arg1;
- (void)setHasSecureConnectionStart:(bool)arg1;
- (void)setHasTaskCreationStart:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsCellular:(long long)arg1;
- (void)setProcname:(id)arg1;
- (void)setResumeStart:(unsigned long long)arg1;
- (void)setSecureConnectionStart:(unsigned long long)arg1;
- (void)setTaskCreationStart:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)taskCreationStart;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
