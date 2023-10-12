/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent {
    NSDictionary * _metricsOverlay;
}

@property (nonatomic, copy) NSString *DNSServers;
@property (nonatomic) bool TFOEnabled;
@property (nonatomic, copy) NSString *TIDState;
@property (nonatomic) bool TLSSessionTickets;
@property (nonatomic, copy) NSString *appleTimingApp;
@property (nonatomic) bool apsRelayAttempted;
@property (nonatomic) bool apsRelayDidFallback;
@property (nonatomic) bool apsRelaySucceeded;
@property (nonatomic, copy) NSString *buildVariant;
@property (nonatomic) bool cachedResponse;
@property (nonatomic, retain) NSString *cellularDataBearerTechnology;
@property (nonatomic, copy) NSString *clientCorrelationKey;
@property (nonatomic, copy) NSString *clientError;
@property (nonatomic) double connectionEndTime;
@property (nonatomic, copy) NSString *connectionInterface;
@property (nonatomic) bool connectionReused;
@property (nonatomic) unsigned long long connectionStartNStatRXBytes;
@property (nonatomic) unsigned long long connectionStartNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (nonatomic) unsigned long long connectionStopNStatRXBytes;
@property (nonatomic) unsigned long long connectionStopNStatTXBytes;
@property (nonatomic, copy) NSString *connectionType;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (nonatomic, copy) NSString *edgeNodeCacheStatus;
@property (nonatomic, copy) NSString *environmentDataCenter;
@property (nonatomic) double fetchStartTime;
@property (nonatomic, readonly, copy) NSDictionary *metricsOverlay;
@property (nonatomic, copy) NSString *networkProtocolName;
@property (nonatomic, copy) NSArray *networkQualityReports;
@property (nonatomic, copy) NSString *originalApp;
@property (nonatomic, copy) NSString *radioTechnology;
@property (nonatomic, copy) NSString *radioType;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) unsigned long long requestMessageSize;
@property (nonatomic) double requestStartTime;
@property (nonatomic, copy) NSString *requestURL;
@property (nonatomic, copy) NSString *resolvedIPAddress;
@property (nonatomic, copy) NSString *responseDate;
@property (nonatomic) double responseEndTime;
@property (nonatomic) unsigned long long responseMessageSize;
@property (nonatomic) unsigned long long responseMessageSizeUncompressed;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (nonatomic) unsigned long long urlCacheDiskCapacity;
@property (nonatomic) double urlCacheMaxCacheableEntrySizeRatio;
@property (nonatomic) unsigned long long urlCacheMemoryCapacity;
@property (nonatomic, copy) NSString *wt;
@property (nonatomic) bool xpSamplingForced;
@property (nonatomic) double xpSamplingPercentageCachedResponses;
@property (nonatomic) double xpSamplingPercentageUsers;
@property (nonatomic) double xpSessionDuration;
@property (nonatomic, copy) NSString *xxdc;

+ (id)_DNSServerIPAddresses;
+ (id)_buildVariant;
+ (id)_fetchNetworkQualityReports;
+ (id)_metricsDictionaryFromConfig:(id)arg1;
+ (id)_propertyValueClassesForKnownProperties;
+ (id)_radioTypeStringValueFromRadioType:(int)arg1;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (double)_samplingPercentageForURLSessionTask:(id)arg1 performanceDictionary:(id)arg2;
+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (bool)isPerHostLoadURLSamplingEnabled:(id)arg1;
+ (bool)isPerHostLoadURLSamplingEnabled:(id)arg1 perHostSamplingSuppressed:(out bool*)arg2 featureFlagEnabled:(out bool*)arg3;
+ (bool)shouldCollectMetricsForContext:(id)arg1;

