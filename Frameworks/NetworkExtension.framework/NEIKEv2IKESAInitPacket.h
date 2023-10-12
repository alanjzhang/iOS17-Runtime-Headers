/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet {
    NEIKEv2NotifyPayload * _cookie;
    NEIKEv2KeyExchangePayload * _ke;
    NEIKEv2NoncePayload * _nonce;
    NEIKEv2IKESAPayload * _sa;
    NSArray * _vendorIDs;
}

+ (id)copyTypeDescription;
+ (bool)encryptPayloads;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
