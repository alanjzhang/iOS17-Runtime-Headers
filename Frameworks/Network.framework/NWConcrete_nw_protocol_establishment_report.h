/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWConcrete_nw_protocol_establishment_report : NSObject <OS_nw_protocol_establishment_report> {
    int  client_accurate_ecn_state;
    unsigned long long  handshake_milliseconds;
    unsigned long long  handshake_rtt_milliseconds;
    unsigned int  l4s_enabled;
    NSObject<OS_nw_protocol_definition> * protocol;
    int  server_accurate_ecn_state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
