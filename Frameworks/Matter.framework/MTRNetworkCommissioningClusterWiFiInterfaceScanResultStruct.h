/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct : NSObject <NSCopying> {
    NSData * _bssid;
    NSNumber * _channel;
    NSNumber * _rssi;
    NSNumber * _security;
    NSData * _ssid;
    NSNumber * _wiFiBand;
}

@property (nonatomic, copy) NSData *bssid;
@property (nonatomic, copy) NSNumber *channel;
@property (nonatomic, copy) NSNumber *rssi;
@property (nonatomic, copy) NSNumber *security;
@property (nonatomic, copy) NSData *ssid;
@property (nonatomic, copy) NSNumber *wiFiBand;

// MTRNetworkCommissioningClusterWiFiInterfaceScanResultStruct (null)

- (void).cxx_destruct;
- (id)bssid;
- (id)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)rssi;
- (id)security;
- (void)setBssid:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setRssi:(id)arg1;
- (void)setSecurity:(id)arg1;
- (void)setSsid:(id)arg1;
- (void)setWiFiBand:(id)arg1;
- (id)ssid;
- (id)wiFiBand;

@end