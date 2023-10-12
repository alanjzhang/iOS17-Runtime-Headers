/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface NETSchemaNETSessionConnectionNetwork : SISchemaInstrumentationMessage {
    unsigned int  _attempCount;
    NSString * _carrierName;
    double  _clearChannelAssessmentScore;
    unsigned long long  _connectionEstablishmentTime;
    int  _connectionMethod;
    unsigned long long  _connectionStartToEstablishmentTime;
    unsigned long long  _connectionStartToTLSHandshake;
    unsigned long long  _dnsResolutionTime;
    unsigned long long  _firstByteTime;
    struct { 
        unsigned int connectionMethod : 1; 
        unsigned int isCaptive : 1; 
        unsigned int rssi : 1; 
        unsigned int snr : 1; 
        unsigned int attempCount : 1; 
        unsigned int firstByteTime : 1; 
        unsigned int startToDNSResolution : 1; 
        unsigned int dnsResolutionTime : 1; 
        unsigned int tlsVersion : 1; 
        unsigned int tlsHandshakeTime : 1; 
        unsigned int connectionEstablishmentTime : 1; 
        unsigned int connectionStartToEstablishmentTime : 1; 
        unsigned int connectionStartToTLSHandshake : 1; 
        unsigned int clearChannelAssessmentScore : 1; 
    }  _has;
    bool  _hasCarrierName;
    bool  _hasPrimarySubflowInterfaceName;
    bool  _isCaptive;
    NSString * _primarySubflowInterfaceName;
    double  _rssi;
    double  _snr;
    unsigned long long  _startToDNSResolution;
    unsigned long long  _tlsHandshakeTime;
    int  _tlsVersion;
}

@property (nonatomic) unsigned int attempCount;
@property (nonatomic, copy) NSString *carrierName;
@property (nonatomic) double clearChannelAssessmentScore;
@property (nonatomic) unsigned long long connectionEstablishmentTime;
@property (nonatomic) int connectionMethod;
@property (nonatomic) unsigned long long connectionStartToEstablishmentTime;
@property (nonatomic) unsigned long long connectionStartToTLSHandshake;
@property (nonatomic) unsigned long long dnsResolutionTime;
@property (nonatomic) unsigned long long firstByteTime;
@property (nonatomic) bool hasAttempCount;
@property (nonatomic) bool hasCarrierName;
@property (nonatomic) bool hasClearChannelAssessmentScore;
@property (nonatomic) bool hasConnectionEstablishmentTime;
@property (nonatomic) bool hasConnectionMethod;
@property (nonatomic) bool hasConnectionStartToEstablishmentTime;
@property (nonatomic) bool hasConnectionStartToTLSHandshake;
@property (nonatomic) bool hasDnsResolutionTime;
@property (nonatomic) bool hasFirstByteTime;
@property (nonatomic) bool hasIsCaptive;
@property (nonatomic) bool hasPrimarySubflowInterfaceName;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasSnr;
@property (nonatomic) bool hasStartToDNSResolution;
@property (nonatomic) bool hasTlsHandshakeTime;
@property (nonatomic) bool hasTlsVersion;
@property (nonatomic) bool isCaptive;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *primarySubflowInterfaceName;
@property (nonatomic) double rssi;
@property (nonatomic) double snr;
@property (nonatomic) unsigned long long startToDNSResolution;
@property (nonatomic) unsigned long long tlsHandshakeTime;
@property (nonatomic) int tlsVersion;

- (void).cxx_destruct;
- (unsigned int)attempCount;
- (id)carrierName;
- (double)clearChannelAssessmentScore;
- (unsigned long long)connectionEstablishmentTime;
- (int)connectionMethod;
- (unsigned long long)connectionStartToEstablishmentTime;
- (unsigned long long)connectionStartToTLSHandshake;
- (void)deleteAttempCount;
- (void)deleteCarrierName;
- (void)deleteClearChannelAssessmentScore;
- (void)deleteConnectionEstablishmentTime;
- (void)deleteConnectionMethod;
- (void)deleteConnectionStartToEstablishmentTime;
- (void)deleteConnectionStartToTLSHandshake;
- (void)deleteDnsResolutionTime;
- (void)deleteFirstByteTime;
- (void)deleteIsCaptive;
- (void)deletePrimarySubflowInterfaceName;
- (void)deleteRssi;
- (void)deleteSnr;
- (void)deleteStartToDNSResolution;
- (void)deleteTlsHandshakeTime;
- (void)deleteTlsVersion;
- (id)dictionaryRepresentation;
- (unsigned long long)dnsResolutionTime;
- (unsigned long long)firstByteTime;
- (bool)hasAttempCount;
- (bool)hasCarrierName;
- (bool)hasClearChannelAssessmentScore;
- (bool)hasConnectionEstablishmentTime;
- (bool)hasConnectionMethod;
- (bool)hasConnectionStartToEstablishmentTime;
- (bool)hasConnectionStartToTLSHandshake;
- (bool)hasDnsResolutionTime;
- (bool)hasFirstByteTime;
- (bool)hasIsCaptive;
- (bool)hasPrimarySubflowInterfaceName;
- (bool)hasRssi;
- (bool)hasSnr;
- (bool)hasStartToDNSResolution;
- (bool)hasTlsHandshakeTime;
- (bool)hasTlsVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCaptive;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)primarySubflowInterfaceName;
- (bool)readFrom:(id)arg1;
- (double)rssi;
- (void)setAttempCount:(unsigned int)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setClearChannelAssessmentScore:(double)arg1;
- (void)setConnectionEstablishmentTime:(unsigned long long)arg1;
- (void)setConnectionMethod:(int)arg1;
- (void)setConnectionStartToEstablishmentTime:(unsigned long long)arg1;
- (void)setConnectionStartToTLSHandshake:(unsigned long long)arg1;
- (void)setDnsResolutionTime:(unsigned long long)arg1;
- (void)setFirstByteTime:(unsigned long long)arg1;
- (void)setHasAttempCount:(bool)arg1;
- (void)setHasCarrierName:(bool)arg1;
- (void)setHasClearChannelAssessmentScore:(bool)arg1;
- (void)setHasConnectionEstablishmentTime:(bool)arg1;
- (void)setHasConnectionMethod:(bool)arg1;
- (void)setHasConnectionStartToEstablishmentTime:(bool)arg1;
- (void)setHasConnectionStartToTLSHandshake:(bool)arg1;
- (void)setHasDnsResolutionTime:(bool)arg1;
- (void)setHasFirstByteTime:(bool)arg1;
- (void)setHasIsCaptive:(bool)arg1;
- (void)setHasPrimarySubflowInterfaceName:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasSnr:(bool)arg1;
- (void)setHasStartToDNSResolution:(bool)arg1;
- (void)setHasTlsHandshakeTime:(bool)arg1;
- (void)setHasTlsVersion:(bool)arg1;
- (void)setIsCaptive:(bool)arg1;
- (void)setPrimarySubflowInterfaceName:(id)arg1;
- (void)setRssi:(double)arg1;
- (void)setSnr:(double)arg1;
- (void)setStartToDNSResolution:(unsigned long long)arg1;
- (void)setTlsHandshakeTime:(unsigned long long)arg1;
- (void)setTlsVersion:(int)arg1;
- (double)snr;
- (unsigned long long)startToDNSResolution;
- (unsigned long long)tlsHandshakeTime;
- (int)tlsVersion;
- (void)writeTo:(id)arg1;

// NETSchemaNETSessionConnectionNetwork (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
