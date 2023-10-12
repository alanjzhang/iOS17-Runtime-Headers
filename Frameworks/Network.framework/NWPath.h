/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWPath : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_path> * _internalPath;
}

@property (nonatomic, readonly) NWAdvertiseDescriptor *advertiseDescriptor;
@property (nonatomic, readonly) NWBrowseDescriptor *browseDescriptor;
@property (nonatomic, readonly) NSObject<OS_nw_path> *cPath;
@property (nonatomic, readonly) NSUUID *clientID;
@property (nonatomic, readonly) NWInterface *connectedInterface;
@property (getter=isConstrained, nonatomic, readonly) bool constrained;
@property (nonatomic, readonly) NWParameters *derivedParameters;
@property (getter=isDirect, nonatomic, readonly) bool direct;
@property (nonatomic, readonly) NSArray *dnsSearchDomains;
@property (nonatomic, readonly) NSArray *dnsServers;
@property (nonatomic, readonly) NSArray *dnsServersAsStrings;
@property (nonatomic, readonly) int dnsServiceID;
@property (nonatomic, readonly) NWEndpoint *effectiveLocalEndpoint;
@property (nonatomic, readonly) NWEndpoint *effectiveRemoteEndpoint;
@property (getter=isEligibleForCrazyIvan46, nonatomic, readonly) bool eligibleForCrazyIvan46;
@property (nonatomic, readonly) NWEndpoint *endpoint;
@property (getter=isExpensive, nonatomic, readonly) bool expensive;
@property (nonatomic, readonly) bool fallbackEligible;
@property (nonatomic, readonly) NWInterface *fallbackInterface;
@property (nonatomic, readonly) unsigned int fallbackInterfaceIndex;
@property (nonatomic, readonly) bool fallbackIsPreferred;
@property (nonatomic, readonly) bool fallbackIsWeak;
@property (nonatomic, readonly) unsigned int filterControlUnit;
@property (getter=isFiltered, nonatomic, readonly) bool filtered;
@property (getter=isFlowDivert, nonatomic, readonly) bool flowDivert;
@property (nonatomic, readonly) unsigned int flowDivertAggregateUnit;
@property (nonatomic, readonly) unsigned int flowDivertControlUnit;
@property (nonatomic, readonly) NSArray *flows;
@property (nonatomic, readonly) NSArray *gateways;
@property (nonatomic, readonly) NSArray *groupMembers;
@property (nonatomic, readonly) bool hasAdvertiseDescriptor;
@property (nonatomic, readonly) bool hasApplicationLevelFirewall;
@property (nonatomic, readonly) bool hasBrowseDescriptor;
@property (nonatomic, readonly) bool hasCustomPFRules;
@property (nonatomic, readonly) bool hasKernelExtensionFilter;
@property (nonatomic, readonly) bool hasParentalControls;
@property (nonatomic, readonly) bool hasProxySettings;
@property (nonatomic, readonly) NWInterface *interface;
@property (readonly) NSObject<OS_nw_path> *internalPath;
@property (getter=isListener, nonatomic, readonly) bool listener;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly) long long maximumDatagramSize;
@property (nonatomic, readonly) long long mtu;
@property (nonatomic, readonly) NSArray *overrideDNSSearchDomains;
@property (nonatomic, readonly) NSArray *overrideDNSServers;
@property (nonatomic, readonly) NSArray *overrideDNSServersAsStrings;
@property (nonatomic, readonly) NWParameters *parameters;
@property (getter=isPerAppVPN, nonatomic, readonly) bool perAppVPN;
@property (nonatomic, readonly) unsigned int policyID;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (nonatomic, readonly) NSArray *proxySettings;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSString *reasonDescription;
@property (getter=isRoaming, nonatomic, readonly) bool roaming;
@property (nonatomic, readonly) NWInterface *scopedInterface;
@property (nonatomic, readonly) unsigned long long secondsSinceInterfaceChange;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString *statusAsString;
@property (nonatomic, readonly) bool supportsDNS;
@property (nonatomic, readonly) bool supportsIPv4;
@property (nonatomic, readonly) bool supportsIPv6;
@property (getter=isViable, nonatomic, readonly) bool viable;

+ (id)allClientIDs;
+ (id)createStringFromStatus:(long long)arg1;
+ (id)pathForClientID:(id)arg1;
+ (id)pathForClientID:(id)arg1 parametersTLV:(id)arg2 pathResultTLV:(id)arg3;
+ (id)pathWithProtocolBufferData:(id)arg1;

- (void).cxx_destruct;
- (id)advertiseDescriptor;
- (id)browseDescriptor;
- (id)cPath;
- (id)clientID;
- (id)connectedInterface;
- (id)copyDNSSearchDomains:(bool)arg1;
- (id)copyDNSServerEndpoints:(bool)arg1;
- (id)copyDNSServersStrings:(id)arg1;
- (id)copyDataFromNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (id)copyFlowDivertToken;
- (id)createProtocolBufferObject;
- (id)delegateInterface;
- (id)derivedParameters;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)dnsSearchDomains;
- (id)dnsServers;
- (id)dnsServersAsStrings;
- (int)dnsServiceID;
- (id)effectiveLocalEndpoint;
- (id)effectiveRemoteEndpoint;
- (id)endpoint;
- (bool)fallbackEligible;
- (id)fallbackInterface;
- (unsigned int)fallbackInterfaceIndex;
- (bool)fallbackIsPreferred;
- (bool)fallbackIsWeak;
- (unsigned int)filterControlUnit;
- (unsigned int)flowDivertAggregateUnit;
- (unsigned int)flowDivertControlUnit;
- (id)flows;
- (id)gateways;
- (id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (id)groupMembers;
- (bool)hasAdvertiseDescriptor;
- (bool)hasApplicationLevelFirewall;
- (bool)hasBrowseDescriptor;
- (bool)hasCustomPFRules;
- (bool)hasKernelExtensionFilter;
- (bool)hasParentalControls;
- (bool)hasProxySettings;
- (bool)hasUnsatisfiedFallbackAgent;
- (id)inactiveNetworkAgentUUIDsOnlyVoluntary:(bool)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)interface;
- (id)internalPath;
- (bool)isConstrained;
- (bool)isDirect;
- (bool)isEligibleForCrazyIvan46;
- (bool)isEqualToPath:(id)arg1;
- (bool)isExpensive;
- (bool)isFiltered;
- (bool)isFlowDivert;
- (bool)isLinkQualityAbort;
- (bool)isListener;
- (bool)isListenerInterfaceSpecific;
- (bool)isLocal;
- (bool)isPerAppVPN;
- (bool)isRoaming;
- (bool)isViable;
- (long long)maximumDatagramSize;
- (long long)mtu;
- (id)networkAgentsOfType:(Class)arg1;
- (id)overrideDNSSearchDomains;
- (id)overrideDNSServers;
- (id)overrideDNSServersAsStrings;
- (id)parameters;
- (unsigned int)policyID;
- (id)privateDescription;
- (id)proxySettings;
- (long long)reason;
- (id)reasonDescription;
- (id)scopedInterface;
- (unsigned long long)secondsSinceInterfaceChange;
- (bool)shouldProbeConnectivity;
- (long long)status;
- (id)statusAsString;
- (bool)supportsDNS;
- (bool)supportsIPv4;
- (bool)supportsIPv6;
- (bool)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(bool*)arg2;
- (bool)usesInterfaceType:(long long)arg1;
- (bool)usesNetworkAgent:(id)arg1;
- (bool)usesNetworkAgentType:(Class)arg1;

@end