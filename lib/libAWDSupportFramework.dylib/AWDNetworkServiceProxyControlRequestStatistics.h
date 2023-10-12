/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNetworkServiceProxyControlRequestStatistics : PBCodable <NSCopying> {
    struct { 
        unsigned int requestCount : 1; 
        unsigned int resultCertificateFailureCount : 1; 
        unsigned int resultConnectionResetCount : 1; 
        unsigned int resultNetworkUnavailableCount : 1; 
        unsigned int resultResponseTimeoutCount : 1; 
        unsigned int resultSendFailureCount : 1; 
        unsigned int resultServerUnreachableCount : 1; 
        unsigned int resultSuccessCount : 1; 
        unsigned int resultUnknownErrorCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int interfaceType : 1; 
        unsigned int protocolType : 1; 
        unsigned int requestType : 1; 
    }  _has;
    int  _interfaceType;
    int  _protocolType;
    unsigned long long  _requestCount;
    int  _requestType;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _responseTimeBuckets;
    unsigned long long  _resultCertificateFailureCount;
    unsigned long long  _resultConnectionResetCount;
    unsigned long long  _resultNetworkUnavailableCount;
    unsigned long long  _resultResponseTimeoutCount;
    unsigned long long  _resultSendFailureCount;
    unsigned long long  _resultServerUnreachableCount;
    unsigned long long  _resultSuccessCount;
    unsigned long long  _resultUnknownErrorCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasInterfaceType;
@property (nonatomic) bool hasProtocolType;
@property (nonatomic) bool hasRequestCount;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasResultCertificateFailureCount;
@property (nonatomic) bool hasResultConnectionResetCount;
@property (nonatomic) bool hasResultNetworkUnavailableCount;
@property (nonatomic) bool hasResultResponseTimeoutCount;
@property (nonatomic) bool hasResultSendFailureCount;
@property (nonatomic) bool hasResultServerUnreachableCount;
@property (nonatomic) bool hasResultSuccessCount;
@property (nonatomic) bool hasResultUnknownErrorCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int interfaceType;
@property (nonatomic) int protocolType;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) unsigned int*responseTimeBuckets;
@property (nonatomic, readonly) unsigned long long responseTimeBucketsCount;
@property (nonatomic) unsigned long long resultCertificateFailureCount;
@property (nonatomic) unsigned long long resultConnectionResetCount;
@property (nonatomic) unsigned long long resultNetworkUnavailableCount;
@property (nonatomic) unsigned long long resultResponseTimeoutCount;
@property (nonatomic) unsigned long long resultSendFailureCount;
@property (nonatomic) unsigned long long resultServerUnreachableCount;
@property (nonatomic) unsigned long long resultSuccessCount;
@property (nonatomic) unsigned long long resultUnknownErrorCount;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsInterfaceType:(id)arg1;
- (int)StringAsProtocolType:(id)arg1;
- (int)StringAsRequestType:(id)arg1;
- (void)addResponseTimeBuckets:(unsigned int)arg1;
- (void)clearResponseTimeBuckets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInterfaceType;
- (bool)hasProtocolType;
- (bool)hasRequestCount;
- (bool)hasRequestType;
- (bool)hasResultCertificateFailureCount;
- (bool)hasResultConnectionResetCount;
- (bool)hasResultNetworkUnavailableCount;
- (bool)hasResultResponseTimeoutCount;
- (bool)hasResultSendFailureCount;
- (bool)hasResultServerUnreachableCount;
- (bool)hasResultSuccessCount;
- (bool)hasResultUnknownErrorCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)interfaceType;
- (id)interfaceTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)protocolType;
- (id)protocolTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)requestCount;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int*)responseTimeBuckets;
- (unsigned int)responseTimeBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)responseTimeBucketsCount;
- (unsigned long long)resultCertificateFailureCount;
- (unsigned long long)resultConnectionResetCount;
- (unsigned long long)resultNetworkUnavailableCount;
- (unsigned long long)resultResponseTimeoutCount;
- (unsigned long long)resultSendFailureCount;
- (unsigned long long)resultServerUnreachableCount;
- (unsigned long long)resultSuccessCount;
- (unsigned long long)resultUnknownErrorCount;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasProtocolType:(bool)arg1;
- (void)setHasRequestCount:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasResultCertificateFailureCount:(bool)arg1;
- (void)setHasResultConnectionResetCount:(bool)arg1;
- (void)setHasResultNetworkUnavailableCount:(bool)arg1;
- (void)setHasResultResponseTimeoutCount:(bool)arg1;
- (void)setHasResultSendFailureCount:(bool)arg1;
- (void)setHasResultServerUnreachableCount:(bool)arg1;
- (void)setHasResultSuccessCount:(bool)arg1;
- (void)setHasResultUnknownErrorCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setProtocolType:(int)arg1;
- (void)setRequestCount:(unsigned long long)arg1;
- (void)setRequestType:(int)arg1;
- (void)setResponseTimeBuckets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setResultCertificateFailureCount:(unsigned long long)arg1;
- (void)setResultConnectionResetCount:(unsigned long long)arg1;
- (void)setResultNetworkUnavailableCount:(unsigned long long)arg1;
- (void)setResultResponseTimeoutCount:(unsigned long long)arg1;
- (void)setResultSendFailureCount:(unsigned long long)arg1;
- (void)setResultServerUnreachableCount:(unsigned long long)arg1;
- (void)setResultSuccessCount:(unsigned long long)arg1;
- (void)setResultUnknownErrorCount:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
