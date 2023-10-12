/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface AppTelemetryInvestigation : PBCodable <NSCopying> {
    AppTelemetryCiconiaBouncesInvestigation * _bouncesInvestigation;
    AppTelemetryCiconiaInvestigation * _ciconiaInvestigation;
    AppTelemetryCiconiaEAccessInvestigation * _eaccessInvestigation;
    long long  _errorCode;
    NSString * _errorDescription;
    NSString * _errorDomain;
    NSString * _eventGroupUUID;
    unsigned long long  _eventTimestamp;
    AppTelemetryFPFSMigrationInvestigation * _fpfsMigrationInvestigation;
    AppTelemetryFPFSMigrationNonMigratedItemInvestigation * _fpfsMigrationNonMigratedItemInvestigation;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int hasForegroundClients : 1; 
        unsigned int isPCSChained : 1; 
        unsigned int nonDiscretionary : 1; 
        unsigned int sharedZone : 1; 
    }  _has;
    bool  _hasForegroundClients;
    bool  _isPCSChained;
    NSString * _itemID;
    NSString * _lastStep;
    bool  _nonDiscretionary;
    NSString * _operationType;
    AppTelemetryQBSInvestigation * _qbsInvestigation;
    AppTelemetryQBSPerformance * _qbsPerformance;
    NSString * _reason;
    bool  _sharedZone;
    NSData * _zoneName;
}

@property (nonatomic, retain) AppTelemetryCiconiaBouncesInvestigation *bouncesInvestigation;
@property (nonatomic, retain) AppTelemetryCiconiaInvestigation *ciconiaInvestigation;
@property (nonatomic, retain) AppTelemetryCiconiaEAccessInvestigation *eaccessInvestigation;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, retain) NSString *eventGroupUUID;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic, retain) AppTelemetryFPFSMigrationInvestigation *fpfsMigrationInvestigation;
@property (nonatomic, retain) AppTelemetryFPFSMigrationNonMigratedItemInvestigation *fpfsMigrationNonMigratedItemInvestigation;
@property (nonatomic, readonly) bool hasBouncesInvestigation;
@property (nonatomic, readonly) bool hasCiconiaInvestigation;
@property (nonatomic, readonly) bool hasEaccessInvestigation;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasEventGroupUUID;
@property (nonatomic) bool hasEventTimestamp;
@property (nonatomic) bool hasForegroundClients;
@property (nonatomic, readonly) bool hasFpfsMigrationInvestigation;
@property (nonatomic, readonly) bool hasFpfsMigrationNonMigratedItemInvestigation;
@property (nonatomic) bool hasHasForegroundClients;
@property (nonatomic) bool hasIsPCSChained;
@property (nonatomic, readonly) bool hasItemID;
@property (nonatomic, readonly) bool hasLastStep;
@property (nonatomic) bool hasNonDiscretionary;
@property (nonatomic, readonly) bool hasOperationType;
@property (nonatomic, readonly) bool hasQbsInvestigation;
@property (nonatomic, readonly) bool hasQbsPerformance;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic) bool hasSharedZone;
@property (nonatomic, readonly) bool hasZoneName;
@property (nonatomic) bool isPCSChained;
@property (nonatomic, retain) NSString *itemID;
@property (nonatomic, retain) NSString *lastStep;
@property (nonatomic) bool nonDiscretionary;
@property (nonatomic, retain) NSString *operationType;
@property (nonatomic, retain) AppTelemetryQBSInvestigation *qbsInvestigation;
@property (nonatomic, retain) AppTelemetryQBSPerformance *qbsPerformance;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) bool sharedZone;
@property (nonatomic, retain) NSData *zoneName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

// AppTelemetryInvestigation (AppTelemetryDriveTelemetryExtension)

- (id)bouncesInvestigation;
- (id)ciconiaInvestigation;
- (id)eaccessInvestigation;
- (long long)errorCode;
- (id)errorDescription;
- (id)errorDomain;
- (id)eventGroupUUID;
- (unsigned long long)eventTimestamp;
- (id)fpfsMigrationInvestigation;
- (id)fpfsMigrationNonMigratedItemInvestigation;
- (bool)hasBouncesInvestigation;
- (bool)hasCiconiaInvestigation;
- (bool)hasEaccessInvestigation;
- (bool)hasErrorCode;
- (bool)hasErrorDescription;
- (bool)hasErrorDomain;
- (bool)hasEventGroupUUID;
- (bool)hasEventTimestamp;
- (bool)hasForegroundClients;
- (bool)hasFpfsMigrationInvestigation;
- (bool)hasFpfsMigrationNonMigratedItemInvestigation;
- (bool)hasHasForegroundClients;
- (bool)hasIsPCSChained;
- (bool)hasItemID;
- (bool)hasLastStep;
- (bool)hasNonDiscretionary;
- (bool)hasOperationType;
- (bool)hasQbsInvestigation;
- (bool)hasQbsPerformance;
- (bool)hasReason;
- (bool)hasSharedZone;
- (bool)hasZoneName;
- (bool)isPCSChained;
- (id)itemID;
- (id)lastStep;
- (bool)nonDiscretionary;
- (id)operationType;
- (id)qbsInvestigation;
- (id)qbsPerformance;
- (id)reason;
- (void)setBouncesInvestigation:(id)arg1;
- (void)setCiconiaInvestigation:(id)arg1;
- (void)setEaccessInvestigation:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setEventGroupUUID:(id)arg1;
- (void)setEventTimestamp:(unsigned long long)arg1;
- (void)setFpfsMigrationInvestigation:(id)arg1;
- (void)setFpfsMigrationNonMigratedItemInvestigation:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setHasForegroundClients:(bool)arg1;
- (void)setHasHasForegroundClients:(bool)arg1;
- (void)setHasIsPCSChained:(bool)arg1;
- (void)setHasNonDiscretionary:(bool)arg1;
- (void)setHasSharedZone:(bool)arg1;
- (void)setIsPCSChained:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setLastStep:(id)arg1;
- (void)setNonDiscretionary:(bool)arg1;
- (void)setOperationType:(id)arg1;
- (void)setQbsInvestigation:(id)arg1;
- (void)setQbsPerformance:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSharedZone:(bool)arg1;
- (void)setZoneName:(id)arg1;
- (bool)sharedZone;
- (id)zoneName;

@end