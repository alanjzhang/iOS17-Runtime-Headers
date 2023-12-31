/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSDgPTPUnicastUDPv4EtEPort : TSDgPTPFDEtEPort {
    NSNumber * _destinationIPv4Address;
}

@property (nonatomic, readonly, copy) NSNumber *destinationIPv4Address;

+ (id)diagnosticInfoForService:(id)arg1;

- (void).cxx_destruct;
- (id)_destinationAddressString;
- (id)_destinationIPv4Address;
- (id)_sourceAddressString;
- (id)destinationIPv4Address;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (int)portType;
- (id)propertiesForXPC;

@end
