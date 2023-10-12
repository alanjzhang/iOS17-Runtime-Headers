/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWURLSessionTaskTransactionMetrics : NSURLSessionTaskTransactionMetrics {
    NSObject<OS_nw_protocol_metadata> * _clientMetadata;
    NSObject<OS_nw_protocol_metadata> * _transactionMetadata;
    struct NWURLSessionConnectionTiming { 
        unsigned long long domainLookupStartMS; 
        unsigned long long domainLookupDurationMS; 
        unsigned long long connectStartTimeMS; 
        unsigned long long connectDurationMS; 
        unsigned long long secureConnectionDurationMS; 
        bool secure; 
        bool valid; 
        unsigned char __pad[6]; 
    }  connectionTiming;
}

@property (nonatomic, readonly, copy) NSUUID *_connectionIdentifier;
@property (nonatomic, readonly) int _privacyStance;
@property (getter=isCellular, nonatomic, readonly) bool cellular;
@property (nonatomic, readonly, copy) NSDate *connectEndDate;
@property (nonatomic, readonly, copy) NSDate *connectStartDate;
@property (getter=isConstrained, nonatomic, readonly) bool constrained;
@property (nonatomic, readonly) long long countOfRequestBodyBytesBeforeEncoding;
@property (nonatomic, readonly) long long countOfRequestBodyBytesSent;
@property (nonatomic, readonly) long long countOfRequestHeaderBytesSent;
@property (nonatomic, readonly) long long countOfResponseBodyBytesAfterDecoding;
@property (nonatomic, readonly) long long countOfResponseBodyBytesReceived;
@property (nonatomic, readonly) long long countOfResponseHeaderBytesReceived;
@property (nonatomic, readonly, copy) NSDate *domainLookupEndDate;
@property (nonatomic, readonly, copy) NSDate *domainLookupStartDate;
@property (nonatomic, readonly) long long domainResolutionProtocol;
@property (getter=isExpensive, nonatomic, readonly) bool expensive;
@property (nonatomic, readonly, copy) NSDate *fetchStartDate;
@property (nonatomic, readonly, copy) NSString *localAddress;
@property (nonatomic, readonly, copy) NSNumber *localPort;
@property (getter=isMultipath, nonatomic, readonly) bool multipath;
@property (nonatomic, readonly, copy) NSNumber *negotiatedTLSCipherSuite;
@property (nonatomic, readonly, copy) NSNumber *negotiatedTLSProtocolVersion;
@property (nonatomic, readonly, copy) NSString *networkProtocolName;
@property (getter=isProxyConnection, nonatomic, readonly) bool proxyConnection;
@property (nonatomic, readonly, copy) NSString *remoteAddress;
@property (nonatomic, readonly, copy) NSNumber *remotePort;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (nonatomic, readonly, copy) NSDate *requestEndDate;
@property (nonatomic, readonly, copy) NSDate *requestStartDate;
@property (nonatomic, readonly) long long resourceFetchType;
@property (nonatomic, readonly, copy) NSURLResponse *response;
@property (nonatomic, readonly, copy) NSDate *responseEndDate;
@property (nonatomic, readonly, copy) NSDate *responseStartDate;
@property (getter=isReusedConnection, nonatomic, readonly) bool reusedConnection;
@property (nonatomic, readonly, copy) NSDate *secureConnectionEndDate;
@property (nonatomic, readonly, copy) NSDate *secureConnectionStartDate;

- (void).cxx_destruct;
- (id)_connectionIdentifier;
- (int)_privacyStance;
- (id)connectEndDate;
- (id)connectStartDate;
- (long long)countOfRequestBodyBytesBeforeEncoding;
- (long long)countOfRequestBodyBytesSent;
- (long long)countOfRequestHeaderBytesSent;
- (long long)countOfResponseBodyBytesAfterDecoding;
- (long long)countOfResponseBodyBytesReceived;
- (long long)countOfResponseHeaderBytesReceived;
- (id)domainLookupEndDate;
- (id)domainLookupStartDate;
- (long long)domainResolutionProtocol;
- (id)fetchStartDate;
- (bool)isCellular;
- (bool)isConstrained;
- (bool)isExpensive;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMultipath;
- (bool)isProxyConnection;
- (bool)isReusedConnection;
- (id)localAddress;
- (id)localPort;
- (id)negotiatedTLSCipherSuite;
- (id)negotiatedTLSProtocolVersion;
- (id)networkProtocolName;
- (id)remoteAddress;
- (id)remotePort;
- (id)request;
- (id)requestEndDate;
- (id)requestStartDate;
- (long long)resourceFetchType;
- (id)response;
- (id)responseEndDate;
- (id)responseStartDate;
- (id)secureConnectionEndDate;
- (id)secureConnectionStartDate;

@end