- (void).cxx_destruct;
- (id)DNSServers;
- (bool)TFOEnabled;
- (id)TIDState;
- (bool)TLSSessionTickets;
- (void)_addSharedURLCacheProperties;
- (void)_prepareEventWithContext:(id)arg1;
- (id)appleTimingApp;
- (bool)apsRelayAttempted;
- (bool)apsRelayDidFallback;
- (bool)apsRelaySucceeded;
- (id)buildVariant;
- (bool)cachedResponse;
- (id)cellularDataBearerTechnology;
- (id)clientCorrelationKey;
- (id)clientError;
- (double)connectionEndTime;
- (id)connectionInterface;
- (bool)connectionReused;
- (unsigned long long)connectionStartNStatRXBytes;
- (unsigned long long)connectionStartNStatTXBytes;
- (double)connectionStartTime;
- (unsigned long long)connectionStopNStatRXBytes;
- (unsigned long long)connectionStopNStatTXBytes;
- (id)connectionType;
- (double)domainLookupEndTime;
- (double)domainLookupStartTime;
- (id)edgeNodeCacheStatus;
- (id)environmentDataCenter;
- (double)fetchStartTime;
- (id)initWithContext:(id)arg1;
- (id)metricsOverlay;
- (id)networkProtocolName;
- (id)networkQualityReports;
- (id)originalApp;
- (id)radioTechnology;
- (id)radioType;
- (unsigned long long)redirectCount;
- (double)redirectEndTime;
- (double)redirectStartTime;
- (unsigned long long)requestMessageSize;
- (double)requestStartTime;
- (id)requestURL;
- (id)resolvedIPAddress;
- (id)responseDate;
- (double)responseEndTime;
- (unsigned long long)responseMessageSize;
- (unsigned long long)responseMessageSizeUncompressed;
- (double)responseStartTime;
- (double)secureConnectionStartTime;
- (void)setAppleTimingApp:(id)arg1;
- (void)setApsRelayAttempted:(bool)arg1;
- (void)setApsRelayDidFallback:(bool)arg1;
- (void)setApsRelaySucceeded:(bool)arg1;
- (void)setBuildVariant:(id)arg1;
- (void)setCachedResponse:(bool)arg1;
- (void)setCellularDataBearerTechnology:(id)arg1;
- (void)setClientCorrelationKey:(id)arg1;
- (void)setClientError:(id)arg1;
- (void)setConnectionEndTime:(double)arg1;
- (void)setConnectionInterface:(id)arg1;
- (void)setConnectionReused:(bool)arg1;
- (void)setConnectionStartNStatRXBytes:(unsigned long long)arg1;
- (void)setConnectionStartNStatTXBytes:(unsigned long long)arg1;
- (void)setConnectionStartTime:(double)arg1;
- (void)setConnectionStopNStatRXBytes:(unsigned long long)arg1;
- (void)setConnectionStopNStatTXBytes:(unsigned long long)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setDNSServers:(id)arg1;
- (void)setDomainLookupEndTime:(double)arg1;
- (void)setDomainLookupStartTime:(double)arg1;
- (void)setEdgeNodeCacheStatus:(id)arg1;
- (void)setEnvironmentDataCenter:(id)arg1;
- (void)setFetchStartTime:(double)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setNetworkProtocolName:(id)arg1;
- (void)setNetworkQualityReports:(id)arg1;
- (void)setOriginalApp:(id)arg1;
- (void)setRadioTechnology:(id)arg1;
- (void)setRadioType:(id)arg1;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setRedirectEndTime:(double)arg1;
- (void)setRedirectStartTime:(double)arg1;
- (void)setRequestMessageSize:(unsigned long long)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setResolvedIPAddress:(id)arg1;
- (void)setResponseDate:(id)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseMessageSize:(unsigned long long)arg1;
- (void)setResponseMessageSizeUncompressed:(unsigned long long)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setSecureConnectionStartTime:(double)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setTFOEnabled:(bool)arg1;
- (void)setTIDState:(id)arg1;
- (void)setTLSSessionTickets:(bool)arg1;
- (void)setUrlCacheDiskCapacity:(unsigned long long)arg1;
- (void)setUrlCacheMaxCacheableEntrySizeRatio:(double)arg1;
- (void)setUrlCacheMemoryCapacity:(unsigned long long)arg1;
- (void)setWt:(id)arg1;
- (void)setXpSamplingForced:(bool)arg1;
- (void)setXpSamplingPercentageCachedResponses:(double)arg1;
- (void)setXpSamplingPercentageUsers:(double)arg1;
- (void)setXpSessionDuration:(double)arg1;
- (void)setXxdc:(id)arg1;
- (long long)statusCode;
- (unsigned long long)urlCacheDiskCapacity;
- (double)urlCacheMaxCacheableEntrySizeRatio;
- (unsigned long long)urlCacheMemoryCapacity;
- (id)wt;
- (bool)xpSamplingForced;
- (double)xpSamplingPercentageCachedResponses;
- (double)xpSamplingPercentageUsers;
- (double)xpSessionDuration;
- (id)xxdc;

@end
